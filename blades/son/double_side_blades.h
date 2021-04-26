// jedi fallen order (second sister) red
// adjust time to -1000ms
// remove RotateColorsX<Variation,Rgb<50,0,0>> from stripes
// lightning block effect: lightning block transitions
// retraction wavlen
StyleAllocator secondSisterSideStyle =
StylePtr<Layers<
  Stripes<10000,-1000,RotateColorsX<Variation,Rgb<80,0,0>>,RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>,RotateColorsX<Variation,Red>>,
  ResponsiveLightningBlockL<AlphaL<Red,Int<0>>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  InOutTrL<TrWipe<300>,TrWipeInX<WavLen<EFFECT_RETRACTION>>,Black>
>>()
;

