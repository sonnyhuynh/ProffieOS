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

