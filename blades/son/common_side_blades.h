// supreme leader kylo unstable red
// ignition delay: standard
// lightning block effect: lightning block transitions
// retraction wavlen
#define KYLO_UNSTABLE_DELAYED_STYLE(X) \
StylePtr<IgnitionDelay<X,Layers<StripesX<Int<1500>,Scale<SlowNoise<Int<2500>>,Int<-3000>,Int<-5000>>,RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<80,0,0>>,RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<20,0,0>>,RotateColorsX<Variation,Red>>,ResponsiveLightningBlockL<AlphaL<Red,Int<0>>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>>>>()

StyleAllocator kyloSideStyle =
KYLO_UNSTABLE_DELAYED_STYLE(0)
;

StyleAllocator kyloDelayedSideStyle =
KYLO_UNSTABLE_DELAYED_STYLE(450)
;

// fully responsive audioflicker canon gold
// rey tros spark
// lightning block effect: lightning block transitions
// retraction wavlen
// preon change delay to fade for 300ms
StyleAllocator reySideStyle =
StylePtr<Layers<
  AudioFlicker<RotateColorsX<Variation,Rgb<180,130,0>>,RotateColorsX<Variation,Rgb<90,65,0>>>,
  ResponsiveLightningBlockL<AlphaL<Red,Int<0>>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<Green,Bump<Int<0>,Int<4000>>>,TrFade<300>,AlphaL<DodgerBlue,Bump<Int<0>,Int<4000>>>,TrFade<300>,AlphaL<DeepSkyBlue,Bump<Int<0>,Int<4000>>>,TrFade<300>>,EFFECT_PREON>
>>()
;

// fully responsive audioflicker canon silver
// mod to Stripes<10000,-175,Red,Orange,Yellow,Green,Cyan,Blue,Magenta>
// lightning block effect: lightning block transitions
// retraction wavlen
StyleAllocator rainbowSideStyle =
StylePtr<Layers<
  Stripes<10000,-175,Red,Orange,Yellow,Green,Cyan,Blue,Magenta>,
  ResponsiveLightningBlockL<AlphaL<Red,Int<0>>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>
>>()
;

// no off behavior
// on behavior
//   fast turbine, green, color change on
//   continuous run time
// lightning block effect: lightning block transitions
// retraction wavlen
StyleAllocator nobladeSideStyle =
StylePtr<Layers<
  ColorCycle<Red,25,100,RotateColorsX<Variation,Green>,25,300,1000>,TransitionEffectL<TrConcat<TrInstant,Red,TrFade<400>>,EFFECT_BLAST>,
  ResponsiveLightningBlockL<AlphaL<Red,Int<0>>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  InOutTrL<TrWipe<0>,TrColorCycle<1000,300,0>>
>>()
;

