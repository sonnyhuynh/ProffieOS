#define HAS_CC

StyleAllocator offCCStyle = StyleNormalPtr<BLACK, BLACK, 300, 800>();

// fallen orange cc modded with direct color change
StyleAllocator sonCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<ColorChange<TrBoing<300,3>,DarkOrange,Rgb<95,0,210>>,ColorChange<TrBoing<300,3>,Rgb<128,34,0>,Rgb<42,0,105>>>,Black>>>>()
;

// audioflicker canon red cc
StyleAllocator pulseRedCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,3000>>>>()
;

// audioflicker canon blue cc
StyleAllocator pulseBlueCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Pulsing<RotateColorsX<Variation,Rgb<0,0,128>>,RotateColorsX<Variation,Rgb<0,0,10>>,3000>>>>()
;

// audioflicker canon green cc
StyleAllocator pulseGreenCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Pulsing<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,10,0>>,3000>>>>()
;

StyleAllocator fallenBlueCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<RotateColorsX<Variation,Blue>,RotateColorsX<Variation,Rgb<0,0,90>>>,Black>>>>()
;

StyleAllocator fallenGreenCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,90,0>>>,Black>>>>()
;

StyleAllocator fallenPurpleCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<RotateColorsX<Variation,Rgb<110,15,200>>,RotateColorsX<Variation,Rgb<39,5,71>>>,Black>>>>()
;

StyleAllocator fallenOrangeCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<RotateColorsX<Variation,DarkOrange>,RotateColorsX<Variation,Rgb<90,24,0>>>,Black>>>>()
;

StyleAllocator fallenYellowCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<RotateColorsX<Variation,Rgb<180,180,0>>,RotateColorsX<Variation,Rgb<64,64,0>>>,Black>>>>()
;

StyleAllocator fallenCyanCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<RotateColorsX<Variation,Rgb<30,120,150>>,RotateColorsX<Variation,Rgb<11,42,53>>>,Black>>>>()
;

StyleAllocator fallenMagentaCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<RotateColorsX<Variation,Rgb<180,30,140>>,RotateColorsX<Variation,Rgb<64,11,49>>>,Black>>>>()
;

StyleAllocator fallenIndigoCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<RotateColorsX<Variation,Rgb<80,50,200>>,RotateColorsX<Variation,Rgb<28,18,71>>>,Black>>>>()
;

StyleAllocator fallenRedCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<90,0,0>>>,Black>>>>()
;

StyleAllocator rainbowCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Stripes<10000,-175,Red,Orange,Yellow,Green,Cyan,Blue,Magenta>>>>()
;

StyleAllocator nobladeCCStyle =
StylePtr<Layers<Black,InOutTrL<TrFade<300>,TrFade<300>,Mix<IsLessThan<SlowNoise<Int<3000>>,Int<10000>>,RandomFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,90,0>>>,Black>>>>()
;

