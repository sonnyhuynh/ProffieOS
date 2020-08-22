// sa22c props file, includes 1,2 and 3 button modes.  Incorporates multi-blast
// by fett263, gesture ignition by ShtokyD (modified by son), swing ignition by
// fett263 (modified by son) on-the-fly volume controls and full access to all 
// features with 1,2 or 3 button sabers
//
// New #define SA22C_NO_LOCKUP_HOLD
// reverts to lockup being triggered only by clash + aux in 2-button mode
// Also sets multi-blast to trigger while holding aux and swinging, rather than
// double click and hold
//
// #define SON_TWIST_ON
// turn on saber with twist (only for 1+ buttons)
//
// #define SON_TWIST_OFF
// turn off saber with twist (only for 1+ buttons)
//
// #define SON_SWING_ON
// turn on saber with swing (only for 1+ buttons)
// Toggle swing on/off - shake while off
//
// Tightened click timings
// I've shortened the timeout for short and double click detection from 500ms
// to 300ms.  I think it feels more responsive this way but still gives enough
// timeout to ensure all button actions can be achieved consistently
// I've included all button timings so they can be easily tweaked to suit
// individual tastes.
//
// Button configs:
//
// 0 Buttons:
// Turn on/off blade - twist
// Next Preset - clash while OFF
// Check battery - shake while OFF
// Color change mode - shake while ON
// Accept color change - clash while in Color change mode
//
// 1 Button:
// Activate Muted - double click and hold while OFF
// Activate - short click while OFF
// Play/Stop Music - double click while OFF
// Turn off blade - hold and wait till blade is off while ON
// Next Preset - hold and release while OFF
// Prev Preset - hold and wait while OFF
// Lockup - hold + hit clash while ON
// Stab - thrust forward clash while ON
// Lightning Block - double click and hold while ON
// Melt - hold + thust forward clash while ON
// Drag - hold + hit clash while ON pointing the blade tip down
// Blaster Blocks - short click/double click/triple click while on
// Multi-Blast - hold while swinging for one second and release
//               to trigger blaster block, swing saber while in multi-blast mode
//               to exit, hold while swinging for one second and release
// Force Effects - hold + twist the hilt while ON (while pointing up)
// Color Change mode - hold + twist the hilt while ON (pointing down)
// Enter/Exit Volume - triple click hold while OFF
// Exit Volume (alternative) - hold and wait until menu exit
// Volume UP - hold and release while in Volume Menu
// Volume DOWN - click while in Volume Menu
// Exit Volume Menu - Menu hold + clash while OFF
// Battery Level - triple click while OFF
//
//
// 2 Button:
// POWER
// Activate Muted - double click and hold while OFF
// Activate - short click while OFF
// Play/Stop Music - double click while OFF
// Turn off blade - hold and wait till blade is off while ON
// Force Effects - double click while ON
// Enter/Exit Volume - triple click hold while OFF
// Exit Volume (alternative) - hold power and wait
// Volume UP - short click while OFF and in VOLUME MENU
// Prev Preset - hold and wait while OFF
// Color Change mode - hold + toggle AUX while ON
// Lightning Block - double click and hold while ON
// Melt - hold while stabbing (clash with forward motion, horizontal)
// Battery Level - triple click while OFF
//
// AUX
// Blaster blocks - short click/double click/triple click while ON
// Multi-Blast - double-click and hold for half a second
//               to trigger blaster block, swing saber while in multi-blast mode
//               to exit, double-click and hold for half a second
// Next Preset - short click while OFF
// Lockup - hold while ON
// Drag - hold while ON pointing the blade tip down
// Volume down - short click while OFF and in VOLUME MENU
//
//
//
// 3 Button: Same as two button except for the following
//
// AUX2
// Lightning Block - hold while ON
// Previous Preset - short click while OFF


#ifndef PROPS_SABER_SA22C_BUTTONS_H
#define PROPS_SABER_SA22C_BUTTONS_H

#include "prop_base.h"
#include "../sound/hybrid_font.h"

#undef PROP_TYPE
#define PROP_TYPE SaberSA22CButtons

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
#define MOTION_TIMEOUT 60 * 5 * 1000
#endif

#ifndef IGNITION_COOLDOWN
#define IGNITION_COOLDOWN 1500
#endif

// The Saber class implements the basic states and actions
// for the saber.
class SaberSA22CButtons : public PropBase {
public:
  SaberSA22CButtons() : PropBase() {}
  const char* name() override { return "SaberSA22CButtons"; }

  // EVENT_SWING
  bool swinging_ = false;
  void Loop() override {
    PropBase::Loop();
#ifdef SON_SWING_ON
    if(swing_on_ && !SaberBase::IsOn()) {
      if (millis() - saber_off_time_ < MOTION_TIMEOUT) {
        SaberBase::RequestMotion();
        DoLoop();
      }
    }
#endif
    DoLoop();
  }

  void DoLoop() {
    if (!swinging_ && fusor.swing_speed() > 250) {
      swinging_ = true;
      Event(BUTTON_NONE, EVENT_SWING);
    }
    if (swinging_ && fusor.swing_speed() < 100) {
      swinging_ = false;
    }
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
        On();
      }
    }
  }

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

#if NUM_BUTTONS != 0
#ifdef SON_TWIST_ON
  case EVENTID(BUTTON_NONE, EVENT_TWIST, MODE_OFF):
    OnWithCooldown();
    return true;
#endif

#ifdef SON_SWING_ON
  case EVENTID(BUTTON_NONE, EVENT_SWING, MODE_OFF):
    if (swing_on_ && millis() > 3000) {
      OnWithCooldown();
    }
    return true;
  case EVENTID(BUTTON_NONE, EVENT_SHAKE, MODE_OFF):
    swing_on_ = !swing_on_;
    if (swing_on_) {
      talkie.Say(spON);
    } else {
      talkie.Say(spOFF);
    }
    return true;
#endif
#endif

// Saber ON AND Volume Down
#if NUM_BUTTONS == 0
  case EVENTID(BUTTON_NONE, EVENT_TWIST, MODE_OFF):
#else
  case EVENTID(BUTTON_POWER, EVENT_FIRST_SAVED_CLICK_SHORT, MODE_OFF):
#endif
    if (!mode_volume_) {
      On();
    } else {
      ChangeVolume(false);
    }
    return true;

#if NUM_BUTTONS == 0
  case EVENTID(BUTTON_NONE, EVENT_CLASH, MODE_OFF):
    next_preset();
    return true;
#else
  // 1+ buttons: Next Preset AND Volume Up
  case EVENTID(BUTTON_POWER, EVENT_FIRST_CLICK_LONG, MODE_OFF):
    if (!mode_volume_) {
      next_preset();
    } else {
      ChangeVolume(true);
    }
    return true;
#endif

  // all buttons
  case EVENTID(BUTTON_POWER, EVENT_SECOND_SAVED_CLICK_SHORT, MODE_OFF):
    StartOrStopTrack();
    return true;

  // 2 and 3 button: Next Preset and Volume Down
  case EVENTID(BUTTON_AUX, EVENT_FIRST_CLICK_SHORT, MODE_OFF):
    if (!mode_volume_) {
      next_preset();
    } else {
      ChangeVolume(false);
    }
    return true;

#if NUM_BUTTONS == 3
  // 3 button: Previous Preset
  case EVENTID(BUTTON_AUX2, EVENT_FIRST_CLICK_SHORT, MODE_OFF):
#else
   // 1 and 2 button: Previous Preset
  case EVENTID(BUTTON_POWER, EVENT_FIRST_HELD_MEDIUM, MODE_OFF):
#endif
    if (!mode_volume_) {
      previous_preset();
    }
    return true;

// Activate Muted
  case EVENTID(BUTTON_POWER, EVENT_SECOND_HELD, MODE_OFF):
    if (SetMute(true)) {
      unmute_on_deactivation_ = true;
      On();
    }
    return true;

// Turn Blade OFF
#if NUM_BUTTONS == 0
  case EVENTID(BUTTON_NONE, EVENT_TWIST, MODE_ON):
    if (!swinging_) {
      Off();
      saber_off_time_ = millis();
    }
    swing_blast_ = false;
    return true;
#else

#ifdef SON_TWIST_OFF
  case EVENTID(BUTTON_NONE, EVENT_TWIST, MODE_ON):
#endif
  case EVENTID(BUTTON_POWER, EVENT_FIRST_HELD_MEDIUM, MODE_ON):
    if (!SaberBase::Lockup()) {
#ifndef DISABLE_COLOR_CHANGE
      if (SaberBase::GetColorChangeMode() != SaberBase::COLOR_CHANGE_MODE_NONE) {
        // Just exit color change mode.
        // Don't turn saber off.
        ToggleColorChangeMode();
        return true;
      }
#endif
      if (!swinging_) {
        Off();
        saber_off_time_ = millis();
      }
    }
    swing_blast_ = false;
    return true;
#endif

// 0 button Color Change
#if NUM_BUTTONS == 0
#ifndef DISABLE_COLOR_CHANGE
  // Exit color change mode.
  case EVENTID(BUTTON_NONE, EVENT_CLASH, MODE_ON):
    if (SaberBase::GetColorChangeMode() != SaberBase::COLOR_CHANGE_MODE_NONE) {
      ToggleColorChangeMode();
    }
    else {
      SaberBase::DoClash();
    }
    return true;
  // Enter color change mode
  case EVENTID(BUTTON_NONE, EVENT_SHAKE, MODE_ON):
    if (SaberBase::GetColorChangeMode() == SaberBase::COLOR_CHANGE_MODE_NONE) {
      ToggleColorChangeMode();
    }
    return true;
#endif
#endif

// 1 button Force and Color Change mode
#if NUM_BUTTONS == 1
  case EVENTID(BUTTON_NONE, EVENT_TWIST, MODE_ON | BUTTON_POWER):
#ifndef DISABLE_COLOR_CHANGE
    if (accel_.x < -0.15) {
      ToggleColorChangeMode();
    } else {
      SaberBase::DoForce();
    }
#else
    SaberBase::DoForce();
#endif
    return true;
#endif

#if NUM_BUTTONS > 1
  // 2 and 3 button Force effect
  case EVENTID(BUTTON_POWER, EVENT_SECOND_CLICK_SHORT, MODE_ON):
    SaberBase::DoForce();
    return true;
  // 2 and 3 button color change
#ifndef DISABLE_COLOR_CHANGE
  case EVENTID(BUTTON_NONE, EVENT_TWIST, MODE_ON | BUTTON_POWER):
    ToggleColorChangeMode();
    return true;
#endif
#endif

// Blaster Deflection
#if NUM_BUTTONS == 1
  // 1 button
  case EVENTID(BUTTON_POWER, EVENT_FIRST_SAVED_CLICK_SHORT, MODE_ON):
  case EVENTID(BUTTON_POWER, EVENT_SECOND_CLICK_SHORT, MODE_ON):
  case EVENTID(BUTTON_POWER, EVENT_THIRD_CLICK_SHORT, MODE_ON):
#else
  // 2 and 3 button
  case EVENTID(BUTTON_AUX, EVENT_FIRST_SAVED_CLICK_SHORT, MODE_ON):
  case EVENTID(BUTTON_AUX, EVENT_SECOND_SAVED_CLICK_SHORT, MODE_ON):
  case EVENTID(BUTTON_AUX, EVENT_THIRD_CLICK_SHORT, MODE_ON): 
#endif
    swing_blast_ = false;
    SaberBase::DoBlast();
    return true;

// Multi-Blaster Deflection mode
#if NUM_BUTTONS == 1
  // 1 button
  case EVENTID(BUTTON_NONE, EVENT_SWING, MODE_ON | BUTTON_POWER):
#else
  // 2 and 3 button
#ifndef SA22C_NO_LOCKUP_HOLD
  case EVENTID(BUTTON_AUX, EVENT_SECOND_HELD, MODE_ON):
#else
  // in SA22C_NO_LOCKUP_HOLD mode, multi-blaster is triggered by holding aux
  // while swinging
  case EVENTID(BUTTON_NONE, EVENT_SWING, MODE_ON | BUTTON_AUX):
#endif
#endif
    if (!swing_blast_) {
      swing_blast_ = true;
      hybrid_font.SB_Blast();
    } else {
      swing_blast_ = false;
      hybrid_font.SB_Blast();
    }
    return true;

  case EVENTID(BUTTON_NONE, EVENT_SWING, MODE_ON):
    if (swing_blast_) {
      SaberBase::DoBlast();
    }
    return true;

// Lockup
#if NUM_BUTTONS == 1
  // 1 button lockup
  case EVENTID(BUTTON_NONE, EVENT_CLASH, MODE_ON | BUTTON_POWER):
#else
#ifndef SA22C_NO_LOCKUP_HOLD
  // 2 and 3 button lockup
  case EVENTID(BUTTON_AUX, EVENT_FIRST_HELD, MODE_ON):
#else
  case EVENTID(BUTTON_NONE, EVENT_CLASH, MODE_ON | BUTTON_AUX):
#endif
#endif
    if (!SaberBase::Lockup()) {
      if (pointing_down_) {
        SaberBase::SetLockup(SaberBase::LOCKUP_DRAG);
      } else {
        SaberBase::SetLockup(SaberBase::LOCKUP_NORMAL);
      }
      swing_blast_ = false;
      SaberBase::DoBeginLockup();
      return true;
    }
    break;

// Lightning Block
#if NUM_BUTTONS < 3
  // 1 and 2 button
  case EVENTID(BUTTON_POWER, EVENT_SECOND_HELD, MODE_ON):
#else
  // 3 button
  case EVENTID(BUTTON_AUX2, EVENT_FIRST_HELD, MODE_ON):
#endif
    SaberBase::SetLockup(SaberBase::LOCKUP_LIGHTNING_BLOCK);
    swing_blast_ = false;
    SaberBase::DoBeginLockup();
    return true;

// Melt
  case EVENTID(BUTTON_NONE, EVENT_STAB, MODE_ON | BUTTON_POWER):
    if (!SaberBase::Lockup()) {
      SaberBase::SetLockup(SaberBase::LOCKUP_MELT);
      swing_blast_ = false;
      SaberBase::DoBeginLockup();
      return true;
    }
    break;


  case EVENTID(BUTTON_POWER, EVENT_PRESSED, MODE_OFF):
  case EVENTID(BUTTON_AUX, EVENT_PRESSED, MODE_OFF):
  case EVENTID(BUTTON_AUX2, EVENT_PRESSED, MODE_OFF):
    SaberBase::RequestMotion();
    return true;

// Enter Volume MENU
  // all buttons
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

// Exit Volume MENU (alternate)
#if NUM_BUTTONS >= 1
  case EVENTID(BUTTON_POWER, EVENT_FIRST_HELD_LONG, MODE_OFF):
    if (mode_volume_) {
      ExitVolumeMenu();
    }
    return true;
#endif

// Battery level
#if NUM_BUTTONS == 0
  case EVENTID(BUTTON_NONE, EVENT_SHAKE, MODE_OFF):
#else
  // 1 button
  case EVENTID(BUTTON_POWER, EVENT_THIRD_SAVED_CLICK_SHORT, MODE_OFF):
#endif
    //SayBatteryVoltage();
    SayBatteryPercent();
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
private:
  bool pointing_down_ = false;
  bool mode_volume_ = false;
  bool swing_blast_ = false;
  uint32_t saber_off_time_ = millis();
#ifdef SON_SWING_ON
  bool swing_on_ = false;
#endif
};

#endif
