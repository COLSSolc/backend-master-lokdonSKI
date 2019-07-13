#include <iostream>
#include <locale>

#define ROWS 16
#define COLS 16
 
//Basic Latin Unicode in UTF-8
// 16 chars for ASCII punctuation and symbols
wchar_t SPACE 				= L'\u0020';
wchar_t EXCLAIMATION 			= L'\u0021';
wchar_t QUOTATION 			= L'\u0022';
wchar_t NUMBER				= L'\u0023';
wchar_t DOLLAR	 			= L'\u0024';
wchar_t PERCENT 			= L'\u0025';
wchar_t AMPERSAND 			= L'\u0026';
wchar_t APOSTRPOHE 			= L'\u0027';
wchar_t LEFT_PAREN 			= L'\u0028';
wchar_t RIGHT_PAREN 			= L'\u0029';
wchar_t ASTERISK 			= L'\u002A';
wchar_t PLUS	 			= L'\u002B';
wchar_t COMMA	 			= L'\u002C';
wchar_t MINUS	 			= L'\u002D';
wchar_t FULLSTOP 			= L'\u002E';
wchar_t SOLIDUS 			= L'\u002F';

// 10 chars for ASCII Digits
wchar_t ZERO				= L'\u0030';
wchar_t ONE				= L'\u0031';
wchar_t TWO				= L'\u0032';
wchar_t THREE				= L'\u0033';
wchar_t FOUR				= L'\u0034';
wchar_t FIVE				= L'\u0035';
wchar_t SIX				= L'\u0036';
wchar_t SEVEN				= L'\u0037';
wchar_t EIGHT				= L'\u0038';
wchar_t NINE				= L'\u0039';

// 7 chars for ASCII punctuation and symbols
wchar_t COLON				= L'\u003A';
wchar_t SEMICOLON			= L'\u003B';
wchar_t LESSTHAN			= L'\u003C';
wchar_t EQUAL				= L'\u003D';
wchar_t GREATERTHAN			= L'\u003E';
wchar_t QUESTION			= L'\u003F';
wchar_t AT				= L'\u0040';

// 26 chars for Uppercase Latin alphabet
wchar_t CAPITAL_A			= L'\u0041';
wchar_t CAPITAL_B			= L'\u0042';
wchar_t CAPITAL_C			= L'\u0043';
wchar_t CAPITAL_D			= L'\u0044';
wchar_t CAPITAL_E			= L'\u0045';
wchar_t CAPITAL_F			= L'\u0046';
wchar_t CAPITAL_G			= L'\u0047';
wchar_t CAPITAL_H			= L'\u0048';
wchar_t CAPITAL_I			= L'\u0049';
wchar_t CAPITAL_J			= L'\u004A';
wchar_t CAPITAL_K			= L'\u004B';
wchar_t CAPITAL_L			= L'\u004C';
wchar_t CAPITAL_M			= L'\u004D';
wchar_t CAPITAL_N			= L'\u004E';
wchar_t CAPITAL_O			= L'\u004F';
wchar_t CAPITAL_P			= L'\u0050';
wchar_t CAPITAL_Q			= L'\u0051';
wchar_t CAPITAL_R			= L'\u0052';
wchar_t CAPITAL_S			= L'\u0053';
wchar_t CAPITAL_T			= L'\u0054';
wchar_t CAPITAL_U			= L'\u0055';
wchar_t CAPITAL_V			= L'\u0056';
wchar_t CAPITAL_W			= L'\u0057';
wchar_t CAPITAL_X			= L'\u0058';
wchar_t CAPITAL_Y			= L'\u0059';
wchar_t CAPITAL_Z			= L'\u005A';

// 6 chars for ASCII punctuation and symbols
wchar_t LEFTSQUARE			= L'\u005B';
wchar_t REVERSE_SOLIDIUS		= L'\u005C';
wchar_t RIGHTSQUARE			= L'\u005D';
wchar_t CIRCUMFLEX			= L'\u005E';
wchar_t UNDERSCORE			= L'\u005F';
wchar_t GRAVEACCENT			= L'\u0060';

// 26 chars for Lowercase Latin alphabet
wchar_t SMALL_A				= L'\u0061';
wchar_t SMALL_B				= L'\u0062';
wchar_t SMALL_C				= L'\u0063';
wchar_t SMALL_D				= L'\u0064';
wchar_t SMALL_E				= L'\u0065';
wchar_t SMALL_F				= L'\u0066';
wchar_t SMALL_G				= L'\u0067';
wchar_t SMALL_H				= L'\u0068';
wchar_t SMALL_I				= L'\u0069';
wchar_t SMALL_J				= L'\u006A';
wchar_t SMALL_K				= L'\u006B';
wchar_t SMALL_L				= L'\u006C';
wchar_t SMALL_M				= L'\u006D';
wchar_t SMALL_N				= L'\u006E';
wchar_t SMALL_O				= L'\u006F';
wchar_t SMALL_P				= L'\u0070';
wchar_t SMALL_Q				= L'\u0071';
wchar_t SMALL_R				= L'\u0072';
wchar_t SMALL_S				= L'\u0073';
wchar_t SMALL_T				= L'\u0074';
wchar_t SMALL_U				= L'\u0075';
wchar_t SMALL_V				= L'\u0076';
wchar_t SMALL_W				= L'\u0077';
wchar_t SMALL_X				= L'\u0078';
wchar_t SMALL_Y				= L'\u0079';
wchar_t SMALL_Z				= L'\u007A';

// 4 chars for ASCII punctuation and symbols
wchar_t LEFTCURLY			= L'\u007B';
wchar_t VERTICALLINE			= L'\u007C';
wchar_t RIGHTCURLY			= L'\u007D';
wchar_t TILDE				= L'\u007E';

// 7F to 9F are control characters
// Total 95 chars from Basic Latin except control Chars

// 96 chars for Latin-1 Supplement
wchar_t NOBREAK				= L'\u00A0';
wchar_t INV_EXCLAIM			= L'\u00A1';
wchar_t CENTSIGN			= L'\u00A2';
wchar_t POUND				= L'\u00A3';
wchar_t CURRENCY			= L'\u00A4';
wchar_t YEN				= L'\u00A5';
wchar_t PIPE				= L'\u00A6';
wchar_t SECTION				= L'\u00A7';
wchar_t DIAERESIS			= L'\u00A8';
wchar_t COPYRIGHT			= L'\u00A9';;
wchar_t FEMININE			= L'\u00AA';
wchar_t LEFT_ANGLE			= L'\u00AB';
wchar_t NOT_SIGN			= L'\u00AC';
wchar_t SOFT_HYPHEN			= L'\u00AD';
wchar_t REGISTERED			= L'\u00AE';
wchar_t MACRON				= L'\u00AF';
wchar_t DEGREE				= L'\u00B0';
wchar_t PLUS_MINUS			= L'\u00B1';
wchar_t SQUARE				= L'\u00B2';
wchar_t CUBICAL				= L'\u00B3';
wchar_t ACUTE_ACCENT			= L'\u00B4';
wchar_t MICRO_SIGN			= L'\u00B5';
wchar_t PILCROW				= L'\u00B6';
wchar_t MIDDLE_DOT			= L'\u00B7';
wchar_t CEDILA				= L'\u00B8';
wchar_t SUPERSCRIPT_ONE			= L'\u00B9';
wchar_t MASCULINE_ORDINAL_ONE		= L'\u00BA';
wchar_t RIGHT_ANGLE			= L'\u00BB';
wchar_t ONE_QUARTER			= L'\u00BC';
wchar_t ONE_HALF			= L'\u00BD';
wchar_t THREE_QUARTER			= L'\u00BE';
wchar_t INVERTED_QUESTION		= L'\u00BF';
wchar_t LAT_CAPITAL_A_GRAVE		= L'\u00C0';
wchar_t LAT_CAPITAL_A_ACUTE		= L'\u00C1';
wchar_t LAT_CAPITAL_A_CIRCUM		= L'\u00C2';
wchar_t LAT_CAPITAL_A_TILDE		= L'\u00C3';
wchar_t LAT_CAPITAL_A_DIAERSIS		= L'\u00C4';
wchar_t LAT_CAPITAL_A_RING		= L'\u00C5';
wchar_t LAT_CAPITAL_A_E			= L'\u00C6';
wchar_t LAT_CAPITAL_C_CADILA		= L'\u00C7';
wchar_t LAT_CAPITAL_E_GRAVE		= L'\u00C8';
wchar_t LAT_CAPITAL_E_ACUTE		= L'\u00C9';
wchar_t LAT_CAPITAL_E_CIRCUM		= L'\u00CA';
wchar_t LAT_CAPITAL_E_DIAERSIS		= L'\u00CB';
wchar_t LAT_CAPITAL_I_GRAVE		= L'\u00CC';
wchar_t LAT_CAPITAL_I_ACUTE		= L'\u00CD';
wchar_t LAT_CAPITAL_I_CIRCUM		= L'\u00CE';
wchar_t LAT_CAPITAL_I_DIAERSIS		= L'\u00CF';
wchar_t LAT_CAPITAL_ETH			= L'\u00D0';
wchar_t LAT_CAPITAL_N_TILDE		= L'\u00D1';
wchar_t LAT_CAPITAL_O_GRAVE		= L'\u00D2';
wchar_t LAT_CAPITAL_O_ACUTE		= L'\u00D3';
wchar_t LAT_CAPITAL_O_CIRCUM		= L'\u00D4';
wchar_t LAT_CAPITAL_O_TILDE		= L'\u00D5';
wchar_t LAT_CAPITAL_O_DIAERSIS		= L'\u00D6';
wchar_t MULTIPLCATION			= L'\u00D7';
wchar_t LAT_CAPITAL_O_STROKE		= L'\u00D8';
wchar_t LAT_CAPITAL_U_GRAVE		= L'\u00D9';
wchar_t LAT_CAPITAL_U_ACUTE		= L'\u00DA';
wchar_t LAT_CAPITAL_U_CIRCUM		= L'\u00DB';
wchar_t LAT_CAPITAL_U_DIAERSIS		= L'\u00DC';
wchar_t LAT_CAPITAL_Y_ACUTE		= L'\u00DD';
wchar_t CAP_THORN			= L'\u00DE';
wchar_t SHARP_S				= L'\u00DF';
wchar_t LAT_SMALL_A_GRAVE		= L'\u00E0';
wchar_t LAT_SMALL_A_ACUTE		= L'\u00E1';
wchar_t LAT_SMALL_A_CIRCUM		= L'\u00E2';
wchar_t LAT_SMALL_A_TILDE		= L'\u00E3';
wchar_t LAT_SMALL_A_DIAERSIS		= L'\u00E4';
wchar_t LAT_SMALL_A_RING		= L'\u00E5';
wchar_t LAT_SMALL_A_AE			= L'\u00E6';
wchar_t LAT_SMALL_C_CEDILA		= L'\u00E7';
wchar_t LAT_SMALL_E_GRAVE		= L'\u00E8';
wchar_t LAT_SMALL_E_ACUTE		= L'\u00E9';
wchar_t LAT_SMALL_E_CIRCUM		= L'\u00EA';
wchar_t LAT_SMALL_E_DIAERSIS		= L'\u00EB';
wchar_t LAT_SMALL_I_GRAVE		= L'\u00EC';
wchar_t LAT_SMALL_I_ACUTE		= L'\u00ED';
wchar_t LAT_SMALL_I_CIRCUM		= L'\u00EE';
wchar_t LAT_SMALL_I_DIAERSIS		= L'\u00EF';
wchar_t LAT_SMALL_ETH			= L'\u00F0';
wchar_t LAT_SMALL_N_TILDE		= L'\u00F1';
wchar_t LAT_SMALL_O_GRAVE		= L'\u00F2';
wchar_t LAT_SMALL_O_ACUTE		= L'\u00F3';
wchar_t LAT_SMALL_O_CIRCUM		= L'\u00F4';
wchar_t LAT_SMALL_O_TILDE		= L'\u00F5';
wchar_t LAT_SMALL_O_DIAERSIS		= L'\u00F6';
wchar_t DIVISION			= L'\u00F7';
wchar_t LAT_SMALL_O_STROKE		= L'\u00F8';
wchar_t LAT_SMALL_U_GRAVE		= L'\u00F9';
wchar_t LAT_SMALL_U_ACUTE		= L'\u00FA';
wchar_t LAT_SMALL_U_CIRCUM		= L'\u00FB';
wchar_t LAT_SMALL_U_DIAERSIS		= L'\u00FC';
wchar_t LAT_SMALL_Y_ACUTE		= L'\u00FD';
wchar_t SMALL_THORN			= L'\u00FE';
wchar_t LAT_SMALL_Y_DIAERSIS		= L'\u00FF';

// 63 chars from Latin Extended A

wchar_t LAT_CAP_A_MACRON		= L'\u0100';
wchar_t LAT_SMALL_A_MACRON		= L'\u0101';
wchar_t LAT_CAP_A_BREVE			= L'\u0102';
wchar_t LAT_SMALL_A_BREVE		= L'\u0103';
wchar_t LAT_CAP_A_OGONEK		= L'\u0104';
wchar_t LAT_SMALL_A_OGONEK		= L'\u0105';
wchar_t LAT_CAP_C_ACUTE			= L'\u0106';
wchar_t LAT_SMALL_C_ACUTE		= L'\u0107';
wchar_t LAT_CAP_C_CIRCUM		= L'\u0108';
wchar_t LAT_SMALL_C_CIRCUM		= L'\u0109';
wchar_t LAT_CAP_C_DOT			= L'\u010A';
wchar_t LAT_SMALL_C_DOT			= L'\u010B';
wchar_t LAT_CAP_C_CARON			= L'\u010C';
wchar_t LAT_SMALL_C_CARON               = L'\u010D';
wchar_t LAT_CAP_D_CARON                 = L'\u010E';
wchar_t LAT_SMALL_D_CARON               = L'\u010F';
wchar_t LAT_CAP_D_STROKE                = L'\u0110';
wchar_t LAT_SMALL_D_STROKE              = L'\u0111';
wchar_t LAT_CAP_E_MACRON		= L'\u0112';
wchar_t LAT_SMALL_E_MACRON		= L'\u0113';
wchar_t LAT_CAP_E_BREVE			= L'\u0114';
wchar_t LAT_SMALL_E_BREVE		= L'\u0115';
wchar_t LAT_CAP_E_DOT			= L'\u0116';
wchar_t LAT_SMALL_E_DOT			= L'\u0117';
wchar_t LAT_CAP_E_OGONEK		= L'\u0118';
wchar_t LAT_SMALL_E_OGONEK		= L'\u0119';
wchar_t LAT_CAP_E_CARON                 = L'\u011A';
wchar_t LAT_SMALL_E_CARON               = L'\u011B';
wchar_t LAT_CAP_G_CIRCUM              	= L'\u011C';
wchar_t LAT_SMALL_G_CIRCUM              = L'\u011D';
wchar_t LAT_CAP_G_BREVE			= L'\u011E';
wchar_t LAT_SMALL_G_BREVE		= L'\u011F';
wchar_t LAT_CAP_G_DOT                   = L'\u0120';
wchar_t LAT_SMALL_G_DOT                 = L'\u0121';
wchar_t LAT_CAP_G_CEDILA		= L'\u0122';
wchar_t LAT_SMALL_G_CEDILA		= L'\u0123';  
wchar_t LAT_CAP_H_CIRCUM                = L'\u0124';
wchar_t LAT_SMALL_H_CIRCUM              = L'\u0125';
wchar_t LAT_CAP_H_STROKE             	= L'\u0126';
wchar_t LAT_SMALL_H_STROKE              = L'\u0127';
wchar_t LAT_CAP_I_TILDE			= L'\u0128';
wchar_t LAT_SMALL_I_TILDE		= L'\u0129';
wchar_t LAT_CAP_I_MACRON                = L'\u012A';
wchar_t LAT_SMALL_I_MACRON	        = L'\u012B';
wchar_t LAT_CAP_I_BREVE                 = L'\u012C';
wchar_t LAT_SMALL_I_BREVE               = L'\u012D';
wchar_t LAT_CAP_I_OGONEK	        = L'\u012E';
wchar_t LAT_SMALL_I_OGONEK	        = L'\u012F';
wchar_t LAT_CAP_I_DOT                 	= L'\u0130';
wchar_t LAT_SMALL_I_DOTLESS             = L'\u0131';
wchar_t LAT_CAP_LIGATURE   	        = L'\u0132';
wchar_t LAT_SMALL_LIGATURE   	        = L'\u0133';
wchar_t LAT_CAP_J_CIRCUM                = L'\u0134';
wchar_t LAT_SMALL_J_CIRCUM              = L'\u0135';
wchar_t LAT_CAP_K_CEDILA                = L'\u0136';
wchar_t LAT_SMALL_K_CEDILA              = L'\u0137';
wchar_t LAT_SMALL_KRA	  	        = L'\u0138';
wchar_t LAT_CAP_L_ACUTE                 = L'\u0139';
wchar_t LAT_SMALL_L_ACUTE               = L'\u013A';
wchar_t LAT_CAP_L_CEDILA                = L'\u013B';
wchar_t LAT_SMALL_L_CEDILA              = L'\u013C';
wchar_t LAT_CAP_L_CARON                 = L'\u013D';
wchar_t LAT_SMALL_L_CARON               = L'\u013E';
wchar_t LAT_CAP_L_MIDDOT                = L'\u013F';
wchar_t LAT_SMALL_L_MIDDOT                = L'\u0140';


const wchar_t matrix[ROWS][COLS] = {
	{SPACE, EXCLAIMATION, QUOTATION, NUMBER, DOLLAR, PERCENT, AMPERSAND, APOSTRPOHE, LEFT_PAREN, RIGHT_PAREN, ASTERISK, PLUS, COMMA, MINUS, FULLSTOP, SOLIDUS},
	{ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, COLON, SEMICOLON, LESSTHAN, EQUAL, GREATERTHAN, QUESTION },
	{AT, CAPITAL_A, CAPITAL_B, CAPITAL_C, CAPITAL_D, CAPITAL_E, CAPITAL_F, CAPITAL_G, CAPITAL_H, CAPITAL_I, CAPITAL_J, CAPITAL_K, CAPITAL_L, CAPITAL_M, CAPITAL_N, CAPITAL_O}, 
	{CAPITAL_P, CAPITAL_Q, CAPITAL_R, CAPITAL_S, CAPITAL_T, CAPITAL_U, CAPITAL_V, CAPITAL_W, CAPITAL_X, CAPITAL_Y, CAPITAL_Z, LEFTSQUARE, REVERSE_SOLIDIUS, RIGHTSQUARE, CIRCUMFLEX, UNDERSCORE}, 
	{GRAVEACCENT, SMALL_A, SMALL_B, SMALL_C, SMALL_D, SMALL_E, SMALL_F, SMALL_G, SMALL_H, SMALL_I, SMALL_J, SMALL_K, SMALL_L, SMALL_M, SMALL_N, SMALL_O},
	{SMALL_P, SMALL_Q, SMALL_R, SMALL_S, SMALL_T, SMALL_U, SMALL_V, SMALL_W, SMALL_X, SMALL_Y, SMALL_Z, LEFTCURLY, VERTICALLINE, RIGHTCURLY, TILDE, NOBREAK}, 
	{INV_EXCLAIM, CENTSIGN, POUND, CURRENCY, YEN, PIPE, SECTION, DIAERESIS, COPYRIGHT, FEMININE, LEFT_ANGLE, NOT_SIGN, SOFT_HYPHEN, REGISTERED, MACRON, DEGREE},
	{PLUS_MINUS, SQUARE, CUBICAL, ACUTE_ACCENT, MICRO_SIGN, PILCROW, MIDDLE_DOT, CEDILA, SUPERSCRIPT_ONE, MASCULINE_ORDINAL_ONE, RIGHT_ANGLE, ONE_QUARTER, ONE_HALF, THREE_QUARTER, INVERTED_QUESTION, LAT_CAPITAL_A_GRAVE},
	{LAT_CAPITAL_A_ACUTE, LAT_CAPITAL_A_CIRCUM, LAT_CAPITAL_A_TILDE, LAT_CAPITAL_A_DIAERSIS, LAT_CAPITAL_A_RING, LAT_CAPITAL_A_E, LAT_CAPITAL_C_CADILA, LAT_CAPITAL_E_GRAVE, LAT_CAPITAL_E_ACUTE, LAT_CAPITAL_E_CIRCUM, LAT_CAPITAL_E_DIAERSIS, LAT_CAPITAL_I_GRAVE, LAT_CAPITAL_I_ACUTE, LAT_CAPITAL_I_CIRCUM, LAT_CAPITAL_I_DIAERSIS, LAT_CAPITAL_ETH},
	{LAT_CAPITAL_N_TILDE, LAT_CAPITAL_O_GRAVE, LAT_CAPITAL_O_ACUTE, LAT_CAPITAL_O_CIRCUM, LAT_CAPITAL_O_TILDE, LAT_CAPITAL_O_DIAERSIS, MULTIPLCATION, LAT_CAPITAL_O_STROKE, LAT_CAPITAL_U_GRAVE, LAT_CAPITAL_U_ACUTE, LAT_CAPITAL_U_CIRCUM, LAT_CAPITAL_U_DIAERSIS, LAT_CAPITAL_Y_ACUTE, CAP_THORN, SHARP_S, LAT_SMALL_A_GRAVE},
	{LAT_SMALL_A_ACUTE, LAT_SMALL_A_CIRCUM, LAT_SMALL_A_TILDE, LAT_SMALL_A_DIAERSIS, LAT_SMALL_A_RING, LAT_SMALL_A_AE, LAT_SMALL_C_CEDILA, LAT_SMALL_E_GRAVE, LAT_SMALL_E_ACUTE, LAT_SMALL_E_CIRCUM, LAT_SMALL_E_DIAERSIS, LAT_SMALL_I_GRAVE, LAT_SMALL_I_ACUTE, LAT_SMALL_I_CIRCUM, LAT_SMALL_I_DIAERSIS, LAT_SMALL_ETH}, 
	{LAT_SMALL_N_TILDE, LAT_SMALL_O_GRAVE, LAT_SMALL_O_ACUTE, LAT_SMALL_O_CIRCUM, LAT_SMALL_O_TILDE, LAT_SMALL_O_DIAERSIS, DIVISION, LAT_SMALL_O_STROKE, LAT_SMALL_U_GRAVE, LAT_SMALL_U_ACUTE, LAT_SMALL_U_CIRCUM, LAT_SMALL_U_DIAERSIS, LAT_SMALL_Y_ACUTE, SMALL_THORN, LAT_SMALL_Y_DIAERSIS, LAT_CAP_A_MACRON},
	{LAT_SMALL_A_MACRON, LAT_CAP_A_BREVE, LAT_SMALL_A_BREVE, LAT_CAP_A_OGONEK, LAT_SMALL_A_OGONEK, LAT_CAP_C_ACUTE, LAT_SMALL_C_ACUTE, LAT_CAP_C_CIRCUM, LAT_SMALL_C_CIRCUM, LAT_CAP_C_DOT, LAT_SMALL_C_DOT, LAT_CAP_C_CARON, LAT_SMALL_C_CARON, LAT_CAP_D_CARON, LAT_SMALL_D_CARON, LAT_CAP_D_STROKE},
	{LAT_SMALL_D_STROKE, LAT_CAP_E_MACRON, LAT_SMALL_E_MACRON, LAT_CAP_E_BREVE, LAT_SMALL_E_BREVE, LAT_CAP_E_DOT, LAT_SMALL_E_DOT, LAT_CAP_E_OGONEK, LAT_SMALL_E_OGONEK, LAT_CAP_E_CARON, LAT_SMALL_E_CARON, LAT_CAP_G_CIRCUM, LAT_SMALL_G_CIRCUM, LAT_CAP_G_BREVE, LAT_SMALL_G_BREVE, LAT_CAP_G_DOT},
	{LAT_SMALL_G_DOT, LAT_CAP_G_CEDILA, LAT_SMALL_G_CEDILA, LAT_CAP_H_CIRCUM, LAT_SMALL_H_CIRCUM, LAT_CAP_H_STROKE, LAT_SMALL_H_STROKE, LAT_CAP_I_TILDE, LAT_SMALL_I_TILDE, LAT_CAP_I_MACRON, LAT_SMALL_I_MACRON, LAT_CAP_I_BREVE, LAT_SMALL_I_BREVE, LAT_CAP_I_OGONEK, LAT_SMALL_I_OGONEK, LAT_CAP_I_DOT},
	{LAT_SMALL_I_DOTLESS, LAT_CAP_LIGATURE, LAT_SMALL_LIGATURE, LAT_CAP_J_CIRCUM, LAT_SMALL_J_CIRCUM, LAT_CAP_K_CEDILA, LAT_SMALL_K_CEDILA, LAT_SMALL_KRA, LAT_CAP_L_ACUTE, LAT_SMALL_L_ACUTE, LAT_CAP_L_CEDILA, LAT_SMALL_L_CEDILA, LAT_CAP_L_CARON, LAT_SMALL_L_CARON, LAT_CAP_L_MIDDOT, LAT_SMALL_L_MIDDOT} 
	};


/* 
int main()
{
    setlocale(LC_ALL, "");
    for(int i=0;i<ROWS; i++) {
	for(int j=0; j<COLS; j++) {
    		std::wcout<<matrix[i][j]<<"\t";
	}
	std::wcout<<"\n";
    }
    return 0;
}//main
*/
