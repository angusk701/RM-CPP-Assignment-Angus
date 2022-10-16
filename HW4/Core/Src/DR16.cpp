#include "DR16.hpp"

#include "cmsis_os.h"
#include "usart.h"

namespace Drivers
{
namespace DR16
{
void DR16::decode(uint8_t *rxBuffer)
{
    /* your code start here */

    /* your code end here */
}
static uint8_t dr16Buffer[18] = {0};
DR16 dr16;

static volatile int x = 0;
static void dr16CompleteCallback(UART_HandleTypeDef *huart)
{
    x++;
    dr16.decode(dr16Buffer);
    HAL_UART_Receive_IT(&huart1, dr16Buffer, 18);
}

void init()
{
    HAL_UART_RegisterCallback(&huart1, HAL_UART_RX_COMPLETE_CB_ID, dr16CompleteCallback);
    HAL_UART_Receive_IT(&huart1, dr16Buffer, 18);
}
}  // namespace DR16
}  // namespace Drivers