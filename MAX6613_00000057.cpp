// License       : License.txt
// Specifications: Spec-00000057.pdf
/*-- File Header Comment Start -----------------------------------------------*/
// File Name        : MAX6613_00000057.cpp
// BSL              : 00000057
// Model number     : Maxim Integrated MAX6613MXK,MAX6613MXK/V
// Spec               Component type       : ADC
//                    OS                   : Arduino
//                    Calculation          : Floating-point
//                    Conversion type      : Linear
//                    Moving average filter: Moving average filter select
//                    Diagnosis            : Range (Min to Max)
// Reason for change: 01.00.00 : 10/10/'22 : New Release
// Nickname         : Blue Dragon
/*-- File Header Comment End -------------------------------------------------*/

#include "MAX6613.h"

// Main Function
pp2ap_adc_t MAX6613_00000057( void )
{
        pp2ap_adc_t res = pp_00000057( tbl_MAX6613 );
        return( res );
}
