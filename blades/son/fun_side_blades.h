// fully responsive audioflicker canon gold
// mod to fire style
// lightning block effect: lightning block transitions
// ignition 2000ms
// retraction wavlen
StyleAllocator pikachuSideStyle =
StylePtr<Layers<
  StyleFire<Yellow,Blue,0,3,FireConfig<0,2000,5>,FireConfig<0,2000,5>,FireConfig<0,2000,5>,FireConfig<0,2000,5>>,
  ResponsiveLightningBlockL<AlphaL<Red,Int<0>>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  InOutTrL<TrWipe<2000>,TrWipeInX<WavLen<EFFECT_RETRACTION>>>
>>()
;

