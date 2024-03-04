#include <stdlib.h>
#include <stdint.h>

#define STM32_RCC_BASE 0x40023800
#define STM32_GPIO_OFSET 0X30
#define pRCC_AHB1ENR (STM32_RCC_BASE + STM32_GPIO_OFSET);

int main(void)
{
  while (1)

  {
  };
  /* Nao deveria chegar aqui */

  return EXIT_SUCCESS;
};
