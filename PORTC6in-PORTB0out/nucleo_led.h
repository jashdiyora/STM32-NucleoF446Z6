/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __LED1_H_
#define __LED1_H_

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Macros for Everyone--------------------------------------------------------*/




/*Function definitions---------------------------------------------------------*/

void init_LED1(void);
void toggle_LED1( void);
void high_LED1( void );
void low_LED1( void );
void init_InputPC6( void );
void checkstatusPC6( void );

#ifdef __cplusplus
}
#endif

#endif /*__LED1_H */
