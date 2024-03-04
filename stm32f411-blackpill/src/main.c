#include <stdlib.h>
#include <stdint.h>

#define STM32_RCC_BASE 0x40023800                        /*Definição do endereço base do RCC*/
#define STM32_GPIO_OFSET 0X0030                          /*Definição do Ofset do GPIO*/
#define RCC_AHB1ENR (STM32_RCC_BASE + STM32_GPIO_OFSET); /*Definição do AHB1 */

/* Register Offsets */

#define STM32_RCC_AHB1ENR_OFFSET 0x0030 /* AHB1 Peripheral Clock enable register */

#define STM32_GPIO_MODER_OFFSET 0x0000  /* GPIO port mode register */
#define STM32_GPIO_OTYPER_OFFSET 0x0004 /* GPIO port output type register */
#define STM32_GPIO_PUPDR_OFFSET 0x000c  /* GPIO port pull-up/pull-down register */
#define STM32_GPIO_ODR_OFFSET 0x0014    /* GPIO port output data register */
#define STM32_GPIO_BSRR_OFFSET 0x0018   /* GPIO port bit set/reset register */

int main(void)
{
  while (1)

  {
  };
  /* Nao deveria chegar aqui */

  return EXIT_SUCCESS;
};
