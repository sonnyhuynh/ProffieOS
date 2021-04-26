// supreme leader kylo unstable deep sky blue
// lightning block effect: lightning block transitions
// retraction wavlen
StyleAllocator spitfireSideStyle =
StylePtr<Layers<StripesX<Int<1500>,Scale<SlowNoise<Int<2500>>,Int<-3000>,Int<-5000>>,RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,25,80>>,RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,6,20>>,RotateColorsX<Variation,DeepSkyBlue>>,ResponsiveLightningBlockL<AlphaL<Red,Int<0>>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>>>();
;

// supreme leader kylo unstable blue
// lightning block effect: lightning block transitions
// retraction wavlen
StyleAllocator spitfireBlueSideStyle =
StylePtr<Layers<StripesX<Int<1500>,Scale<SlowNoise<Int<2500>>,Int<-3000>,Int<-5000>>,RotateColorsX<Variation,Blue>,RotateColorsX<Variation,Rgb<0,0,80>>,RotateColorsX<Variation,Blue>,RotateColorsX<Variation,Rgb<0,0,20>>,RotateColorsX<Variation,Blue>>,ResponsiveLightningBlockL<AlphaL<Red,Int<0>>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>>>()
;

// fully responsive audioflicker canon blue
// lightning block effect: lightning block transitions
// retraction wavlen
StyleAllocator blueSideStyle =
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,ResponsiveLightningBlockL<AlphaL<Red,Int<0>>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>>>()
;

// fully responsive audioflicker canon red
// lightning block effect: lightning block transitions
// retraction wavlen
StyleAllocator redSideStyle =
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,ResponsiveLightningBlockL<AlphaL<Red,Int<0>>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>>>()
;

// fully responsive audioflicker canon green
// lightning block effect: lightning block transitions
// retraction wavlen
StyleAllocator greenSideStyle =
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,128,0>>>,ResponsiveLightningBlockL<AlphaL<Red,Int<0>>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>>>()
;

