// pikachu style
StyleAllocator pikachuStyle =
StylePtr<Layers<
  StyleFire<Yellow,Blue,0,3,FireConfig<0,2000,5>,FireConfig<0,2000,5>,FireConfig<0,2000,5>,FireConfig<0,2000,5>>,
  TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,
  ResponsiveLockupL<Strobe<Blue,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,
  ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  ResponsiveStabL<Blue>,
  EffectSequence<EFFECT_BLAST,
    ResponsiveBlastL<Blue,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,
    LocalizedClashL<Blue,80,30,EFFECT_BLAST>,
    ResponsiveBlastWaveL<Blue,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>,
    BlastL<Blue,200,200>,
    ResponsiveBlastFadeL<Blue,Scale<SwingSpeed<400>,Int<6000>,Int<12000>>,Scale<SwingSpeed<400>,Int<400>,Int<100>>>,
    ResponsiveBlastL<Blue,Scale<SwingSpeed<400>,Int<400>,Int<100>>,Scale<SwingSpeed<400>,Int<200>,Int<100>>,Scale<SwingSpeed<400>,Int<400>,Int<200>>>
  >,
  ResponsiveClashL<Blue,TrInstant,TrFade<400>>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
   EffectSequence<EFFECT_POWERSAVE,AlphaL<Black,Int<8192>>,AlphaL<Black,Int<16384>>,AlphaL<Black,Int<24576>>,AlphaL<Black,Int<0>>>,
  InOutTrL<TrWipe<2000>,TrWipeIn<1000>>,
  TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>
>>()
;

// TODO
// smash style from kyberphonics
StyleAllocator smashStyle =
StylePtr<
  InOutHelper<
    SimpleClash<
      Lockup<
        Blast<
          Gradient<Gradient<Cyan,Blue,Magenta>,Gradient<Red,Red,OrangeRed>>,
          White,
          200,
          100,
          400
        >,
        AudioFlicker<Gradient<Red,Blue>,White>,
        AudioFlicker<Gradient<Red,Blue>,White>
      >,
      Gradient<Cyan,Yellow>,
      40
    >,
    300,
    800,
    Black
  >
>()
;

