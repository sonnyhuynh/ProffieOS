// son props file for 0,1,2 buttons
// based off sa22c prop file 4.7
// features:
//  - multi-blast by fett263
//  - gesture ignition by ShtokyD
//  - swing ignition by fett263
//  - battle mode by fett263
//  - on-the-fly volume controls by sa22c
//  - fast on by fett263
//  - force push gesture by fett263
//  - thrust gesture by fett263
//  - on demand battery level by fett263
//
// Tightened click timings (sa22c)
// I've shortened the timeout for short and double click detection from 500ms
// to 300ms.  I think it feels more responsive this way but still gives enough
// timeout to ensure all button actions can be achieved consistently
// I've included all button timings so they can be easily tweaked to suit
// individual tastes.
//
////////////////////////////////////////////
//
// #define SON_TWIST_ON
// Turn on - twist while OFF
//
// #define SON_TWIST_OFF
// Turn off - twist while ON
//
// #define SON_SWING_ON
// Toggle swing on feature - shake while OFF
// Turn on - swing while off
//
// #define RESET_COLOR
// resets blade color to original (only for 1+ buttons)
// hold PWR + twist while OFF
//
// #define FETT263_FORCE_PUSH
// To enable gesture controlled Force Push during Battle Mode
// (will use push.wav or force.wav if not present)
//
// #define FETT263_FORCE_PUSH_LENGTH 5
// Allows for adjustment to Push gesture length in millis needed to trigger Force Push
// Recommended range 1 ~ 10, 1 = shortest, easiest to trigger, 10 = longest
//
// #define COLOR_CHANGE_DIRECT
// Bump color change variation up 1
//
// ALL SABERS
// Change color - rotate while in Color change mode
//
// 0 Buttons
//   Turn on/off - twist while OFF/ON
//
//   while OFF
//     Next Preset - clash
//     Battery level - shake
//
//   while ON
//     Enter color change mode - shake
//     Accept color change - clash while in Color change mode
//
// 1+ Buttons
//   while OFF
//     Enter/Exit Volume - triple click hold
//     Battery level - triple click
//     Turn on blade (Muted) - double click and hold
//     Play/Stop Music - double click
//     Turn on blade - short click
//     Volume down - short click and in VOLUME MENU
//     Volume up - long click and release while in VOLUME MENU
//     Next Preset - long click and release
//     Prev Preset - hold and wait (medium)
//     Exit Volume - hold and wait (medium) until sound confirmation
//     Reset Blade Color - hold + twist the hilt
//     "Use the Force" mode - quadruple click and wait (medium)
//
//   while ON
//     Turn off blade - hold and wait until blade is off
//     Set color - hold and wait until sound confirmation
//     Force Effects - double click
//     Lightning Block - double click and hold
//     Melt - hold while stabbing (clash with forward motion, horizontal)
//     "Use the Force" mode - quadruple click and wait (medium)
//
// 1 Button
//   while OFF
//     Battle mode - hold + clash
//
//   while ON
//     Color Change mode - hold + twist (while pointing down)
//     Direct Color Change - triple click and hold
//     Power Save - triple click
//     Blaster deflection - short click
//     Multi-blast mode - hold + swing
//     Lockup - hold + clash while Battle mode OFF
//
// 2 Buttons
//
// POWER
//   while ON
//     Turn off blade - short click
//     Direct Color Change - triple click
//     Power Save - triple click (while pointing up or straight up?)
//
// AUX
//   while OFF
//     Next Preset - short click
//     Volume down - short click while in VOLUME MENU
//     Battle mode - hold + clash
//
//   while ON
//     Blaster deflection - short click
//     Blaster deflection - double click
//     Blaster deflection - triple click
//     Multi-blast mode - hold + swing
//     Lockup - hold + clash
//
// POWER + AUX
//   "Use the Force" mode - hold AUX + click PWR
//   "Use the Force" mode - hold PWR + click AUX
//
// CUSTOM SOUNDS SUPPORTED (add to font to enable):
//
// On Demand Power Save - dim.wav
// On Demand Battery Level - battery.wav
// Fast On (optional) - faston.wav
// Force Push (optional) - push.wav
// Force Blast (optional) - fblst.wav or fblaster.wav
// Force Clash (optional) - fclsh.wav or fclash.wav
// Force Preon (optional) - fpreon.wav
// TODO Force Postoff (optional) - fpstoff.wav
// Force Begin Lock (optional) - fbgnlock.wav
// Force Lock (optional) - flock.wav
// Force End Lock (optional) - fendlock.wav
// Force Ignition (optional) - fout.wav
// Force Quote (optional) - fquote.wav
// Force Mode On (optional) - fbegin.wav
// Force Mode Off (optional) - fend.wav

#ifndef PROPS_SABER_SON_BUTTONS_H
#define PROPS_SABER_SON_BUTTONS_H

#include "prop_base.h"
#include "../sound/hybrid_font.h"

#undef PROP_TYPE
#define PROP_TYPE SaberSonButtons

#ifndef BUTTON_DOUBLE_CLICK_TIMEOUT
#define BUTTON_DOUBLE_CLICK_TIMEOUT 300
#endif

#ifndef BUTTON_SHORT_CLICK_TIMEOUT
#define BUTTON_SHORT_CLICK_TIMEOUT 300
#endif

#ifndef BUTTON_HELD_TIMEOUT
#define BUTTON_HELD_TIMEOUT 300
#endif

#ifndef BUTTON_HELD_MEDIUM_TIMEOUT
#define BUTTON_HELD_MEDIUM_TIMEOUT 1000
#endif

#ifndef BUTTON_HELD_LONG_TIMEOUT
#define BUTTON_HELD_LONG_TIMEOUT 2000
#endif

#ifndef VOLUME_INCREMENT_LEVEL
#define VOLUME_INCREMENT_LEVEL 100
#endif

#ifndef MAX_VOLUME
#define MAX_VOLUME 1000
#endif

#ifndef MOTION_TIMEOUT
#define MOTION_TIMEOUT 60 * 1 * 1000
#endif

#ifndef IGNITION_COOLDOWN
#define IGNITION_COOLDOWN 1500
#endif

#ifndef FETT263_LOCKUP_DELAY
#define FETT263_LOCKUP_DELAY 200
#endif

#ifndef FETT263_FORCE_PUSH_LENGTH
#define FETT263_FORCE_PUSH_LENGTH 5
#endif

EFFECT(dim); // for EFFECT_POWERSAVE
EFFECT(battery); // for EFFECT_BATTERY_LEVEL
EFFECT(faston); // for EFFECT_FAST_ON
EFFECT(push); // for Force Push gesture in Battle Mode
EFFECT(fbegin); // Force mode on
EFFECT(fend); // Force mode off

// The Saber class implements the basic states and actions
// for the saber.
class SaberSonButtons : public PropBase {
public:
  SaberSonButtons() : PropBase() {}
  const char* name() override { return "SaberSonButtons"; }

  void Loop() override {
    PropBase::Loop();
    DetectTwist();
    DetectShake();
    Vec3 mss = fusor.mss();
    if (SaberBase::IsOn()) {
      DetectSwing();
      if (auto_lockup_on_ &&
          !swinging_ &&
          fusor.swing_speed() > 120 &&
          millis() - clash_impact_millis_ > FETT263_LOCKUP_DELAY &&
          SaberBase::Lockup()) {
        SaberBase::DoEndLockup();
        SaberBase::SetLockup(SaberBase::LOCKUP_NONE);
        auto_lockup_on_ = false;
      }
      if (auto_melt_on_ &&
          !swinging_ &&
          fusor.swing_speed() > 60 &&
          millis() - clash_impact_millis_ > FETT263_LOCKUP_DELAY &&
          SaberBase::Lockup()) {
        SaberBase::DoEndLockup();
        SaberBase::SetLockup(SaberBase::LOCKUP_NONE);
        auto_melt_on_ = false;
      }

      // EVENT_PUSH
      if (fabs(mss.x) < 3.0 &&
          mss.y * mss.y + mss.z * mss.z > 70 &&
          fusor.swing_speed() < 30 &&
          fabs(fusor.gyro().x) < 10) {
        if (millis() - push_begin_millis_ > FETT263_FORCE_PUSH_LENGTH) {
          Event(BUTTON_NONE, EVENT_PUSH);
          push_begin_millis_ = millis();
        } 
      } else {
        push_begin_millis_ = millis();
      }

    } else {
      if(swing_on_) {
        // EVENT_SWING - Swing On gesture control to allow fine tuning of speed needed to ignite
        if (millis() - saber_off_time_ < MOTION_TIMEOUT) {
          SaberBase::RequestMotion();
          DetectSwing();
        }

        // EVENT_THRUST
        if (mss.y * mss.y + mss.z * mss.z < 16.0 &&
            mss.x > 14  &&
            fusor.swing_speed() < 150) {
          if (millis() - thrust_begin_millis_ > 15) {
            Event(BUTTON_NONE, EVENT_THRUST);
            thrust_begin_millis_ = millis();
          } 
        } else {
          thrust_begin_millis_ = millis();
        }
      }
    }

  }

  // Fast On Gesture Ignition
  virtual void FastOn() {
    if (IsOn()) return;
    if (current_style() && current_style()->NoOnOff())
      return;
#ifdef BLADE_ID_POWER_ON
    FindBladeAgain();
#endif
    activated_ = millis();
    STDOUT.println("Ignition.");
    MountSDCard();
    EnableAmplifier();
    SaberBase::RequestMotion();
    // Avoid clashes a little bit while turning on.
    // It might be a "clicky" power button...
    IgnoreClash(500);
    SaberBase::TurnOn();
    // Optional effects
    SaberBase::DoEffect(EFFECT_FAST_ON, 0);
  }

  void SayBatteryVoltage() {
    talkie.SayDigit((int)floorf(battery_monitor.battery()));
    talkie.Say(spPOINT);
    talkie.SayDigit(((int)floorf(battery_monitor.battery() * 10)) % 10);
    talkie.SayDigit(((int)floorf(battery_monitor.battery() * 100)) % 10);
    talkie.Say(spVOLTS);
  }

  void SayBatteryPercent() {
    talkie.SayNumber((int)floorf(battery_monitor.battery_percent()));
    talkie.Say(spPERCENT);
  }

  void ExitVolumeMenu() {
      mode_volume_ = false;
      talkie.Say(spEXIT);
      talkie.SayNumber(dynamic_mixer.get_volume() / 100);
      STDOUT.println("Exit Volume Menu");
  }

  void ChangeVolume(bool up) {
    if (up) {
      STDOUT.println("Volume up");
      if (dynamic_mixer.get_volume() < MAX_VOLUME) {
        dynamic_mixer.set_volume(dynamic_mixer.get_volume() + VOLUME_INCREMENT_LEVEL);
        STDOUT.print("Current Volume: ");
        STDOUT.println(dynamic_mixer.get_volume());
        talkie.SayNumber(dynamic_mixer.get_volume() / 100);
      }
      else {
        beeper.Beep(0.5, 3000);
      }
    } else {
      STDOUT.println("Volume Down");
      if (dynamic_mixer.get_volume() > 100) {
        dynamic_mixer.set_volume(dynamic_mixer.get_volume() - VOLUME_INCREMENT_LEVEL);
        STDOUT.print("Current Volume: ");
        STDOUT.println(dynamic_mixer.get_volume());
        talkie.SayNumber(dynamic_mixer.get_volume() / 100);
      }
      else{
        beeper.Beep(0.5, 1000);
      }
    }
  }

  void OnWithCooldown() {
    if (!mode_volume_) {
      if (millis() - saber_off_time_ > IGNITION_COOLDOWN) {
        FastOn();
      }
    }
  }

  void OffOrToggleColorChange() {
    if (!SaberBase::Lockup()) {
      if (SaberBase::GetColorChangeMode() != SaberBase::COLOR_CHANGE_MODE_NONE) {
        // Just exit color change mode.
        // Don't turn saber off.
        ToggleColorChangeMode();
        return;
      }
      // Delay twist events to prevent false trigger from over twisting
      if (!swinging_ && (millis() - last_twist_ > 3000)) {
        Off();
        last_twist_ = millis();
        saber_off_time_ = millis();
      }
    }
    swing_blast_ = false;
  }

  void ToggleUseTheForce() {
    hybrid_font.ToggleUseTheForce();
    if (hybrid_font.UsingTheForce()) {
      if (SFX_fbegin) {
        hybrid_font.PlayCommon(&SFX_fbegin);
      } else {
        beeper.Beep(0.5, 5000);
      }
    } else {
      if (SFX_fend) {
        hybrid_font.PlayCommon(&SFX_fend);
      } else {
        beeper.Beep(0.5, 3000);
      }
    }
  }

#ifdef DYNAMIC_BLADE_DIMMING
  void ToggleBrightness() {
    if (SaberBase::GetCurrentDimming() != 4096) {
      SaberBase::SetDimming(4096); // 25%
    } else {
      SaberBase::SetDimming(16384); // 100%
    }

    if (SFX_dim) {
      hybrid_font.PlayCommon(&SFX_dim);
    } else {
      beeper.Beep(0.5, 3000);
    }
  }
#endif

  bool Event2(enum BUTTON button, EVENT event, uint32_t modifiers) override {
    switch (EVENTID(button, event, modifiers)) {
      case EVENTID(BUTTON_POWER, EVENT_PRESSED, MODE_ON):
      case EVENTID(BUTTON_AUX, EVENT_PRESSED, MODE_ON):
      case EVENTID(BUTTON_AUX2, EVENT_PRESSED, MODE_ON):
        if (accel_.x < -0.15) {
          pointing_down_ = true;
        } else {
          pointing_down_ = false;
        }
      return true;



// gesture control

#ifdef SON_TWIST_ON
  case EVENTID(BUTTON_NONE, EVENT_TWIST, MODE_OFF):
    // Delay twist events to prevent false trigger from over twisting
    if (millis() - last_twist_ > 3000) {
      OnWithCooldown();
      last_twist_ = millis();
    }
    return true;
#endif
    
#ifdef SON_TWIST_OFF
  case EVENTID(BUTTON_NONE, EVENT_TWIST, MODE_ON):
    // Delay twist events to prevent false trigger from over twisting
    if (!swinging_ && (millis() - last_twist_ > 3000)) {
      Off();
      last_twist_ = millis();
      saber_off_time_ = millis();
    }
    swing_blast_ = false;
    return true;
#endif

#ifdef SON_SWING_ON
  case EVENTID(BUTTON_NONE, EVENT_SHAKE, MODE_OFF):
    swing_on_ = !swing_on_;
    if (swing_on_) {
      talkie.Say(spON);
    } else {
      talkie.Say(spOFF);
    }
    return true;
  case EVENTID(BUTTON_NONE, EVENT_SWING, MODE_OFF):
  case EVENTID(BUTTON_NONE, EVENT_THRUST, MODE_OFF):
    // Due to motion chip startup on boot creating false ignition we delay Swing On at boot for 3000ms
    if (swing_on_ && millis() > 3000) {
      OnWithCooldown();
    }
    return true;
#endif

#ifdef FETT263_FORCE_PUSH
      case EVENTID(BUTTON_NONE, EVENT_PUSH, MODE_ON):
        if (battle_mode_ &&
            millis() - last_push_ > 2000) {
          if (SFX_push) {
            hybrid_font.PlayCommon(&SFX_push);
          } else {
            hybrid_font.DoEffect(EFFECT_FORCE, 0);
          }
          last_push_ = millis();
        }
        return true;
#endif


// 0 button start
#if NUM_BUTTONS == 0

//// while OFF ////

  case EVENTID(BUTTON_NONE, EVENT_CLASH, MODE_OFF):
    next_preset();
    return true;

  // Battery level
  case EVENTID(BUTTON_NONE, EVENT_SHAKE, MODE_OFF):
    SaberBase::DoEffect(EFFECT_BATTERY_LEVEL, 0);
    return true;

//// while ON ////

// Color change feature for 0 buttons
   // Enter color change mode
  case EVENTID(BUTTON_NONE, EVENT_SHAKE, MODE_ON):
    if (SaberBase::GetColorChangeMode() == SaberBase::COLOR_CHANGE_MODE_NONE) {
      ToggleColorChangeMode();
    }
    return true;

  // Exit color change mode + Auto Lockup Mode
  case EVENTID(BUTTON_NONE, EVENT_CLASH, MODE_ON):
    if (SaberBase::GetColorChangeMode() != SaberBase::COLOR_CHANGE_MODE_NONE) {
      ToggleColorChangeMode();
    }
    else {
      if (!battle_mode_) {
        SaberBase::DoClash();
      } else {
        clash_impact_millis_ = millis();
        swing_blast_ = false;
        if (swinging_) return false;
        SaberBase::SetLockup(SaberBase::LOCKUP_NORMAL);
        auto_lockup_on_ = true;
        SaberBase::DoBeginLockup();
      }
    }
    return true;

#endif

// 0 button end

// Common 1+ buttons start

#if NUM_BUTTONS > 0

//// while OFF ////

  // Enter Volume MENU
  case EVENTID(BUTTON_POWER, EVENT_THIRD_HELD_MEDIUM, MODE_OFF):
    if (!mode_volume_) {
      mode_volume_ = true;
      talkie.Say(spCURRENT);
      talkie.SayNumber(dynamic_mixer.get_volume() / 100);
      STDOUT.println("Enter Volume Menu");
    } else {
      ExitVolumeMenu();
    }
    return true;

  // Battery level
  case EVENTID(BUTTON_POWER, EVENT_THIRD_SAVED_CLICK_SHORT, MODE_OFF):
    SaberBase::DoEffect(EFFECT_BATTERY_LEVEL, 0);
    return true;

  // Activate Muted
  case EVENTID(BUTTON_POWER, EVENT_SECOND_HELD, MODE_OFF):
    if (SetMute(true)) {
      unmute_on_deactivation_ = true;
      On();
    }
    return true;

  case EVENTID(BUTTON_POWER, EVENT_SECOND_SAVED_CLICK_SHORT, MODE_OFF):
    StartOrStopTrack();
    return true;

  // Saber ON AND Volume Down
  case EVENTID(BUTTON_POWER, EVENT_FIRST_SAVED_CLICK_SHORT, MODE_OFF):
    if (!mode_volume_) {
      On();
    } else {
      ChangeVolume(false);
    }
    return true;

  // Next Preset AND Volume Up
  case EVENTID(BUTTON_POWER, EVENT_FIRST_CLICK_LONG, MODE_OFF):
    if (!mode_volume_) {
      next_preset();
    } else {
      ChangeVolume(true);
    }
    return true;

   // Previous Preset AND Exit Volume MENU (alternate)
  case EVENTID(BUTTON_POWER, EVENT_FIRST_HELD_MEDIUM, MODE_OFF):
    if (!mode_volume_) {
      previous_preset();
    } else {
      ExitVolumeMenu();
    }
    return true;
    //
// Reset Blade Color
#ifdef RESET_COLOR
  case EVENTID(BUTTON_NONE, EVENT_TWIST, MODE_OFF | BUTTON_POWER):
    PropBase::ResetBladeColor();
    return true;
#endif


//// WHILE ON ////

  // Turn Blade OFF
  case EVENTID(BUTTON_POWER, EVENT_FIRST_HELD_MEDIUM, MODE_ON):
    OffOrToggleColorChange();
    return true;

  // Force effect
  case EVENTID(BUTTON_POWER, EVENT_SECOND_SAVED_CLICK_SHORT, MODE_ON):
    SaberBase::DoForce();
    return true;

  // Lightning Block
  case EVENTID(BUTTON_POWER, EVENT_SECOND_HELD, MODE_ON):
    SaberBase::SetLockup(SaberBase::LOCKUP_LIGHTNING_BLOCK);
    swing_blast_ = false;
    SaberBase::DoBeginLockup();
    return true;

  // Melt
  case EVENTID(BUTTON_NONE, EVENT_STAB, MODE_ON | BUTTON_POWER):
    if (!SaberBase::Lockup()) {
      if (fusor.angle1() < - M_PI / 4) {
        SaberBase::SetLockup(SaberBase::LOCKUP_DRAG);
      } else {
        SaberBase::SetLockup(SaberBase::LOCKUP_MELT);
      }
      swing_blast_ = false;
      SaberBase::DoBeginLockup();
      return true;
    }
    break;

#ifdef FETT263_BATTLE_MODE
  // Auto Lockup Mode
  case EVENTID(BUTTON_NONE, EVENT_CLASH, MODE_ON):
    if (!battle_mode_) {
      SaberBase::DoClash();
    } else {
      clash_impact_millis_ = millis();
      swing_blast_ = false;
      if (swinging_) return false;
      SaberBase::SetLockup(SaberBase::LOCKUP_NORMAL);
      auto_lockup_on_ = true;
      SaberBase::DoBeginLockup();
    }
    return true;
#endif

  // Use the Force mode
  case EVENTID(BUTTON_POWER, EVENT_FOURTH_HELD_MEDIUM, MODE_OFF):
  case EVENTID(BUTTON_POWER, EVENT_FOURTH_HELD_MEDIUM, MODE_ON):
    ToggleUseTheForce();
    return true;

#endif

// common buttons end

// 1 button start
//
#if NUM_BUTTONS == 1

#ifdef FETT263_BATTLE_MODE
   case EVENTID(BUTTON_NONE, EVENT_CLASH, MODE_OFF | BUTTON_POWER):
     battle_mode_ = !battle_mode_;
     if (battle_mode_) {
       talkie.Say(spON);
     } else {
       talkie.Say(spOFF);
     }
     return true;
#endif

  // Color change mode
  case EVENTID(BUTTON_NONE, EVENT_TWIST, MODE_ON | BUTTON_POWER):
    ToggleColorChangeMode();
    return true;

  // direct color change
#ifdef COLOR_CHANGE_DIRECT
  case EVENTID(BUTTON_POWER, EVENT_THIRD_HELD, MODE_ON):
    DirectColorChange();
    return true;
#endif

#ifdef DYNAMIC_BLADE_DIMMING
  // power save
  case EVENTID(BUTTON_POWER, EVENT_THIRD_SAVED_CLICK_SHORT, MODE_ON):
    ToggleBrightness();
    return true;
#endif

  // Blaster Deflection
  case EVENTID(BUTTON_POWER, EVENT_FIRST_SAVED_CLICK_SHORT, MODE_ON):
    swing_blast_ = false;
    SaberBase::DoBlast();
    return true;

  // Multi-Blaster Deflection mode
  case EVENTID(BUTTON_NONE, EVENT_SWING, MODE_ON | BUTTON_POWER):
    swing_blast_ = !swing_blast_;
    hybrid_font.SB_Effect(EFFECT_BLAST, 0);
    return true;

  case EVENTID(BUTTON_NONE, EVENT_SWING, MODE_ON):
    if (swing_blast_) {
      SaberBase::DoBlast();
    }
    return true;

  // Lockup
  case EVENTID(BUTTON_NONE, EVENT_CLASH, MODE_ON | BUTTON_POWER):
    if (!battle_mode_ && !SaberBase::Lockup()) {
      SaberBase::SetLockup(SaberBase::LOCKUP_NORMAL);
      swing_blast_ = false;
      SaberBase::DoBeginLockup();
      return true;
    }
    break;

#endif

// 1 button end

// 2+ button start
#if NUM_BUTTONS > 1
  case EVENTID(BUTTON_POWER, EVENT_FIRST_SAVED_CLICK_SHORT, MODE_ON):
    OffOrToggleColorChange();
    return true;

  // Exit Volume Menu
  case EVENTID(BUTTON_POWER, EVENT_SECOND_HELD_LONG, MODE_OFF):
    if (mode_volume_) {
      ExitVolumeMenu();
    }
    return true;

  // Next Preset and Volume Down
  case EVENTID(BUTTON_AUX, EVENT_FIRST_CLICK_SHORT, MODE_OFF):
    if (!mode_volume_) {
      next_preset();
    } else {
      ChangeVolume(false);
    }
    return true;

#ifdef FETT263_BATTLE_MODE
   case EVENTID(BUTTON_NONE, EVENT_CLASH, MODE_OFF | BUTTON_AUX):
     battle_mode_ = !battle_mode_;
     if (battle_mode_) {
       talkie.Say(spON);
     } else {
       talkie.Say(spOFF);
     }
     return true;
#endif

// Color Change
  case EVENTID(BUTTON_NONE, EVENT_TWIST, MODE_ON | BUTTON_POWER):
    ToggleColorChangeMode();
    return true;

// direct color change and power save
  case EVENTID(BUTTON_POWER, EVENT_THIRD_SAVED_CLICK_SHORT, MODE_ON):
#ifdef COLOR_CHANGE_DIRECT
    if (fusor.angle1() >  M_PI / 3) {
      #ifdef DYNAMIC_BLADE_DIMMING
      ToggleBrightness();
      #endif
    } else {
      DirectColorChange();
    }
#else
    #ifdef DYNAMIC_BLADE_DIMMING
    ToggleBrightness();
    #endif
#endif
    return true;

  // Blaster Deflection
  case EVENTID(BUTTON_AUX, EVENT_FIRST_SAVED_CLICK_SHORT, MODE_ON):
  case EVENTID(BUTTON_AUX, EVENT_SECOND_SAVED_CLICK_SHORT, MODE_ON):
  case EVENTID(BUTTON_AUX, EVENT_THIRD_CLICK_SHORT, MODE_ON): 
    swing_blast_ = false;
    SaberBase::DoBlast();
    return true;

  // Multi-Blaster Deflection mode
  case EVENTID(BUTTON_NONE, EVENT_SWING, MODE_ON | BUTTON_AUX):
    swing_blast_ = !swing_blast_;
    hybrid_font.SB_Effect(EFFECT_BLAST, 0);
    return true;

  case EVENTID(BUTTON_NONE, EVENT_SWING, MODE_ON):
    if (swing_blast_) {
      SaberBase::DoBlast();
    }
    return true;

  // Lockup
  case EVENTID(BUTTON_NONE, EVENT_CLASH, MODE_ON | BUTTON_AUX):
    if (!battle_mode_ && !SaberBase::Lockup()) {
      SaberBase::SetLockup(SaberBase::LOCKUP_NORMAL);
      swing_blast_ = false;
      SaberBase::DoBeginLockup();
      return true;
    }
    break;

  // Use the Force mode
  case EVENTID(BUTTON_POWER, EVENT_CLICK_SHORT, MODE_ON | BUTTON_AUX):
  case EVENTID(BUTTON_POWER, EVENT_CLICK_SHORT, MODE_OFF | BUTTON_AUX):
  case EVENTID(BUTTON_AUX, EVENT_CLICK_SHORT, MODE_ON | BUTTON_POWER):
  case EVENTID(BUTTON_AUX, EVENT_CLICK_SHORT, MODE_OFF | BUTTON_POWER):
    ToggleUseTheForce();
    return true;

#endif
// 2+ button end

  case EVENTID(BUTTON_POWER, EVENT_PRESSED, MODE_OFF):
  case EVENTID(BUTTON_AUX, EVENT_PRESSED, MODE_OFF):
    SaberBase::RequestMotion();
    return true;

#ifdef BLADE_DETECT_PIN
  case EVENTID(BUTTON_BLADE_DETECT, EVENT_LATCH_ON, MODE_ANY_BUTTON | MODE_ON):
  case EVENTID(BUTTON_BLADE_DETECT, EVENT_LATCH_ON, MODE_ANY_BUTTON | MODE_OFF):
    // Might need to do something cleaner, but let's try this for now.
    blade_detected_ = true;
    FindBladeAgain();
    SaberBase::DoBladeDetect(true);
    return true;

  case EVENTID(BUTTON_BLADE_DETECT, EVENT_LATCH_OFF, MODE_ANY_BUTTON | MODE_ON):
  case EVENTID(BUTTON_BLADE_DETECT, EVENT_LATCH_OFF, MODE_ANY_BUTTON | MODE_OFF):
    // Might need to do something cleaner, but let's try this for now.
    blade_detected_ = false;
    FindBladeAgain();
    SaberBase::DoBladeDetect(false);
    return true;
#endif


#ifdef FETT263_BATTLE_MODE
  case EVENTID(BUTTON_NONE, EVENT_STAB, MODE_ON):
    if (!battle_mode_) return false;
    clash_impact_millis_ = millis();
    swing_blast_ = false;
    if (!swinging_) {
      if (fusor.angle1() < - M_PI / 4) {
        SaberBase::SetLockup(SaberBase::LOCKUP_DRAG);
      } else {
        SaberBase::SetLockup(SaberBase::LOCKUP_MELT);
      }
      auto_melt_on_ = true;
      SaberBase::DoBeginLockup();
    }
    return true;
#endif

  // Events that needs to be handled regardless of what other buttons
  // are pressed.
    case EVENTID(BUTTON_POWER, EVENT_RELEASED, MODE_ANY_BUTTON | MODE_ON):
    case EVENTID(BUTTON_AUX, EVENT_RELEASED, MODE_ANY_BUTTON | MODE_ON):
    case EVENTID(BUTTON_AUX2, EVENT_RELEASED, MODE_ANY_BUTTON | MODE_ON):
      if (SaberBase::Lockup()) {
        SaberBase::DoEndLockup();
        SaberBase::SetLockup(SaberBase::LOCKUP_NONE);
        return true;
      }
    }
    return false;
  }

  void SB_Effect(EffectType effect, float location) override {
    switch (effect) {
      case EFFECT_BATTERY_LEVEL:
        if (SFX_battery) {
          hybrid_font.PlayCommon(&SFX_battery);
        } else {
          //SayBatteryVoltage();
          SayBatteryPercent();
        }
        return;
      case EFFECT_FAST_ON:
        if (SFX_faston) {
          hybrid_font.PlayCommon(&SFX_faston);
        }
        return;
    }
  }

private:
  bool pointing_down_ = false;
  bool mode_volume_ = false;
  bool swing_blast_ = false;
  bool swing_on_ = false;
  bool auto_lockup_on_ = false;
  bool auto_melt_on_ = false;
  bool battle_mode_ = true;
  uint32_t thrust_begin_millis_ = millis();
  uint32_t push_begin_millis_ = millis();
  uint32_t clash_impact_millis_ = millis();
  uint32_t last_twist_ = millis();
  uint32_t last_push_ = millis();
  uint32_t saber_off_time_ = millis();
};

#endif
