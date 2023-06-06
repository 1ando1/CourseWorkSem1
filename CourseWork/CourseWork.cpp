#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
int choose_lang;
enum equpment { Acoustic_guitar, Classic_guitar, Electric_guitar, Bass_guitar, Ukulele, Amplifiers, Effects, Tuners, String_kit, Mediators, Capos, Guitar_belts, Cases };
enum codes { code1 = 228885, code2 = 228746, code3 = 228747, code4 = 228175, code5 = 228483, code6 = 228719, code7 = 228190, code8 = 228188, code9 = 211148, code10 = 228885, code11 = 227739, code12 = 230828, code13 = 230113, code14 = 226000, code15 = 226001, code16 = 227356, code17 = 229703, code18 = 230181, code19 = 224619, code20 = 227702, code21 = 227702, code22 = 230676, code23 = 230174, code24 = 227433, code25 = 220128, code26 = 220129, code27 = 228177, code28 = 228720, code29 = 228178, code30 = 228721, code31 = 227642, code32 = 227643, code33 = 227644, code34 = 227812, code35 = 227811, code36 = 227479, code37 = 225631, code38 = 225631, code39 = 225624, code40 = 228196, code41 = 228653, code42 = 227010, code43 = 229777, code44 = 68923, code45 = 68924, code46 = 75352, code47 = 228861, code48 = 226366, code49 = 226179, code50 = 226181, code51 = 300040, code52 = 213459, code53 = 200836, code54 = 200837, code55 = 229833, code56 = 229833, code57 = 229901, code58 = 229379, code59 = 228860, code60 = 219873, code61 = 227615, code62 = 227614, code63 = 221857, code64 = 206408, code65 = 225794, code66 = 213693, code67 = 20515, code68 = 14488, code69 = 230248, code70 = 20519, code71 = 229406, code72 = 229407, code73 = 002377, code74 = 208140, code75 = 229101, code76 = 225532, code77 = 226210, code78 = 226211 };


int Ware()
{
	int choose;
	cin >> choose;
	switch (choose)
	{
	case Acoustic_guitar:
		cout << "\n\tPress: " << endl;
		cout << "1. ";
		cout << "FENDER CC-60SCE WN NAT" << code1 << endl;
		cout << endl;
		cout << "2. ";
		cout << "\tFENDER CD-60 V3 WN BLACK" << code2 << endl;
		cout << endl;
		cout << "3. ";
		cout << "\tFENDER CD-60 V3 WN NATURAL" << code3 << endl;
		cout << endl;
		cout << "4. ";
		cout << "\tFENDER CD-60S BLACK WN" << code4 << endl;
		cout << endl;
		cout << "5. ";
		cout << "\tFENDER CD-60S LH WN NATURAL" << code5 << endl;
		cout << endl;
		cout << "6. ";
		cout << "\tFENDER CD-60S NATURAL WN" << code6 << endl;
	case Classic_guitar:
		cout << "7. ";
		cout << "\tEPIPHONE PRO-1 CLASSIC 1.75" << code7 << endl;
		cout << endl;
		cout << "8. ";
		cout << "\tEPIPHONE PRO-1 CLASSIC 3/4" << code8 << endl;
		cout << endl;
		cout << "9. ";
		cout << "\tIBANEZ GA6CE AM" << code9 << endl;
		cout << endl;
		cout << "10. ";
		cout << "\tTAKAMINE GC3 NAT" << endl;
		cout << endl;
		cout << "11. ";
		cout << "\tTAYLOR GUITARS ACADEMY 12-N" << code11 << endl;
		cout << endl;
		cout << "12. ";
		cout << "\tFENDER ESC105" << code12 << endl;
		break;
	case Electric_guitar:
		cout << endl;
		cout << "13. ";
		cout << "\tEPIPHONE CASINO COUPE VINTAGE SUNBURST" << code13 << endl;
		cout << endl;
		cout << "14. ";
		cout << "\tEPIPHONE LES PAUL SL PACIFIC BLUE" << code14 << endl;
		cout << endl;
		cout << "15. ";
		cout << "\tEPIPHONE LES PAUL SL SUNSET YELLOW" << code15 << endl;
		cout << endl;
		cout << "16. ";
		cout << "\tEVH WOLFGANG SPECIAL MN MATTE ARMY DRAB" << code16 << endl;
		cout << endl;
		cout << "17. ";
		cout << "\tFENDER AMERICAN ULTRA STRATOCASTER HSS RW COBRA BLUE" << code17 << endl;
		cout << endl;
		cout << "18. ";
		cout << "\tFENDER CUSTOM SHOP ARTISAN THINLINE TELE LTD" << code18 << endl;
		break;
	case Bass_guitar:
		cout << "19. ";
		cout << "\tFENDER AMERICAN PROFESSIONAL JAZZ BASS MN SNG" << code19 << endl;
		cout << endl;
		cout << "20. ";
		cout << "\tFENDER AMERICAN PROFESSIONAL JAZZ BASS V MN BLACK" << code20 << endl;
		cout << endl;
		cout << "21. ";
		cout << "\tFENDER AMERICAN PROFESSIONAL JAZZ BASS V RW OLYMPIC WHITE" << code21 << endl;
		cout << endl;
		cout << "22. ";
		cout << "\tFENDER PLAYER PRECISION BASS LH PF 3TSB" << code22 << endl;
		cout << endl;
		cout << "23. ";
		cout << "\tFENDER PLAYER PRECISION BASS LTD MN EGN" << code23 << endl;
		cout << endl;
		cout << "24. ";
		cout << "\tFENDER PLAYER PRECISION BASS MN 3TS" << code24 << endl;
		break;
	case Ukulele:
		cout << "25. ";
		cout << "\tEPIPHONE UKULELE LES PAUL HCB" << code25 << endl;
		cout << endl;
		cout << "26. ";
		cout << "\tEPIPHONE UKULELE LES PAUL VSB" << code26 << endl;
		cout << endl;
		cout << "27. ";
		cout << "\tFENDER UKULELE VENICE SOPRANO BLACK WN" << code27 << endl;
		cout << endl;
		cout << "28. ";
		cout << "\tFENDER UKULELE VENICE SOPRANO DAPHNE BLUE WN" << code28 << endl;
		cout << endl;
		cout << "29. ";
		cout << "\tFENDER UKULELE VENICE SOPRANO NATURAL WN" << code29 << endl;
		cout << endl;
		cout << "30. ";
		cout << "\tFENDER UKULELE VENICE SOPRANO SHELL PINK WN" << code30 << endl;
		break;
	case Amplifiers:
		cout << "31. ";
		cout << "\tAMPEG BA-112 V2" << code31 << endl;
		cout << endl;
		cout << "32. ";
		cout << "\tAMPEG BA-210 V2" << code32 << endl;
		cout << endl;
		cout << "33. ";
		cout << "\tAMPEG PF-350" << code33 << endl;
		cout << endl;
		cout << "34. ";
		cout << "\tAMPEG PF-500" << code34 << endl;
		cout << endl;
		cout << "35. ";
		cout << "\tAMPEG SVT-3PRO" << code35 << endl;
		cout << endl;
		cout << "36. ";
		cout << "\tAMPEG SVT-4PRO" << code36 << endl;
		cout << endl;
		break;
	case Effects:
		cout << "37. ";
		cout << "\tFENDER PEDAL FULL MOON DISTORTION" << code37 << endl;
		cout << endl;
		cout << "38. ";
		cout << "\nDIGITECH FS3X" << code38 << endl;
		cout << endl;
		cout << "39. ";
		cout << "\tDIGITECH OBSCURA" << code39 << endl;
		cout << endl;
		cout << "40. ";
		cout << "\tAMPEG OPTO COMP" << code40 << endl;
		cout << endl;
		cout << "41. ";
		cout << "\tFENDER PEDAL LOST HIGHWAY PHASER" << code41 << endl;
		cout << endl;
		cout << "42. ";
		cout << "\tFENDER PEDAL MARINE LAYER REVERB" << code42 << endl;
		cout << endl;
		break;
	case Tuners:
		cout << "43. ";
		cout << "\tKORG VPT-1" << code43 << endl;
		cout << endl;
		cout << "44. ";
		cout << "\tFENDER AG6" << code44 << endl;
		cout << endl;
		cout << "45. ";
		cout << "\tFENDER AG6" << code45 << endl;
		cout << endl;
		cout << "46. ";
		cout << "\tFENDER AX-12 SL" << code46 << endl;
		cout << endl;
		cout << "47. ";
		cout << "\tFENDER BULLET TUNER" << code47 << endl;
		cout << endl;
		cout << "48. ";
		cout << "\tFENDER FT-1 PRO CLIP-ON TUNER BLACK" << code48 << endl;
		cout << endl;
		break;
	case String_kit:
		cout << "49. ";
		cout << "\tAVZHEZH ASP1048" << code49 << endl;
		cout << endl;
		cout << "50. ";
		cout << "\tAVZHEZH ASS1150" << code50 << endl;
		cout << endl;
		cout << "51. ";
		cout << "\nELIXIR AC NWL" << code51 << endl;
		cout << endl;
		cout << "52. ";
		cout << "\tELIXIR EL NW L 7" << code52 << endl;
		cout << endl;
		cout << "53. ";
		cout << "\tELIXIR EL NW L" << code53 << endl;
		cout << endl;
		cout << "54. ";
		cout << "\tELIXIR EL NW LH" << code54 << endl;
		cout << endl;
		break;
	case Mediators:
		cout << "55. ";
		cout << "\tDUNLOP 3090 Thumb pick" << code55 << endl;
		cout << endl;
		cout << "56. ";
		cout << "\tDUNLOP 4820 Jazz III" << code56 << endl;
		cout << endl;
		cout << "57. ";
		cout << "\tFENDER 351 BLACK MOTO GROSS HEAVY" << code57 << endl;
		cout << endl;
		cout << "58. ";
		cout << "\tFENDER 351 DURA-TONE .71 12-PACK, OLYMPIC WHITE" << code58 << endl;
		cout << endl;
		cout << "59. ";
		cout << "\tFENDER 351 GREEN PICK GROSS MEDIUM" << code59 << endl;
		cout << endl;
		cout << "60. ";
		cout << "\tFENDER 351 MATTE DELRIN BLUE H" << code60 << endl;
		cout << endl;
		break;
	case Capos:
		cout << "\tAVZHEZH SC-03A GREEN" << code61 << endl;
		cout << endl;
		cout << "61. ";
		cout << "\tAVZHEZH SC-03A RED" << code62 << endl;
		cout << endl;
		cout << "62. ";
		cout << "\tFENDER CAPO PHOENIX BLACK" << code63 << endl;
		cout << endl;
		cout << "63. ";
		cout << "\tFENDER SMART CAPO STANDARD" << code64 << endl;
		cout << endl;
		cout << "64. ";
		cout << "\tIBANEZ ICGC10" << code65 << endl;
		cout << endl;
		cout << "65. ";
		cout << "\tIBANEZ IGC10" << code66 << endl;
		cout << endl;
		break;
	case Guitar_belts:
		cout << "66. ";
		cout << "\tFENDER 2 MONOGRAMMED BLACK/YELLOW/RED STRAP" << code67 << endl;
		cout << endl;
		cout << "67. ";
		cout << "\tFENDER 2 MONOGRAMMED WHITE BROWN YELLOW STRAP" << code68 << endl;
		cout << endl;
		cout << "68. ";
		cout << "\tFENDER 2' WEIGHLESS MONOGRAMMED STRAP BLACK / YELLOW / BROWN" << code69 << endl;
		cout << endl;
		cout << "69. ";
		cout << "\tFENDER STRAP VINTAGE TWEED 2" << code70 << endl;
		cout << endl;
		cout << "70. ";
		cout << "\tFENDER WEIGHLESS 2'' RUNNING LOGO STRAP BLACK/WHITE" << code71 << endl;
		cout << endl;
		cout << "71. ";
		cout << "\tFENDER WEIGHLESS 2'' RUNNING LOGO STRAP WHITE/BLACK" << code72 << endl;
		cout << endl;
		break;
	case Cases:
		cout << "72. ";
		cout << "\tEPIPHONE GIGBAG SOLIDBODY BASS" << code73 << endl;
		cout << endl;
		cout << "73. ";
		cout << "\tEPIPHONE WESTERN ACOUSTIC GUITAR GIGBAG" << code74 << endl;
		cout << endl;
		cout << "74. ";
		cout << "\tFENDER CLASSIC SERIES CASE FOR P/J BASS" << code75 << endl;
		cout << endl;
		cout << "75. ";
		cout << "\tFENDER DELUXE MOLDED BASS CASE BLACK" << code76 << endl;
		cout << endl;
		cout << "76. ";
		cout << "\tFENDER FA405 DREADNOUGHT GIG BAG" << code77 << endl;
		cout << endl;
		cout << "77. ";
		cout << "\tFENDER FA610 DREADNOUGHT GIG BAG" << code78 << endl;
		cout << endl;
	}





	if (choose == Acoustic_guitar)
	{
		cout << Acoustic_guitar << endl;
	}
	else if (choose == Classic_guitar)
	{
		cout << Classic_guitar << endl;
	}
	else if (choose == Electric_guitar)
	{
		cout << Electric_guitar << endl;
	}
	else if (choose == Bass_guitar)
	{
		cout << Bass_guitar << endl;
	}
	else if (choose == Ukulele)
	{
		cout << Ukulele << endl;
	}
	else if (choose == Amplifiers)
	{
		cout << Amplifiers << endl;
	}
	else if (choose == Effects)
	{
		cout << Effects << endl;
	}
	else if (choose == Tuners)
	{
		cout << Tuners << endl;
	}
	else if (choose == String_kit)
	{
		cout << String_kit << endl;
	}
	else if (choose == Mediators)
	{
		cout << Mediators << endl;
	}
	else if (choose == Capos)
	{
		cout << Capos << endl;
	}
	else if (choose == Guitar_belts)
	{
		cout << Guitar_belts << endl;
	}
	else if (choose == Cases)
	{
		cout << Cases << endl;
	}
	return 0;
}

int More()
{
	int choose;
	cin >> choose;
	switch (choose)
	{
	case Acoustic_guitar:
	case 1:
		cout << "\tFENDER CC-60SCE WN NAT - acoustic guitar\n\t\tPrice: 396$\n\t\tCode of ware: " << code1 << endl;
		cout << "Electroacoustic guitar, 6 strings, shape - grand concert, upper deck - solid spruce, sides and back - mahogany, fingerboard - mahogany / walnut, preamp / pickup - Fishman, color - natural.";
		cout << "FENDER CC - 60SCE WN NAT - electroacoustic guitar in a compact body from a famous American manufacturer, equipped with high quality electronics.It is an ideal beginner / intermediate instrument for young musiciansand guitar learners who are ready to try their hand at electricity.The body of the model provides comfort when playing in any position.The cutout of the ergonomic form gives convenient access to the top frets." << endl;
		cout << "\nThe material and design of the guitar allow you to use it for independent lessons, training and rehearsals, chamber performances for a small circle of listeners: at home, outdoors or in a cafe. The upper deck of the CC-60SCE WN NAT is made of solid spruce, which gives the instrument excellent acoustic characteristics in any style of play. The lower deck and shell are made of mahogany, which allowed not only to get a spectacular appearance, but also to achieve a balanced sound and impressive volume.";
		cout << "The Fender 'Easy - to - Play' fingerboard is also made of mahogany, with a single layer of black edging. Convenient shape of the fingerboard will appeal to both beginners and experienced professionals. Overlay - walnut, radius - 12' (305 mm), inlaid with nacreous dots with a diameter of 3 mm.On the fingerboard 20 frets Vintage." << endl;
		cout << "\nThe Fishman piezo pickup with preamplifier and built-in tuner is equipped with convenient adjusters for adjustment; at the same time the pure, dense and saturated sound with fine resonance remains. The bridge is made of walnut, the fittings are chrome-plated. The guitar looks elegant in a classic natural color with a glossy body and fingerboard finish, as well as with a contrasting black pickguard. The rosette is beautifully decorated with mother-of-pearl." << endl;
		break;
		cout << endl;
	case 2:
		cout << "\tFENDER CD-60 V3 WN BLACK - acoustic guitar\n\t\tPrice:226$\n\t\tCode of ware: " << code2 << endl;
		cout << "Acoustic guitar, top deck - spruce, sides and back - mahogany, fingerboard - mahogany / walnut, color - black. The main features of the acoustic guitar FENDER CD - 60 V3 WN BLACK : Deck shape - dreadnought; Upper spruce deck with X - Bracing springs, shelland back mahogany deck; Glossy black color; Walnut coverand bridge." << endl;
		cout << "\nIf you are a beginner guitarist, the best choice will be a guitar that will inspire you to keep playing with its sound and feel. Acoustic guitar CD-60 V3 WN BLACK is the real Fender, at an affordable price and in a great color to suit your style. It provides a well-balanced tone and surround sound, thanks to the shape of a dreadnought deck and a spruce top deck with X-Bracing springs. The FENDER CD-60 V3 WN BLACK acoustic guitar will also be a great choice for experienced musicians who need an inexpensive second dreadnought guitar." << endl;
		break;
		cout << endl;
	case 3:
		cout << "\tFENDER CD-60 V3 WN NATURAL - acoustic guitar\n\t\tPrice: 221$\n\t\tCode of ware: " << code3 << endl;
		cout << "Acoustic guitar, upper deck - spruce, sides and back - mahogany, fingerboard - mahogany / walnut, color - natural. The main features of the acoustic guitar FENDER CD - 60 V3 WN NATURAL : Deck shape - dreadnought; Upper spruce deck with X - Bracing springs, shelland back mahogany deck; Glossy natural color; Walnut coverand bridge." << endl;
		cout << "\nIf you are a beginner guitarist, the best choice will be a guitar that will inspire you to keep playing with its sound and feel. Acoustic guitar CD-60 V3 WN NATURAL is the real Fender, at an affordable price and in a great color to suit your style. It provides a well-balanced tone and surround sound, thanks to the shape of a dreadnought deck and a spruce top deck with X-Bracing springs. The FENDER CD-60 V3 WN NATURAL acoustic guitar will also be a great choice for experienced musicians who need an inexpensive second dreadnought guitar." << endl;
		break;
		cout << endl;
	case 4:
		cout << "\tFENDER CD-60S BLACK WN - acoustic guitar\n\t\tPrice: 271$\n\t\tCode of ware: " << code4 << endl;
		cout << "Acoustic guitar, 6 strings, shape - dreadnought, upper deck - solid spruce, shell and lower deck - mahogany, fingerboard - mahogany / walnut, color - black.FENDER CD - 60S BLACK WN - a new acoustic guitar in a dreadnought case from a famous American manufacturer.The upper deck of the CD - 60S is made of solid spruce wood, which gives the instrument excellent acoustic characteristics in any style of play.The lower deckand shell are made of mahogany, which allowed not only to get a spectacular appearance, but also to achieve a balanced soundand impressive volume." << endl;
		cout << "\nThe neck of the Fender Easy-to-Play profile is also made of mahogany with a single layer of black edging. The convenient shape of the fretboard will appeal to both novice guitarists and experienced professional musicians. Overlay - walnut, radius 12 '(305 mm), inlaid with mother - of - pearl dots with a diameter of 3 mm.On the fingerboard 20 frets.The bridge is made of rosewood, the fittings are chrome - plated.The rosette is beautifully decorated with mother - of - pearl." << endl;
		break;
		cout << endl;
		cout << "\tFENDER CD-60S LH WN NATURAL - acoustic guitar\n\t\tPrice: 271$\n\t\tCode of ware: " << code5 << endl;
		cout << "Acoustic guitar for left-handed, 6 strings, shape - dreadnought, upper deck - solid spruce, shell and lower deck - mahogany, fingerboard - mahogany / walnut, color - natural. FENDER CD - 60S LH WN NATURAL is one of the most popular models of acoustic guitars.The perfect instrument for musicians who want to buy a high quality instrument that has great soundand is comfortable to play.The body of the model of the classic dreadnought shape looks elegantand provides comfort when playing." << endl;
		cout << "\nThe top deck of the CD-60S LH WN NATURAL is made of solid spruce wood, which gives the instrument excellent acoustic qualities in any style of play, bright sound and a wide dynamic range. The lower deck and shell are made of mahogany, which allowed not only to get a spectacular appearance, but also to achieve a balanced sound and impressive volume. The Fender® Easy-to-Play profile fingerboard is also made of mahogany, with a single layer of black edging.";
		cout << "The top deck of the CD-60S LH WN NATURAL is made of solid spruce wood, which gives the instrument excellent acoustic qualities in any style of play, bright sound and a wide dynamic range. The lower deck and shell are made of mahogany, which allowed not only to get a spectacular appearance, but also to achieve a balanced sound and impressive volume. The Fender® Easy-to-Play profile fingerboard is also made of mahogany, with a single layer of black edging." << endl;
		cout << endl;
		break;
	case 5:
		cout << "\tFENDER CD-60S NATURAL WN - acoustic guitar\n\t\tPrice: 281$\n\t\tCode of ware: " << code6 << endl;
		cout << "Acoustic guitar, 6 strings, dreadnought, upper deck - solid spruce, shell and lower deck - mahogany, fingerboard - mahogany / walnut, color - natural. FENDER CD - 60S NATURAL WN is one of the most popular models of acoustic guitars.The perfect instrument for musicians who want to buy a high quality instrument that has great soundand is comfortable to play.The body of the model of the classic dreadnought shape looks elegantand provides comfort when playing." << endl;
		cout << "\nThe upper deck of the FENDER CD-60S NATURAL WN is made of solid spruce wood, which gives the instrument excellent acoustic qualities in any style of play, bright sound and a wide dynamic range. The lower deck and shell are made of mahogany, which allowed not only to get a spectacular appearance, but also to achieve a balanced sound and impressive volume. The Fender® Easy-to-Play profile fingerboard is also made of mahogany, with a single layer of black edging. The convenient shape of the fretboard will appeal to both novice guitarists and experienced professional musicians.";
		cout << "Overlay - walnut, radius 12 '(305 mm), inlaid with mother - of - pearl dots with a diameter of 3 mm.On the fingerboard 20 frets Vintage.The bridge is made of walnut, fittings - chrome.The rosette is beautifully decorated with mother - of - pearl." << endl;
		break;
	case 6:
		cout << "\tEPIPHONE PRO-1 CLASSIC 1.75 - classic guitar\n\t\tPrice: 165$\n\t\tCode of ware: " << code7 << endl;
		cout << "Classical 'Spanish' acoustic guitar, top deck - cedar, side and back deck - mahogany, fingerboard - mahogany, width of 'zero' powder - 1.75 ', anchor, color - natural. EPIPHONE PRO - 1 Classic is modeled on the world's best classical guitars, using the same types of wood. Classical guitars are famous for their unique, clean sound. The balanced sound of this guitar and PRO functions allow even a beginner to easily find their unique sound. The design of the PRO-1 Classic is: the upper deck is made of cedar, and the lower deck, shell and fingerboard are made of mahogany." << endl;
		cout << "\nIt is worth noting the PRO Collection innovations, thanks to which Epiphone, one of the oldest and most respected guitar manufacturers in the world, has made playing the guitar easy and accessible to everyone. Epiphone has rethought the process of creating a classical guitar, and as a result there is an instrument that everyone can play from scratch - 'PRO' guitar, which is easy to use, and most importantly, which provides full, bright sound, as the legendary company Epiphone." << endl;
		cout << "\nPlaying this guitar, you will not feel tired. The design of the guitar (EZ-Profile) is designed so that your hand can easily form chords without inconvenience. Epiphone JumboPRO frets make notes and chords truly light, they are much wider than smaller frets. In addition, everyone knows - the friction of strings and fretboards not only slow down the game, but can also damage the instrument itself. The PRO-Ease string and fretboard cover provides a smooth, smooth touch." << endl;
		cout << "\nAnother difference of the series, which is not typical of most classical guitars, is the anchor. This not only makes the design stronger, but also allows you to easily adjust the angle of the fingerboard, and the height of the strings." << endl;
		cout << "\nEPIPHONE PRO-1 Classic is the result of a combination of numerous technological innovations and a comprehensive analysis of offers from professional players. This guitar of the PRO-1 CLASSIC series has width of 'zero' powder of 1.75 '." << endl;
		cout << endl;
		break;
	case 7:
		cout << "\tEPIPHONE PRO-1 CLASSIC 3/4 - classic guitar\n\t\tPrice: 165$\n\t\tCode of ware: " << code8 << endl;
		cout << "Classical 'Spanish' acoustic guitar, size 3/4, top deck - cedar, side and back deck - mahogany, fingerboard - mahogany, anchor, color - natural. The idea of ​​the innovative PRO - 1 Acoustic Collection is to create a guitar that would be easy to play, but at the same time it would be in line with Epiphone's centuries-old tradition with excellent build quality, rich tone and beautiful design. EPIPHONE PRO-1 Classic is modeled on the world's best classical guitars, using the same types of wood.Classical guitars are famous for their unique, clean sound.";
		cout << " The balanced sound of this guitar and PRO functions allow even a beginner to easily find their unique sound. The design of the PRO-1 Classic is: the upper deck is made of cedar, and the lower deck, shell and fingerboard are made of mahogany." << endl;
		cout << "\nIt is worth noting the innovations of the PRO Collection, thanks to which Epiphone, one of the oldest and most respected guitar manufacturers in the world, made playing the guitar easy and accessible to everyone. Epiphone has rethought the process of creating a classical guitar, and as a result there is an instrument that everyone can play from scratch - 'PRO' guitar, which is easy to use, and most importantly, which provides full, bright sound, as the legendary company Epiphone." << endl;
		cout << "\nPlaying this guitar, you will not feel tired. The design of the guitar (EZ-Profile) is designed so that your hand can easily form chords without inconvenience. Epiphone JumboPRO frets make notes and chords truly light, they are much wider than smaller frets. In addition, everyone knows - the friction of strings and fretboards not only slow down the game, but can also damage the instrument itself. The PRO-Ease string and fretboard cover provides a smooth, smooth touch." << endl;
		cout << "\nAnother difference of the series, which is not typical of most classical guitars, is the anchor. This not only makes the design stronger, but also allows you to easily adjust the angle of the fingerboard, and the height of the strings." << endl;
		cout << "\nEPIPHONE PRO-1 Classic is the result of a combination of numerous technological innovations and a comprehensive analysis of offers from professional players. This PRO-1 CLASSIC series guitar has a 'zero' threshold width of 1.89 '." << endl;
		cout << endl;
		break;
	case 8:
		cout << "\tIBANEZ GA6CE AM - classic guitar\n\t\tPrice: 230$\n\t\tCode of ware: " << code9 << endl;
		cout << "Classical guitar, electroacoustic, 6 strings, deck shape - Classical, top deck - spruce, back deck and shells - mahogany, fingerboard - mahogany / rosewood, color - natural. IBANEZ GA6CE - AM is a stunning classical guitar with a pickup, created by Ibanez masters.This model, among others, is distinguished by its crystal clear soundand stylish, but at the same time strict, design.";
		cout << "The top deck of the guitar is made of spruce, and the body is endowed with an Ibanez Under Saddle pickup and Ibanez AEQ45 preamplifier, which provide a wide selection of various sound settings for this guitar." << endl;
		cout << "\nThe IBANEZ GA6CE-AM classical guitar has a finish that promotes improved resonance. This finish does not have thick layers of varnish and several coats of paint, which are often found in the finish of many acoustic guitars. The thin coating of this model is made of high quality, reliably protecting the tool from any climate change." << endl;
		cout << endl;
		break;
	case 9:
		cout << "\tTAKAMINE GC3 NAT - classic guitar\n\t\tPrice: 285$\n\t\tCode of ware: " << code10 << endl;
		cout << "Classical guitar, 6 strings, top deck - solid spruce, sides and back - mahogany, fingerboard - mahogany / laurel, color - natural. The TAKAMINE GC3 NAT is a beautiful classical guitar that features a solid top deck, a beautiful glossy finishand nylon strings that give it a rich sound - just what musicians expect from Takamine guitars." << endl;
		cout << "\nThe TAKAMINE GC3 NAT is perfect for any player looking for a great all-purpose classical guitar. The instrument combines an upper deck made of solid spruce and a lower deck with a mahogany shell, which create a rich, resonating sound. A comfortable fingerboard, also made of mahogany, and a laurel cover provide a pleasant feeling and playfulness, and the inlay of the rosette in the form of a mosaic gives the tool a traditional elegant look." << endl;
		cout << "\nOther features of the TAKAMINE GC3 NAT include a dovetail mount, upper and lower synthetic bone fringes, a laurel fret head, chrome pegs with white pearl buttons and a beautiful glossy finish." << endl;
		cout << endl;
		break;
	case 10:
		cout << "\tTAYLOR GUITARS ACADEMY 12-N - classic guitar\n\t\tPrice: 609$\n\t\tCode of ware: " << code11 << endl;
		cout << "Classical guitar, 6 strings, deck shape - Grand Concert, top deck - spruce, back deck and shells - sapele, fingerboard - mahogany / ebony, color - natural, case included. With the TAYLOR GUITARS ACADEMY 12 - N guitar you will receive incredible softness and balance of sound, both at quiet, and at dynamic game, responsiveness to harmonics at the expense of the massif from a fir - tree and a shell with a back deck from a tree of a sapele.The fingerboard of the guitar is made of mahogany, the cover is made of ebony with a mother - of - pearl inlay, the powders are made of nubon / micart material, which allows you to detail the intonation of your game.";
		cout << " The guitar is equipped with nickel-plated pegs that hold the structure perfectly. Case included. You will enjoy playing this instrument, even if your guitar skills are not so high. And if you are a professional, then ACADEMY 12-N should definitely be in your arsenal." << endl;
		cout << endl;
		break;
	case 11:
		cout << "\tFENDER ESC105 - classic guitar\n\t\tPrice: 200$\n\t\tCode of ware: " << code12 << endl;
		cout << "Classical guitar, upper deck - spruce, lower deck and shell - okume, fingerboard - mahogany / walnut, width at zero threshold - 1.75 '(44.45 mm), color - natural, included case The main features of the classical guitar FENDER ESC105 : The upper deck of laminated spruce, the lower deckand shell of okume; Mahogany fingerboard, walnut lining; Satin vintage finish of natural color; Nickel - plated and perloid fittings; Traditional classic shape." << endl;
		cout << "\nThe FENDER ESC105 classical guitar was created especially for beginner musicians. Fender really did their best to make this tool perfect for beginners. Unlike conventional beginner guitars, this model combines softer nylon strings with a narrower fret width, commonly found on acoustic guitars with steel strings. The result is the 'best of both worlds': softer strings that make it easier to train your fingers, and a familiar fingerboard feel when you play steel strings." << endl;
		cout << "\nIn addition, the FENDER ESC105 features a full-size body in the traditional classic style, ideal for those beginning their journey of learning to play the guitar. This is a great tool that guarantees the quality of Fender." << endl;
		break;
	case 12:
		cout << endl;
		cout << "\tEPIPHONE CASINO COUPE VINTAGE SUNBURST - electric guitar\n\t\tPrice: 515$\n\t\tCode of ware: " << code13 << endl;
		cout << "Semi-acoustic guitar, 6 strings, deca - maple, fingerboard - mahogany / pao ferro, pickups - P90 (S-S), color - sunburst. The main features of the EPIPHONE CASINO COUPE VINTAGE SUNBURST semi - acoustic guitar : The classic design provides a McCartney sound; The maple deckand mahogany fingerboard provide an incredible semi - acoustic tone; The P - 90 pickups reproduce a wonderful universal sound; The SlimTaper D Profile guarantees a fastand smooth game." << endl;
		cout << "\nEPIPHONE CASINO COUPE VINTAGE SUNBURST is a legendary semi-acoustic guitar used throughout the Beatles' musical career in the form of the ES-339. You will quickly fall in love with her. There was something magical about the combination of P-90 pickups and tube amps that made the Beatles' songs instantly recognizable. Now this sound can become yours, but in a reduced, travel-friendly format! The Beatles is one, if not the most important and influential band of all time, and the EPIPHONE CASINO COUPE VINTAGE SUNBURST semi-acoustic guitar puts the unbeatable sound of the Beatles right in your hands." << endl;
		cout << "\nRemember that Paul McCartney started with the Beatles as a guitarist and really played a lot of guitar parts during the band's famous musical career. He got his Epiphone Casino in 1962 and immediately changed it to his left hand. His undoubtedly favorite guitar can be heard on countless Beatles recordings, as well as on many of Paul's later recordings." << endl;
		cout << "\nThanks to the maple deck, the EPIPHONE CASINO COUPE VINTAGE SUNBURST semi-acoustic guitar is ready for any style of music. From blues to jazz and rock, it provides a bright and lively tone, but not sharp. Combine it with a mahogany fingerboard, which brings density and warmth to the sound, and you will get a balanced instrument for any genre." << endl;
		cout << "\nThe P-90 pickup pair is the EPIPHONE CASINO COUPE VINTAGE SUNBURST power source. They are unique in that they can flicker in soft play, but can also sound quite aggressive. Thanks to this, you have a huge number of tones, including the patented 'jungle' of the Beatles, which was very common in many of their classic records." << endl;
		cout << "\nGuitarists from all over the world appreciate the SlimTaper D Profile for fast and smooth playing. It does not interfere with the performance of fast solos, but at the same time comfortable enough for rhythm parts." << endl;
		cout << endl;
		break;
	case 13:
		cout << "\tEPIPHONE LES PAUL SL PACIFIC BLUE - electric guitar\n\t\tPrice: 155$\n\t\tCode of ware: " << code14 << endl;
		cout << "Electric guitar, 6 strings, shape - Les Paul, soundboard - poplar, fingerboard - mahogany / rosewood, pickups - Epiphone Ceramic Single-Coil 650SCR / 700SCT (S-S), color - blue. EPIPHONE LES PAUL SL PACIFIC BLUE is a modern interpretation of the classic legendary model.The electric guitar is equipped with chrome fittings.The fingerboard cover is made of rosewood with 22 frets.The EPIPHONE LES PAUL SL PACIFIC BLUE deck is made of poplar, and the bolted fingerboard is made of mahogany wood.The guitar has two singles Epiphone Ceramic Single - Coil 650SCR / 700SCT." << endl;
		cout << "\nThe Adjustable, Intonated 'Wrap Around' Stopbar Combo bridge and string holder add sustain and simplify string replacement. The integrated innovative killswitch / tone potentiometer will allow you to create a sound stroboscopic effect." << endl;
		cout << endl;
		break;
	case 14:
		cout << "\tEPIPHONE LES PAUL SL SUNSET YELLOW - electric guitar\n\t\tPrice: 155$\n\t\tCode of ware: " << code15 << endl;
		cout << "Electric guitar, 6 strings, shape - Les Paul, soundboard - poplar, fingerboard - mahogany / rosewood, pickups - Epiphone Ceramic Single-Coil 650SCR / 700SCT (S-S), color - yellow. EPIPHONE LES PAUL SL SUNSET YELLOW is a modern interpretation of the classic legendary model.The electric guitar is equipped with chrome fittings.The fingerboard cover is made of rosewood with 22 frets.The deck of EPIPHONE LES PAUL SL SUNSET YELLOW BLUE is made of poplar, and the bolted fingerboard is made of mahogany wood.The guitar has two singles Epiphone Ceramic Single - Coil 650SCR / 700SCT." << endl;
		cout << "\nThe Adjustable, Intonated 'Wrap Around' Stopbar Combo bridge and string holder add sustain and simplify string replacement. The integrated innovative killswitch / tone potentiometer will allow you to create a sound stroboscopic effect." << endl;
		cout << endl;
		break;
	case 15:
		cout << "\tEVH WOLFGANG SPECIAL MN MATTE ARMY DRAB - electric guitar\n\t\tPrice: 1401$\n\t\tCode of ware: " << code16 << endl;
		cout << "Electric guitar, 6 strings, shape - Wolfgang, soundboard - linden, fingerboard - maple / maple, pickups - Direct Mount Wolfgang Humbucking, bridge - EVH-Branded Floyd Rose Locking Tremolo with EVH D-Tuna, color - green. Tested in arenas around the world, the EVH WOLFGANG SPECIAL MN MATTE ARMY DRAB electric guitar delivers cool sound, ultra - fast play and a light - ready style." << endl;
		cout << "\nThe electric guitar has an arctopus-shaped linden soundboard with a bolted maple fingerboard, reinforced graphite, and curved and rounded according to the strict requirements of Eddie Van Halen. Created for energetic riffs and bright leads, the maple overlay with a radius of 12 ' - 16' has 22 Jumbo frets and an inlay in the form of black dots. The pair of custom-made EVH® Wolfgang Humbucking flagships are mounted directly in the body, providing dynamic yet clear sound, as well as almost endless sustain for powerful chords and melodic parts.";
		cout << "The sturdy and reliable EVH-branded Floyd Rose locking tremolo bridge and the Floyd Rose® locking top work together for endless sustain and fine-tuning. And adjusting the anchor rod has never been so easy with a convenient bolt at the base of the fingerboard." << endl;
		cout << "\nEVH WOLFGANG SPECIAL MN MATTE ARMY DRAB purebred tool is available in various attractive colors with a fretboard head in tone and black fittings." << endl;
		cout << endl;
		break;
	case 16:
		cout << "\tFENDER AMERICAN ULTRA STRATOCASTER HSS RW COBRA BLUE - electric guitar\n\t\tPrice: 2402$\n\t\tCode of ware: " << code17 << endl;
		cout << "Electric guitar, 6 strings, shape - stratocaster, soundboard - alder, fingerboard - maple / rosewood, pickups - Ultra Noiseless (H-S-S), color - blue, case included. The main features of the electric guitar FENDER AMERICAN ULTRA STRATOCASTER HSS RW COBRA BLUE : The top deck from an alder; Sculptural contours of the lower deck; One Ultra Double Tap humbucker pickup; Two Ultra - Noiseless Hot Strat single pickups(middle and neck position); Modern D fingerboard profile with ultra - gloss finish; Compound fretboard cover with a radius of 10 ' - 14'; 22 lada medium jumbo; Includes a premium case." << endl;
		cout << "\nAmerican Ultra is Fender's most advanced series of electric and bass guitars for discerning gamers who demand the best in everything: clarity, performance and sound." << endl;
		cout << "\nThe FENDER AMERICAN ULTRA STRATOCASTER HSS RW COBRA BLUE electric guitar is equipped with a new unique Modern D fingerboard profile with ultra-smooth edges for a comfortable long game, and the narrowed heel of the fingerboard provides easy access to the highest register. A high-speed fingerboard with a compound overlay with a radius of 10 ' - 14' and 22 frets Medium Jumbo is responsible for a light and precise solo, and two Ultra Noiseless Hot single pickups and one Ultra Double Tap humbucker pickup, as well as advanced wiring capabilities provide endless tonal possibilities - without noise." << endl;
		cout << "\nThe 'sculptural' contours of the lower deck are as beautiful as they are functional. This versatile, state-of-the-art tool will inspire you to new heights. Other features include arc pegs, chrome fittings and a top bone sill. The set includes a premium case." << endl;
		cout << endl;
		break;
	case 17:
		cout << "\tFENDER CUSTOM SHOP ARTISAN THINLINE TELE LTD - electric guitar\n\t\tPrice: 3703$\n\t\tCode of ware: " << code18 << endl;
		cout << "Electric guitar, 6 strings, custom shop, deck - ash, fingerboard - maple / ebony, pickups - Custom Shop Hand-Wound Loaded '51 Nocaster / Custom Shop Hand-Wound Open Loaded '51 Nocaster (SS), color - blue, in set of case. The skillfully selected materials, first - class componentsand fine work of Fender Custom Shop make the electric guitar FENDER CUSTOM SHOP ARTISAN THINLINE TELE LTD a delightful instrument.Take a hollow deck of 'baked' ash, add a neck of 'baked' maple shape 63 Start Style 'C' with a 9.5 - inch African ebony overlay, and you get a shiny, warmand dark TV caster with stunning bass." << endl;
		cout << "\nThe combination of the Hand-Wound Loaded '51 Nocaster and Hand-Wound Open Loaded '51 Nocaster pickups creates a vintage sound." << endl;
		cout << "\nOther features of FENDER CUSTOM SHOP ARTISAN THINLINE TELE LTD include Fat '50s Tele tone adjuster, Tele '58 -'63 bridge with RSD Saddles, 21 frets 6105, 3-position switch, 1-layer tortoise pickgard, vintage pegs, upper bone rim and string guide. The set includes a case, belt and certificate of authenticity." << endl;
		break;
	case 18:
		cout << "\tFENDER AMERICAN PROFESSIONAL JAZZ BASS MN SNG - bass guitar\n\t\tPrice: 2100$\n\t\tCode of ware: " << code19 << endl;
		cout << "Bass guitar of the new American Professional series, 4 strings, jazz bass, deck - alder, fingerboard - maple / maple, pickups - V-Mod J-Bass Pickups, color - gray, case included. FENDER AMERICAN PROFESSIONAL JAZZ BASS MN SNG combines the best of yesterday and today and is the most modern embodiment of inspiration from Fender.Developed by renowned master Michael Bump, the latest V - Mod Jazz Bass pickups have carefully selected alnico magnets of different types for a balanced sound of each string.At the same time the authenticand recognizable sound of Fender remains." << endl;
		cout << "\nThe modern slim profile of the 'Slim C' fingerboard is so comfortable in the hand that it becomes part of it, while the narrow and high frets of narrow-tall provide a familiar feel when playing and excellent intonation. The use of the Posiflex graphite anchor ™ increases the stability of the fingerboard and prevents it from warping." << endl;
		cout << "\nThe updated design of the pegs with a groove for the string creates the optimal angle of bending of the string on the threshold, and also provides a tight fit of the turns of the string on the peg to each other, which increases the sustain and improves the stability of the system." << endl;
		cout << endl;
		break;
	case 19:
		cout << "\tFENDER AMERICAN PROFESSIONAL JAZZ BASS V MN BLACK - bass guitar\n\t\tPrice: 2251$\n\t\tCode of ware: " << code20 << endl;
		cout << "Bass guitar, 5 strings, shape - Jazz Bass, soundboard - alder, fingerboard - maple / maple, pickups - V-Mod J-Bass Pickups (S-S), color - black, case included. The main features of FENDER AMERICAN PROFESSIONAL JAZZ BASS V MN BLACK : The bass guitar soundboard is made of alder.Maple fingerboard with maple overlay. 5 strings.The beaker is 864 mm.The width of the upper sill is 47.6 mm.Number of frets - 20. Fastening of a fretboard to a deck is executed on bolts.Set of pickups - V - Mod J - Bass Pickups(S - S).Bridge - 5 - String High Mass Vintage(HMV), (Strings - Through - Body or Topload).The color of the bass guitar is black.Case included." << endl;
		cout << "\nBass guitar FENDER AMERICAN PROFESSIONAL JAZZ BASS V MN BLACK is a representative of the PROFESSIONAL JAZZ BASS line. These bass guitars have high-quality electronics and accessories, a unique finish of all components, which is performed by highly skilled craftsmen." << endl;
		cout << "FENDER AMERICAN PROFESSIONAL JAZZ BASS V MN BLACK is made in black, a case is included." << endl;
		cout << endl;
		break;
	case 20:
		cout << "\tFENDER AMERICAN PROFESSIONAL JAZZ BASS V RW OLYMPIC WHITE - bass guitar\n\t\tPrice: 2151$\n\t\tCode of ware: " << code21 << endl;
		cout << "Bass guitar, 5 strings, shape - Jazz Bass, soundboard - alder, fingerboard - maple / rosewood, pickups - V-Mod J-Bass Pickups (S-S), color - white, case included. Main features of FENDER AMERICAN PROFESSIONAL JAZZ BASS V RW OLYMPIC WHITE : The bass guitar soundboard is made of alder.Maple fingerboard with rosewood overlay. 5 strings.The beaker is 864 mm.The width of the upper sill is 47.6 mm.Number of frets - 20. Fastening of a fretboard to a deck is executed on bolts.Set of pickups - V - Mod J - Bass Pickups(S - S).Bridge - 5 - String High Mass Vintage(HMV), (Strings - Through - Body or Topload).The color of the bass guitar is white.Case included." << endl;
		cout << "\nBass guitar FENDER AMERICAN PROFESSIONAL JAZZ BASS V RW OLYMPIC WHITE is a representative of the PROFESSIONAL JAZZ BASS line. These bass guitars have high-quality electronics and accessories, a unique finish of all components, which is performed by highly skilled craftsmen." << endl;
		cout << endl;
		break;
	case 21:
		cout << "\tFENDER PLAYER PRECISION BASS LH PF 3TSB - bass guitar\n\t\tPrice: 900$\n\t\tCode of ware: " << code22 << endl;
		cout << "Bass guitar, left-handed, 4 strings, shape - Precision Bass, soundboard - alder, fingerboard - maple / pao ferro, pickup - Player Series Alnico 5 Split Single-Coil Precision Bass, color - sunburst. The main features of the bass guitar FENDER PLAYER PRECISION BASS LH PF 3TSB: Alder deck with a glossy finish; Middle pickup Player Series Alnico 5 Split Single - Coil Precision Bass; Volumeand tone controls; Vulture profile - Modern 'C'; Overlay radius - 9.5 '." << endl;
		cout << "\nThere is nothing more classic than Fender's electric bass, and the FENDER PLAYER PRECISION BASS LH PF 3TSB bass guitar is as authentic as possible: it has a true Fender style and a deep, loud sound that has spawned many imitations. With a sense of smoothness during the game and stunning style, this deafening instrument is ready to break into the studio or on stage and help show the world your creative vision." << endl;
		cout << endl;
		break;
	case 22:
		cout << "\tFENDER PLAYER PRECISION BASS LTD MN EGN - bass guitar\n\t\tPrice: 900$\n\t\tCode of ware: " << code23 << endl;
		cout << "Bass guitar, 4 strings, shape - Precision Bass, soundboard - alder, fingerboard - maple, pickup - Player Precision Bass (S), color - green. There is nothing more classic than the Fender bass guitar, and the FENDER PLAYER PRECISION BASS LTD MN EGN limited edition is as authentic as possible - along with the company's genuine style and thunderous explosive sound that has spawned thousands of imitations." << endl;
		cout << "\nWith a smooth feel while playing and an incredible look that grabs the attention of others, this stunning instrument is ready to conquer studios and stages to show your creativity to the world." << endl;
		cout << endl;
		break;
	case 23:
		cout << "\tFENDER PLAYER PRECISION BASS MN 3TS - bass guitar\n\t\tPrice: 890$\n\t\tCode of ware: " << code24 << endl;
		cout << "Bass guitar, 4 strings, shape - Precision Bass, soundboard - alder, fingerboard - maple / maple, pickup - Player Series Precission Bass, color - sunburst. FENDER PLAYER PRECISION BASS MN 3TS is a four - string bass guitar from the P - BASS line.These guitars have high - quality electronics and accessories, careful finishing of all components, which is performed by highly skilled craftsmen.PRECISION BASS MN 3TS has a bright style and stunning sound.The soundboard of the guitar is made of alder.Maple fingerboard with maple overlay.Fastening of a fretboard to a deck is executed on bolts.Number of frets - 20, beaker - 864 mm, the width of the upper fretboard - 41.3 mm." << endl;
		cout << "\nhe Player Series Precision Bass pickup is mounted on the guitar deck, which forms a rich and rich sound. Bridge - fixed. Fender string set .045 - .105 installed." << endl;
		break;
	case 24:
		cout << "\tEPIPHONE UKULELE LES PAUL HCB - ukulele\n\t\tPrice: 150$\n\t\tCode of Ware: " << code25 << endl;
		cout << "Electroacoustic ukulele, 4 strings, shape - Les Paul, upper deck - maple, shell and lower deck - mahogany, fingerboard - okume / rosewood, color - sunburst, case included. Epiphone Ukulele Les Paul is an unusual electroacoustic ukulele with a design in the style of the legendary Les Paul electric guitar.In this instrument, Epiphone used its rich experience in creating electric guitars, applying it to the ukulele.Upon closer examination, it turns out that he has a lot of features of electric guitars, and only the structureand beaker are reminiscent of traditional ukuleles.Like the electric guitar, the Les Paul ukulele has a mahogany body, and the top is made of AAA fire maple, an okume wood neck.";
		cout << " The shape of the deck exactly repeats the prototype, and the sunburst coating is an integral part of the heritage of this model. Like the 'adult' Les Paul, the body of the ukulele has a white edging, emphasizing its delicate lines. The fingerboard is bolted to the body and has 19 frets, which is enough for a beaker of only 15 '.Rosehip fingerboard cover has a pronounced radius, which is also typical for electric guitars, and the shape of the fingerboard head is the same as the prototype.The accuracyand smoothness of the operation of the studs, which the Epiphone Ukulele Les Paul is certainly at a height, is of great importance for the short beaker." << endl;
		cout << "\nEpiphone Ukulele Les Paul is equipped with a passive piezo pickup in the bridge, which allows you to connect the instrument to an external amplifier at concerts and also use it for recording. The pickup emits a linear signal, so the ukulele must be connected to a mixing console, DI-box or use a special amplifier for acoustic guitars. The socket for connection is in its usual place - on a shell." << endl;
		cout << endl;
		break;
	case 25:
		cout << "\tEPIPHONE UKULELE LES PAUL VSB - ukulele\n\t\tPrice: 150$\n\t\tCode of ware: " << code26 << endl;
		cout << "Electroacoustic ukulele, 4 strings, Les Paul shape, upper maple deck, shell and lower mahogany deck, okume wood fingerboard, case included. Epiphone Ukulele Les Paul is an unusual electroacoustic ukulele with a design in the style of the legendary Les Paul electric guitar.In this instrument, Epiphone used its rich experience in creating electric guitars, applying it to the ukulele.Upon closer examination, it turns out that he has a lot of features of electric guitars, and only the structureand beaker are reminiscent of traditional ukuleles.Like the electric guitar, the Les Paul ukulele has a mahogany body, and the top is made of AAA fire maple, an okume wood neck.";
		cout << " The shape of the deck exactly repeats the prototype, and the sunburst coating is an integral part of the heritage of this model. Like the 'adult' Les Paul, the body of the ukulele has a white edging, emphasizing its delicate lines. The fingerboard is bolted to the body and has 19 frets, which is enough for a beaker of only 15 '.Rosehip fingerboard cover has a pronounced radius, which is also typical for electric guitars, and the shape of the fingerboard head is the same as the prototype.The accuracyand smoothness of the operation of the studs, which the Epiphone Ukulele Les Paul is certainly at a height, is of great importance for the short beaker." << endl;
		cout << "\nEpiphone Ukulele Les Paul is equipped with a passive piezo pickup in the bridge, which allows you to connect the instrument to an external amplifier at concerts, as well as use it for recording. The pickup emits a linear signal, so the ukulele must be connected to a mixing console, DI-box or use a special amplifier for acoustic guitars. The socket for connection is in its usual place - on a shell." << endl;
		cout << endl;
		break;
	case 26:
		cout << "\tFENDER UKULELE VENICE SOPRANO BLACK WN - ukulele\n\t\tPrice: 88$\n\t\tCode of ware: " << code27 << endl;
		cout << "Ukulele, size - soprano, upper deck - laminated linden, sides and back - laminated hardwood, fingerboard - NATO / walnut, color - black. FENDER UKULELE VENICE SOPRANO BLACK WN is a ukulele in a soprano body from the famous American guitar brand Fender.The creators of the model drew inspiration from the unique atmosphere of Venice(California), and Venice ukulele conveys this free atmosphere.The model has a classic recognizable sound." << endl;
		cout << "\nThe body of the ukulele is made of laminated hardwood, it is compact and comfortable to play. The upper deck is made of laminated linden. The soprano model is a ukulele of the smallest possible size, suitable for beginners, as well as musicians with a small hand size, and the sound is not inferior to larger instruments. Ukulele FENDER UKULELE VENICE SOPRANO BLACK WN can be used anywhere: on the beach, in the studio or at performances." << endl;
		cout << "\nThe fingerboard of the Slim C profile is made of NATO wood with an overlay from a nut, it also gives additional comfort when playing, and the No-Tie bridge allows to change strings easily and quickly. The fingerboard has 12 frets, the beaker is 13.6 '(345 mm).The ukulele has a stylish appearance.The model is presented in black with chrome fittings.The body has a matte finish and cream edging.manufactured by Fender." << endl;
		cout << endl;
		break;
	case 27:
		cout << "\tFENDER UKULELE VENICE SOPRANO DAPHNE BLUE WN - ukulele\n\t\tPrice: 88$\n\t\tCode of ware: " << code28 << endl;
		cout << "Ukulele, 4 strings, size - soprano, upper deck - laminated linden, shell and lower deck - laminated hardwood, fingerboard - NATO / walnut, color - blue. FENDER UKULELE VENICE SOPRANO DAPHNE BLUE WN is a ukulele in a soprano body from the famous American guitar brand Fender.The creators of the model drew inspiration from the unique atmosphere of Venice(California), and Venice ukulele conveys this free atmosphere.The model has a classic recognizable sound." << endl;
		cout << "\nThe body of the ukulele is made of laminated hardwood, it is compact, easy to play. The upper deck is made of laminated linden. The soprano model is a ukulele of the smallest possible size, suitable for beginners, as well as musicians with a small hand size, and the sound is not inferior to larger instruments. Ukulele FENDER UKULELE VENICE SOPRANO DAPHNE BLUE WN can be used anywhere: on the beach, in the studio or at performances." << endl;
		cout << "\nThe fingerboard of the Slim C profile is made of NATO wood with an overlay from a nut, it also gives additional comfort when playing, and the No-Tie bridge allows to change strings easily and quickly. The fretboard has 12 frets, the beaker is 13.6 '(345 mm).The ukulele has a stylish appearance.The model is presented in blue with chrome fittings.The case has a matte finishand cream edging.manufactured by Fender." << endl;
		cout << endl;
		break;
	case 28:
		cout << "\tFENDER UKULELE VENICE SOPRANO NATURAL WN - ukulele\n\t\tPrice: 88$\n\t\tCode of ware: " << code29 << endl;
		cout << "Ukulele, 4 strings, size - soprano, upper deck - laminated linden, shell and lower deck - laminated hardwood, fingerboard - NATO / walnut, color - natural. FENDER UKULELE VENICE SOPRANO NATURAL WN is a ukulele in a soprano body from the famous American guitar brand Fender.The creators of the model drew inspiration from the unique atmosphere of Venice(California), and Venice ukulele conveys this free atmosphere.The model has a classic recognizable sound." << endl;
		cout << "\nThe body of the ukulele is made of laminated linden. The soprano model is a ukulele of the smallest possible size, suitable for beginners, as well as musicians with a small hand size, and the sound is not inferior to larger instruments. Ukulele FENDER UKULELE VENICE SOPRANO NATURAL WN can be used anywhere: on the beach, in the studio or at performances." << endl;
		cout << "\nThe fingerboard of the Slim C profile is made of NATO wood with an overlay from a nut, it also gives additional comfort when playing, and the No-Tie bridge allows to change strings easily and quickly. The fingerboard has 12 frets, the beaker is 13.6 '(345 mm).The ukulele has a stylish appearance.The model is presented in natural color with chrome fittings.The case has a matte finishand cream edging.manufactured by Fender." << endl;
		cout << endl;
		break;
	case 29:
		cout << "\tFENDER UKULELE VENICE SOPRANO SHELL PINK WN - ukulele\n\t\tPrice: 88$\n\t\tCode of ware: " << code30 << endl;
		cout << "Ukulele, size - soprano, upper deck - laminated linden, sides and back - laminated hardwood, fingerboard - NATO / walnut, color - pink. FENDER UKULELE VENICE SOPRANO SHELL PINK WN is a ukulele in a soprano body from the famous American guitar brand Fender.The creators of the model drew inspiration from the unique atmosphere of Venice(California), and Venice ukulele conveys this free atmosphere.The model has a classic recognizable sound." << endl;
		cout << "\nThe body of the ukulele is made of laminated hardwood, it is compact, easy to play. The upper deck is made of laminated linden. The soprano model is a ukulele of the smallest possible size, suitable for beginners, as well as musicians with a small hand size, and the sound is not inferior to larger instruments. Ukulele FENDER UKULELE VENICE SOPRANO SHELL PINK WN can be used anywhere: on the beach, in the studio or at performances." << endl;
		cout << "\nThe fingerboard of the Slim C profile is made of NATO wood with an overlay from a nut, it also gives additional comfort when playing, and the No-Tie bridge allows to change strings easily and quickly. The fingerboard has 12 frets, the beaker is 13.6 '(345 mm).The ukulele has a stylish appearance.The model is presented in pink with chrome fittings.The body has a matte finish and cream edging.manufactured by Fender." << endl;
		break;
	case 30:
		cout << "\tAMPEG BA-112 V2 - Amplifier\n\t\tPrice: 441$\n\t\tCode of ware: " << code31 << endl;
		cout << "Bass combo amplifier, 75 W RMS power, Ampeg Custom 1x12 'speaker, 4 Ohm impedance, 3 - band EQ, Ultra Hi / Lo boosts, Bass Scrambler overdrive, headphone output. AMPEG BA - 112 V2 has the classic sound of Ampeg amplifiers.This combo amplifier is ideal for practice, rehearsaland small stage.The front panel control box provides quick access to adjustments, which is especially convenient for live performancesand rehearsals.";
		cout << "A unique new circuitry adds dynamics and harmonics to the sound like a tube amp, while the Bass Scrambler ™ overdrive section - built-in legendary overdrive module - adds flavor and flexibility to any style of music." << endl;
		cout << "\nThe new design, which allows the combo to be tilted at 60 degrees, delivers clear, natural sound without losing tonal characteristics and performance nuances while playing. In addition to this, the headphone output and AUX input allow you to play without disturbing others, at any time of the day." << endl;
		cout << "\nLike all Ampeg products, the BA series is designed in collaboration with musicians and manufactured using the finest components. AMPEG BA-112 V2 will perfectly cope with tasks that require powerful and high-quality sound at a controlled volume." << endl;
		cout << endl;
		break;
	case 31:
		cout << "\tAMPEG BA-210 V2 -  Amplifie\n\t\tPrice: 732$\n\t\tCode of ware: " << code32 << endl;
		cout << "Bass Guitar Combo Amplifier, 450W RMS, Ampeg Custom 2x10 'Speakers, 16 Ohm Impedance, 1' Tweeter, 3-Band EQ, Balanced Out, FX Loop, Ultra Hi / Lo boosts, Bass Scrambler overdrive, Headphone Out AMPEG BA - 210 V2 has the classic sound of Ampeg amplifiers.A combo amplifier is ideal for a full - fledged performance with a group.The device has all the features a professional musician needs to work on stage or in the studio.";
		cout << " It features 450 watts of power, flexible front panel settings and controls, unique circuitry for the dynamics and sound of a tube amp, the Bass Scrambler ™ overdrive section - a built-in legendary overdrive module to add a touch of piquancy and flexibility to any style of music, a new design, allows the combo to be tilted 60 degrees for clear, natural sound without losing tonal characteristics and performance nuances when playing, balanced line out and effects loop, 1 'switchable HF tweeter." << endl;
		cout << "\nLike all Ampeg products, the BA series is designed in collaboration with musicians and manufactured using the finest components." << endl;
		cout << endl;
		break;
	case 32:
		cout << "\tAMPEG PF-350 - Amplifier\n\t\tPrice: 432$\n\t\tCode of ware: " << code33 << endl;
		cout << "Bass guitar amplifier in head format, power 350 W, resistance 4 Ohm / 8 Ohm, transistor preamplifier, class D power amplifier, 3-band equalizer, limiter, balanced DI-output, effects loop, attenuator -15 dB, output on headphones. AMPEG PF - 350 - a compact bass amplifier 'head' from the Portaflex series with a power of 350 W with a 3 - band equalizer and limiter.Today you can have high - quality and powerful sound not only with the 'wall' of equipment behind you.The PF - 350 bass amplifier weighs less than 4 kg and is only 69 mm high!And do not think that the compact size is not able to give the right sound.";
		cout << "Like other models in the Portaflex series, the PF-350 has a deep warm tone that Ampeg users appreciate. The built-in direct box allows you to connect directly to the mixer or recorder and transmit the desired sound. And best of all, connect the 'head' to a suitable bass cabinet from the Portaflex series, both for sound and for a spectacular appearance." << endl;
		cout << endl;
		break;
	case 33:
		cout << "\tAMPEG PF-500 - Amplifier\n\t\tPrice: 562$\n\t\tCode of ware: " << code34 << endl;
		cout << "Bass guitar amplifier in head format, power 500 W, 3-band equalizer, built-in limiter, headphone output, balanced line output, effects loop. The AMPEG PF - 500 bass amplifier, lightand ultra - compact, is capable of delivering a staggering 500 watts of power, providing a clean, classic Ampeg tone.The amplifier can be mounted on the cover of the cabinetand stored / transported inside its housing." << endl;
		cout << "RMS output power - 500 W @ 4 Ohms, MOSFET Preamp, D Class Power Amp, built-in compressor, 3-band equalizer with 5-position midrange control section, balanced line output, effect loop with effect adjustment (foot switch can be used), output on headphones / line input. Also PF-500 is equipped with the compressor for dense and pure tone at a high volume level. If you are looking for a powerful amplifier with a good tone and compact size, then AMPEG PF-500 is what you need!" << endl;
		cout << endl;
		break;
	case 34:
		cout << "\tAMPEG SVT-3PRO - Amplifier\n\t\tPrice: 1407$\n\t\tCode of ware: " << code35 << endl;
		cout << "Amplifier 'head' 450 W / 4 Ohm, 275 W / 8 Ohm, lamps: preamp - 3x12AX7, drive - 1x12AX7, 1x12AU7, 3 bands of equalizer, control of the middle of 5 positions, graphic equalizer of 9 bands, Ultra Low / High Boosts, balanced output , loop effects. The AMPEG SVT - 3PRO bass amplifier has a size of 2 units of rack space.It is easily established as 'head', for this purpose on the lower side of a design 4 rubber legs for bigger stability on any surface are provided.The design is very strongand reliable, made of a metal alloy with a black covering, on the front panel handlesand sliders of management of the amplifier are conveniently located that allows musicians to make adjustments in the course of work with ease." << endl;
		cout << "\nAMPEG SVT-3PRO has a power of 450 watts (rms) at 4 ohms or 275 watts at 8 ohms. The amplifier is a hybrid, as the output stage is prepared on field-effect transistors, and the pre-stage stages - tube. The scheme uses one lamp - a lamp type 12AU7 or 12AX. Cooling from overheating of the forced amplifier system, thanks to the built-in fan. To increase the reliability of the device and increase the protection of speakers during transients, which are activated when the amplifier is turned on, pre-observing the relay protection." << endl;
		cout << "\nThe amplifier has one tool input with a convenient button attenuator Pad. There are also Bright and Gain buttons, as well as a Peak / Mute LED peak indicator. The control system also has Ultra Lo and Ultra Hi buttons, which include an additional rise in the frequency response. Tube Gain is a control that allows you to change the whole character of the sound of the bass amplifier from very sharp, penetrating to smooth and soft. The Mute button mutes the unit during instrument setup. The Master knob adjusts the overall volume." << endl;
		cout << "\nOn the back of the AMPEG SVT-3PRO there are 3 outputs for connecting speakers - one Speakon and two jacks. There are also asymmetric line output (jack) and symmetric transformer line output (XLR), which have a common level control and a common button to switch the signal sampling point after or before the equalizer. On the back of the AMPEG SVT-3PRO there is an input for a power amplifier and an output for a preamplifier, jacks Preamp Out and Power Amp In, a 3-pin connector for connecting a 2-button footswitch, an output for a tuner." << endl;
		cout << "\nThe AMPEG SVT-3PRO amplifier has two equalizers. First: 3-way with Bass, Midrange (parametric), Treble; Second: 9-way graphic. The parameter frequency tuning of the parametric equalizer is discrete and has five positions. The graphic equalizer has a button to turn on Graphic EQ and a convenient level control, which is presented as an additional, tenth Level slider. The current status of the graphic equalizer can be monitored using the Graphic EQ ON LED." << endl;
		cout << endl;
		break;
	case 35:
		cout << "\tAMPEG SVT-4PRO - Amplifier\n\t\tPrice: 1969$\n\t\tCode of ware: " << code36 << endl;
		cout << "Bass guitar amplifier in head format, 600 W power, 2 Ohm resistance (490 V / 4 Ohm, 300 V / 8 Ohm), 3x12AH7, 9-band graphic equalizer, 3-band equalizer with parametric middle, Ultra Low / High Boosts , balance output 2pcs, loop eff In the world of high - performance bass amplifiers, AMPEG SVT amplifiers are a separate class.In the best AMPEG tradition, the SVT - 4PRO gives you more power, performanceand flexibility than any other bass amp of its kind." << endl;
		cout << "\nThe AMPEG SVT-4PRO amplifier provides an extensive palette of tonal settings. The Frequency control allows you to select the center frequency for the Midrange control, providing 5 different midrange sound options. And if that's not enough, you can use a 9-band graphic equalizer to enhance your sound or to tune a 'second channel' futswitch to increase the volume for your bass solo." << endl;
		cout << "\nThe AMPEG SVT-4PRO amplifier is designed for musicians who want to have SVT sound and performance (with some modern improvements) in a comfortable, powerful and durable design. With a huge and diverse group of fans among artists, including Tony Levin (Peter Gabriel / King Crimson), Cliff Williams (AC / DC), Pablo Stennett (Ziggy Marley) and many others, AMPEG SVT-4PRO is a real favorite among professionals. In the world of high-performance bass amps, it has everything you need to create your sound." << endl;
		cout << endl;
		break;
		break;
	case 36:
		cout << "\tFENDER PEDAL FULL MOON DISTORTION - Effects pedal\n\t\tPrice: 150$\n\t\tCode of ware: " << code37 << endl;
		cout << "Effects pedal, for electric guitars, Distortion, control: Hi-Treb, Treble, Middle, Bass, Level, Boost, Gain / 2 switches: Texture, Bite, 3-band equalizer, body - metal, power supply - battery / 9V power supply. FENDER PEDAL FULL MOON DISTORTION - guitar pedal Distortion.The effect allows you to get a powerful, aggressive soundand has flexible customization options.The Texture switch allows you to use symmetricaland asymmetrical signal processing modes, and the Bite switch shifts the upper part of the midrange to get an impressive attack that will allow the guitar sound to cut through any mix.";
		cout << " The 3-band equalizer gives a wide range of sound adjustment options, and the optional Hi-Treble knob fine-tunes the treble. The second additional footswitch allows you to add up to 12 dB. The Full Moon Distortion design uses a completely original scheme." << endl;
		cout << "\nWhen designing this model, Fender experts consulted with many musicians, and as a result, a pedal was created that best suited the stage. It has a sturdy anodized aluminum body, and the classic Jewel LED indicator gives it a classic Fender look. The controls are also equipped with LED backlighting, which allows you to easily control the settings on a dark scene. The battery is convenient to change thanks to a magnetic cover of own development of Fender." << endl;
		cout << endl;
		break;
	case 37:
		cout << "\nDIGITECH FS3X - Footswitch for effects processors\n\t\tPrice: 35$\n\t\tCode of ware: " << code38 << endl;
		cout << "Futswitch, for effects pedals and processors, compatible with The Jimi Hendrix Experience, The JamMan and Expression Factory and others, control: Mode / Up / Down buttons, 1/4 'output, metal body, 3 m cord for connection included. DIGITECH FS3X is a convenient 3 - button ergonomically shaped switch from a well - known American manufacturer of guitar effects pedals and processors." << endl;
		cout << "\nThe model is suitable for use with DigiTech devices, including The Jimi Hendrix Experience, The JamMan and Expression Factory. Futswich increases the usability of the equipment during classes and live performances, and adds additional functionality." << endl;
		cout << "\nControl 3 buttons: Mode, Up, Down. Depending on the equipment you use, the FS3X can be conveniently operated without holding hands, with functions such as: preset or effect selection, mode change, automatic start / stop or automatic recording." << endl;
		cout << "\nThe futswich has a strong metal case of black color. The model is compact and portable, takes up little space. A 3 meter long cable is included." << endl;
		cout << endl;
		break;
	case 38:
		cout << "\tDIGITECH OBSCURA - Effects pedal\n\t\tPrice: 201$\n\t\tCode of ware: " << code39 << endl;
		cout << "Guitar pedal, stereo delay, 2 inputs and 2 outputs, 4 types of delay: ANALOG, TAPE, Lo-Fi, Reverse, True Bypass. DIGITECH OBSCURA - a guitar pedal of a stereo delay from the known American producer.There are four types of effect : vintage Analog, classic Tape, Lo - Fi with forcibly reduced range and depth, and Reverse, which reproduces repetitions in reverse order.All these effects can be further modified with the Tone / Degrade rotary knob, and you can adjust their playback with Time / Repeats.";
		cout << " The Delay Tails On / Off switch determines the behavior of the pedal in bypass mode - when pressed, the repeated signal will continue to sound after the effect is turned off. True Bypass mode is provided, in which the pedal does not affect the original sound. The model is enclosed in a compact case of unusually bright design. Independent input and output connectors 1/4 jack are located on the sides." << endl;
		cout << endl;
		break;
	case 39:
		cout << "\tAMPEG OPTO COMP - Effect pedal\n\t\tPrice: 129$\n\t\tcode of ware: " << code40 << endl;
		cout << "Analog effects pedal, bass guitar compressor, controls - CompreS-Sion, Release, Output Level, power supply - 9V. AMPEG OPTO COMP - bass guitar pedal effects compressor from the famous American manufacturer." << endl;
		cout << "\nFeature of the OPTO COMP model - the compact case having the sizes only 114 x 66 x 56 mm. This pedal will easily fit in the pocket of any guitar case, does not take up much space on stage or in the pedalboard. The presented model differs in high quality of the used electronic components and assembly." << endl;
		cout << "\nThe processed sound emitted by the compressor is very clean and transparent, while the timbre of the instrument remains unchanged, the bass guitar sounds very natural. The connectors for connecting a 1/4 'jack are located on the left and right side of the pedal.Power is supplied from a standard AC adapter or a 9 V battery(not included)." << endl;
		cout << "\nUsing the effect is convenient and easy. The controls and indicators are located on top of the pedal - the controls Compression, Release, Output Level and the power button." << endl;
		cout << endl;
		break;
	case 40:
		cout << "\tFENDER PEDAL LOST HIGHWAY PHASER - Effect pedal\n\t\tPrice: 125$\n\t\tCode of ware: " << code41 << endl;
		cout << "Pedal, phaser, two speed modes with separate effect depth controls, two wave types. The main features of the FENDER PEDAL LOST HIGHWAY PHASER : Analog effect pedal phaser with 4 - and 8 - stage phasing; Slow / Fast switch with independent Rateand Depth controls; Blendand Feedback regulators; Sinusoidaland triangular waves; Dynamically sensitive modulation frequency." << endl;
		cout << "\nCommon in the late 60's - early 70's, phasers create a sense of movement and add volume to your sound. The FENDER PEDAL LOST HIGHWAY effects pedal brings powerful, flexible analog phasing to your equipment. The Slow and Fast foot-switchable speeds - each with its own independent Rate and Depth controls - make it easy to alternate the slow phase with fast and distorted modulation. The Wave switch changes the waveform (sinusoidal and triangular), while 4- and 8-stage phasing makes it easier to add extra resonance on the go. The Sensitivity knob allows you to change the modulation frequency based on the dynamics of your game - turn it on and the intensity of phasing will increase." << endl;
		cout << endl;
		break;
	case 41:
		cout << "\tFENDER PEDAL MARINE LAYER REVERB - Effect pedal\n\t\tPrice: 145$\n\t\tCode of ware: " << code42 << endl;
		cout << "Effect pedal, reverb, control - Reverb Time, Damping, Pre Delay, Type Toggle, Variation Toggle, Filter Toggle, Effect Level, Effect Mute Footswitch, input - 1 x 1/4 ', output - 1 x 1 / 4', power - 9 V battery or power supply. The main features of the effects pedal FENDER PEDAL MARINE LAYER REVERB : Management: Reverb Time, Damping, Pre Delay, Type Toggle(Hall / Room / Special), Variation Toggle(1 / 2), Filter Toggle(On / Off), Effect Level, Effect Mute Footswitch; Input: 1 x 1 / 4 'Instrument; Output: 1 x 1/4' Instrument; Power supply : 9 V battery or 9 V power supply; Power consumption : 271 mA; Input resistance : 1 Mм; Output resistance : 1.5 kО; Housing material : Anodized aluminum." << endl;
		cout << "\nA reverberator is a very important piece of equipment for any guitarist. You can add volume to the sound or drown the signal in a flickering echo - in any case, FENDER PEDAL MARINE LAYER REVERB can do anything. Available types of reverberation (including the classic Hall, Room and the latest Shimmer) make this pedal simply irreplaceable." << endl;
		cout << endl;
		break;
		break;
	case 42:
		cout << "\tKORG VPT-1 - Tuner\n\t\tPrcie: 30$\n\t\tCode of ware: " << code43 << endl;
		cout << "Vocal tuner, for pitch measurement, tuning range - A1 - C7, with display, built-in microphone, Sound Out and Sound Back functions, 3.5 mm headphone jack, AAA battery operation, color black KORG VPT - 1 is a vocal tuner simulator developed by Korg, which has more than 40 years of experience in the production of tuners, which has earned the full trust of musicians." << endl;
		cout << "\nKORG VPT-1 will help to raise your vocal abilities to a new level. Thanks to the tuner, you can control the pitch, which is very important especially when recording a voice, as it can sound different than live." << endl;
		cout << "\nKORG VPT-1 is located vertically and it is convenient to hold it in the left hand. The case has a built-in microphone, display and three LEDs (two red and one blue). When you sing into the microphone, the note is displayed on one of the two note mills, with a treble clef and a bass clef (which give an idea of ​​the exact pitch). The red LEDs indicate, above or below the tone, relative to what you need. As soon as you sing 'correctly', the blue LED in the center will light up. Individual features are also taken into account by the octave shift function, while maintaining the display of notes within five lines." << endl;
		cout << "\nOne of the features of KORG VPT-1 is the ability to adjust the setting - there are three levels of difficulty (EASY / MEDIUM / HARD). It is better to start with EASY when you gain more skills to increase to MEDIUM and then move on to HARD." << endl;
		cout << "\nThe Sound Out function, which generates a reference tone, plays a very important role in determining the absolute pitch of the sound. This is handy when you perform songs that start with a vocal part. You can also use it to improve the relative pitch yourself by listening to the reference tone repeatedly, and then try to play it back. The Sound Back feature also helps you improve the pitch on your own by outputting the reference tone closest to your voice through the headphone jack." << endl;
		cout << endl;
		break;
	case 43:
		cout << "\tFENDER AG6 - Tuner\n\t\tPrice: 35$\n\t\tCode of Ware: " << code44 << endl;
		cout << "Guitar tuner, tuning range - C1-B8, calibration range - A4-440 Hz, built-in microphone, battery status indicator, backlit display, power supply - battery / power supply, color - blue. The blue FENDER AG6 tuner from the well - known company FENDER has a backlit display that allows you to adjust it on a darkened stage.In addition, we note the presence of connectors input 1 / 4 'and output 1/4', built - in microphone and battery status indicator, which will be a huge plus in a live performance." << endl;
		cout << "\nThe presented tuner is perfect for beginner guitarists and their more experienced colleagues, for whom a huge role is played by the high quality of the devices and their ease of use." << endl;
		cout << endl;
		break;
	case 44:
		cout << "\tFENDER AG6 - Tuner\n\t\tPrice 35$\n\t\tCode of ware: " << code45 << endl;
		cout << "Guitar tuner, tuning range - C1-B8, calibration range - A4-440 Hz, built-in microphone, battery status indicator, backlit display, power supply - battery / power supply, color - red. The FENDER AG6 red tuner TUNER RED SPARKLE EXP II from the well - known company FENDER has the display with illumination that allows to adjust it on the darkened scene.In addition, we note the presence of connectors input 1 / 4 'and output 1/4', built - in microphone and battery status indicator, which will be a huge plus in a live performance." << endl;
		cout << "\nThe FENDER AG6 TUNER RED SPARKLE EXP II tuner is perfect for beginner guitarists and their more experienced colleagues, for whom the high quality of the devices and their ease of use play a huge role." << endl;
		cout << endl;
		break;
	case 45:
		cout << "\tFENDER AX-12 SL - Tuner\n\t\tPrice: 64$\n\t\tCode of ware: " << code46 << endl;
		cout << "Tuner guitar, chromatic, LED indication, silent setting mode, low battery warning function, built-in microphone, power supply - battery / power supply, color - silver. The well - known company FENDER presents the chromatic guitar tuner AX - 12 AUTO / CHROMATIC TUNER SL, which works from an adapter or a 9B battery.In addition, the device has a low battery warning function, 3 tuning modes, built - in microphone, 1 / 4 'jack input / output and easy calibration." << endl;
		cout << "\nThis tuner is quite easy to use and thanks to its excellent quality will serve you for a long time." << endl;
		cout << endl;
		break;
	case 46:
		cout << "\tFENDER BULLET TUNER - Tuner\n\t\tPrice: 24$\n\t\tCode of ware: " << code47 << endl;
		cout << "Tuner clip for guitars and bass guitars. The main features of the FENDER BULLET TUNER tuner : Oscillation - based tuning system; Color LED display; Strong clip; Automatic sleep mode after 10 minutes of inactivity to save battery; Press the power button twice to continue working; Setting range : A(27.5 Hz) - C(4186 Hz); Accuracy: ± 1 cent; Frequency A4 : 440 Hz; Power supply : 2 x 1.5 V(LR44) alkaline batteries(included)." << endl;
		cout << "\nDesigned with aesthetics and reliability in mind during live performances, the FENDER BULLET TUNER is an unobtrusive, incredibly accurate instrument for musicians of all levels. A powerful device with a noise-protected vibration sensor provides precise chromatic tuning of electric, acoustic and bass guitars, and a bright color LED display shows well the inscriptions anywhere." << endl;
		cout << endl;
		break;
	case 47:
		cout << "\tFENDER FT-1 PRO CLIP-ON TUNER BLACK - Tuner\n\t\tPrice: 15$\n\t\tCode of ware: " << code48 << endl;
		cout << "Clip-on tuner, monochrome backlit display, black. FENDER FT - 1 PRO CLIP - ON TUNER BLACK - a compact chromatic clip tuner from the famous American guitar brand, a model presented at the summer exhibition NAMM in 2017. The model differs in high reliability and convenience in use." << endl;
		cout << "\nThe tuner is universal, it can be used not only to tune guitars, but also for bass guitars and other string instruments, such as ukuleles or violins. The FT-1 is equipped with a modern liquid crystal display, which allows you to easily see the settings even in the dark. The scale with the arrow clearly shows how precisely the instrument is tuned, and as soon as the string is tuned, the screen backlight turns green." << endl;
		cout << "\nThe tuner works stably even at very high levels of external noise thanks to the built-in sensor which captures vibrations. Setting range - from B0 to B7. Thanks to the thought-over design the tuner fixed on a head of a fretboard of the tool does not interfere, it can be established both behind, and in front, and it is possible to arrange the screen so that it was always in sight. Power is supplied by one CR2032 miniature lithium battery (3 V)." << endl;
		cout << endl;
		break;
	case 48:
		cout << "\tAVZHEZH ASP1048 - pack of acoustic strings\n\t\tPrice: 4$\n\t\tCode of ware: " << code49 << endl;
		cout << "Acoustic guitar strings, set - 6 strings, phosphor bronze, light tension, size - .010 - .048. Acoustic guitar strings AVZHEZH ASP1048 Standard Acoustics are made of imported tinned high - carbon steel.The strings with the winding have a hexagonal core and a bronze winding with the addition of phosphorus.Phosphor bronze gives deep bass and bright tops, having a pleasant overtone.The addition of phosphorus makes the strings more durable, reduces corrosionand counteracts the dimming of the sound of the strings.Light tension, string caliber : .010, .014, .023, .030, .039, .048." << endl;
		cout << endl;
		break;
	case 49:
		cout << "\tAVZHEZH ASS1150 - Pack of acoustic string\n\t\tPrice: 4\n\t\tCode of ware: " << code50 << endl;
		cout << "Acoustic guitar strings, set - 6 strings, silver-plated nickel, standard tension, size - .011 - .050. Acoustic guitar strings AVZHEZH ASS1150 Standard Acoustics are made of imported tinned high - carbon steel.The strings with the winding have a hexagonal core and a nickel - plated silver - plated winding.The silver - plated coating gives the strings a special sonority and expressiveness.Standard tension, string caliber : .011, .015, .024, .032, .042, .050." << endl;
		cout << endl;
		break;
	case 50:
		cout << "\nELIXIR AC NWL - Pack of acoustic strings\n\t\tPrice: 21$\n\t\tCode of ware: " << code51 << endl;
		cout << "Strings for acoustic guitar, set - 6 strings, bronze, tension - light, NanoWeb technology, anti-corrosion coating, size - .012 - .053. ELIXIR AC NWL is a set of strings for a 6 - string acoustic guitar with a winding covered with a film made of nanotechnology NanoWeb.The coating gives the strings a bright and open sound.To the touch, they are no different from uncoated strings.Dense timbreand clear tone last much longer than with other uncoated strings." << endl;
		cout << "\nELIXIR is the only brand whose strings are completely covered with a polymer film, protecting the core, winding and, last but not least, the space between the turns of the winding from dirt and corrosion. Thus, the string is completely protected, and its mechanical properties are not violated. The company also uses Anti-Rust technology in production, which consists in applying a special anti-corrosion coating to the strings without winding. The special composition does not prevent the string from oscillating freely, and therefore does not affect its sound. NanoWeb technology and Anti-Rust coating provide longer service life and anti-corrosion effect. String caliber: .012, .016, .024, .032, .042, .053." << endl;
		cout << endl;
		break;
	case 51:
		cout << "\tELIXIR EL NW L 7 - Pack of electric guitar`s strings\n\t\tPrice: 20$\n\t\tCode of ware: " << code52 << endl;
		cout << "Strings for electric guitar, set - 7 strings, steel, tension - light, NanoWeb technology, anti-corrosion coating, size - .010 - .056. ELIXIR EL NW L 7 is a set of strings for a 7 - string electric guitar with a winding, covered with a film made of nanotechnology NanoWeb.The coating gives the strings a brightand open sound.To the touch, they are no different from uncoated strings.Dense timbreand clear tone last much longer than with other uncoated strings." << endl;
		cout << "\nELIXIR is the only brand whose strings are completely covered with a polymer film, protecting the core, winding and, last but not least, the space between the turns of the winding from dirt and corrosion. Thus, the string is completely protected, and its mechanical properties are not violated. The company also uses Anti-Rust technology in production, which consists in applying a special anti-corrosion coating to the strings without winding. The special composition does not prevent the string from oscillating freely, and therefore does not affect its sound. NanoWeb technology and Anti-Rust coating provide longer service life and anti-corrosion effect. String caliber: .010, .013, .017, .026, .036, .046, .056." << endl;
		cout << endl;
		break;
	case 52:
		cout << "\tELIXIR EL NW L - Pack of electric guitar`s strings\n\t\tPrice: 16\n\t\tCode of ware: " << code53 << endl;
		cout << "Strings for electric guitar, set - 6 strings, nickel-plated steel, light tension, NanoWeb technology, anti-corrosion coating, size - .010 - .046. ELIXIR EL NW L is a set of strings for a 6 - string electric guitar with a winding, covered with a film made of nano - technology NanoWeb.The coating gives the strings a bright and open sound.To the touch, these strings are no different from uncoated strings.Dense timbreand clear tone last much longer than with other uncoated strings.ELIXIR is the only brand whose strings are completely covered with a polymer film, protecting the string core, windingand, last but not least, the space between the turns of the winding from dirtand corrosion.";
		cout << " Thus, the string is completely protected, and its mechanical properties are not violated. The company also uses Anti-Rust technology in production, which consists in applying a special anti-corrosion coating to the strings without winding. The special composition does not prevent the string from oscillating freely, and therefore does not affect its sound. NanoWeb technology and Anti-Rust coating provide longer service life and anti-corrosion effect. String caliber: .010, .013, .017, .026, .036, .046." << endl;
		cout << endl;
		break;
	case 53:
		cout << "\tELIXIR EL NW LH - pack of electric guitar`s strings\n\t\tPrice: 16$\n\t\tCode of ware: " << code54 << endl;
		cout << "Strings for electric guitar, set - 6 strings, nickel-plated steel, tension - light top / hard bottom, NanoWeb technology, anti-corrosion coating, size - .010 - .052. ELIXIR EL NW LH is a set of strings for a 6 - string electric guitar with a winding, covered with a film made of nanotechnology NanoWeb.The coating gives the strings a brightand open sound.To the touch, they are no different from uncoated strings.Dense timbreand clear tone last much longer than with other uncoated strings." << endl;
		cout << "\nELIXIR is the only brand whose strings are completely covered with a polymer film, protecting the core, winding and, last but not least, the space between the turns of the winding from dirt and corrosion. Thus, the string is completely protected, and its mechanical properties are not violated. The company also uses Anti-Rust technology in production, which consists in applying a special anti-corrosion coating to the strings without winding. The special composition does not prevent the string from oscillating freely, and therefore does not affect its sound. NanoWeb technology and Anti-Rust coating provide longer service life and anti-corrosion effect. String caliber: .010, .013, .017, .032, .042, .052" << endl;
		cout << endl;
		break;
	case 54:
		cout << "\tDUNLOP 3090 Thumb pick - mediators\n\t\tPrice: 1$\n\t\tCode of ware: " << code55 << endl;
		cout << "Claw Mediator. The well - known American company DUNLOP, which manufactures various guitar accessoriesand components, presents new mediators such as the DUNLOP 3090 Thumb pick." << endl;
		cout << "\nSince the pickups have different colors: white, silver, mother-of-pearl and transparent, as well as sizes (for the thumb 0.6 mm), you can choose the one that suits you!" << endl;
		cout << endl;
		break;
	case 55:
		cout << "\tDUNLOP 4820 Jazz III - Mediator\n\t\tPrice: 1$\n\t\tCode of ware: " << code56 << endl;
		cout << "Mediator of the Jazz III series, matte Tortex coating. The well - known American company DUNLOP, which produces various guitar accessoriesand components, presents the new DUNLOP 4820 Jazz III pickups." << endl;
		cout << "\nTORTEX coated pickups are designed to give maximum control with minimum weight - which is what made them so popular." << endl;
		cout << endl;
		break;
	case 56:
		cout << "\tFENDER 351 BLACK MOTO GROSS HEAVY - Mediator\n\t\tPrice: 1$\n\t\tCode of ware: " << code57 << endl;
		cout << "Mediator, Heavy thickness, material - celluloid, color - black. Experience the classic Fender feel no matter what guitar or bass you play.Mediator Fender provide comfort during the game, a high return for each performer.The variety of sizes, shapesand different thicknesses suits the styleand preferences of any guitarist." << endl;
		cout << "\nFender has been making mediators from premium celluloid material for many years. Celluloid mediators create a natural feeling while playing with a warm, rich musical tone. Thanks to the traditional form '351', the most popular design of the mediator, FENDER 351 BLACK MOTO GROSS HEAVY is an ideal accessory for players of different styles and techniques." << endl;
		cout << endl;
		break;
	case 57:
		cout << "\tFENDER 351 DURA-TONE .71 12-PACK, OLYMPIC WHITE - Pack of mediators\n\t\tPrice: 6$\n\t\tCode of ware: " << code58 << endl;
		cout << "Set of mediators, 12 pieces, MEDIUM thickness - 0.71 mm, material - delrin, color - white. Experience the classic Fender feel no matter what guitar or bass you play.Mediator Fender provide comfort during the game, a high return for each performer.The variety of sizes, shapesand different thicknesses suits the styleand preferences of any guitarist." << endl;
		cout << "\nENDER 351 DURA-TONE .71 12-PACK, OLYMPIC WHITE are made with high precision and skillfully rolled to provide a smooth rounded edge, resistant to chipping. The finishing process provides unsurpassed durability." << endl;
		cout << endl;
		break;
	case 58:
		cout << "\tFENDER 351 GREEN PICK GROSS MEDIUM - Mediator\n\t\tPrice: 1$\n\t\tCode of ware: " << code59 << endl;
		cout << "Mediator, medium thickness, green. Experience the classic Fender feel no matter what guitar or bass you play.Mediator Fender provide comfort during the game, a high return for each performer.The variety of sizes, shapesand different thicknesses suits the styleand preferences of any guitarist." << endl;
		cout << "\nFender has been making mediators from premium celluloid material for many years. Celluloid mediators create a natural feeling while playing with a warm, rich musical tone. Thanks to the traditional form '351', the most popular design of the mediator, FENDER 351 GREEN PICK GROSS MEDIUM is an ideal accessory for players of different styles and techniques." << endl;
		cout << endl;
		break;
	case 59:
		cout << "\tFENDER 351 MATTE DELRIN BLUE H - Mediator\n\t\tPrice: 1$\n\t\tCode of ware: " << code60 << endl;
		cout << "Mediator, Heavy thickness - 1 mm, color - blue. Experience the classic Fender feel no matter what guitar or bass you play.Mediator Fender provide comfort during the game, a high return for each performer.The variety of sizes, shapesand different thicknesses suits the styleand preferences of any guitarist." << endl;
		cout << "\nFender has been making mediators from premium celluloid material for many years. Celluloid mediators create a natural feeling while playing with a warm, rich musical tone. Thanks to the traditional form '351', the most popular design of the mediator, FENDER 351 MATTE DELRIN BLUE H is an ideal accessory for players of different styles and techniques." << endl;
		cout << endl;
		break;
	case 60:
		cout << "\tAVZHEZH SC-03A GREEN - Capo\n\t\tPrice: 3$\n\t\tCode of ware: " << code61 << endl;
		cout << "Capod for acoustic and electric guitars, light aluminum body, easy to remove and put on with one hand, color - green, production - Ukraine. AVZHEZH SC - 03A GREEN - easy and convenient to use hood.This model is designed for 6 - string acoustic and electric guitars.It has an ergonomic shape.The convenient spring mechanism allows to fix quickly a capo in the necessary position on a fingerboard with one hand.No additional adjustment is required.";
		cout << " Special soft pads protect the surface of the tool from scratches, so you can not worry about the safety of the coating on the back of the fingerboard. The hood is strong and at the same time very light, the case is made of aluminum. The model is presented in green. Production - Ukraine." << endl;
		cout << endl;
		break;
	case 61:
		cout << "\tAVZHEZH SC-03A RED - Capo\n\t\tPrice: 3$\n\t\tCode of ware: " << code62 << endl;
		cout << "Capod for acoustic and electric guitars, light aluminum body, easy to remove and put on with one hand, color - red, production - Ukraine. AVZHEZH SC - 03A GREEN - easy and convenient to use hood.This model is designed for 6 - string acoustic and electric guitars.It has an ergonomic shape.The convenient spring mechanism allows to fix quickly a capo in the necessary position on a fingerboard with one hand.No additional adjustment is required.";
		cout << " Special soft pads protect the surface of the tool from scratches, so you can not worry about the safety of the coating on the back of the fingerboard. The hood is strong and at the same time very light, the case is made of aluminum. The model is presented in green. Production - Ukraine." << endl;
		cout << endl;
		break;
	case 62:
		cout << "\tFENDER CAPO PHOENIX BLACK - Capo\n\t\tPrice: 22$\n\t\tCode of ware: " << code63 << endl;
		cout << "Capo for electric guitars and acoustic guitars, lightweight aluminum body, easy to remove and put on with one hand. FENDER CAPO PHOENIX BLACK is an easy and easy - to - use hood, a branded accessory from a famous American manufacturer.This model is designed for six - string acoustic and electric guitars.It has an ergonomic shape." << endl;
		cout << "\nThe convenient spring mechanism allows to fix quickly a capo in the necessary position on a fingerboard with one hand. No additional adjustment is required. Special soft pads protect the surface of the tool from scratches, so you can not worry about the safety of the coating on the back of the fingerboard." << endl;
		cout << "\nThe hood is durable and at the same time very light, the case is made of aluminum. The model is presented in black." << endl;
		cout << endl;
		break;
	case 63:
		cout << "\tFENDER SMART CAPO STANDARD - Capo\n\t\tPrice: 33$\n\t\tCode of ware: " << code64 << endl;
		cout << "Capo for acoustic and electric guitars, color - black. FENDER, a world - renowned company, presents the FENDER SMART CAPO STANDARD, which has a spring - type design.This model will make playing the instrument much more comfortable, and its excellent quality will make a great impression on all performers without exception." << endl;
		cout << "\nAs a result, you can change the pitch with one hand at lightning speed." << endl;
		cout << "\nThe hood is very light, the body is made of durable plastic. The model is presented in black with the Fender logo." << endl;
		cout << endl;
		break;
	case 64:
		cout << "\tIBANEZ ICGC10 - Capo\n\t\tPrice: 15$\n\t\tCode of ware: " << code65 << endl;
		cout << "Capo for guitars, universal, black color. IBANEZ ICGC10 is a light and easy - to - use hood, a branded accessory from the famous Japanese manufacturer Ibanez.This model is designed for acousticand electric guitars with steel or nylon strings.It has an ergonomic shape.The convenient spring mechanism allows to fix quickly a capo in the necessary position on a fretboard.The hood is strong and at the same time very light, the case is made of metal.The model is presented in blackand silver." << endl;
		cout << endl;
		break;
	case 65:
		cout << "\tIBANEZ IGC10 - Capo\n\t\tPrice: 15$\n\t\tCode of ware: " << code66 << endl;
		cout << "Capo for acoustic and electric guitars, spring, color - silver. IBANEZ IGC10 is a light and easy - to - use hood, a branded accessory from the famous Japanese manufacturer Ibanez.This model is designed for six - string acoustic and electric guitars with a flat type of fingerboard.It has an ergonomic shape." << endl;
		cout << "\nThe convenient spring mechanism allows to fix quickly a capo in the necessary position on a fingerboard with one hand. No additional adjustment is required. Special soft pads protect the surface of the tool from scratches, so you can not worry about the safety of the coating on the back of the fingerboard." << endl;
		cout << "\nThe hood is strong and at the same time very light, the case is made of metal. The model is presented in silver color." << endl;
		cout << endl;
		break;
	case 66:
		cout << "\tFENDER 2 MONOGRAMMED BLACK/YELLOW/RED STRAP - guitar belt\n\t\tPrice: 20$\n\t\tCode of ware: " << code67 << endl;
		cout << "Guitar strap, material - fabric / leather, color - multicolored. FENDER 2 MONOGRAMMED BLACK / YELLOW / RED STRAP is a MONOGRAMMED guitar strap from FENDER, made in a stylish design : the materials were selected fabricand leather, and the color scheme is represented by black, yellowand red shades.The belt is very strong thanks to the strengthened substrate, but comfort of the guitarist at the same time will not suffer, after all the product is soft enough." << endl;
		cout << endl;
		break;
	case 67:
		cout << "\tFENDER 2 MONOGRAMMED WHITE BROWN YELLOW STRAP - Guitar belt\n\t\tPrice: 20$\n\t\tCode of ware: " << code68 << endl;
		cout << "Guitar strap, material - fabric / leather, color - multicolored. FENDER 2 MONOGRAMMED WHITE BROWN YELLOW STRAP is a MONOGRAMMED guitar strap from FENDER, made in a stylish design : the materials were chosen fabricand leather, and the color scheme is presented in white, brownand yellow shades.The belt is very strong thanks to the strengthened substrate, but comfort of the guitarist at the same time will not suffer, after all the product is soft enough." << endl;
		cout << endl;
		break;
	case 68:
		cout << "\tFENDER 2' WEIGHLESS MONOGRAMMED STRAP BLACK / YELLOW / BROWN - Guitar belt\n\t\tPrice: 27$\n\t\tCode of ware: " << code69 << endl;
		cout << "Guitar strap, material - polyester, width - 50.8 mm, length - 1117.6 - 1333.5 mm, color - black / yellow / brown. The main features of the guitar strap FENDER 2 'WEIGHLESS MONOGRAMMED STRAP BLACK / YELLOW / BROWN: Made of polyester with spandex to provide elasticity; Classic logo; Conical leather ends with the logo' F '; Adjustable up to 50.83317 mm; Length; Made in Canada." << endl;
		cout << "\nThe elastic guitar strap FENDER 2 'WEIGHLESS MONOGRAMMED STRAP BLACK / YELLOW / BROWN takes the load off your shoulders, so you can focus on the important thing - the expression of your creativity." << endl;
		cout << endl;
		break;
	case 69:
		cout << "\tFENDER STRAP VINTAGE TWEED 2 - Guitar belt\n\t\tPrice: 25$\n\t\tCode of ware: " << code70 << endl;
		cout << "Guitar strap, material - fabric / leather, color - yellow. The classic FENDER STRAP VINTAGE TWEED 2 guitar strap from Fender is made of almost the same material from which the covers for Fender guitarsand amplifiers are made.The belt buckles are made of high quality brown leather.The composition of the fabric was initially softened for greater comfort." << endl;
		cout << endl;
		break;
	case 70:
		cout << "\tFENDER WEIGHLESS 2'' RUNNING LOGO STRAP BLACK/WHITE - Guitar belt\n\t\tPrice: 27$\n\t\tCode of ware: " << code71 << endl;
		cout << "Universal guitar strap, material - polyester / leather, width - 50.8 mm, length - 1117.6 - 1333.5 mm, color - black and white with the Fender logo. The main features of the FENDER WEIGHLESS 2 '' RUNNING LOGO STRAP BLACK / WHITE guitar strap : Made of polyester with spandex to provide elasticity; Classic logo; Cone - shaped leather ends with the 'F' logo; Width 50.8 mm; The length is adjustable from 1117.6 mm to 1333.5 mm; Made in Canada." << endl;
		cout << "\nThe elastic guitar strap FENDER WEIGHLESS 2 '' RUNNING LOGO STRAP BLACK / WHITE takes the load off your shoulders, so you can focus on the important thing - on the expression of your creativity. Featuring the unique Fender style, this unique belt was designed by guitarists for guitarists with the thought of exceptional comfort." << endl;
		cout << endl;
		break;
	case 71:
		cout << "\tFENDER WEIGHLESS 2'' RUNNING LOGO STRAP WHITE/BLACK - Guitar belt\n\t\tPrice: 28$\n\t\tCode of ware: " << code72 << endl;
		cout << "Universal guitar strap, material - polyester / leather, width - 50.8 mm, length - 1117.6 - 1333.5 mm, color - white and black with the Fender logo. The main features of the FENDER WEIGHLESS 2 '' RUNNING LOGO STRAP WHITE / BLACK guitar strap : Made of polyester with spandex to provide elasticity; Classic logo; Cone - shaped leather ends with the 'F' logo; Width 50.8 mm; The length is adjustable from 1117.6 mm to 1333.5 mm; Made in Canada." << endl;
		cout << "\nThe elastic guitar strap FENDER WEIGHLESS 2 '' RUNNING LOGO STRAP WHITE / BLACK takes the load off your shoulders, so you can focus on the important thing - on the expression of your creativity. Featuring a unique Fender style, this unique belt was designed by guitarists for guitarists with the thought of exceptional comfort." << endl;
		cout << endl;
		break;
	case 72:
		cout << "\tEPIPHONE GIGBAG SOLIDBODY BASS - Case for bass guitar\n\t\tPrice: 21$\n\t\tCode of ware: " << code73 << endl;
		cout << "Bass guitar case with light insulation, color - black. EPIPHONE GIGBAG SOLIDBODY BASS is a warm, soft, waterproof case for bass guitar.It allows you to easily storeand transport a musical instrument without worrying about drizzle, snow or wind, which raises clouds of dustand has a detrimental effect on any instrument." << endl;
		cout << "\nThe case is equipped with a convenient belt and handles which will considerably simplify and make process of transportation of your tool much more comfortable. All EPIPHONE products are of high quality and only the best components. The EPIPHONE GIGBAG SOLIDBODY BASS case offers the best combination of price and quality in its class." << endl;
		cout << endl;
		break;
	case 73:
		cout << "\tEPIPHONE WESTERN ACOUSTIC GUITAR GIGBAG - Case for acoustic guitar\n\t\tPrice: 31$\n\t\tCode of ware: " << code74 << endl;
		cout << "Dreadnought acoustic guitar case with light insulation, color - black. The case for the EPIPHONE WESTERN ACOUSTIC GUITAR GIGBAG acoustic guitar, is suitable both for guitars with the increased head of a fretboardand for other guitars.The case is comfortableand reliable, has metal fasteners on the loops." << endl;
		cout << endl;
		break;
	case 74:
		cout << "\tFENDER CLASSIC SERIES CASE FOR P/J BASS - Case for bass guitar\n\t\tPrice: 150$\n\t\tCode of ware: " << code75 << endl;
		cout << "Case for bass guitars like Precision / Jazz, 3-layer, wooden, steel handle, with lining, compartment for accessories, color black. The main features of the FENDER CLASSIC SERIES CASE FOR P / J BASS : 3 - layer wooden case covered with black vinyl; Thickness: 8 mm on the sides and 5 mm above and below; Black vinyl steel carrying handle; Soft velor inner lining; Large compartment for accessories; Steel latches; Lock with a set of keys; Triple chrome fittings." << endl;
		cout << "\nClassic series wooden cases are a stylish and reliable way to protect your Fender bass guitar." << endl;
		cout << "\nThe FENDER CLASSIC SERIES CASE FOR P / J BASS is a three-layer durable wooden case made of reliable materials, equipped with a steel carrying handle with a vinyl covering and latches in addition to triple chromeplated accessories on all case. The soft velor inner lining ensures that your guitar will not be scratched or damaged, while the spacious accessory compartment provides enough space for spare strings, tuners or any small items you want to carry with you." << endl;
		cout << endl;
		break;
	case 75:
		cout << "\tFENDER DELUXE MOLDED BASS CASE BLACK - Case for bass guitar\n\t\tPrice: 220$\n\t\tCode of ware: " << code76 << endl;
		cout << "Case for bass guitars, universal, suitable for most forms of Fender, plastic, black. Use the universal case FENDER DELUXE MOLDED BASS CASE BLACK, developed by the known American company, for storageand transportation of your bass guitar.The combination of quality materials, a new design(nested stacking design) and a TSA lock, which prevents sudden opening, ensures that the tool is carried intactand safe." << endl;
		cout << "\nDurable plastic body in black, user-friendly handle and soft inner lining - every FENDER DELUXE MOLDED BASS CASE BLACK element has been designed to provide maximum tool protection." << endl;
		cout << "\nThe large interior compartment is an ideal place to store accessories such as cables and straps, and at the same time helps to stabilize the position of the neck during transport. Thanks to the rubber feet on the bottom, the case provides additional stability." << endl;
		cout << endl;
		break;
	case 76:
		cout << "\tFENDER FA405 DREADNOUGHT GIG BAG - Case for acoustic guitar\n\t\tPrice: 28$\n\t\tCode of ware: " << code77 << endl;
		cout << "Acoustic guitar case, density - 400 den, insulation thickness - 5 mm, color - black. FENDER FA405 DREADNOUGHT GIG BAG - the case is suitable for most standard acoustic guitars.On the outside, the case has a moisture - resistant coating with a density of 400 den.The inner part of the cover(5 mm lining) repeats the shape of the guitar, keeping the instrument still during transportation.Outside there are carrying handles, a zippered pocket for accessories and 2 carrying straps on the shoulder or behind the back.The length of the belts is adjustable.The color of the cover is black." << endl;
		cout << "\nThe case allows you to store and transport a musical instrument without worrying about drizzle, snow or wind, which raises clouds of dust and has a detrimental effect on any instrument. All products of this manufacturer are of high quality and only the best components." << endl;
		cout << "\nThe FENDER FA405 DREADNOUGHT GIG BAG case will be a good purchase for both amateur and professional use." << endl;
		cout << endl;
		break;
	case 77:
		cout << "\tFENDER FA610 DREADNOUGHT GIG BAG - case for acoustic guitar\n\t\tPrice: 49$\n\t\tCode of ware: " << code78 << endl;
		cout << "Dreadnought acoustic guitar case, density - 600 den, insulation thickness - 10 mm, color - black. FENDER FA610 DREADNOUGHT GIG BAG is a stylish sealed case for acoustic dreadnought guitars from the famous American guitar brand.The case has a recognizable branded asymmetrical shape.The cover is made of durable polyester with a thickness of 600 den.This material is able to effectively protect your tool from mechanical damage.Inside the case has a soft lining 10 mm thick with a microfiber coating that prevents scratches and abrasions on the tool.";
		cout << " The case closes on a reliable waterproof zipper. There are two handles for carrying. At the back are two adjustable length straps for carrying behind the back. The bottom and top of the case is equipped with dense textured rubber pads, which provide additional protection and prevent slipping when installing the case vertically. In front there is a pocket for accessories with an additional small pocket for small items." << endl;
		cout << "\nThe FENDER FA610 DREADNOUGHT GIG BAG case is presented in black with a contrasting red Fender logo." << endl;
		cout << endl;
		break;
	}





	if (Acoustic_guitar == 1)
	{
		cout << 1 << endl;
	}
	else if (Acoustic_guitar == 2)
	{
		cout << 2 << endl;
	}
	else if (Acoustic_guitar == 3)
	{
		cout << 3 << endl;
	}
	else if (Acoustic_guitar == 4)
	{
		cout << 4 << endl;
	}
	else if (Acoustic_guitar == 5)
	{
		cout << 5 << endl;
	}
	else if (Acoustic_guitar == 6)
	{
		cout << 6 << endl;
	}
	else if (Classic_guitar == 7)
	{
		cout << 7 << endl;
	}
	else if (Classic_guitar == 8)
	{
		cout << 8 << endl;
	}
	else if (Classic_guitar == 9)
	{
		cout << 9 << endl;
	}
	else if (Classic_guitar == 10)
	{
		cout << 10 << endl;
	}
	else if (Classic_guitar == 11)
	{
		cout << 11 << endl;
	}
	else if (Classic_guitar == 12)
	{
		cout << 12 << endl;
	}
	else if (Electric_guitar == 13)
	{
		cout << 13 << endl;
	}
	else if (Electric_guitar == 14)
	{
		cout << 14 << endl;
	}
	else if (Electric_guitar == 15)
	{
		cout << 15 << endl;
	}
	else if (Electric_guitar == 16)
	{
		cout << 16 << endl;
	}
	else if (Electric_guitar == 17)
	{
		cout << 17 << endl;
	}
	else if (Electric_guitar == 18)
	{
		cout << 18 << endl;
	}
	else if (Bass_guitar == 19)
	{
		cout << 19 << endl;
	}
	else if (Bass_guitar == 20)
	{
		cout << 20 << endl;
	}
	else if (Bass_guitar == 21)
	{
		cout << 21 << endl;
	}
	else if (Bass_guitar == 22)
	{
		cout << 22 << endl;
	}
	else if (Bass_guitar == 23)
	{
		cout << 23 << endl;
	}
	else if (Bass_guitar == 24)
	{
		cout << 24 << endl;
	}
	else if (Ukulele == 25)
	{
		cout << 25 << endl;
	}
	else if (Ukulele == 26)
	{
		cout << 26 << endl;
	}
	else if (Ukulele == 27)
	{
		cout << 27 << endl;
	}
	else if (Ukulele == 28)
	{
		cout << 28 << endl;
	}
	else if (Ukulele == 29)
	{
		cout << 29 << endl;
	}
	else if (Ukulele == 30)
	{
		cout << 30 << endl;
	}
	else if (Amplifiers == 31)
	{
		cout << 31 << endl;
	}
	else if (Amplifiers == 32)
	{
		cout << 32 << endl;
	}
	else if (Amplifiers == 33)
	{
		cout << 33 << endl;
	}
	else if (Amplifiers == 34)
	{
		cout << 34 << endl;
	}
	else if (Amplifiers == 35)
	{
		cout << 35 << endl;
	}
	else if (Amplifiers == 36)
	{
		cout << 36 << endl;
	}
	else if (Effects == 37)
	{
		cout << 37 << endl;
	}
	else if (Effects == 38)
	{
		cout << 38 << endl;
	}
	else if (Effects == 39)
	{
		cout << 39 << endl;
	}
	else if (Effects == 40)
	{
		cout << 40 << endl;
	}
	else if (Effects == 41)
	{
		cout << 41 << endl;
	}
	else if (Effects == 42)
	{
		cout << 42 << endl;
	}
	else if (Tuners == 43)
	{
		cout << 43 << endl;
	}
	else if (Tuners == 44)
	{
		cout << 44 << endl;
	}
	else if (Tuners == 45)
	{
		cout << 45 << endl;
	}
	else if (Tuners == 46)
	{
		cout << 46 << endl;
	}
	else if (Tuners == 47)
	{
		cout << 47 << endl;
	}
	else if (Tuners == 48)
	{
		cout << 48 << endl;
	}
	else if (String_kit == 49)
	{
		cout << 49 << endl;
	}
	else if (String_kit == 50)
	{
		cout << 50 << endl;
	}
	else if (String_kit == 51)
	{
		cout << 51 << endl;
	}
	else if (String_kit == 52)
	{
		cout << 52 << endl;
	}
	else if (String_kit == 53)
	{
		cout << 53 << endl;
	}
	else if (String_kit == 54)
	{
		cout << 54 << endl;
	}
	else if (Mediators == 55)
	{
		cout << 55 << endl;
	}
	else if (Mediators == 56)
	{
		cout << 56 << endl;
	}
	else if (Mediators == 57)
	{
		cout << 57 << endl;
	}
	else if (Mediators == 58)
	{
		cout << 58 << endl;
	}
	else if (Mediators == 59)
	{
		cout << 59 << endl;
	}
	else if (Mediators == 60)
	{
		cout << 60 << endl;
	}
	else if (Capos == 61)
	{
		cout << 61 << endl;
	}
	else if (Capos == 62)
	{
		cout << 62 << endl;
	}
	else if (Capos == 63)
	{
		cout << 63 << endl;
	}
	else if (Capos == 64)
	{
		cout << 64 << endl;
	}
	else if (Capos == 65)
	{
		cout << 65 << endl;
	}
	else if (Capos == 66)
	{
		cout << 66 << endl;
	}
	else if (Guitar_belts == 67)
	{
		cout << 67 << endl;
	}
	else if (Guitar_belts == 68)
	{
		cout << 68 << endl;
	}
	else if (Guitar_belts == 69)
	{
		cout << 69 << endl;
	}
	else if (Guitar_belts == 70)
	{
		cout << 70 << endl;
	}
	else if (Guitar_belts == 71)
	{
		cout << 71 << endl;
	}
	else if (Guitar_belts == 72)
	{
		cout << 72 << endl;
	}
	else if (Cases == 73)
	{
		cout << 73 << endl;
	}
	else if (Cases == 74)
	{
		cout << 74 << endl;
	}
	else if (Cases == 75)
	{
		cout << 75 << endl;
	}
	else if (Cases == 76)
	{
		cout << 76 << endl;
	}
	else if (Cases == 77)
	{
		cout << 77 << endl;
	}
	else if (Cases == 78)
	{
		cout << 78 << endl;
	}
	return 0;
}

int Ware_Ukrain()
{
	int choose;
	cin >> choose;
	switch (choose)
	{
	case Acoustic_guitar:
		cout << "\n\tPress: " << endl;
		cout << "1. ";
		cout << "FENDER CC-60SCE WN NAT" << code1 << endl;
		cout << endl;
		cout << "2. ";
		cout << "\tFENDER CD-60 V3 WN BLACK" << code2 << endl;
		cout << endl;
		cout << "3. ";
		cout << "\tFENDER CD-60 V3 WN NATURAL" << code3 << endl;
		cout << endl;
		cout << "4. ";
		cout << "\tFENDER CD-60S BLACK WN" << code4 << endl;
		cout << endl;
		cout << "5. ";
		cout << "\tFENDER CD-60S LH WN NATURAL" << code5 << endl;
		cout << endl;
		cout << "6. ";
		cout << "\tFENDER CD-60S NATURAL WN" << code6 << endl;
	case Classic_guitar:
		cout << "7. ";
		cout << "\tEPIPHONE PRO-1 CLASSIC 1.75" << code7 << endl;
		cout << endl;
		cout << "8. ";
		cout << "\tEPIPHONE PRO-1 CLASSIC 3/4" << code8 << endl;
		cout << endl;
		cout << "9. ";
		cout << "\tIBANEZ GA6CE AM" << code9 << endl;
		cout << endl;
		cout << "10. ";
		cout << "\tTAKAMINE GC3 NAT" << endl;
		cout << endl;
		cout << "11. ";
		cout << "\tTAYLOR GUITARS ACADEMY 12-N" << code11 << endl;
		cout << endl;
		cout << "12. ";
		cout << "\tFENDER ESC105" << code12 << endl;
		break;
	case Electric_guitar:
		cout << endl;
		cout << "13. ";
		cout << "\tEPIPHONE CASINO COUPE VINTAGE SUNBURST" << code13 << endl;
		cout << endl;
		cout << "14. ";
		cout << "\tEPIPHONE LES PAUL SL PACIFIC BLUE" << code14 << endl;
		cout << endl;
		cout << "15. ";
		cout << "\tEPIPHONE LES PAUL SL SUNSET YELLOW" << code15 << endl;
		cout << endl;
		cout << "16. ";
		cout << "\tEVH WOLFGANG SPECIAL MN MATTE ARMY DRAB" << code16 << endl;
		cout << endl;
		cout << "17. ";
		cout << "\tFENDER AMERICAN ULTRA STRATOCASTER HSS RW COBRA BLUE" << code17 << endl;
		cout << endl;
		cout << "18. ";
		cout << "\tFENDER CUSTOM SHOP ARTISAN THINLINE TELE LTD" << code18 << endl;
		break;
	case Bass_guitar:
		cout << "19. ";
		cout << "\tFENDER AMERICAN PROFESSIONAL JAZZ BASS MN SNG" << code19 << endl;
		cout << endl;
		cout << "20. ";
		cout << "\tFENDER AMERICAN PROFESSIONAL JAZZ BASS V MN BLACK" << code20 << endl;
		cout << endl;
		cout << "21. ";
		cout << "\tFENDER AMERICAN PROFESSIONAL JAZZ BASS V RW OLYMPIC WHITE" << code21 << endl;
		cout << endl;
		cout << "22. ";
		cout << "\tFENDER PLAYER PRECISION BASS LH PF 3TSB" << code22 << endl;
		cout << endl;
		cout << "23. ";
		cout << "\tFENDER PLAYER PRECISION BASS LTD MN EGN" << code23 << endl;
		cout << endl;
		cout << "24. ";
		cout << "\tFENDER PLAYER PRECISION BASS MN 3TS" << code24 << endl;
		break;
	case Ukulele:
		cout << "25. ";
		cout << "\tEPIPHONE UKULELE LES PAUL HCB" << code25 << endl;
		cout << endl;
		cout << "26. ";
		cout << "\tEPIPHONE UKULELE LES PAUL VSB" << code26 << endl;
		cout << endl;
		cout << "27. ";
		cout << "\tFENDER UKULELE VENICE SOPRANO BLACK WN" << code27 << endl;
		cout << endl;
		cout << "28. ";
		cout << "\tFENDER UKULELE VENICE SOPRANO DAPHNE BLUE WN" << code28 << endl;
		cout << endl;
		cout << "29. ";
		cout << "\tFENDER UKULELE VENICE SOPRANO NATURAL WN" << code29 << endl;
		cout << endl;
		cout << "30. ";
		cout << "\tFENDER UKULELE VENICE SOPRANO SHELL PINK WN" << code30 << endl;
		break;
	case Amplifiers:
		cout << "31. ";
		cout << "\tAMPEG BA-112 V2" << code31 << endl;
		cout << endl;
		cout << "32. ";
		cout << "\tAMPEG BA-210 V2" << code32 << endl;
		cout << endl;
		cout << "33. ";
		cout << "\tAMPEG PF-350" << code33 << endl;
		cout << endl;
		cout << "34. ";
		cout << "\tAMPEG PF-500" << code34 << endl;
		cout << endl;
		cout << "35. ";
		cout << "\tAMPEG SVT-3PRO" << code35 << endl;
		cout << endl;
		cout << "36. ";
		cout << "\tAMPEG SVT-4PRO" << code36 << endl;
		cout << endl;
		break;
	case Effects:
		cout << "37. ";
		cout << "\tFENDER PEDAL FULL MOON DISTORTION" << code37 << endl;
		cout << endl;
		cout << "38. ";
		cout << "\nDIGITECH FS3X" << code38 << endl;
		cout << endl;
		cout << "39. ";
		cout << "\tDIGITECH OBSCURA" << code39 << endl;
		cout << endl;
		cout << "40. ";
		cout << "\tAMPEG OPTO COMP" << code40 << endl;
		cout << endl;
		cout << "41. ";
		cout << "\tFENDER PEDAL LOST HIGHWAY PHASER" << code41 << endl;
		cout << endl;
		cout << "42. ";
		cout << "\tFENDER PEDAL MARINE LAYER REVERB" << code42 << endl;
		cout << endl;
		break;
	case Tuners:
		cout << "43. ";
		cout << "\tKORG VPT-1" << code43 << endl;
		cout << endl;
		cout << "44. ";
		cout << "\tFENDER AG6" << code44 << endl;
		cout << endl;
		cout << "45. ";
		cout << "\tFENDER AG6" << code45 << endl;
		cout << endl;
		cout << "46. ";
		cout << "\tFENDER AX-12 SL" << code46 << endl;
		cout << endl;
		cout << "47. ";
		cout << "\tFENDER BULLET TUNER" << code47 << endl;
		cout << endl;
		cout << "48. ";
		cout << "\tFENDER FT-1 PRO CLIP-ON TUNER BLACK" << code48 << endl;
		cout << endl;
		break;
	case String_kit:
		cout << "49. ";
		cout << "\tAVZHEZH ASP1048" << code49 << endl;
		cout << endl;
		cout << "50. ";
		cout << "\tAVZHEZH ASS1150" << code50 << endl;
		cout << endl;
		cout << "51. ";
		cout << "\nELIXIR AC NWL" << code51 << endl;
		cout << endl;
		cout << "52. ";
		cout << "\tELIXIR EL NW L 7" << code52 << endl;
		cout << endl;
		cout << "53. ";
		cout << "\tELIXIR EL NW L" << code53 << endl;
		cout << endl;
		cout << "54. ";
		cout << "\tELIXIR EL NW LH" << code54 << endl;
		cout << endl;
		break;
	case Mediators:
		cout << "55. ";
		cout << "\tDUNLOP 3090 Thumb pick" << code55 << endl;
		cout << endl;
		cout << "56. ";
		cout << "\tDUNLOP 4820 Jazz III" << code56 << endl;
		cout << endl;
		cout << "57. ";
		cout << "\tFENDER 351 BLACK MOTO GROSS HEAVY" << code57 << endl;
		cout << endl;
		cout << "58. ";
		cout << "\tFENDER 351 DURA-TONE .71 12-PACK, OLYMPIC WHITE" << code58 << endl;
		cout << endl;
		cout << "59. ";
		cout << "\tFENDER 351 GREEN PICK GROSS MEDIUM" << code59 << endl;
		cout << endl;
		cout << "60. ";
		cout << "\tFENDER 351 MATTE DELRIN BLUE H" << code60 << endl;
		cout << endl;
		break;
	case Capos:
		cout << "\tAVZHEZH SC-03A GREEN" << code61 << endl;
		cout << endl;
		cout << "61. ";
		cout << "\tAVZHEZH SC-03A RED" << code62 << endl;
		cout << endl;
		cout << "62. ";
		cout << "\tFENDER CAPO PHOENIX BLACK" << code63 << endl;
		cout << endl;
		cout << "63. ";
		cout << "\tFENDER SMART CAPO STANDARD" << code64 << endl;
		cout << endl;
		cout << "64. ";
		cout << "\tIBANEZ ICGC10" << code65 << endl;
		cout << endl;
		cout << "65. ";
		cout << "\tIBANEZ IGC10" << code66 << endl;
		cout << endl;
		break;
	case Guitar_belts:
		cout << "66. ";
		cout << "\tFENDER 2 MONOGRAMMED BLACK/YELLOW/RED STRAP" << code67 << endl;
		cout << endl;
		cout << "67. ";
		cout << "\tFENDER 2 MONOGRAMMED WHITE BROWN YELLOW STRAP" << code68 << endl;
		cout << endl;
		cout << "68. ";
		cout << "\tFENDER 2' WEIGHLESS MONOGRAMMED STRAP BLACK / YELLOW / BROWN" << code69 << endl;
		cout << endl;
		cout << "69. ";
		cout << "\tFENDER STRAP VINTAGE TWEED 2" << code70 << endl;
		cout << endl;
		cout << "70. ";
		cout << "\tFENDER WEIGHLESS 2'' RUNNING LOGO STRAP BLACK/WHITE" << code71 << endl;
		cout << endl;
		cout << "71. ";
		cout << "\tFENDER WEIGHLESS 2'' RUNNING LOGO STRAP WHITE/BLACK" << code72 << endl;
		cout << endl;
		break;
	case Cases:
		cout << "72. ";
		cout << "\tEPIPHONE GIGBAG SOLIDBODY BASS" << code73 << endl;
		cout << endl;
		cout << "73. ";
		cout << "\tEPIPHONE WESTERN ACOUSTIC GUITAR GIGBAG" << code74 << endl;
		cout << endl;
		cout << "74. ";
		cout << "\tFENDER CLASSIC SERIES CASE FOR P/J BASS" << code75 << endl;
		cout << endl;
		cout << "75. ";
		cout << "\tFENDER DELUXE MOLDED BASS CASE BLACK" << code76 << endl;
		cout << endl;
		cout << "76. ";
		cout << "\tFENDER FA405 DREADNOUGHT GIG BAG" << code77 << endl;
		cout << endl;
		cout << "77. ";
		cout << "\tFENDER FA610 DREADNOUGHT GIG BAG" << code78 << endl;
		cout << endl;
	}





	if (choose == Acoustic_guitar)
	{
		cout << Acoustic_guitar << endl;
	}
	else if (choose == Classic_guitar)
	{
		cout << Classic_guitar << endl;
	}
	else if (choose == Electric_guitar)
	{
		cout << Electric_guitar << endl;
	}
	else if (choose == Bass_guitar)
	{
		cout << Bass_guitar << endl;
	}
	else if (choose == Ukulele)
	{
		cout << Ukulele << endl;
	}
	else if (choose == Amplifiers)
	{
		cout << Amplifiers << endl;
	}
	else if (choose == Effects)
	{
		cout << Effects << endl;
	}
	else if (choose == Tuners)
	{
		cout << Tuners << endl;
	}
	else if (choose == String_kit)
	{
		cout << String_kit << endl;
	}
	else if (choose == Mediators)
	{
		cout << Mediators << endl;
	}
	else if (choose == Capos)
	{
		cout << Capos << endl;
	}
	else if (choose == Guitar_belts)
	{
		cout << Guitar_belts << endl;
	}
	else if (choose == Cases)
	{
		cout << Cases << endl;
	}
	return 0;
}


int MoreUA()
{
	int choose;
	cin >> choose;
	switch (choose)
	{
	case 1:
		cout << "\n\tPress: " << endl;
		cout << "1. ";
		cout << "\tFENDER CC-60SCE WN NAT - Акустична гiтара Цiна: 11064UAH Код товару: " << code1 << endl;
		cout << "Електроакустична гiтара, 6 струн, форма - великий концерт, верхня палуба - суцiльна ялина, боки та спинка - червоне дерево, гриф - червоне дерево / горiх, передпiдсилювач / пiкап - Fishman, колiр - натуральний." << endl;
		cout << "\nМатерiал та дизайн гiтари дозволяють використовувати її для самостiйних урокiв, тренувань та репетицiй, камерних виступiв для вузького кола слухачiв: вдома, на вiдкритому повiтрi або в кафе. Верхня палуба CC-60SCE WN NAT виготовлена ​​з твердої ялини, що надає iнструменту чудовi акустичнi характеристики в будь-якому стилi гри. Нижня палуба i черепашка зробленi з червоного дерева, що дозволило не тiльки отримати ефектний зовнiшнiй вигляд, але i досягти збалансованого звучання та вражаючої гучностi.";
		cout << "\nГриф Fender 'Easy-to-Play' також виготовлений з червоного дерева, з одним шаром чорної окантовки. Зручна форма грифа сподобається як новачкам, так i досвiдченим професiоналам. Накладка - волоський горiх, радiус - 305 мм, iнкрустована перламутровими крапками дiаметром 3 мм. На грифi 20 ладiв Vintage." << endl;
		cout << "\nП'єзопiкап Fishman з попереднiм пiдсилювачем та вбудованим тюнером оснащений зручними регуляторами для регулювання; в той же час залишається чистий, щiльний i насичений звук з тонким резонансом. Мiст виготовлений з волоського горiха, фурнiтура хромована. Гiтара виглядає елегантно в класичному природному кольорi з глянцевим корпусом i грифом, а також з контрастним чорним пiкгардом. Розетка красиво прикрашена перламутром." << endl;
		cout << endl;
		break;
	case 2:
		cout << "2. ";
		cout << "\tFENDER CD-60 V3 WN BLACK - Акустична гiтара\n\t\tЦiна: 6314UAH\n\t\tКод товару: " << code2 << endl;
		cout << "Акустична гiтара, верхня дека - ялина, боки та спинка - червоне дерево, гриф - червоне дерево / горiх, колiр - чорний. Основнi особливостi акустичної гiтари FENDER CD - 60 V3 WN BLACK: форма деки - дредноут; Верхня ялинова палуба з X - пружинами, закрiпленими на заднiй панелi з червоного дерева; Глянцевий чорний колiр; Горiховий покрив та мiст." << endl;
		cout << "\nЯкщо ви початкiвець гiтарист, найкращим вибором буде гiтара, яка надихне вас продовжувати грати своїм звуком та вiдчуттями. Акустична гiтара CD-60 V3 WN BLACK - справжнiй Fender, за доступною цiною та у чудовому кольорi, що вiдповідає вашому стилю. Вiн забезпечує добре збалансований тон i об'ємний звук, завдяки формi колоди дредноута i ялинової верхньої колоди з пружинами X-Bracing. Акустична гiтара FENDER CD-60 V3 WN BLACK також стане чудовим вибором для досвiдчених музикантів, яким потрібна недорога друга гiтара дредноута." << endl;
		cout << endl;
		break;
	case 3:
		cout << "3. ";
		cout << "\tFENDER CD-60 V3 WN NATURAL - Акустична гiтара\n\t\tЦіна: 6147UAH\n\t\tКод товару: " << code3 << endl;
		cout << "Акустична гiтара, верхня дека - ялина, боки i спинка - червоне дерево, гриф - червоне дерево / горiх, колiр - натуральний. Основнi особливостi акустичної гiтари FENDER CD - 60 V3 WN NATURAL: Форма деки - дредноут; Верхня ялинова палуба з X - пружинами, закрiпленими на заднiй панелi з червоного дерева; Глянцевий натуральний колiр; Горіховий покрив та мiст." << endl;
		cout << "\nЯкщо ви початківець гiтарист, найкращим вибором буде гiтара, яка надихне вас продовжувати грати своїм звуком та вiдчуттями. Акустична гiтара CD-60 V3 WN NATURAL - справжнiй Fender, за доступною цiною та у чудовому кольорi, що відповідає вашому стилю. Вiн забезпечує добре збалансований тон i об'ємний звук, завдяки формi колоди дредноута i ялинової верхньої колоди з пружинами X-Bracing. Акустична гiтара FENDER CD-60 V3 WN NATURAL також стане чудовим вибором для досвідчених музикантів, яким потрiбна недорога друга гiтара дредноута." << endl;
		cout << endl;
		break;
	case 4:
		cout << "4. ";
		cout << "\tFENDER CD-60S BLACK WN - Акустична гiтара\n\t\tЦiна: 7571UAH\n\t\tКод товару: " << code4 << endl;
		cout << "Акустична гiтара, 6 струн, форма - дредноут, верхня палуба - суцiльна ялина, черепашка та нижня палуба - червоне дерево, гриф - червоне дерево / горiх, колiр - чорний. FENDER CD - 60S BLACK WN - нова акустична гiтара у корпусi дредноута вiд вiдомий американський виробник. Верхня колода CD - 60S виготовлена ​​з масиву смереки, що надає iнструменту вiдмiннi акустичні характеристики в будь-якому стилi гри. Нижня деканка та черепашка виготовленi з червоного дерева, що дозволило не тiльки отримати ефектний зовнiшнiй вигляд , але також для досягнення збалансованого звуку та вражаючої гучностi." << endl;
		cout << "\nГорловина профiлю Fender Easy-to-Play також виконана з червоного дерева з одношаровим чорним кантом. Зручна форма грифа сподобається як початкiвцям гiтаристам, так i досвідченим професiйним музикантам. Накладка - волоський горiх, радiус 12 '(305 мм), iнкрустована перламутровими крапками дiаметром 3 мм. На грифi 20 ладiв. Мiст зроблений з палiсандру, фурнiтура хромована. Розетка красиво прикрашений перламутром." << endl;
		cout << endl;
		break;
	case 5:
		cout << "5. ";
		cout << "\tFENDER CD-60S LH WN NATURAL - Акустична гiтара\n\t\tЦiна: 7571UAH\n\t\tКод товару: " << code5 << endl;
		cout << "Акустична гітара для лівші, 6 струн, форма - дредноут, верхня дека - суцільна ялина, черепашка та нижня дека - червоне дерево, гриф - червоне дерево / горіх, колір - натуральний. FENDER CD - 60S LH WN NATURAL - одна з найпопулярніших моделей акустичних гітар. Ідеальний інструмент для музикантів, які хочуть придбати високоякісний інструмент iз чудовим звучанням та зручним для гри. Тiло моделi класичної форми дредноута виглядає елегантноi забезпечує комфорт пiд час гри." << endl;
		cout << "\nВерхня колода CD-60S LH WN NATURAL виготовлена ​​з масиву ялини, що надає iнструменту чудовi акустичнi якостi в будь-якому стилi гри, яскравий звук i широкий динамiчний дiапазон. Нижня палуба i черепашка зробленi з червоного дерева, що дозволило не тiльки отримати ефектний зовнiшнiй вигляд, але i досягти збалансованого звучання та вражаючої гучностi. Гриф для профiлю Fender® Easy-to-Play також виготовлений з червоного дерева, з одним шаром чорної окантовки." << endl;
		cout << endl;
		break;
	case 6:
		cout << "6. ";
		cout << "\tFENDER CD-60S NATURAL WN - Акустична гiтара\n\t\tЦiна: 7851UAH\n\t\tКод товару: " << code6 << endl;
		cout << "Акустична гiтара, 6 струн, дредноут, верхня дека - суцiльна ялина, черепашка та нижня дека - червоне дерево, гриф - червоне дерево / горiх, колiр - натуральний. FENDER CD - 60S NATURAL WN - одна з найпопулярнiших моделей акустичних гiтар. Iдеальний iнструмент для музикантiв, якi хочуть придбати високоякiсний iнструмент iз чудовим звучанням та зручним для гри. elegantand забезпечує комфорт пiд час гри." << endl;
		cout << "\nВерхня палуба FENDER CD-60S NATURAL WN виготовлена ​​з масиву ялини, що надає iнструменту вiдмiннi акустичнi якостi в будь-якому стилi гри, яскравий звук i широкий динамiчний дiапазон. Нижня палуба i черепашка зроблені з червоного дерева, що дозволило не тiльки отримати ефектний зовнiшнiй вигляд, але i досягти збалансованого звучання та вражаючої гучностi. Гриф для профiлю Fender® Easy-to-Play також виготовлений з червоного дерева, з одним шаром чорної окантовки. Зручна форма грифа сподобається як початкiвцям гiтаристам, так i досвiдченим професiйним музикантам.";
		cout << "Накладка - волоський горiх, радiус 12 '(305 мм), iнкрустована перламутровими крапками дiаметром 3 мм. На грифi 20 ладів Vintage. Мiст з волоського горiха, фурнiтура - хром. Розетка красиво оформлена з перламутром." << endl;
		break;
	case 7:
		cout << "1. ";
		cout << "\tEPIPHONE PRO-1 CLASSIC 1.75 - Класична гiтара\n\t\tЦіна: 4605UAH\n\t\tКод товрару: " << code7 << endl;
		cout << "Класична 'iспанська' акустична гiтара, верхня дека - кедр, бокова i задня дека - червоне дерево, гриф - червоне дерево, ширина 'нульового' порошку - 1,75', якiр, колiр - натуральний. EPIPHONE PRO - 1 Classic створений за зразком найкращих у свiтi класичних гiтар iз використанням тих самих порід дерева. Класичнi гiтари славляться своїм унiкальним, чистим звучанням. Збалансований звук цiєї гiтари та функцiї PRO дозволяють навiть новачковi легко знайти свiй унiкальний звук. Дизайн PRO-1 Classic такий: верхня палуба зроблена з кедра, а нижня палуба, черепашка та гриф виготовленi з червоного дерева." << endl;
		cout << "\nВарто вiдзначити нововведення PRO Collection, завдяки яким Epiphone, один з найстарiших i найшанованіших виробникiв гiтар у свiтi, зробив гру на гiтарi легкою та доступною для кожного. Epiphone переосмислив процес створення класичної гiтари, i в результатi є iнструмент, на якому кожен може грати з нуля - гiтара PRO, яка проста у використаннi, а головне, яка забезпечує повний, яскравий звук, як легендарна компанiя Epiphone." << endl;
		cout << "\nГраючи на цiй гітарi, ви не вiдчуєте втоми. Конструкцiя гiтари (EZ-Profile) розроблена таким чином, що ваша рука може легко утворювати акорди без незручностей. Лади Epiphone JumboPRO роблять ноти та акорди справдi легкими, вони набагато ширшi, нiж менші лади. Крiм того, всiм вiдомо - тертя струн i грифів не тiльки уповiльнює гру, але i може пошкодити сам iнструмент. Струна та кришка PRO-Ease забезпечують плавний, плавний дотик." << endl;
		cout << "\nЩе однiєю вiдмiннiстю серiї, яка не характерна для бiльшостi класичних гiтар, є якiр. Це не тiльки робить конструкцiю мiцнiшою, але i дозволяє легко регулювати кут накладання грифа та висоту струн." << endl;
		cout << "\nEPIPHONE PRO-1 Classic є результатом поєднання численних технологiчних iнновацiй та всебiчного аналiзу пропозицiй вiд професiйних гравцiв. Ця гiтара серiї PRO-1 CLASSIC має 'нульовий' порошок 1,75 дюйма." << endl;
		cout << endl;
		break;
	case 8:
		cout << "2. ";
		cout << "\tEPIPHONE PRO-1 CLASSIC 3/4 - Класична гiтара\n\t\tЦiна: 4605UAH\n\t\tКод товару: " << code8 << endl;
		cout << "Класична акустична гiтара 'iспанська', розмір 3/4, верхня дека - кедр, бокова i задня дека - червоне дерево, гриф - червоне дерево, якiр, колiр - натуральний. Iдея iнновацiйної колекцiї PRO - 1 Acoustic Collection полягає у створенні гiтари, на якiй можна було б легко грати, але в той же час вона вiдповiдала б багатовiковiй традицiї Epiphone з чудовою якiстю збiрки, насиченим тоном та красивим дизайном . EPIPHONE PRO-1 Classic створений за зразком найкращих у світі класичних гiтар iз використанням тих самих порiд дерева. Класичнi гiтари славляться своїм унiкальним чистим звучанням.";
		cout << "Збалансований звук цiєї гiтари та функцiї PRO дозволяють навiть новачковi легко знайти свiй унiкальний звук. Дизайн PRO-1 Classic такий: верхня палуба зроблена з кедра, а нижня палуба, черепашка та гриф виготовлені з червоного дерева. " << endl;
		cout << "\nВарто вiдзначити нововведення колекцiї PRO, завдяки яким Epiphone, один з найстарiших i найбiльш шанованих виробникiв гiтар у свiтi, зробив гру на гiтарi легкою та доступною для всiх. Epiphone переосмислив процес створення класичної гiтари, i в результатi є iнструмент, на якому кожен може грати з нуля - гiтара «PRO», ​​яка проста у використаннi, а головне, яка забезпечує повний, яскравий звук, як легендарна компанiя Epiphone." << endl;
		cout << "\nГраючи на цiй гiтарi, ви не вiдчуєте втоми. Конструкцiя гiтари (EZ-Profile) розроблена таким чином, що ваша рука може легко утворювати акорди без незручностей. Лади Epiphone JumboPRO роблять ноти та акорди справді легкими, вони набагато ширші, ніж менші лади. Крім того, всім відомо - тертя струн і грифів не тільки уповільнює гру, але і може пошкодити сам інструмент. Струна та кришка PRO-Ease забезпечують плавний, плавний дотик." << endl;
		cout << "\nЩе однiєю вiдмiннiстю серiї, яка не характерна для бiльшостi класичних гiтар, є якiр. Це не тiльки робить конструкцiю мiцнiшою, але i дозволяє легко регулювати кут накладання грифа та висоту струн." << endl;
		cout << "\nEPIPHONE PRO-1 Classic є результатом поєднання численних технологiчних iнновацiй та всебiчного аналiзу пропозицiй вiд професiйних гравцiв. Ця гiтара серiї PRO-1 CLASSIC має 'нульову' порогову ширину 1,89 '." << endl;
		cout << endl;
		break;
	case 9:
		cout << "3. ";
		cout << "\tIBANEZ GA6CE AM - Класична гiтара\n\t\tЦiна: 6419UAH\n\t\tКод товару: " << code9 << endl;
		cout << "Класична гiтара, електроакустична, 6 струн, форма колоди - класична, верхня колода - ялина, задня дека i черепашки - червоне дерево, гриф - червоне дерево / палiсандр, колiр - натуральний. IBANEZ GA6CE - AM - це приголомшлива класична гiтара з пiкапом, створена майстрами Ibanez. Ця модель, серед iнших, вiдрiзняється своїм кришталево чистим звучанням та стильним, але в той же час суворим дизайном.";
		cout << "Верхня колода гiтари виконана з ялини, а корпус надiлений пiкапом Ibanez Under Saddle та попереднiм пiдсилювачем Ibanez AEQ45, якi забезпечують широкий вибiр рiзноманiтних налаштувань звуку для цiєї гiтари." << endl;
		cout << "\nКласична гiтара IBANEZ GA6CE-AM має обробку, яка сприяє покращенню резонансу. Ця обробка не має товстих шарiв лаку та декiлькох шарiв фарби, якi часто зустрiчаються в обробцi багатьох акустичних гiтар. Тонке покриття цiєї моделi виконано високоякiсно, ​​надiйно захищаючи iнструмент вiд будь-яких клiматичних змiн." << endl;
		cout << endl;
		break;
	case 10:
		cout << "4. ";
		cout << "\tTAKAMINE GC3 NAT - Класична гiтара\n\t\tЦiна: 7955UAH\n\t\tКод товару: " << code10 << endl;
		cout << "Класична гiтара, 6 струн, верхня дека - суцiльна ялина, боки та спинка - червоне дерево, гриф - червоне дерево / лавр, колiр - натуральний. TAKAMINE GC3 NAT - це прекрасна класична гiтара, яка вiдрiзняється мiцною верхньою колодою, прекрасними глянцевими нейлоновими струнами, якi надають їй насичений звук - саме те, що музиканти очiкують вiд гiтар Takamine." << endl;
		cout << "\nTAKAMINE GC3 NAT iдеально пiдходить для будь-якого гравця, який шукає чудову унiверсальну класичну гiтару. Iнструмент поєднує верхню палубу з твердої ялини та нижню палубу з оболонкою з червоного дерева, якi створюють насичений резонансний звук. Зручний гриф, також виготовлений з червоного дерева, i лавровий чохол забезпечують приємнi вiдчуття та грайливiсть, а iнкрустацiя розетки у вигляді мозаїки надає iнструменту традиційний елегантний вигляд." << endl;
		cout << "\nIншi особливостi TAKAMINE GC3 NAT включають крiплення для ластiвчиного хвоста, верхнi та нижн синтетичнi кiстянi бахроми, головку лаврового ладу, хромованi кiлочки з бiлими перламутровими ґудзиками та красиве глянсове покриття." << endl;
		cout << endl;
		break;
	case 11:
		cout << "5. ";
		cout << "\tTAYLOR GUITARS ACADEMY 12-N - Класична гiтара\n\t\tЦiна: 16998UAH\n\t\tКод товару: " << code11 << endl;
		cout << "Класична гiтара, 6 струн, форма колоди - Великий концерт, верхня колода - ялина, задня дека i черепашки - сапеле, гриф - червоне дерево / чорне дерево, колiр - натуральний, футляр в комплекті. З гiтарою TAYLOR GUITARS ACADEMY 12 - N ви отримаєте неймовiрну м'якiсть i баланс звуку як при тихiй, так i при динамiчнiй грi, чуйнiсть до гармонiк за рахунок масиву з ялини та черепашки iз задньої колоди вiд дерево сапели. Гриф гтари зроблений з червоного дерева, обкладинка - iз чорного дерева з перламутровою iнкрустацiєю, порошки виготовленi з матеріалу нубон / мiкарт, що дозволяє детально викласти iнтонацiю вашої гри.";
		cout << " Гiтара оснащена нiкельованими кiлочками, якi iдеально тримають структуру. Справа в комплектi. Вам сподобається грати на цьому iнструментi, навiть якщо вашi 0навички гiтари не такi високi. А якщо ви професiонал, то ACADEMY 12-N точно має бути у вашому арсеналi." << endl;
		cout << endl;
		break;
	case 12:
		cout << "6. ";
		cout << "\tFENDER ESC105 - Класична гiтара\n\t\tЦiна: 5582UAH\n\t\tКод товару: " << code12 << endl;
		cout << "Класична гiтара, верхня палуба - ялина, нижня палуба i черепашка - окуме, гриф - червоне дерево / горiх, ширина на нульовому порозi - 1,75 дюйма (44,45 мм), колiр - натуральний, корпус в комплектi Основнi особливостi класичної гiтари FENDER ESC105: верхня палуба з ламiнованої ялини, нижня деканка i оболонка окуме; Гриф з червоного дерева, пiдкладка з горiха; Атласна вiнтажна обробка натурального кольору; Нiкельована та перлоїдна фурнiтура; Традицiйна класична форма." << endl;
		cout << "\nКласична гiтара FENDER ESC105 була створена спецiально для музикантiв-початкiвцiв. Fender дiйсно зробив все можливе, щоб зробити цей iнструмент iдеальним для початкiвцiв. На відміну від звичайних гiтар для початкiвцiв, ця модель поєднує в собi бiльш м'які нейлонові струни з більш вузькою шириною ладу, зазвичай зустрiчається на акустичних гiтарах зi сталевими струнами. Результат - «найкраще з обох свiтiв»: м’якiшi струни, якi полегшують тренування пальцiв, i знайоме вiдчуття грифу, коли ви граєте на сталевих струнах." << endl;
		cout << "\nОкрiм цього, FENDER ESC105 має повнорозмiрний корпус у традицiйному класичному стилi, iдеально пiдходить для тих, хто починає свiй шлях навчання гри на гiтарi. Це чудовий iнструмент, який гарантує якiсть Fender." << endl;
		break;
	case 13:
		cout << endl;
		cout << "1. ";
		cout << "\tEPIPHONE CASINO COUPE VINTAGE SUNBURST - Електрогiтара\n\t\tЦіна: 14374UAH\n\t\tКод товару: " << code13 << endl;
		cout << "Напiвакустична гiтара, 6 струн, дека - клен, гриф - червоне дерево / пао феро, пiкапи - P90 (S-S), колiр - сонячний вибух. Основнi особливостi напiвакустичної гiтари EPIPHONE CASINO COUPE VINTAGE SUNBURST: класичний дизайн забезпечує звук Маккартнi; Гриф з клену та червоного дерева надає неймовiрний напiвзвуковий тон; Пiкапи P - 90 вiдтворюють чудовий унiверсальний звук; Профiль SlimTaper D гарантує швидку i плавну гру." << endl;
		cout << "\nEPIPHONE CASINO COUPE VINTAGE SUNBURST - це легендарна напiвакустична гiтара, що використовується протягом усiєї музичної кар'єри 'Бiтлз' у формi ES-339. Ви швидко полюбите її. У поєднаннi пiкапiв P-90 i лампових пiдсилювачiв було щось магiчне, що зробило пiснi 'Бiтлз' миттєво впiзнаваними. Тепер цей звук може стати вашим, але у зменшеному форматi, зручному для подорожей! 'Бiтлз' - це одна, якщо не найважливiша та найвпливовiша група всiх часiв, а напiвакустична гiтара EPIPHONE CASINO COUPE VINTAGE SUNBURST дає вам неперевершений звук 'Бiтлз'." << endl;
		cout << "\nПам'ятайте, що Пол Маккартнi починав з 'Бiтлз' як гiтарист i справдi грав багато гiтарних партiй пiд час знаменитої музичної кар'єри групи. Вiн отримав своє казино Epiphone в 1962 роцi i вiдразу ж змiнив його на лiву руку. Його безсумнiвно улюблену гiтару можна почути на незлiченних записах 'Бiтлз', а також на багатьох пiзнiших записах Пола." << endl;
		cout << "\nЗавдяки кленовiй колодi напiв акустична гiтара EPIPHONE CASINO COUPE VINTAGE SUNBURST готова до будь-якого музичного стилю. Вiд блюзу до джазу та року, вiн забезпечує яскравий та живий тон, але не рiзкий. Поєднуйте його з грифом з червоного дерева, який вносить щiльнiсть i теплоту в звук, i ви отримаєте збалансований iнструмент для будь-якого жанру." << endl;
		cout << "\nПара пiкапiв P-90 - це джерело живлення EPIPHONE CASINO COUPE VINTAGE SUNBURST. Вони унiкальнi тим, що можуть мерехтiти в м’якiй грi, але також можуть звучати досить агресивно. Завдяки цьому у вас є величезна кiлькiсть тонiв, включаючи запатентовані 'джунглi' 'Бiтлз', що було дуже поширеним у багатьох їх класичних записах." << endl;
		cout << "\nГiтаристи з усього свiту цiнують профiль SlimTaper D за швидку та плавну гру. Це не заважає виконувати швидкi соло, але в той же час досить комфортно для ритмових партiй." << endl;
		cout << endl;
		break;
	case 14:
		cout << "2. ";
		cout << "\tEPIPHONE LES PAUL SL PACIFIC BLUE - Електрогiтара\n\t\tЦіна: 4326UAH\n\t\tКод товару: " << code14 << endl;
		cout << "Електрогiтара, 6 струн, форма - Les Paul, дека - тополя, гриф - червоне дерево / палiсандр, пiкапи - Epiphone Ceramic Single-Coil 650SCR / 700SCT (S-S), колiр - синiй. EPIPHONE LES PAUL SL PACIFIC BLUE - це сучасна iнтерпретацiя класичної легендарної моделi. Електрична гiтара оснащена хромованою фурнiтурою. Кришка грифа зроблена з палiсандра з 22 ладами. Колода EPIPHONE LES PAUL SL PACIFIC BLUE виготовлена ​​з тополi, i гриф виготовлений iз дерева червоного дерева. Гiтара має два сингли Epiphone Ceramic Single - Coil 650SCR / 700SCT." << endl;
		cout << "\nРегульований комбiнований мiст стовпчастої панелi 'Обмотування навколо' та тримач струн додають сустейн та спрощують замiну струн. Вбудований iнновацiйний потенцiометр killswitch / тон дозволить створити звуковий стробоскопiчний ефект." << endl;
		cout << endl;
		break;
	case 15:
		cout << "3. ";
		cout << "\tEPIPHONE LES PAUL SL SUNSET YELLOW - Електрогiтара\n\t\tЦiна: 4326UAH\n\t\tКод товару: " << code15 << endl;
		cout << "Електрогiтара, 6 струн, форма - Les Paul, дека - тополя, гриф - червоне дерево / палiсандр, пiкапи - Epiphone Ceramic Single-Coil 650SCR / 700SCT (S-S), колiр - жовтий. EPIPHONE LES PAUL SL SUNSET YELLOW - це сучасна iнтерпретацiя класичної легендарної моделi. Електрична гiтара оснащена хромованою фурнiтурою. Кришка грифа виготовлена ​​з палiсандра з 22 ладами. Колода EPIPHONE LES PAUL SL SUNSET YELLOW BLUE виготовлена ​​з тополi , а болтовий гриф виготовлений з дерева червоного дерева. Гiтара має два сингли Epiphone Ceramic Single - Coil 650SCR / 700SCT." << endl;
		cout << "\nРегульований комбiнований мiст стовпчастої панелi 'Обмотування навколо' та тримач струн додають сустейн та спрощують замiну струн. Вбудований iнновацiйний потенцiометр killswitch / тон дозволить створити звуковий стробоскопiчний ефект." << endl;
		cout << endl;
		break;
	case 16:
		cout << "4. ";
		cout << "\tEVH WOLFGANG SPECIAL MN MATTE ARMY DRAB - Електрогiтара\n\t\tЦiна: 39105UAH\n\t\tКод товару: " << code16 << endl;
		cout << "Електрогiтара, 6 струн, форма - Вольфганг, дека - липа, гриф - клен / клен, пiкапи - Пряме крiплення Вольфганг Хамбакiнг, мiсток - фiрмовий EVH Floyd Rose Locking Tremolo з EVH D-Tuna, колiр - зелений. Випробувана на аренах у всьому свiтi, електрогiтара EVH WOLFGANG SPECIAL MN MATTE ARMY DRAB забезпечує прохолодний звук, надшвидку гру та стиль, готовий до свiтла." << endl;
		cout << "\nЕлектрична гiтара має аркоподiбну липову дошку з болтами з кленового грифа, посилений графiт, а також вигнутий i округлий вiдповiдно до суворих вимог Еддi Ван Халена. Створений для енергiйних рифiв та яскравих вiдведень, кленовий шар iз радiусом 12 '- 16' має 22 лади Jumbo та iнкрустацiю у виглядi чорних крапок. Пара спецiальних флагманiв EVH® Wolfgang Humbucking встановлена ​​безпосередньо в корпусi, забезпечуючи динамiчний, але чiткий звук, а також майже нескiнченний сутейн для потужних акордiв та мелодiйних партiй.";
		cout << "Мiцний та надiйний фiксуючий мiст-тремоло Floyd Rose iз фiрмовою системою EVH та запiрна вершина Floyd Rose® працюють разом для нескiнченного сустею та тонкої настройки. А регулювати якiрний стрижень ще нiколи не було так просто за допомогою зручного болта в основi грифа." << endl;
		cout << "\nЧистопородний iнструмент EVH WOLFGANG SPECIAL MN MATTE ARMY DRAB доступний у рiзних привабливих кольорах з головкою грифа в тон i чорною фурнiтурою." << endl;
		cout << endl;
		break;
	case 17:
		cout << "5. ";
		cout << "\tFENDER AMERICAN ULTRA STRATOCASTER HSS RW COBRA BLUE - Електрогiтара\n\t\tЦiна: 67045UAH\n\t\tКод товару: " << code17 << endl;
		cout << "Електрогiтара, 6 струн, форма - стратокастер, дека - вiльха, гриф - клен / палiсандр, пiкапи - Ultra Noiseless (H-S-S), колiр - синiй, корпус в комплектi. Основнi характеристики електрогiтари FENDER AMERICAN ULTRA STRATOCASTER HSS RW COBRA BLUE: верхня колода з вiльхи; Скульптурнi контури нижньої палуби; Один хамбакер Ultra Double Tap; Два одинарних пiкапа Ultra - Noiseless Hot Strat (середнє та шийне положення); Сучасний профiль для грифу D з надблиском; Кришка iз складеного грифу радiусом 10 '- 14'; 22 лади середнiй джамбо; Включає премiум чохол." << endl;
		cout << "\nAmerican Ultra - це найдосконалiша серiя електричних та бас-гiтар Fender для вимогливих геймерiв, якi вимагають найкращого у всьому: чiткостi, продуктивностi та звуку." << endl;
		cout << "\nЕлектрогiтара FENDER AMERICAN ULTRA STRATOCASTER HSS RW COBRA BLUE оснащена новим унiкальним сучасним профiлем грифа D з надзвичайно гладкими краями для комфортної тривалої гри, а звужений каблук грифа забезпечує легкий доступ до найвищого реєстру. Високошвидкiсний гриф iз складеним накладанням радiусом 10 '- 14' і 22 ладами Medium Jumbo вiдповiдає за легке i точне соло, а також два одиночнi пiкапи Ultra Noiseless Hot i один хамбакер Ultra Double Tap, а також розширенi можливостi проводки забезпечують безмежнi тональнi можливостi - без шуму." << endl;
		cout << "\n'Скульптурнi' обриси нижньої палуби настiльки ж гарнi, як i функцiональнi. Цей унiверсальний, найсучаснiший iнструмент надихне вас на новi висоти. Iншi особливостi включають дуговi кiлочки, хромованi фiтинги та верхнiй кiстковий пiдвiконня. У комплект входить премiум чохол." << endl;
		cout << endl;
		break;
	case 18:
		cout << "6. ";
		cout << "\tFENDER CUSTOM SHOP ARTISAN THINLINE TELE LTD - Електрогiтара\n\t\tЦiна: 103359UAH\n\t\tКод товару: " << code18 << endl;
		cout << "Електрогiтара, 6 струн, магазин на замовлення, колода - попiл, гриф - клен / чорне дерево, пiкапи - Custom Shop Hand-Wound Loaded '51 Nocaster / Custom Shop Hand-Wound Open Loaded '51 Nocaster (SS), колiр - синiй, в набiр кейсiв. Умiло пiдiбранi матерiали, першокласнi компоненти та вишукана робота магазину Fender Custom Shop роблять електрогiтару FENDER CUSTOM SHOP ARTISAN THINLINE TELE LTD чудовим iнструментом. Вiзьмiть порожню колоду з «запеченого» попелу, додайте горловину з «запеченого» клена Почнiть стиль 'C' із 9,5-дюймового африканського чорного дерева, i ви отримаєте блискучий, яскравий темний телевiзор iз приголомшливим басом." << endl;
		cout << "\nПоєднання пiкапiв з ручною раною 51-го року Nocaster та вiдкрито-навантажених 51-ї нокастер створює старовинний звук." << endl;
		cout << "\nIншi особливостi FENDER CUSTOM SHOP ARTISAN THINLINE TELE LTD включають регулятор тональностi жиру 50-х рокiв, мiсток Tele '58 -'63 iз сiдлами RSD, 21 лад 6105, 3-позицiйний перемикач, 1-шаровий черепаховий пiкард, старовиннi кiлочки, верхнiй кicтковий обiд i струнний довiдник. Набiр включає футляр, ремiнь та сертифiкат автентичностi." << endl;
		break;
	case 19:
		cout << "1. ";
		cout << "\tFENDER AMERICAN PROFESSIONAL JAZZ BASS MN SNG - Бас гiара\n\t\tЦiна: 58590UAH\n\t\tКод товару: " << code19 << endl;
		cout << "Бас-гiтара нової серiї American Professional, 4 струни, джазовий бас, колода - вiльха, гриф - клен / клен, пiкапи - V-Mod J-Bass пiкапи, колiр - сiрий, корпус у комплектi. FENDER AMERICAN PROFESSIONAL JAZZ BASS MN SNG поєднує в собi найкраще вчора i сьогоднi i є найсучаснiшим втiленням натхнення вiд Fender. Розроблений вiдомим майстром Майклом Бампом, останнi пiкапи V - Mod Jazz Bass ретельно вiдiбрали альнiковi магнiти рiзних типiв для збалансований звук кожної струни. При цьому аутентичний та впiзнаваний звук Fender залишається." << endl;
		cout << "\nСучасний тонкий профiль грифа 'Slim C' настiльки зручний в руцi, що стає його частиною, тодi як вузькi та високi лади вузького зросту забезпечують знайоме вiдчуття пiд час гри та чудову iнтонацiю. Використання графiтового анкера Posiflex ™ пiдвищує стiйкiсть грифа та запобiгає його деформацiї." << endl;
		cout << "\nОновлена ​​конструкцiя кiлочкiв з канавкою для струни створює оптимальний кут згинання струни на порозi, а також забезпечує щiльне прилягання виткiв струни на кiлочку один до одного, що збiльшує стiйкiсть i покращує стабiльнiсть системи." << endl;
		cout << endl;
		break;
	case 20:
		cout << "2. ";
		cout << "\tFENDER AMERICAN PROFESSIONAL JAZZ BASS V MN BLACK - Бас гiтара\n\t\tЦiна: 62802UAH\n\t\tКод товару: " << code20 << endl;
		cout << "Бас-гiтара, 5 струн, форма - Jazz Bass, дека - вiльха, гриф - клен / клен, пiкапи - V-Mod J-Bass пiкапи (S-S), колiр - чорний, корпус в комплектi. Основнi особливостi FENDER AMERICAN PROFESSIONAL JAZZ BASS V MN BLACK: Дека для бас-гiтари виконана з вiльхи. Кленовий гриф з кленовим накладанням. 5 струн. Склянка 864 мм. Ширина верхнього пiдвiконня 47,6 мм. Кiлькість ладiв - 20. Крiплення грифа до деки виконується на болтах. Набiр пiкапiв - V - Mod J - Басовi пiкапи (S - S) .Bridge - 5 - String High Mass Vintage (HMV), (Strings - Through - Body or Topload). Колiр бас-гiтари чорний." << endl;
		cout << "\nБас-гiтара FENDER AMERICAN PROFESSIONAL JAZZ BASS V MN BLACK є представником лiнiї PROFESSIONAL JAZZ BASS. Цi бас-гiтари мають високоякiсну електронiку та аксесуари, унiкальну обробку всiх компонентiв, яку виконують висококвалiфiковані майстри." << endl;
		cout << "ФЕНДЕР АМЕРИКАНСЬКИЙ ПРОФЕСIЙНИЙ JAZZ BASS V MN BLACK виконаний у чорному кольорi, у комплект входить футляр." << endl;
		cout << endl;
		break;
	case 21:
		cout << "3. ";
		cout << "\tFENDER AMERICAN PROFESSIONAL JAZZ BASS V RW OLYMPIC WHITE - Бас гiтара\n\t\tЦiна: 60000UAH\n\t\tКод товару: " << code21 << endl;
		cout << "Бас-гiтара, 5 струн, форма - Jazz Bass, дека - вiльха, гриф - клен / палiсандр, пiкапи - V-Mod J-Bass пiкапи (S-S), колiр - бiлий, корпус в комплектi. Основнi характеристики FENDER AMERICAN PROFESSIONAL JAZZ BASS V RW OLYMPIC WHITE: Дека для бас-гiтари виконана з вiльхи. Кленовий гриф з накладкою з палiсандру. 5 струн. Склянка 864 мм. Ширина верхнього пiдвiконня 47,6 мм. Кiлькість ладiв - 20. Крiплення грифа до деки виконується на болтах. Набiр пiкапiв - V - Mod J - Басовi пiкапи (S - S) .Bridge - 5 - String High Mass Vintage (HMV), (Strings - Through - Body or Topload). Колiр бас-гiтари бiлий." << endl;
		cout << "\nБас-гiтара FENDER AMERICAN PROFESSIONAL JAZZ BASS V RW OLYMPIC WHITE є представником лiнiї PROFESSIONAL JAZZ BASS. Цi бас-гiтари мають високоякiсну електронiку та аксесуари, унiкальну обробку всiх компонентiв, яку виконують висококвалiфiкованi майстри." << endl;
		cout << endl;
		break;
	case 22:
		cout << "4. ";
		cout << "\tFENDER PLAYER PRECISION BASS LH PF 3TSB - Бас гiтара\n\t\tЦiна: 25110UAH\n\t\tКод товару: " << code22 << endl;
		cout << "Бас-гiтара, лiвша, 4 струни, форма - прецизiйний бас, дека - вiльха, гриф - клен / пао феро, пiкап - плеєр серiї Alnico 5 Split Single-Coil Precision Bass, колiр - sunburst. Основнi особливостi бас-гiтари FENDER PLAYER PRECISION BASS LH PF 3TSB: Деко з вiльхи з глянцевим покриттям; Середнiй пiкап Серiя Alnico 5 Split Single - Coil Precision Bass; Регулювання гучностi та тембру; Профiль грифа - сучасний 'C'; Радiус накладання - 9,5 '." << endl;
		cout << "\nНемає нiчого бiльш класичного, нiж електричний бас Fender, а бас-гiтара FENDER PLAYER PRECISION BASS LH PF 3TSB є максимально автентичною: вона має справжнiй стиль Fender i глибокий, гучний звук, який породив багато iміiацiй. З почуттям плавностi пiд час гри та приголомшливим стилем, цей оглушливий iнструмент готовий увiрватися в студiю або на сцену i допомогти показати свiтовi ваше творче бачення." << endl;
		cout << endl;
		break;
	case 23:
		cout << "5. ";
		cout << "\tFENDER PLAYER PRECISION BASS LTD MN EGN - Бас гiтара\n\t\tЦiна: 25110UAH\n\t\tКод товару: " << code23 << endl;
		cout << "Бас-гiтара, 4 струни, форма - Precision Bass, дека - вiльха, гриф - клен, пiкап - Player Precision Bass (S), колiр - зелений. Немає нiчого бiльш класичного, нiж бас-гiтара Fender, а обмежений тираж FENDER PLAYER PRECISION BASS LTD MN EGN є максимально автентичним - поряд iз справжнiм стилем компанiї та громовим вибуховим звуком, який породив тисячi iмiтацiй." << endl;
		cout << "\nЗавдяки плавному вiдчуттю пiд час гри та неймовiрному погляду, який привертає увагу оточуючих, цей приголомшливий iнструмент готовий пiдкорювати студiї та сцени, щоб показати свiтовi свою творчiсть." << endl;
		cout << endl;
		break;
	case 24:
		cout << "6. ";
		cout << "\tFENDER PLAYER PRECISION BASS MN 3TS - Бас гiтара\n\t\tЦiна: 24831UAH\n\t\tКод товару: " << code24 << endl;
		cout << "Бас-гiтара, 4 струни, форма - Precision Bass, дека - вiльха, гриф - клен / клен, пiкап - плеєр серiї Precission Bass, колiр - sunburst. FENDER PLAYER PRECISION BASS MN 3TS - це чотириструнна бас-гiтара з лiнiйки P - BASS. Цi гiтари мають високоякiсну електронiку та аксесуари, ретельну обробку всiх компонентiв, що виконують висококвалiфiкованi майстри. PRECISION BASS MN 3TS має яскравий стиль i приголомшливий звук. Дека гiтари виконана з вiльхи. Кленовий гриф з кленовою накладкою. Крiплення грифа до деки виконано на болтах. Кiлькiсть ладiв - 20, мензурка - 864 мм, ширина верхньої гриф - 41,3 мм." << endl;
		cout << "\nПiкап серiї Series Precision Bass встановлений на гiтарнiй колодi, що утворює насичений та насичений звук. Мiст - виправлений. Встановлено набiр рядкiв .045 - .105." << endl;
		break;
	case 25:
		cout << "1. ";
		cout << "\tEPIPHONE UKULELE LES PAUL HCB - Укулеле\n\t\tЦiна: 4185UAH\n\t\tКод товару: " << code25 << endl;
		cout << "Електроакустичне укулеле, 4 струни, форма - Les Paul, верхня палуба - клен, черепашка i нижня палуба - червоне дерево, гриф - окуме / палiсандр, колiр - сонячний вибух, футляр в комплектi. Epiphone Ukulele Les Paul - це незвичайна електроакустична гавайська гiтара з дизайном в стилi легендарної електрогiтари Les Paul. У цьому iнструментi Epiphone використовував свiй багатий досвiд у створеннi електрогiтар, застосовуючи його до гавайської гiтари. що у нього багато особливостей електрогiтар, i лише конструкцiя та мензурка нагадують традицiйнi укулеле. Як i електрогiтара, укулеле Les Paul має корпус з червоного дерева, а верх виконаний з вогненного клена AAA, шийки з дерева окуме .";
		cout << " Форма настилу точно повторює прототип, а покриття вiд сонячних променiв є невiд’ємною частиною спадщини цiєї моделi. Як i 'дорослий' Лес Поль, тiло укулеле має бiлу окантовку, що пiдкреслює його нiжнi лiнiї. Гриф прикрiплений болтами до корпусу i має 19 ладiв, що достатньо для склянки всього 15 '. Кришка грифа шипшини має яскраво виражений радiус, що також характерно для електрогiтар, а форма головки грифа така ж, як прототип. Точнiсть та плавнiсть роботи шпильок, яких Epiphone Ukulele Les Paul, безумовно, на висотi, мають велике значення для короткого мензурки." << endl;
		cout << "\nEpiphone Ukulele Les Paul оснащений пасивним п’єзопiдйомником у мосту, що дозволяє пiдключати iнструмент до зовнiшнього пiдсилювача на концертах, а також використовувати його для запису. Пiкап випромiнює лiнiйний сигнал, тому гавайська гiтара повинна бути пiдключена до змiшувального пульта, DI-коробки або використовувати спецiальний пiдсилювач для акустичних гiтар. Розетка для пiдключення знаходиться у своєму звичайному мiсцi - на оболонцi." << endl;
		cout << endl;
		break;
	case 26:
		cout << "2. ";
		cout << "\tEPIPHONE UKULELE LES PAUL VSB - Укулеле\n\t\tЦiна: 4185UAH\n\t\tКод товару: " << code26 << endl;
		cout << "Електроакустичне укулеле, 4 струни, форма Les Paul, верхня колода клена, черепашка та нижня колода червоного дерева, гриф з дерева окуме, корпус у комплектi. Epiphone Ukulele Les Paul - це незвичайна електроакустична гавайська гiтара з дизайном в стилi легендарної електрогiтари Les Paul. У цьому iнструментi Epiphone використовував свiй багатий досвiд у створеннi електрогiтар, застосовуючи його до гавайської гітари. що у нього багато особливостей електричних гiтар, i лише конструкцiя та мензурка нагадують традицiйнi гавайськi гитари. Як i електрогiтара, укулеле Les Paul має корпус з червоного дерева, а верхня частина виконана з вогненного клена AAA, шийки з дерева окуме .";
		cout << " Форма настилу точно повторює прототип, а покриття вiд сонячних променiв є невiд’ємною частиною спадщини цiєї моделi. Як i 'дорослий' Лес Поль, тiло укулеле має бiлу окантовку, що пiдкреслює його нiжні лiнiї. Гриф прикрiплений болтами до корпусу i має 19 ладiв, що достатньо для склянки всього 15 '. Кришка грифа шипшини має яскраво виражений радiус, що також характерно для електрогiтар, а форма головки грифа така ж, як Точнiсть та плавнiсть роботи шпильок, яких Epiphone Ukulele Les Paul, безумовно, має висоту, мають велике значення для короткого мензурки." << endl;
		cout << "\nEpiphone Ukulele Les Paul оснащений пасивним п’єзопiдйомником у мосту, що дозволяє пiдключати iнструмент до зовнiшнього пiдсилювача на концертах, а також використовувати його для запису. Пiкап випромiнює лiнiйний сигнал, тому гавайська гiтара повинна бути пiдключена до змішувального пульта, DI-коробки або використовувати спецiальний пiдсилювач для акустичних гiтар. Розетка для пiдключення знаходиться у своєму звичайному мiсцi - на оболонцi." << endl;
		cout << endl;
		break;
	case 27:
		cout << "3. ";
		cout << "\tFENDER UKULELE VENICE SOPRANO BLACK WN - Укулеле\n\t\tЦiна: 2455UAH\n\t\tКод товару: " << code27 << endl;
		cout << "Укулеле, розмiр - сопрано, верхня палуба - ламiнована липа, боки та спинка - ламiнована листяна деревина, гриф - НАТО / горiх, колiр - чорний. FENDER UKULELE VENICE SOPRANO BLACK WN - це укулеле в корпусi сопрано вiд вiдомого американського гiтарного бренду Fender. Творцi моделi черпали натхнення в неповторнiй атмосферi Венецiї (Калiфорнiя), а укулеле Венецiї передає цю вiльну атмосферу. Kласичний впiзнаваний звук." << endl;
		cout << "\nКорпус укулеле виготовлений з ламiнованої деревини твердих порiд, вiн компактний та зручний для гри. Верхня палуба зроблена з ламiнованої липи. Модель сопрано - це укулеле мiнiмально можливого розмiру, пiдходить для початкiвцiв, а також музикантiв з невеликим розмiром руки, а звучання не поступається більшим iнструментам. Укулеле FENDER UKULELE VENICE SOPRANO BLACK WN можна використовувати де завгодно: на пляжi, в студiї або на виставах." << endl;
		cout << "\nГриф профiлю Slim C виготовлений з дерева НАТО з накладкою з горiха, це також надає додатковий комфорт пiд час гри, а мiст No-Tie дозволяє легко i швидко мiняти струни. Гриф має 12 ладiв, мензурка дорiвнює 345 мм (13,6 дюйма). Укулеле має стильний зовнiшнiй вигляд. Модель представлена ​​в чорному кольорi з хромованою фурнiтурою. Корпус має матове покриття та кремовий кант. Виготовлено Fender." << endl;
		cout << endl;
		break;
	case 28:
		cout << "4. ";
		cout << "\tFENDER UKULELE VENICE SOPRANO DAPHNE BLUE WN - Укулеле\n\t\tЦіна: 2455UAH\n\t\t: " << code28 << endl;
		cout << "\nКорпус укулеле виготовлений з ламiнованої деревини твердих порiд, вiн компактний та зручний для гри. Верхня палуба зроблена з ламiнованої липи. Модель сопрано - це укулеле мiнiмально можливого розмiру, пiдходить для початкiвцiв, а також музикантiв з невеликим розмiром руки, а звучання не поступається більшим iнструментам. Укулеле FENDER UKULELE VENICE SOPRANO BLACK WN можна використовувати де завгодно: на пляжi, в студiї або на виставах." << endl;
		cout << "\nГриф профiлю Slim C виготовлений з дерева НАТО з накладкою з горiха, це також надає додатковий комфорт пiд час гри, а мiст No-Tie дозволяє легко i швидко мiняти струни. Гриф має 12 ладiв, мензурка дорiвнює 345 мм (13,6 дюйма). Укулеле має стильний зовнiшнiй вигляд. Модель представлена ​​в чорному кольорi з хромованою фурнiтурою. Корпус має матове покриття та кремовий кант. Виготовлено Fender." << endl;
		cout << endl;
		break;
	case 29:
		cout << "5. ";
		cout << "\tFENDER UKULELE VENICE SOPRANO NATURAL WN - Укулеле\n\t\tЦіна: 2455UAH\n\t\tКод товару: " << code29 << endl;
		cout << "Укулеле, розмiр - сопрано, верхня палуба - ламiнована липа, боки та спинка - ламiнована листяна деревина, гриф - НАТО / горiх, колiр - натуральний. FENDER UKULELE VENICE SOPRANO BLACK WN - це укулеле в корпусi сопрано вiд вiдомого американського гiтарного бренду Fender. Творцi моделi черпали натхнення в неповторнiй атмосферi Венецiї (Калiфорнiя), а укулеле Венецiї передає цю вiльну атмосферу. Kласичний впiзнаваний звук." << endl;
		cout << "\nКорпус укулеле виготовлений з ламiнованої деревини твердих порiд, вiн компактний та зручний для гри. Верхня палуба зроблена з ламiнованої липи. Модель сопрано - це укулеле мiнiмально можливого розмiру, пiдходить для початкiвцiв, а також музикантiв з невеликим розмiром руки, а звучання не поступається більшим iнструментам. Укулеле FENDER UKULELE VENICE SOPRANO BLACK WN можна використовувати де завгодно: на пляжi, в студiї або на виставах." << endl;
		cout << "\nГриф профiлю Slim C виготовлений з дерева НАТО з накладкою з горiха, це також надає додатковий комфорт пiд час гри, а мiст No-Tie дозволяє легко i швидко мiняти струни. Гриф має 12 ладiв, мензурка дорiвнює 345 мм (13,6 дюйма). Укулеле має стильний зовнiшнiй вигляд. Модель представлена ​​в чорному кольорi з хромованою фурнiтурою. Корпус має матове покриття та кремовий кант. Виготовлено Fender." << endl;
		cout << endl;
		break;
	case 30:
		cout << "6. ";
		cout << "\tFENDER UKULELE VENICE SOPRANO SHELL PINK WN - Укулеле\n\t\tЦіна: 2455UAH\n\t\tКод товару: " << code30 << endl;
		cout << "Укулеле, розмiр - сопрано, верхня палуба - ламiнована липа, боки та спинка - ламiнована листяна деревина, гриф - НАТО / горiх, колiр - рожевий. FENDER UKULELE VENICE SOPRANO BLACK WN - це укулеле в корпусi сопрано вiд вiдомого американського гiтарного бренду Fender. Творцi моделi черпали натхнення в неповторнiй атмосферi Венецiї (Калiфорнiя), а укулеле Венецiї передає цю вiльну атмосферу. Kласичний впiзнаваний звук." << endl;
		cout << "\nКорпус укулеле виготовлений з ламiнованої деревини твердих порiд, вiн компактний та зручний для гри. Верхня палуба зроблена з ламiнованої липи. Модель сопрано - це укулеле мiнiмально можливого розмiру, пiдходить для початкiвцiв, а також музикантiв з невеликим розмiром руки, а звучання не поступається більшим iнструментам. Укулеле FENDER UKULELE VENICE SOPRANO BLACK WN можна використовувати де завгодно: на пляжi, в студiї або на виставах." << endl;
		cout << "\nГриф профiлю Slim C виготовлений з дерева НАТО з накладкою з горiха, це також надає додатковий комфорт пiд час гри, а мiст No-Tie дозволяє легко i швидко мiняти струни. Гриф має 12 ладiв, мензурка дорiвнює 345 мм (13,6 дюйма). Укулеле має стильний зовнiшнiй вигляд. Модель представлена ​​в чорному кольорi з хромованою фурнiтурою. Корпус має матове покриття та кремовий кант. Виготовлено Fender." << endl;
		break;
	case 31:
		cout << "1. ";
		cout << "\tAMPEG BA-112 V2 - Пiдсилювач\n\t\tЦiна: 12317UAH\n\t\tКод товару: " << code31 << endl;
		cout << "Комбiнований пiдсилювач низьких частот, середньоквадратична потужнiсть 75 Вт, користувацький динамiк Ampeg 1x12 ', iмпеданс 4 Ом, 3-смуговий еквалайзер, пiдсилювачі Ultra Hi / Lo, овердрайв Bass Scrambler, вихiд для навушникiв. AMPEG BA - 112 V2 має класичний звук пiдсилювачiв Ampeg. Цей комбiнований пiдсилювач iдеально пiдходить для тренувань та репетицiй на невеликiй сценi. Блок керування на переднiй панелi забезпечує швидкий доступ до налаштувань, що особливо зручно для живих виступiв та репетицiй.";
		cout << " Унiкальна нова схема додає динамiки та гармонiки звуку, як ламповий пiдсилювач, в той час як секцiя надбудови Bass Scrambler ™ - вбудований легендарний модуль овердрайву - додає смаку та гнучкостi будь-якому музичному стилю." << endl;
		cout << "\nНовий дизайн, що дозволяє комбiнувати нахил на 60 градусiв, забезпечує чiткий природний звук без втрати тональних характеристик та вiдтiнкiв виконання пiд час гри. Окрiм цього, вихiд для навушникiв та вхiд AUX дозволяють грати, не заважаючи оточуючим, у будь-який час доби." << endl;
		cout << "\nЯк i всi товари Ampeg, серiя BA розроблена у спiвпрацi з музикантами та виготовлена ​​з використанням найкращих компонентiв. AMPEG BA-112 V2 чудово впорається iз завданнями, якi вимагають потужного та якiсного звуку з контрольованою гучнiстю." << endl;
		cout << endl;
		break;
	case 32:
		cout << "2. ";
		cout << "\tAMPEG BA-210 V2 -  Пiдсилювач\n\t\tЦiна: 20444UAH\n\t\tКод товару: " << code32 << endl;
		cout << "Комбiнований пiдсилювач для бас-гiтари, 450 Вт, середньоквадратичне значення, користувацькi динамiки Ampeg 2x10 ', iмпеданс 16 Ом, 1' ВЧ-динамiк, 3-смуговий еквалайзер, збалансований вихiд, FX Loop, Ultra Hi / Lo boosters, Bass Scrambler overdrive, Headphone Out AMPEG BA - 210 V2 має класичний звук пiдсилювачів Ampeg. Комбiнований пiдсилювач iдеально пiдходить для повноцiнного виступу з групою. Пристрiй має всi функцiї, необхiднi професiйному музиканту для роботи на сценi або в студiї.";
		cout << " Вiн оснащений потужнiстю 450 Вт, гнучкими налаштуваннями та елементами керування на переднiй панелi, унiкальною схемою для динамiки та звуку лампового пiдсилювача, секцiєю Bass Scrambler ™ overdrive - вбудованим легендарним модулем овердрайву, що додає нотку пiкантностi та гнучкостi будь-якому Музичний стиль, новий дизайн, дозволяє комбiнувати нахил на 60 градусiв для отримання чiткого природного звуку без втрати тональних характеристик та вiдтiнкiв виконання пiд час вiдтворення, збалансованого виведення лiнiй та ефектiв, 1-дюймового високочастотного ВЧ-динамiка." << endl;
		cout << "\nЯк i всi товари Ampeg, серiя BA розроблена у спiвпрацi з музикантами та виготовлена ​​з використанням найкращих компонентiв." << endl;
		cout << endl;
		break;
	case 33:
		cout << "3. ";
		cout << "\tAMPEG PF-350 - Пiдсилювач\n\t\tЦiна: 12065UAH\n\t\tКод товару: " << code33 << endl;
		cout << "Пiдсилювач бас-гiтари в головному форматi, потужність 350 Вт, опір 4 Ом / 8 Ом, транзисторний пiдсилювач, пiдсилювач потужностi класу D, 3-смуговий еквалайзер, обмежувач, збалансований DI-вихід, петля ефектiв, аттенюатор -15 дБ, вихiд на навушники. AMPEG PF - 350 - компактний пiдсилювач низьких частот iз серiї Portaflex потужнiстю 350 Вт з 3-смуговим еквалайзером та обмежувачем. Пiдсилювач низьких частот PF - 350 важить менше 4 кг i має висоту лише 69 мм! I не думайте, що компактнi розміри не здатні видавати правильний звук.";
		cout << "Як i iншi моделi серiї Portaflex, PF-350 має глибокий теплий тон, який цiнують користувачi Ampeg. Вбудований прямий блок дозволяє пiдключатись безпосередньо до мiкшера або рекордера i передавати потрiбний звук. А найкраще, пiдключiть «голову» до пiдходящого басового шафи серiї Portaflex, як для звучання, так i для ефектного зовнiшнього вигляду." << endl;
		cout << endl;
		break;
	case 34:
		cout << "4. ";
		cout << "\tAMPEG PF-500 - Пiдсилювач\n\t\tЦiна: 15696UAH\n\t\tКод товару: " << code34 << endl;
		cout << "Пiдсилювач бас-гiтари в головному форматi, потужність 500 Вт, 3-смуговий еквалайзер, вбудований обмежувач, вихiд для навушникiв, збалансований лiнiйний вихiд, петля ефектiв. Пiдсилювач AMPEG PF - 500, легкий i надкомпактний, здатний видавати неймовірнi 500 Вт потужностi, забезпечуючи чистий класичний тон Ампег. Пiдсилювач можна встановити на кришку кабiни та зберiгати / транспортувати всерединi корпусу." << endl;
		cout << "Середньоквадратична вихiдна потужнiсть - 500 Вт при 4 Ом, пiдсилювач MOSFET, пiдсилювач потужностi класу D, вбудований компресор, 3-смуговий еквалайзер iз 5-позицiйною секцiєю управлiння середньочастотним звуком, збалансований вихiд лiнiї, контур ефектiв з регулюванням ефекту (можна використовувати ножний перемикач ), вихiд на навушники / лiнiйний вхiд. Також PF-500 оснащений компресором для щiльного i чистого тону при високому рiвнi гучностi. Якщо ви шукаєте потужний пiдсилювач з хорошим звучанням i компактними розмiрами, то AMPEG PF-500 - це те, що вам потрiбно!" << endl;
		cout << endl;
		break;
	case 35:
		cout << "5. ";
		cout << "\tAMPEG SVT-3PRO - Пiдсилювач\n\t\tЦiна: 39297UAH\n\t\tКод товару: " << code35 << endl;
		cout << "Пiдсилювач `` головка '' 450 Вт / 4 Ом, 275 Вт / 8 Ом, лампи: передпiдсилювач - 3x12AX7, привiд - 1x12AX7, 1x12AU7, 3 смуги еквалайзера, контроль середини 5 положень, графiчний еквалайзер 9 смуг, наднизький / Високi посилення, збалансований вихiд, ефекти циклу. Басовий пiдсилювач AMPEG SVT - 3PRO має розмip 2 одиницi стiйочного простору. Його легко встановити як 'головку', для цього на нижнiй сторонi конструкцiї передбачено 4 гумовi нiжки для бiльшої стiйкостi на будь-якiй поверхнi. дуже мiцний i надiйний, виготовлений iз металевого сплаву з чорним покриттям, на ручках передньої панелi та повзунки управлiння пiдсилювачем зручно розташоваi, що дозволяє музикантам з легкiстю робити регулювання в процесi роботи." << endl;
		cout << "\nAMPEG SVT-3PRO має потужнiсть 450 Вт (середньоквадратичне значення) при 4 Ом або 275 Вт при 8 Ом. Пiдсилювач є гiбридним, оскiльки вихiдний каскад пiдготовлений на польових транзисторах, а передкаскадний каскади - ламповий. У схемi використовується одна лампа - лампа типу 12AU7 або 12AX. Охолодження вiд перегрiву примусової системи пiдсилювача завдяки вбудованому вентилятору. Для пiдвищення надiйностi пристрою та пiдвищення захисту динамiкiв пiд час перехiдних процесiв, якi активуються при включеннi пiдсилювача, попередньо спостерiгаючи за релейним захистом." << endl;
		cout << "\nПiдсилювач має один iнструментальний вхід iз зручною кнопковою подушкою аттенюатора. Є також кнопки Bright і Gain, а також свiтлодiодний iндикатор Peak / Mute. Система управлiння також має кнопки Ultra Lo та Ultra Hi, якi включають додаткове пiдвищення частотної характеристики. Tube Gain - це регулятор, який дозволяє змiнити весь характер звуку пiдсилювача низьких частот з дуже рiзкого, проникливого на плавний i м’який. Кнопка вимкнення звуку приглушує пристрiй пiд час налаштування приладу. Головний регулятор регулює загальну гучнiсть." << endl;
		cout << "\nНа заднiй панелi AMPEG SVT-3PRO є 3 виходи для пiдключення динамiкiв - один Speakon i два роз'єми. Існують також асиметричний лiнiйний вихiд (гнiздо) i симетричний лiнiйний вихiд трансформатора (XLR), якi мають загальний контроль рiвня i загальну кнопку для перемикання точки дискретизацiї сигналу пiсля або перед еквалайзером. На заднiй панелi AMPEG SVT-3PRO є вхiд для пiдсилювача потужностi i вихiд для попереднього пiдсилювача, роз'єми Preamp Out i Power Amp In, 3-контактний роз'єм для пiдключення 2-кнопочного ножного перемикача, вихiд для тюнера." << endl;
		cout << "\nПiдсилювач AMPEG SVT-3PRO має два еквалайзери. Перший: 3-смуговий з низькими, середнiми частотами (параметричними), високими частотами; Другий: 9-напрямкова графiка Налаштування частоти параметрiв параметричного еквалайзера є дискретним i має п'ять позицiй. Графiчний еквалайзер має кнопку для ввiмкнення графiчного еквалайзера та зручний регулятор рiвня, який представлений як додатковий, десятий повзунок рiвня. Поточний стан графiчного еквалайзера можна контролювати за допомогою свiтлодiодного iндикатора Graphic EQ ON." << endl;
		cout << endl;
		break;
	case 36:
		cout << "6. ";
		cout << "\tAMPEG SVT-4PRO - Пiдсилювач\n\t\tЦiна: 54993UAH\n\t\tКод товару: " << code36 << endl;
		cout << "Пiдсилювач бас-гiтари у головному форматi, потужнiсть 600 Вт, опiр 2 Ом (490 В / 4 Ом, 300 В / 8 Ом), 3x12AH7, 9-смуговий графiчний еквалайзер, 3-смуговий еквалайзер з параметричним середнiм, наднизькi / високi пiдсилювачi, вихiд балансу 2 шт., петльовий ефект У свiтi високопродуктивних пiдсилювачiв басiв пiдсилювачi AMPEG SVT є окремим класом. У найкращих традицiях AMPEG SVT - 4PRO надає бiльше потужностi, продуктивностi та гнучкостi, нiж будь-який iнший басовий пiдсилювач у своєму родi." << endl;
		cout << "\nПiдсилювач AMPEG SVT-4PRO забезпечує широку палiтру тональних налаштувань. Регулятор частоти дозволяє вибрати центральну частоту для регулятора середнього дiапазону, забезпечуючи 5 рiзних опцiй середнього звучання. I якщо цього недостатньо, ви можете використовувати 9-смуговий графiчний еквалайзер, щоб покращити звук, або налаштувати футзальний перемикач 'другого каналу', щоб збiльшити гучнiсть вашого сольного басу." << endl;
		cout << "\nПiдсилювач AMPEG SVT-4PRO призначений для музикантiв, якi хочуть мати SVT-звук та продуктивнiсть (з деякими сучасними вдосконаленнями) у зручному, потужному та довговiчному дизайнi. З величезною та рiзноманiтною групою шанувальникiв серед артистiв, серед яких Тонi Левiн (Пiтер Габрiель / Кiнг Багрянець), Клiфф Вiльямс (AC / DC), Пабло Стеннет (Зiггi Марлi) та багато iнших, AMPEG SVT-4PRO є справжнiм фаворитом серед професiоналiв . У свiтi високопродуктивних басових пiдсилювачiв вiн має все необхiдне для створення звуку." << endl;
		cout << endl;
		break;
	case 37:
		cout << "1. ";
		cout << "\tFENDER PEDAL FULL MOON DISTORTION - Педаль ефектiв\n\t\tЦiна: 4189UAH\n\t\tКод товару: " << code37 << endl;
		cout << "Педаль ефектiв, для електрогiтар, спотворення, управлiння: Hi-Treb, Treble, Middle, Bass, Level, Boost, Gain / 2 перемикача: Texture, Bite, 3-смуговий еквалайзер, корпус - метал, джерело живлення - акумулятор / живлення 9 В постачання. FENDER PEDAL FULL MOON DISTORTION - спотворення педалi гiтари. Ефект дозволяє отримати потужний, агресивний звук i має гнучкi параметри налаштування. Перемикач Texture дозволяє використовувати асиметричнi режими обробки сигналiв symmetricaland i Bite перемикає верхню частину середнього отримати вражаючу атаку, яка дозволить гiтарному звуку прорiзати будь-який мiкс.";
		cout << " 3-смуговий еквалайзер надає широкий спектр можливостей регулювання звуку, а додаткова ручка Hi-Treble тонко налаштовує високi частоти. Другий додатковий ножний перемикач дозволяє додати до 12 дБ. Дизайн повного мiсяця спотворення використовує повнiстю оригiнальну схему." << endl;
		cout << "\nПри розробцi цiєї моделi експерти Fender консультувались з багатьма музикантами, i в результатi була створена педаль, яка найбiльше вiдповідала сценi. Вiн має мiцний анодований алюмiнiєвий корпус, а класичний свiтлодiодний iндикатор Jewel надає йому класичний вигляд Fender. Елементи управлiння також оснащенi свiтлодiодним пiдсвiчуванням, що дозволяє легко керувати налаштуваннями на темнiй сценi. Акумулятор зручно мiняти завдяки магнiтнiй кришцi власної розробки Fender." << endl;
		cout << endl;
		break;
	case 38:
		cout << "2. ";
		cout << "\nDIGITECH FS3X - Футсвiтч для педалi ефектiв\n\t\tЦiна: 977UAH\n\t\tКод товару: " << code38 << endl;
		cout << "Futswitch, для педалей ефектiв та процесорiв, сумiсний з Jimi Hendrix Experience, JamMan та Expression Factory та iншими, управлiння: кнопки режиму / вгору / вниз, вихід 1/4 ', металевий корпус, шнур 3 м для підключення. DIGITECH FS3X - це зручний перемикач ергономiчної форми з 3 кнопками вiдомого американського виробника педалей та процесорiв для гiтарних ефектiв." << endl;
		cout << "\nМодель пiдходить для використання з пристроями DigiTech, включаючи The Jimi Hendrix Experience, The JamMan та Expression Factory. Футсвiч пiдвищує зручнiсть використання обладнання пiд час занять та живих виступiв, а також додає додаткову функцiональнiсть." << endl;
		cout << "\n3 кнопки управлiння: Режим, Вгору, Вниз. Залежно вiд обладнання, яким ви користуєтесь, FS3X можна зручно керувати, не тримаючись за руки, за допомогою таких функцiй, як: попереднiй вибiр або вибiр ефекту, змiна режиму, автоматичний запуск / зупинка або автоматичний запис." << endl;
		cout << "\nФутсвiч має мiцний металевий корпус чорного кольору. Модель компактна i портативна, займає мало мiсця. У комплект входить кабель довжиною 3 метри." << endl;
		cout << endl;
		break;
	case 39:
		cout << "3. ";
		cout << "\tDIGITECH OBSCURA - Педаль ефектiв\n\t\tЦiна: 5613UAH\n\t\tКод товару: " << code39 << endl;
		cout << "Гiтарна педаль, стерео затримка, 2 входи та 2 виходи, 4 типи затримки: ANALOG, TAPE, Lo-Fi, Reverse, True Bypass. DIGITECH OBSCURA - гiтарна педаль зi стерео затримкою вiд вiдомого американського продюсера. Є чотири типи ефектiв: вiнтажний аналоговий, класична стрiчка, Lo - Fi iз примусово зменшеним дiапазоном та глибиною та зворотний, що вiдтворює повторення у зворотному порядку. цi ефекти можна додатково змiнити за допомогою поворотної ручки Tone / Degrade, i ви можете налаштувати їх вiтворення за допомогою Time / Repeats.";
		cout << " Перемикач Delay Tails On / Off визначає поведiнку педалi в байпасному режимi - при натисканнi повторний сигнал буде продовжувати звучати пiсля вимкнення ефекту. Передбачений режим True Bypass, в якому педаль не впливає на оригiнальний звук. Модель укладена в компактний корпус незвично яскравого дизайну. Незалежнi вхiднi та вихiднi роз'єми 1/4 роз'єму розташованi з бокiв." << endl;
		cout << endl;
		break;
	case 40:
		cout << "4. ";
		cout << "\tAMPEG OPTO COMP - Педаль ефектiв\n\t\tЦiна: 3602UAH\n\t\tКод товару: " << code40 << endl;
		cout << "Педаль аналогових ефектiв, компресор бас-гiтари, елементи управлiння - CompreS-Sion, Release, Output Level, джерело живлення - 9V. AMPEG OPTO COMP - компресор ефектiв педалi бас-гiтари вiдомого американського виробника." << endl;
		cout << "\nОсобливiсть моделi OPTO COMP - компактний корпус, що має розмiри всього 114 х 66 х 56 мм. Ця педаль легко помiститься в кишенi будь-якого футляра для гiтари, не займе багато мiсця на сценi або на педалi. Представлена ​​модель вiдрiзняється високою якiстю використовуваних електронних компонентiв та збiрки." << endl;
		cout << "\nОброблений звук, який видає компресор, дуже чистий i прозорий, тодi як тембр iнструменту залишається незмiнним, бас-гiтара звучить дуже природно. Роз'єми для пiдключення гнiзда 1/4 'розташованi на лiвiй та правiй сторонi педалi. Живлення вiд стандартного адаптера змiнного струму або акумулятора 9 В (не входить в комплект)." << endl;
		cout << "\nВикористовувати ефект зручно i просто. Елементи управлiння та iндикатори розташованi у верхнiй частинi педалi - елементи управлiння Compression, Release, Output Level i кнопка живлення." << endl;
		cout << endl;
		break;
	case 41:
		cout << "5. ";
		cout << "\tFENDER PEDAL LOST HIGHWAY PHASER - Педаль ефектiв\n\t\tЦiна: 3491UAH\n\t\tКод товару: " << code41 << endl;
		cout << "Педаль, фазер, два швидкiснi режими з окремими регуляторами глибини ефекту, два типи хвиль. Основнi особливостi ФЕНЗЕРНОГО ПЕДАЛУ FENDER POST: Швидкiсний фаз з аналоговим ефектом з 4 - та 8 - ступiнчастою фазою; Поiльний / швидкий перемикач з незалежними регуляторами швидкостi та глибини; Регулятори зворотного зв'язку Blendand; Трикутнi хвилi Синусоїдаленд; Динамiчно чутлива частота модуляцiї." << endl;
		cout << "\nПоширенi в кiнцi 60-х - на початку 70-х рокiв, фазери створюють вiдчуття руху i додають звуку вашому звуку. Педаль ефектiв FENDER PEDAL LOST HIGHWAY забезпечує потужне, гнучке аналогове фазування у ваше обладнання. Повiльна та швидка швидкi перемикання швидкостi - кожна зi своїми незалежними регуляторами швидкостi та глибини - полегшують чергування повільної фази iз швидкою та спотвореною модуляцiєю. Перемикач Wave змiнює форму хвилi (синусоїдальну та трикутну), тодi як 4- та 8-ступiнчасте фазування полегшує додавання додаткового резонансу на ходу. Регулятор чутливостi дозволяє змiнювати частоту модуляцiї на основi динамiки вашої гри - увiмкнiть її, i iнтенсивнiсть фазування збiльшиться." << endl;
		cout << endl;
		break;
	case 42:
		cout << "6. ";
		cout << "\tFENDER PEDAL MARINE LAYER REVERB - Педаль ефектiв\n\t\tЦiна: 4050UAH\n\t\tКод товару: " << code42 << endl;
		cout << "Педаль ефекту, реверберацiя, управлiння - час реверберацiї, демпфування, попереднє затримка, перемикання типiв, перемикання варiацiй, перемикання фiльтрiв, рiвень ефекту, педальний вимикач ефекту без звуку, вхiд - 1 x 1/4 ', вихiд - 1 x 1/4', потужнiсть - 9 В акумулятор або блок живлення. Основнi особливостi педалi ефектiв FENDER PEDAL MARINE LAYER REVERB: Управлiння: час реверберацiї, демпфування, попередня затримка, перемикач типу (Hall / Room / Special), перемикання варiацiй (1/2), перемикання фiльтрiв (On / Off), ефект Перемикач рiвня, ефекту Без звуку; Вхiд: 1 x 1/4 'iнструмент; Вихiд: 1 х 1/4 'iнструмент; Блок живлення: 9 В акумулятор або 9 В живлення; Споживана потужнiсть: 271 мА; Вхiдний опiр: 1 мм; Вихiдний опiр: 1,5 кО; Матерiал корпусу: Анодований алюмiнiй." << endl;
		cout << "\nРевербератор - це дуже важливе обладнання для будь-якого гiтариста. Ви можете додати гучнiсть до звуку або заглушити сигнал мерехтливим вiдлунням - у будь-якому випадку FENDER PEDAL MARINE LAYER REVERB може зробити все, що завгодно. Доступнi типи реверберацiї (включаючи класичний Hall, Room та найновiший Shimmer) роблять цю педаль просто незамiнною." << endl;
		cout << endl;
		break;
	case 43:
		cout << "1. ";
		cout << "\tKORG VPT-1 - Тюнер\n\t\tЦiна: 836UAH\n\t\tКод товару: " << code43 << endl;
		cout << "Вокальний тюнер для вимiрювання висоти тону, дiапазон настройки - A1 - C7, з дисплеєм, вбудованим мiкрофоном, функцiями Sound Out i Sound Back, 3,5-мм роз'єм для навушникiв, робота вiд батареї AAA, кольоровий чорний KORG VPT - 1 - симулятор голосового тюнера, розроблений вiд Korg, який має понад 40-рiчний досвiд у виробництвi тюнерiв, що заслужило повну довiру музикантiв." << endl;
		cout << "\nKORG VPT-1 допоможе пiдняти вашi вокальнi здiбностi на новий рiвень. Завдяки тюнеру ви можете контролювати висоту тону, що дуже важливо, особливо пiд час запису голосу, оскiльки вiн може звучати iнакше, нiж у прямому ефiрi." << endl;
		cout << "\nKORG VPT-1 розташований вертикально i зручно тримати його в лiвiй руці. У корпус вбудований мiкрофон, дисплей i три свiтлодiоди (два червоних i один синiй). Коли ви спiваєте в мiкрофон, нота вiдображається на одному з двох нотних млинiв iз скрипковим та басовим ключами (якi дають уявлення про точну висоту). Червонi свiтлодiоди вказують, вище або нижче тону, вiдносно того, що вам потрiбно. Як тiльки ви заспiваєте 'правильно', в центрi загориться синiй свiтлодiод. Iндивiдуальнi особливостi також враховуються функцiєю зсуву октави, зберiгаючи вiдображення нот у межах п’яти рядкiв." << endl;
		cout << "\nОднiєю з особливостей KORG VPT-1 є можливiсть регулювання налаштування - iснує три рiвнi складностi (ЛЕГКО / СЕРЕДНIЙ / ТВЕРДИЙ). Краще починати з ЛЕГКО, коли ви отримаєте бiльше навичок, щоб збiльшити до СЕРЕДНЬОГО, а потiм перейти до ЖОРСТКОГО." << endl;
		cout << "\nФункцiя Sound Out, яка генерує контрольний тон, вiдiграє дуже важливу роль у визначеннi абсолютної висоти звуку. Це зручно, коли ви виконуєте пiснi, якi починаються з вокальної партiї. Ви також можете використовувати його, щоб покращити вiдносну висоту звуку самостiйно, повторно прослуховуючи контрольний тон, а потiм спробуйте вiдтворити його. Функцiя Sound Back також допомагає вам покращити висоту звуку самостiйно, виводячи опорний тон, найближчий до вашого голосу, через гнiздо для навушникiв." << endl;
		cout << endl;
		break;
	case 44:
		cout << "2. ";
		cout << "\tFENDER AG6 - Тюнер\n\t\tЦiна: 976UAH\n\t\tКод товару: " << code44 << endl;
		cout << "Гiтарний тюнер, дiапазон налаштування - C1-B8, дiапазон калiбрування - A4-440 Гц, вбудований мiкрофон, iндикатор стану батареї, дисплей з пiдсвiчуванням, джерело живлення - акумулятор / блок живлення, колiр - синiй. Синiй тюнер FENDER AG6 вiд вiдомої компанiї FENDER має дисплей з пiдсвiчуванням, який дозволяє регулювати його на затемненiй сценi. Крiм того, ми вiдзначаємо наявнiсть роз'ємiв, вхiдних 1/4 'i вихiдних 1/4', вбудованих - в мiкрофонi та iндикатор стану акумулятора, що буде величезним плюсом у живому виконаннi." << endl;
		cout << "\nПредставлений тюнер iдеально пiдходить для початкiвцiв гiтаристiв та їх бiльш досвiдчених колег, для яких величезну роль вiдiграє висока якiсть пристроїв та простота їх використання." << endl;
		cout << endl;
		break;
	case 45:
		cout << "3. ";
		cout << "\tFENDER AG6 - Тюнер\n\t\tЦiна: 976UAH\n\t\tКод товару: " << code45 << endl;
		cout << "Гiтарний тюнер, дiапазон налаштування - C1-B8, дiапазон калiбрування - A4-440 Гц, вбудований мiкрофон, iндикатор стану батареї, дисплей з пiдсвiчуванням, джерело живлення - акумулятор / блок живлення, колiр - червоний. Червоний тюнер FENDER AG6 TUNER RED SPARKLE EXP II вiд вiдомої фiрми FENDER має дисплей з пiдсвiчуванням, що дозволяє регулювати його на затемненiй сценi. Крiм того, ми вiдзначаємо наявнiсть роз'ємів вхiдних 1/4 'i вихiдних 1 / 4 ', вбудований мiкрофон та iндикатор стану батареї, що буде величезним плюсом у живому виконаннi." << endl;
		cout << "\nТюнер FENDER AG6 TUNER RED SPARKLE EXP II iдеально пiдходить для початкiвцiв гiтаристiв та їх досвiдченiших колег, для яких висока якiсть пристроїв та їх простота використання вiдiграють величезну роль." << endl;
		cout << endl;
		break;
	case 46:
		cout << "4. ";
		cout << "\tFENDER AX-12 SL - Тюнер\n\t\tЦiна: 1785UAH\n\t\tКод товару: " << code46 << endl;
		cout << "Гiтара тюнера, хроматична, свiтлодiодна iндикацiя, режим безшумного налаштування, функцiя попередження про низький рiвень заряду батареї, вбудований мiкрофон, джерело живлення - акумулятор / блок живлення, колiр - срiблястий. Вiдома компанiя FENDER представляє хроматичний гiтарний тюнер AX - 12 AUTO / CHROMATIC TUNER SL, який працює вiд адаптера або акумулятора 9В. Крiм того, пристрiй має функцiю попередження про низький рiвень заряду батареї, 3 режими настройки, вбудований мiкрофон , 1/4-дюймовий роз'єм вводу / виводу та проста калiбрування." << endl;
		cout << "\nЦей тюнер досить простий у використаннi i завдяки своїй чудовiй якостi прослужить вам довгий час." << endl;
		cout << endl;
		break;
	case 47:
		cout << "5. ";
		cout << "\tFENDER BULLET TUNER - Тюнер\n\t\tЦiна: 670UAH\n\t\tКод товару: " << code47 << endl;
		cout << "Затискач для гiтар та бас-гiтар. Основнi характеристики тюнера FENDER BULLET TUNER: система налаштування на основi коливань; Кольоровий свiтлодiодний дисплей; Мiцний затиск; Автоматичний режим сну пiсля 10 хвилин бездiяльностi для економiї заряду акумулятора; Двiчi натиснiть кнопку живлення, щоб продовжувати працювати; Дiапазон налаштування: A (27,5 Гц) - C (4186 Гц); Точнiсть: ± 1 цент; Частота A4: 440 Гц; Джерело живлення: 2 лужнi батареї на 1,5 В (LR44) (у комплекi)." << endl;
		cout << "\nРозроблений з урахуванням естетики та надiйностi пiд час концертних виступiв, FENDER BULLET TUNER - це ненав’язливий, неймовiрно точний iнструмент для музикантiв усiх рiвнiв. Потужний пристрiй iз захищеним вiд шуму датчиком вiбрацiї забезпечує точну хроматичну настройку електричних, акустичних та бас-гiтар, а яскравий кольоровий свiтлодiодний дисплей добре вiдображає написи в будь-якому мiсцi." << endl;
		cout << endl;
		break;
	case 48:
		cout << "6. ";
		cout << "\tFENDER FT-1 PRO CLIP-ON TUNER BLACK - Тюнер\n\t\tЦiна: 418UAH\n\t\tКод товару: " << code48 << endl;
		cout << "Затискний тюнер, монохромний дисплей з пiдсвiчуванням, чорний. FENDER FT - 1 PRO CLIP - ON TUNER BLACK - компактний хроматичний тюнер-тюнер вiдомого американського бренду гiтар, модель, представлена ​​на лiтнiй виставцi NAMM у 2017 роцi. Модель вiдрiзняється високою надiйнiстю та зручнiстю у використаннi." << endl;
		cout << "\nТюнер унiверсальний, його можна використовувати не тiльки для налаштування гiтар, а й для бас-гiтар та iнших струнних iнструментiв, таких як гавайськi гiтари або скрипки. FT-1 оснащений сучасним рiдкокристалiчним дисплеєм, що дозволяє легко бачити налаштування навiть у темрявi. Шкала зi стрiлкою чiтко показує, наскiльки точно налаштований iнструмент, i як тiльки струна налаштована, пiдсвiтка екрана стає зеленою." << endl;
		cout << "\nТюнер працює стабiльно навiть при дуже високому рiвнi зовнiшнього шуму завдяки вбудованому датчику, який фiксує вiбрацiї. Дiапазон налаштування - вiд B0 до B7. Завдяки продуманiй конструкцiї тюнер, закрiплений на голiвцi грифа iнструменту, не заважає, його можна встановити як ззаду, так i спереду, а можна розташувати екран так, щоб він був завжди на виду. Живлення забезпечується однiєю мiнiатюрною лiтiєвою батареєю CR2032 (3 В)." << endl;
		cout << endl;
		break;
	case 49:
		cout << "1. ";
		cout << "\tAVZHEZH ASP1048 - Пак акустичних струн\n\t\tЦiна: 111UAH\n\t\tКод товару: " << code49 << endl;
		cout << "Струни для акустичної гiтари, комплект - 6 струн, фосфорна бронза, легкий натяг, розмiр - .010 - .048. Струни для акустичної гiтари AVZHEZH ASP1048 Standard Acoustics виготовляються з iмпортованої лудженої високовуглецевої сталi. Струни з обмоткою мають шестикутну серцевину i бронзову обмотку з додаванням фосфору. Додавання фосфору робить струни бiльш мiцними, зменшує корозiю та протидiє затемненню звуку струн. Напруга свiтла, калiбр струн: .010, .014, .023, .030, .039, .048." << endl;
		cout << endl;
		break;
	case 50:
		cout << "2. ";
		cout << "\tAVZHEZH ASS1150 - Пак акустичних струн\n\t\tЦiна: 111UAH\n\t\tКод товару: " << code50 << endl;
		cout << "Струни акустичної гiтари, комплект - 6 струн, посрiблений нiкель, стандартна напруга, розмiр - .011 - .050. Струни для акустичної гiтари AVZHEZH ASS1150 Standard Acoustics виготовляються з iмпортованої лудженої високовуглецевої сталi. Струни з обмоткою мають шестигранну серцевину i нiкельоване срiблене намотування. Срiблене покриття надає струнам особливу звучнiсть та виразнiсть. Стандартний натяг, калiбр струни: .011, .015, .024, .032, .042, .050." << endl;
		cout << endl;
		break;
	case 51:
		cout << "3. ";
		cout << "\nELIXIR AC NWL - Пак акустичних струн\n\t\tЦiна: 585UAH\n\t\tКод товару: " << code51 << endl;
		cout << "Струни для акустичної гiтари, комплект - 6 струн, бронза, натяг - легкий, технологiя NanoWeb, антикорозiйне покриття, розмiр - .012 - .053. ELIXIR AC NWL - це набiр струн для 6-струнної акустичної гiтари з обмоткою, покритою плiвкою з нанотехнологiї NanoWeb. Покриття надає струнам яскравий i вiдкритий звук. На дотик вони нiчим не вiдрiзняються вiд струн без покриття. Густий тембр та чiткий тон тривають набагато довше, нiж у iнших струн без покриття." << endl;
		cout << "\nELIXIR - це єдина марка, струни якої повнiстю покритi полiмерною плiвкою, що захищає серцевину, обмотку i, нарештi, але не менш важливо, простiр мiж витками обмотки вiд бруду та корозiї. Таким чином, струна повнiстю захищена, i її механiчнi властивостi не порушуються. Також компанiя використовує у виробництвi технологiю Anti-Rust, яка полягає у нанесеннi на струни спецiального антикорозiйного покриття без намотування. Спецiальний склад не заважає струнi вiльно коливатися, а отже, не впливає на її звучання. Технологiя NanoWeb та антикорозiйне покриття забезпечують бiльший термiн служби та антикорозiйний ефект. Калiбр струни: .012, .016, .024, .032, .042, .053." << endl;
		cout << endl;
		break;
	case 52:
		cout << "4. ";
		cout << "\tELIXIR EL NW L 7 - Пак струн для електрогiтари\n\t\tЦiна: 557UAH\n\t\tКод товару: " << code52 << endl;
		cout << "Струни для електрогiтари, комплект - 7 струн, сталь, натяг - легкий, технологiя NanoWeb, антикорозiйне покриття, розмiр - .010 - .056. ELIXIR EL NW L 7 - це набiр струн для 7-струнної електрогiтари з обмоткою, покритий плiвкою з нанотехнологiї NanoWeb. Покриття надає струнам яскравiше i вiдкритiше звучання. На дотик вони нiчим не вiдрiзняються вiд без покриття Густий тембр та чiткий тон тривають набагато довше, нiж у iнших струн без покриття." << endl;
		cout << "\nELIXIR - це єдина марка, струни якої повнiстю покритi полiмерною плiвкою, що захищає серцевину, обмотку i, нарештi, але не менш важливо, простip між витками обмотки вiд бруду та корозiї. Таким чином, струна повнiстю захищена, i її механiчнi властивостi не порушуються. Також компанiя використовує у виробництвi технологiю Anti-Rust, яка полягає у нанесеннi на струни спецiального антикорозйного покриття без намотування. Спецiальний склад не заважає струнi вiльно коливатися, а отже, не впливає на її звучання. Технологiя NanoWeb та антикорозiйне покриття забезпечують бiльший термiн служби та антикорозiйний ефект. Калiбр струни: .010, .013, .017, .026, .036, .046, .056." << endl;
		cout << endl;
		break;
	case 53:
		cout << "5. ";
		cout << "\tELIXIR EL NW L - Пак струн для електрогiтари\n\t\tЦiна: 446UAH\n\t\tКод товару: " << code53 << endl;
		cout << "Струни для електрогiтари, комплект - 6 струн, нiкельована сталь, легкий натяг, технологiя NanoWeb, антикорозiйне покриття, розмiр - .010 - .046. ELIXIR EL NW L - це набiр струн для 6-струнної електрогiтари з обмоткою, покритий плiвкою з нанотехнологiї NanoWeb. Покриття надає струнам яскравий i вiдкритий звук. На дотик цi струни вiдсутнi вiдрiзняється вiд струн без покриття. Щiльний тембр та чiткий тон зберiгаються набагато довше, нiж у iнших струн без покриття. ELIXIR - єдина марка, струни якої повнiстю покритi полiмерною плiвкою, захищаючи серцевину струни, обмотку та, нарештi, але не менш важливе, простiр мiж витками обмотки вiд забруднень та корозiї.";
		cout << " Таким чином, струна повнiстю захищена, i її механiчнi властивостi не порушуються. Також компанiя використовує у виробництвi технологiю Anti-Rust, яка полягає у нанесеннi на струни спецiального антикорозiйного покриття без намотування. Спецiальний склад не заважає струнi вільно коливатися, а отже, не впливає на її звучання. Технологiя NanoWeb та антикорозiйне покриття забезпечують бiльший термiн служби та антикорозiйний ефект. Калiбр струни: .010, .013, .017, .026, .036, .046." << endl;
		cout << endl;
		break;
	case 54:
		cout << "6. ";
		cout << "\tELIXIR EL NW LH - Пак струн для електрогiтари\n\t\tЦiна: 446UAH\n\t\tКод товару: " << code54 << endl;
		cout << "Струни для електрогiтари, комплект - 6 струн, нiкельована сталь, натяг - свiтлий верх / твердий низ, технологiя NanoWeb, антикорозiйне покриття, розмiр - .010 - .052. ELIXIR EL NW LH - це набiр струн для 6-струнної електрогiтари з обмоткою, покритий плiвкою з нанотехнологiї NanoWeb. Покриття надає струнам яскравiше i вiдкритiше звучання. На дотик вони нiчим не вiдрiзняються вiд струн без покриття. Густий тембрований та чiткий тон триває набагато довше, нiж у iнших струн без покриття." << endl;
		cout << "\nELIXIR - це єдина марка, струни якої повнiстю покритi полiмерною плiвкою, що захищає серцевину, обмотку i, нарештi, але не менш важливо, простiр мiж витками обмотки вiд бруду та корозiї. Таким чином, струна повнiстю захищена, i її механiчнi властивостi не порушуються. Також компанiя використовує у виробництвi технологiю Anti-Rust, яка полягає у нанесеннi на струни спецiального антикорозiйного покриття без намотування. Спецiльний склад не заважає струнi вiльно коливатися, а отже, не впливає на її звучання. Технологiя NanoWeb та антикорозiйне покриття забезпечують бiльший термiн служби та антикорозiйний ефект. Калiбр струни: .010, .013, .017, .032, .042, .052" << endl;
		cout << endl;
		break;
	case 55:
		cout << "1. ";
		cout << "\tDUNLOP 3090 Thumb pick - Медiатор\n\t\tЦiна: 25UAH\n\t\tКод товару: " << code55 << endl;
		cout << "Кiготь-посередник. Вiдома американська компанiя DUNLOP, яка виробляє рiзнi гiтарнi аксесуари та компоненти, представляє новi посередники, такi як DUNLOP 3090 Thumb pick." << endl;
		cout << "\nОскiльки пiкапи мають рiзнi кольори: бiлий, срiбний, перламутровий та прозорий, а також розмiри (для великого пальця 0,6 мм), ви можете вибрати той, який вам пiдходить!" << endl;
		cout << endl;
		break;
	case 56:
		cout << "2. ";
		cout << "\tDUNLOP 4820 Jazz III - Медiатор\n\t\tЦiна: 12UAH\n\t\tКод товару: " << code56 << endl;
		cout << "Посередник серiї Jazz III, матове покриття Tortex. Вiдома американська компанiя DUNLOP, яка виробляє рiзнi гiтарнi аксесуари та комплектуючi, представляє новi пікапи DUNLOP 4820 Jazz III." << endl;
		cout << "\nПiкапи з покриттям TORTEX розробленi, щоб забезпечити максимальний контроль при мiнiмальнiй вазi - саме це зробило їх такими популярними." << endl;
		cout << endl;
		break;
	case 57:
		cout << "3. ";
		cout << "\tFENDER 351 BLACK MOTO GROSS HEAVY - Медiатор\n\t\tЦiна: 12UAH\n\t\tКод товару: " << code57 << endl;
		cout << "Посередник, важка товщина, матерiал - целулоїд, колiр - чорний. Насолоджуйтесь класичним вiдчуттям Fender незалежно вiд того, на якiй гiтарi чи басi ви граєте. Медiатор Fender забезпечує комфорт пiд час гри, високу вiддачу для кожного виконавця. Рiзноманiтнiсть розмiрiв, форм та рiзної товщини вiдповідає стилю та уподобанням будь-якого гiтариста." << endl;
		cout << "\nFender виготовляє медiатори з високоякiсного целюлоїдного матерiалу протягом багатьох рокiв. Целюлоїднi посередники створюють природне вiдчуття, граючи з теплим, насиченим музичним тоном. Завдяки традицiйнiй формi «351», найпопулярнiшiй конструкцiї медiатора, FENDER 351 BLACK MOTO GROSS HEAVY є iдеальним аксесуаром для гравцiв рiзних стилiв та технiк." << endl;
		cout << endl;
		break;
	case 58:
		cout << "4. ";
		cout << "\tFENDER 351 DURA-TONE .71 12-PACK, OLYMPIC WHITE - Пак бiлих медiаторiв\n\t\tЦiна: 167UAH\n\t\tКод товару: " << code58 << endl;
		cout << "Набiр медiаторiв, 12 штук, СЕРЕДНЯ товщина - 0,71 мм, матерiал - делрiн, колiр - бiлий. Насолоджуйтесь класичним вiдчуттям Fender незалежно вiд того, на якiй гiтарi чи басi ви граєте. Медiатор Fender забезпечує комфорт пiд час гри, високу вiддачу для кожного виконавця. Рiзноманiтнiсть розмiрiв, форм та рiзної товщини вiдповiдає стилю та уподобанням будь-якого гiтариста." << endl;
		cout << "\nENDER 351 DURA-TONE .71 12-ПАКОВИЙ, ОЛIМПIЙСЬКИЙ БIЛИЙ, виготовлений з високою точнiстю та вмiло прокатується, забезпечуючи рiвний закруглений край, стiйкий до вiдколiв. Процес обробки забезпечує неперевершену довговiчнiсть." << endl;
		cout << endl;
		break;
	case 59:
		cout << "5. ";
		cout << "\tFENDER 351 GREEN PICK GROSS MEDIUM - Медiатор\n\t\tЦiна: 12UAH\n\t\tКод товару: " << code59 << endl;
		cout << "Посередник, середньої товщини, зелений. Насолоджуйтесь класичним вiдчуттям Fender незалежно вiд того, на якiй гiтарi чи басi ви граєте. Медiатор Fender забезпечує комфорт пiд час гри, високу вiддачу для кожного виконавця. Рiзноманiтнiсть розмiрiв, форм та рiзної товщини вiдповiдає стилю та уподобанням будь-якого гiтариста." << endl;
		cout << "\nFender виготовляє медiатори з високоякiсного целюлоїдного матерiалу протягом багатьох рокiв. Целюлоїднi посередники створюють природне вiдчуття, граючи з теплим, насиченим музичним тоном. Завдяки традицiйнiй формi «351», найпопулярнiшiй конструкцiї посередника, FENDER 351 GREEN PICK GROSS MEDIUM є iдеальним аксесуаром для гравцiв рiзних стилiв та технiк." << endl;
		cout << endl;
		break;
	case 60:
		cout << "6. ";
		cout << "\tFENDER 351 MATTE DELRIN BLUE H - Медiатор\n\t\tЦiна: 8UAH\n\t\tКод товару: " << code60 << endl;
		cout << "Посередник, важка товщина - 1 мм, колiр - синiй. Насолоджуйтесь класичним вiдчуттям Fender незалежно вiд того, на якiй гiтарi чи басi ви граєте. Медіатор Fender забезпечує комфорт пiд час гри, високу вiддачу для кожного виконавця. Рiзноманiтнiсть розмiрiв, форм та рiзної товщини вiдповiдає стилю та уподобанням будь-якого гiтариста." << endl;
		cout << "\nFender виготовляє медiатори з високоякiсного целюлоїдного матерiалу протягом багатьох рокiв. Целюлоїднi посередники створюють природне вiдчуття, граючи з теплим, насиченим музичним тоном. Завдяки традицiйнiй формi «351», найпопулярнiшiй конструкцiї медiатора, FENDER 351 MATTE DELRIN BLUE H є iдеальним аксесуаром для гравцiв рiзних стилiв та технiк." << endl;
		cout << endl;
		break;
	case 61:
		cout << "1. ";
		cout << "\tAVZHEZH SC-03A GREEN - Каподастр\n\t\tЦiна: 83UAH\n\t\tКод товару: " << code61 << endl;
		cout << "Каподастр для акустичних та електрогiтар, легкий алюмiнiєвий корпус, легко знiмається та одягається однiєю рукою, колiр - зелений, виробництво - Україна. AVZHEZH SC - 03A GREEN - легкий i зручний у використаннi капюшон. Ця модель розроблена для 6-струнних акустичних та електричних гiтар. Вона має ергономiчну форму. Зручний пружинний механiзм дозволяє швидко зафiксувати капо в необхідному положеннi на грифi за допомогою Не потрiбно додаткового регулювання.";
		cout << " Special soft pads protect the surface of the tool from scratches, so you can not worry about the safety of the coating on the back of the fingerboard. The hood is strong and at the same time very light, the case is made of aluminum. The model is presented in green. Production - Ukraine." << endl;
		cout << endl;
		break;
	case 62:
		cout << "2. ";
		cout << "\tAVZHEZH SC-03A RED - Каподастр\n\t\tЦiна: 83UAH\n\t\tКод товару: " << code62 << endl;
		cout << "Capod for acoustic and electric guitars, light aluminum body, easy to remove and put on with one hand, color - red, production - Ukraine. AVZHEZH SC - 03A GREEN - easy and convenient to use hood.This model is designed for 6 - string acoustic and electric guitars.It has an ergonomic shape.The convenient spring mechanism allows to fix quickly a capo in the necessary position on a fingerboard with one hand.No additional adjustment is required.";
		cout << " Special soft pads protect the surface of the tool from scratches, so you can not worry about the safety of the coating on the back of the fingerboard. The hood is strong and at the same time very light, the case is made of aluminum. The model is presented in green. Production - Ukraine." << endl;
		cout << endl;
		break;
	case 63:
		cout << "3. ";
		cout << "\tFENDER CAPO PHOENIX BLACK - Каподастр\n\t\tЦiна: 613UAH\n\t\tКод товару: " << code63 << endl;
		cout << "Капо для електрогiтар та акустичних гiтар, легкий алюмiнiєвий корпус, легко знiмається та одягається однiєю рукою. FENDER CAPO PHOENIX BLACK - це легкий i простий у використаннi капюшон, фiрмовий аксесуар вiдомого американського виробника. Ця модель розроблена для шестиструнних акустичних та електричних гiтар. Вона має ергономiчну форму." << endl;
		cout << "\nЗручний пружинний механiзм дозволяє швидко зафiксувати капо в потрiбному положеннi на грифi однiєю рукою. Додаткове регулювання не потрiбно. Спецiальні м’якi подушечки захищають поверхню iнструменту вiд подряпин, тому ви можете не турбуватися про безпеку покриття на тильнiй сторонi грифа." << endl;
		cout << "\nКапюшон мiцний i в той же час дуже легкий, корпус виготовлений з алюмiнiю. Модель представлена ​​чорним кольором." << endl;
		cout << endl;
		break;
	case 64:
		cout << "4. ";
		cout << "\tFENDER SMART CAPO STANDARD - Каподастр\n\t\tЦiна: 920\n\t\tКод товару: " << code64 << endl;
		cout << "Капо для акустичних та електрогiтар, колiр - чорний. FENDER, всесвiтньо вiдома компанiя, представляє FENDER SMART CAPO STANDARD, який має пружинний дизайн. Ця модель зробить гру на iнструментi набагато комфортнiшою, а його вiдмiнна якiсть справить враження на всiх без винятку виконавцiв." << endl;
		cout << "\nВ результатi ви можете змiнити висоту тону однiєю рукою з блискавичною швидкiстю." << endl;
		cout << "\nКапот дуже легкий, корпус виготовлений з мiцного пластику. Модель представлена ​​чорним кольором з логотипом Fender." << endl;
		cout << endl;
		break;
	case 65:
		cout << "5. ";
		cout << "\tIBANEZ ICGC10 - Каподастр\n\t\tЦiна: 418\n\t\tКод товару: " << code65 << endl;
		cout << "Капо для гiтар, унiверсальне, чорного кольору. IBANEZ ICGC10 - це легкий та простий у використаннi капюшон, фiрмовий аксесуар вiдомого японського виробника Ibanez. Ця модель розроблена для акустичних та електрогiтар зi сталевими або нейлоновими струнами. Вона має ергономiчну форму. Зручний пружинний механiзм дозволяє фiксувати швидко капюшон у необхiдному положенні на грифi. Капюшон мiцний i в той же час дуже легкий, корпус виготовлений з металу. Модель представлена ​​в чорному та срiбному кольорах." << endl;
		cout << endl;
		break;
	case 66:
		cout << "6. ";
		cout << "\tIBANEZ IGC10 - Каподастр\n\t\tЦiна: 418\n\t\tКод товару: " << code66 << endl;
		cout << "Капо для акустичних та електрогiтар, пружина, колiр - срiбло. IBANEZ IGC10 - це легкий та простий у використаннi капюшон, фiрмовий аксесуар вiдомого японського виробника Ibanez. Ця модель розроблена для шестиструнних акустичних та електричних гiтар iз плоским грифом та має ергономiчну форму." << endl;
		cout << "\nЗручний пружинний механiзм дозволяє швидко зафiксувати капо в потрiбному положеннi на грифi однiєю рукою. Додаткове регулювання не потрiбно. Спецiальнi м’якi подушечки захищають поверхню iнструменту вiд подряпин, тому ви можете не турбуватися про безпеку покриття на тильнiй сторонi грифа." << endl;
		cout << "\nКапюшон мiцний i в той же час дуже легкий, корпус виготовлений з металу. Модель представлена ​​в срiблястому кольорi." << endl;
		cout << endl;
		break;
	case 67:
		cout << "1. ";
		cout << "\tFENDER 2 MONOGRAMMED BLACK/YELLOW/RED STRAP - Гiтарний ремень\n\t\tЦiна: 557\n\t\tКод товару: " << code67 << endl;
		cout << "Гiтарний ремiнець, матерiал - тканина / шкiра, колiр - рiзнокольоровий. FENDER 2 MONOGRAMMED BLACK / YELLOW / RED STRAP - це МОНОГРАММОВАНИЙ гiтарний ремiнець вiд FENDER, виконаний у стильному дизайнi: матеріали були обранi шкiряними, а кольорова гама представлена ​​чорними, жовтими та червоними вiдтiнками. посилена пiдкладка, але комфорт гiтариста при цьому не постраждає, адже вирiб досить м'який." << endl;
		cout << endl;
		break;
	case 68:
		cout << "2. ";
		cout << "\tFENDER 2 MONOGRAMMED WHITE BROWN YELLOW STRAP - Гiтарний ремень\n\t\tЦіна: 558\n\t\tКод товару: " << code68 << endl;
		cout << "Гiтарний ремінець, матерiал - тканина / шкiра, колiр - рiзнокольоровий. FENDER 2 MONOGRAMMED WHITE BROWN YELLOW STRAP - це МІНОГРАММОВАНИЙ гiтарний ремiнець вiд FENDER, виконаний у стильному дизайнi: матерiали були обранi фабрикою та шкiрою, а колiрна гамма представлена ​​бiлими, коричневими та жовтими вiдтiнками. Пояс дуже мiцний завдяки посиленому субстрат, але комфорт гiтариста при цьому не постраждає, адже вирiб досить м'який." << endl;
		cout << endl;
		break;
	case 69:
		cout << "3. ";
		cout << "\tFENDER 2' WEIGHLESS MONOGRAMMED STRAP BLACK / YELLOW / BROWN - Гiарний ремень\n\t\tЦіна: 753\n\t\tКод товару: " << code69 << endl;
		cout << "Гiтарний ремiнець, матерiал - полiестер, ширина - 50,8 мм, довжина - 1117,6 - 1333,5 мм, колiр - чорний / жовтий / коричневий. Основнi характеристики гiтарного ремiнця FENDER 2 'НЕВАЖОВИЙ МОНОГРАММОВАНИЙ РЕМIНЬ ЧОРНИЙ / ЖОВТИЙ / КОРИЧНИЙ: Виготовлений з полiестеру з спандексом для забезпечення еластичностi; Класичний логотип; Конiчна шкiра закінчується логотипом 'F'; Регулюється до 50,83317 мм; Довжина; Зроблено в Канадi." << endl;
		cout << "\nЕластичний гiтарний ремiнець FENDER 2 'НЕВАЖОВИЙ МОНОГРАММОВАНИЙ РЕМIНЬ ЧОРНИЙ / ЖОВТИЙ / КОРИННИЙ знiмає навантаження з ваших плечей, тому ви можете зосередитись на важливому - вираженнi своєї творчостi." << endl;
		cout << endl;
		break;
	case 70:
		cout << "4. ";
		cout << "\tFENDER STRAP VINTAGE TWEED 2 - Гiтарний ремень\n\t\tЦiна: 697\n\t\tКод товару: " << code70 << endl;
		cout << "Гiтарний ремiнець, матерiал - тканина / шкiра, колiр - жовтий. Класичний гiтарний ремiнець FENDER STRAP VINTAGE TWEED 2 вiд Fender виготовлений майже з того самого матерiалу, з якого зробленi чохли для гiтар та пiдсилювачiв Fender. Пряжки ременiв виготовленi з високоякiсної коричневої шкiри. Склад тканини спочатку був пом'якшений комфорт." << endl;
		cout << endl;
		break;
	case 71:
		cout << "5. ";
		cout << "\tFENDER WEIGHLESS 2'' RUNNING LOGO STRAP BLACK/WHITE - Гiтарний ремень\n\t\tЦiна: 753\n\t\tКод товару: " << code71 << endl;
		cout << "Унiверсальний ремiнець для гiтари, матерiал - полiестер / шкiра, ширина - 50,8 мм, довжина - 1117,6 - 1333,5 мм, колiр - чорно-бiлий з логотипом Fender. Основнi характеристики гiтарного ремiнця FENDER WEIGHLESS 2 '' RUNNING LOGO STRAP BLACK / WHITE: Виготовлений з полiестеру з спандексом для забезпечення еластичностi; Класичний логотип; Шкiрянi закiнчення у формi конуса з логотипом 'F'; Ширина 50,8 мм; Довжина регулюється вiд 1117,6 мм до 1333,5 мм; Зроблено в Канадi." << endl;
		cout << "\nЕластичний гiтарний ремiнець FENDER WEIGHLESS 2 '' RUNNING LOGO STRAP BLACK / WHITE знiмає навантаження з ваших плечей, тому ви можете зосередитися на важливому - на виразi своєї творчостi. Цей унiкальний ремiнь iз унiкальним стилем Fender був розроблений гiтаристами для гiтаристiв з думкою про винятковий комфорт." << endl;
		cout << endl;
		break;
	case 72:
		cout << "6. ";
		cout << "\tFENDER WEIGHLESS 2'' RUNNING LOGO STRAP WHITE/BLACK - Гiтарний ремень\n\t\tЦiна: 781\n\t\tКод товару: " << code72 << endl;
		cout << "Унiверсальний ремiнець для гiтари, матерiал - полiестер / шкiра, ширина - 50,8 мм, довжина - 1117,6 - 1333,5 мм, колiр - бiлий та чорний з логотипом Fender. Основнi характеристики гiтарного ремiнця FENDER WEIGHLESS 2 '' RUNNING LOGO STRAP WHITE / BLACK: Виготовлений з полiестеру з спандексом для забезпечення еластичностi; Класичний логотип; Шкiрянi закiнчення у формi конуса з логотипом 'F'; Ширина 50,8 мм; Довжина регулюється вiд 1117,6 мм до 1333,5 мм; Зроблено в Канадi." << endl;
		cout << "\nЕластичний гiтарний ремiнець FENDER WEIGHLESS 2 '' RUNNING LOGO STRAP WHITE / BLACK знiмає навантаження з ваших плечей, тому ви можете зосередитися на важливому - на виразi своєї творчостi. Цей унiкальний ремiнь iз унiкальним стилем Fender був розроблений гiтаристами для гiтаристiв з думкою про винятковий комфорт." << endl;
		cout << endl;
		break;
	case 73:
		cout << "1. ";
		cout << "\tEPIPHONE GIGBAG SOLIDBODY BASS - Сумка для бас гiтари\n\t\tЦiна: 586\n\t\tКод товару: " << code73 << endl;
		cout << "Корпус для бас-гiтари зi свiтлоiзоляцiєю, колiр - чорний. EPIPHONE GIGBAG SOLIDBODY BASS - це теплий, м’який, водонепроникний чохол для бас-гiтари, який дозволяє легко зберiгати та транспортувати музичний iнструмент, не турбуючись про дощ, снiг чи вiтер, що пiднiмає хмари пилу та шкiдливо впливає на будь-який iнструмент." << endl;
		cout << "\nКорпус оснащений зручним ременем та ручками, що значно спростить i зробить процес транспортування Вашого iнструменту набагато комфортнiшим. Вся продукцiя EPIPHONE має високу якiсть та найкращi компоненти. Чохол EPIPHONE GIGBAG SOLIDBODY BASS пропонує найкраще поєднання цiни та якостi у своєму класi." << endl;
		cout << endl;
		break;
	case 74:
		cout << "2. ";
		cout << "\tEPIPHONE WESTERN ACOUSTIC GUITAR GIGBAG - Сумка для акустичної гiтари\n\t\tЦіна: 856\n\t\tКод товару: " << code74 << endl;
		cout << "Корпус акустичної гiтари Dreadnought зi свiтлоiзоляцiєю, колiр - чорний. Корпус для акустичної гiтари EPIPHONE WESTERN ACOUSTIC GUITAR GIGBAG, пiдходить як для гiтар iз збiльшеною головкою грифа, так i для iнших гiтар. Корпус зручний та надiйний, має металевi крiплення на петлях." << endl;
		cout << endl;
		break;
	case 75:
		cout << "3. ";
		cout << "\tFENDER CLASSIC SERIES CASE FOR P/J BASS - Кейс для бас гiтари\n\t\tЦiна: 4187\n\t\tКод товару: " << code75 << endl;
		cout << "Корпус для бас-гiтар типу Precision / Jazz, 3-шаровий, дерев'яний, сталева ручка, з пiдкладкою, вiдсiк для аксесуарiв, колiр чорний. Основнi особливостi футляра FENDER CLASSIC СЕРIЇ ДЛЯ P / J BASS: 3-шаровий дерев'яний футляр, покритий чорним вiнiлом; Товщина: 8 мм з бокiв i 5 мм зверху i знизу; Чорна ручка для перенесення вiнiлової сталi; Внутрiшня пiдкладка з м’якого велюру; Велике вiддiлення для аксесуарiв; Сталевi засувки; Замок iз набором ключiв; Потрiйна хромована фурнiтура." << endl;
		cout << "\nКласичнi дерев'янi футляри - це стильний та надiйний спосiб захистити бас-гiтару Fender." << endl;
		cout << "\nФУНКЦIЯ СЕРIЇ FENDER CLASSIC ДЛЯ P / J BASS - це тришаровий мiцний дерев'яний футляр, виготовлений з надiйних матерiалiв, оснащений сталевою ручкою для перенесення з вiнiловим покриттям та засувками, крiм потрiйних хромованих аксесуарiв на всiх корпусах. М’яка велюрова внутрiшня пiдкладка гарантує, що ваша гiтара не буде подряпана або пошкоджена, тодi як просторий вiдсiк для аксесуарiв забезпечує достатньо мiсця для запасних струн, тюнерiв або будь-яких дрiбних предметiв, якi ви хочете носити з собою." << endl;
		cout << endl;
		break;
	case 76:
		cout << "4. ";
		cout << "\tFENDER DELUXE MOLDED BASS CASE BLACK - Кейс для бас гiтари\n\t\tЦiна: 6141\n\t\tКод товару: " << code76 << endl;
		cout << "Кейс для бас-гiтар, унiверсальний, пiдходить для бiльшостi форм Fender, пластик, чорний. Для зберiгання та транспортування вашої бас-гiтари використовуйте унiверсальний футляр FENDER DELUXE MOLDED BASS CASE BLACK, розроблений вiдомою американською компанiєю. гарантує, що iнструмент переноситься в цiлому та безпечний." << endl;
		cout << "\nМiцний пластиковий корпус у чорному кольорi, зручна ручка та м'яка внутрішня пiдкладка - кожен елемент FENDER DELUXE MOLDED BASS CASE BLACK розроблений для забезпечення максимального захисту iнструменту." << endl;
		cout << "\nВелике внутрiшнє вiддiлення є iдеальним мiсцем для зберiгання аксесуарiв, таких як кабелi та ремiнцi, i одночасно допомагає стабiлiзувати положення шиї пiд час транспортування. Завдяки гумовим нiжкам внизу корпус забезпечує додаткову стiйкiсть." << endl;
		cout << endl;
		break;
	case 77:
		cout << "5. ";
		cout << "\tFENDER FA405 DREADNOUGHT GIG BAG - Сумка для акустичної гiтари\n\t\tЦiна: 781\n\t\tКод товару: " << code77 << endl;
		cout << "Корпус для акустичної гiтари, щiльнiсть - 400 ден, товщина iзоляцiї - 5 мм, колір - чорний. FENDER FA405 DREADNOUGHT GIG BAG - корпус пiдходить для бiльшостi стандартних акустичних гiтар. Зовнi корпус має вологостiйке покриття щiльністю 400 ден. Внутрiшня частина чохла (пiдкладка 5 мм) повторює форму гiтари, зберiгаючи iнструмент нерухомим пiд час транспортування. Зовнi є ручки для перенесення, кишеня на блискавцi для аксесуарiв i 2 ремiнцi для перенесення на плечi або за спиною. Довжина ременiв регулюється. Колiр чохла чорний." << endl;
		cout << "\nКорпус дозволяє зберiгати та транспортувати музичний iнструмент, не турбуючись про дощ, снiг чи вiтер, якi пiднiмають хмари пилу та згубно впливають на будь-який iнструмент. Вся продукцiя цього виробника вiдрiзняється високою якiстю та найкращими компонентами." << endl;
		cout << "\nЧохол FENDER FA405 DREADNOUGHT GIG BAG стане гарною покупкою як для любителiв, так i для професiйного використання." << endl;
		cout << endl;
		break;
	case 78:
		cout << "6. ";
		cout << "\tFENDER FA610 DREADNOUGHT GIG BAG - Сумка для акустичної гiтари\n\t\tЦiна: 1367\n\t\tКод товару: " << code78 << endl;
		cout << "Корпус акустичної гiтари Dreadnought, щiльність - 600 ден, товщина iзоляцiї - 10 мм, колiр - чорний. FENDER FA610 DREADNOUGHT GIG BAG - це стильний герметичний футляр для акустичних гiтар дредноута вiд вiдомого американського бренду гiтар. Корпус має впiзнавану фiрмову асиметричну форму. Чохол виготовлений з мiцного полiестеру товщиною 600 ден. Цей матерiал здатний ефективно захистiть iнструмент вiд механiчних пошкоджень. всерединi корпусу є м’яка пiдкладка товщиною 10 мм з покриттям з мiкроволокна, що запобiгає подряпинам i потертостям на iнструментi.";
		cout << " Чохол закривається на надiйнiй водонепроникнiй блискавцi. Є двi ручки для перенесення. Ззаду розташованi два ремiнцi з регульованою довжиною для носiння за спиною. Знизу та зверху корпус забезпечений щiльними фактурними гумовими накладками, якi забезпечують додатковий захист та запобiгають ковзанню при вертикальнiй установцi корпусу. Попереду є кишеня для аксесуарiв з додатковою маленькою кишенькою для дрiбниць." << endl;
		cout << "\nЧохол FENDER FA610 DREADNOUGHT GIG BAG представлений чорним кольором з контрастним червоним логотипом Fender." << endl;
		cout << endl;
		break;
	}





	if (Acoustic_guitar == 1)
	{
		cout << 1 << endl;
	}
	else if (Acoustic_guitar == 2)
	{
		cout << 2 << endl;
	}
	else if (Acoustic_guitar == 3)
	{
		cout << 3 << endl;
	}
	else if (Acoustic_guitar == 4)
	{
		cout << 4 << endl;
	}
	else if (Acoustic_guitar == 5)
	{
		cout << 5 << endl;
	}
	else if (Acoustic_guitar == 6)
	{
		cout << 6 << endl;
	}
	else if (Classic_guitar == 7)
	{
		cout << 7 << endl;
	}
	else if (Classic_guitar == 8)
	{
		cout << 8 << endl;
	}
	else if (Classic_guitar == 9)
	{
		cout << 9 << endl;
	}
	else if (Classic_guitar == 10)
	{
		cout << 10 << endl;
	}
	else if (Classic_guitar == 11)
	{
		cout << 11 << endl;
	}
	else if (Classic_guitar == 12)
	{
		cout << 12 << endl;
	}
	else if (Electric_guitar == 13)
	{
		cout << 13 << endl;
	}
	else if (Electric_guitar == 14)
	{
		cout << 14 << endl;
	}
	else if (Electric_guitar == 15)
	{
		cout << 15 << endl;
	}
	else if (Electric_guitar == 16)
	{
		cout << 16 << endl;
	}
	else if (Electric_guitar == 17)
	{
		cout << 17 << endl;
	}
	else if (Electric_guitar == 18)
	{
		cout << 18 << endl;
	}
	else if (Bass_guitar == 19)
	{
		cout << 19 << endl;
	}
	else if (Bass_guitar == 20)
	{
		cout << 20 << endl;
	}
	else if (Bass_guitar == 21)
	{
		cout << 21 << endl;
	}
	else if (Bass_guitar == 22)
	{
		cout << 22 << endl;
	}
	else if (Bass_guitar == 23)
	{
		cout << 23 << endl;
	}
	else if (Bass_guitar == 24)
	{
		cout << 24 << endl;
	}
	else if (Ukulele == 25)
	{
		cout << 25 << endl;
	}
	else if (Ukulele == 26)
	{
		cout << 26 << endl;
	}
	else if (Ukulele == 27)
	{
		cout << 27 << endl;
	}
	else if (Ukulele == 28)
	{
		cout << 28 << endl;
	}
	else if (Ukulele == 29)
	{
		cout << 29 << endl;
	}
	else if (Ukulele == 30)
	{
		cout << 30 << endl;
	}
	else if (Amplifiers == 31)
	{
		cout << 31 << endl;
	}
	else if (Amplifiers == 32)
	{
		cout << 32 << endl;
	}
	else if (Amplifiers == 33)
	{
		cout << 33 << endl;
	}
	else if (Amplifiers == 34)
	{
		cout << 34 << endl;
	}
	else if (Amplifiers == 35)
	{
		cout << 35 << endl;
	}
	else if (Amplifiers == 36)
	{
		cout << 36 << endl;
	}
	else if (Effects == 37)
	{
		cout << 37 << endl;
	}
	else if (Effects == 38)
	{
		cout << 38 << endl;
	}
	else if (Effects == 39)
	{
		cout << 39 << endl;
	}
	else if (Effects == 40)
	{
		cout << 40 << endl;
	}
	else if (Effects == 41)
	{
		cout << 41 << endl;
	}
	else if (Effects == 42)
	{
		cout << 42 << endl;
	}
	else if (Tuners == 43)
	{
		cout << 43 << endl;
	}
	else if (Tuners == 44)
	{
		cout << 44 << endl;
	}
	else if (Tuners == 45)
	{
		cout << 45 << endl;
	}
	else if (Tuners == 46)
	{
		cout << 46 << endl;
	}
	else if (Tuners == 47)
	{
		cout << 47 << endl;
	}
	else if (Tuners == 48)
	{
		cout << 48 << endl;
	}
	else if (String_kit == 49)
	{
		cout << 49 << endl;
	}
	else if (String_kit == 50)
	{
		cout << 50 << endl;
	}
	else if (String_kit == 51)
	{
		cout << 51 << endl;
	}
	else if (String_kit == 52)
	{
		cout << 52 << endl;
	}
	else if (String_kit == 53)
	{
		cout << 53 << endl;
	}
	else if (String_kit == 54)
	{
		cout << 54 << endl;
	}
	else if (Mediators == 55)
	{
		cout << 55 << endl;
	}
	else if (Mediators == 56)
	{
		cout << 56 << endl;
	}
	else if (Mediators == 57)
	{
		cout << 57 << endl;
	}
	else if (Mediators == 58)
	{
		cout << 58 << endl;
	}
	else if (Mediators == 59)
	{
		cout << 59 << endl;
	}
	else if (Mediators == 60)
	{
		cout << 60 << endl;
	}
	else if (Capos == 61)
	{
		cout << 61 << endl;
	}
	else if (Capos == 62)
	{
		cout << 62 << endl;
	}
	else if (Capos == 63)
	{
		cout << 63 << endl;
	}
	else if (Capos == 64)
	{
		cout << 64 << endl;
	}
	else if (Capos == 65)
	{
		cout << 65 << endl;
	}
	else if (Capos == 66)
	{
		cout << 66 << endl;
	}
	else if (Guitar_belts == 67)
	{
		cout << 67 << endl;
	}
	else if (Guitar_belts == 68)
	{
		cout << 68 << endl;
	}
	else if (Guitar_belts == 69)
	{
		cout << 69 << endl;
	}
	else if (Guitar_belts == 70)
	{
		cout << 70 << endl;
	}
	else if (Guitar_belts == 71)
	{
		cout << 71 << endl;
	}
	else if (Guitar_belts == 72)
	{
		cout << 72 << endl;
	}
	else if (Cases == 73)
	{
		cout << 73 << endl;
	}
	else if (Cases == 74)
	{
		cout << 74 << endl;
	}
	else if (Cases == 75)
	{
		cout << 75 << endl;
	}
	else if (Cases == 76)
	{
		cout << 76 << endl;
	}
	else if (Cases == 77)
	{
		cout << 77 << endl;
	}
	else if (Cases == 78)
	{
		cout << 78 << endl;
	}
	return 0;
}

struct buy
{
	char name[20];
	char surname[35];
	int card;
};

void Buy()
{
	int YN;
	cout << "Do you want to buy this?\n1 - Yes\n2 - No" << endl;
	cin >> YN;
	switch (YN)
	{
	case 1:
		buy order;
		cout << "\n\nTo order this ware you need fill this table:" << endl;
		cout << "Enter your name: ";
		cin >> order.name;
		cout << "\nEnter your surname: ";
		cin >> order.surname;
		cout << "\nEnter your card number to pay this: ";
		cin >> order.card;
		cout << "\n\t\t\tLoading..." << endl;
		cout << "\n\t\t\tSucssesfuly" << endl;
		cout << "\nYour order will wait you in nearer postal allocation in your city/town for 2 days. Thank you for a bought." << endl;
		system("pause");
		break;
	case 2:
		cout << "Error conection. Please reload site." << endl;
		system("pause");
		break;
	}

}

void BuyUA()
{
	int YN;
	cout << "Ви хочете купити це?\n1 - Так\n2 - Нi" << endl;
	cin >> YN;
	switch (YN)
	{
	case 1:
		buy order;
		cout << "\n\nДля покупки товару заповнiть таблицю:" << endl;
		cout << "Iм'я: ";
		cin >> order.name;
		cout << "\nПрiзвище: ";
		cin >> order.surname;
		cout << "\nВведiть номер банкiвської картки для оплати товару: ";
		cin >> order.card;
		cout << "\n\t\t\tБудь ласка, зачекайте..." << endl;
		cout << "\n\t\t\tУспiшно" << endl;
		cout << "\nВаше замовлення буде чекати вас в найближчому поштовому вiддiленнi вашого мiста через 2 днi. Дякуємо за покупку." << endl;
		system("pause");
		break;
	case 2:
		cout << "\n\t\tПомилка пiдключення. Перезавантажте сайт." << endl;
		system("pause");
		break;
	}


}

void Language()
{


	cin >> choose_lang;
	enum language { English, Ukranian, Russian, Polish };
	switch (choose_lang)
	{
	case English:
		cout << "\t\t\tGUITAR SHOP" << endl;
		cout << "Choose the wave: " << endl;
		cout << "Press: \n0 - Acoustic\n1 - Classic\n2 - Electric\n3 - Bass\n4 - Ukulele\n5 - Amplifiers\n6 - Effects\n7 - Tuners\n8 - Guitars strings\n9 - Mediators\n10 - Capos\n11 - Guitar belts" << endl;
		cout << "12 - Cases" << endl;
		Ware();
		More();
		Buy();
		break;
	case Ukranian:
		cout << "\t\t\tГIТАРНИЙ МАГАЗИН" << endl;
		cout << "Вибери номер товару: " << endl;
		cout << "Натисни:\n0 - Акустика\n1 - Класика\n2 - Електрика\n3 - Бас\n4 - Укулеле\n5 - Пiдсилювачi\n6 - Ефекти\n7 - Тюнери\n8 - Струни\n9 - Медiатори\n10 - Каподастри\n11 - Гiтарнi ременi" << endl;
		cout << "12 - Чохли та кейси" << endl;
		Ware_Ukrain();
		MoreUA();
		BuyUA();
		break;
	}

}



int main()
{

	setlocale(LC_CTYPE, "rus");
	cout << "Choose the language: " << endl;
	cout << "Press: \n0 - English;\n1 - Ukranian;" << endl;
	Language();

	return 0;
}