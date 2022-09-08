#include"STD_TYPES.h"
#include"Bit_math.h"
#include"SevSeg_Private.h"
#include"SevSeg_cfg.h"
u8 NUMBERS[10] = {ZERO,ONE ,TWO ,THREE,FOUR,FIVE,SEX ,SEVN,EIGT,NINE};

SevSeg_DisplayNum(u8 Copy_U8Port , u8 Copy_U8Num){
	#if SEG_TYPE == COM_KA
	DIO_VidSetPortValue( Copy_U8Port , NUMBERS[Copy_U8Num] );
	#elif SEG_TYPE == COM_ANA
	DIO_VidSetPortValue( Copy_U8Port , ~(NUMBERS[Copy_U8Num]) );
	#else 
		#erorr "worng input"
	#endif
}
