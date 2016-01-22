
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _CANON_HAL_H_
#define _CANON_HAL_H_

/* Includes ------------------------------------------------------------------*/
#ifdef CANNON_V1
  #include "stm32f4xx_hal.h"
  #include "stm32f4xx_cannon_v1.h"
  #include "stm32f4xx_nucleo_bluenrg.h"
  #include "stm32f4xx_hal_conf.h"
#endif

#ifdef CANNON_V2
  #include "stm32f4xx_hal.h"
  #include "stm32f4xx_cannon_v2.h"
  #include "stm32f4xx_nucleo_bluenrg.h"
  #include "stm32f4xx_hal_conf.h"
#endif

#include "usbd_core.h"

void SystemClock_Config(void);

#endif //_CANON_HAL_H_

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

