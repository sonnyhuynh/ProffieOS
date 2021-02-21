StyleAllocator offCCStyle = StyleNormalPtr<BLACK, BLACK, 300, 800>();

// fallen orange cc modded with direct color change
StyleAllocator sonCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<ColorChange<TrBoing<300,3>,DarkOrange,Rgb<95,0,210>>,ColorChange<TrBoing<300,3>,Rgb<128,34,0>,Rgb<42,0,105>>>,Black>>>>()
;

// audioflicker canon blue cc
StyleAllocator pulseBlueCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFadeX<WavLen<EFFECT_RETRACTION>>,Pulsing<RotateColorsX<Variation,Rgb<0,0,128>>,RotateColorsX<Variation,Rgb<0,0,10>>,3000>>>>()
;

// fallen red cc
StyleAllocator fallenRedCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<90,0,0>>>,Black>>>>()
;

// fallen cyan cc
StyleAllocator fallenCyanCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<RotateColorsX<Variation,Rgb<30,120,150>>,RotateColorsX<Variation,Rgb<11,42,53>>>,Black>>>>()
;

StyleAllocator rainbowCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Stripes<10000,-175,Red,Orange,Yellow,Green,Cyan,Blue,Magenta>>>>()
;

StyleAllocator fallenGreenCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,90,0>>>,Black>>>>()
;

StyleAllocator nobladeCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,90,0>>>,Black>>>>()
;

