#include "Motor.h"
#include "can.h"

CAN_TxHeaderTypeDef txHeader = {0x200, 0, CAN_ID_STD, CAN_RTR_DATA, 8, 0};
CAN_FilterTypeDef filter = {0, 0x200 << 5, 0, 0x201 << 5, CAN_FILTER_FIFO0, 0, CAN_FILTERMODE_IDLIST, CAN_FILTERSCALE_16BIT, CAN_FILTER_ENABLE, 0};
uint8_t canTxData[8] = {200, 0, 0, 0, 0, 0, 0, 0};
uint8_t canRxData[8];

CAN_RxHeaderTypeDef rxHeader; 

void motorInit()
{
  HAL_CAN_ConfigFilter(&hcan, &filter);
  HAL_CAN_Start(&hcan);
}
void motorUpdate()
{
  static uint32_t mailbox;
  HAL_CAN_AddTxMessage(&hcan, &txHeader, canTxData, &mailbox);
  HAL_CAN_GetRxMessage(&hcan, CAN_RX_FIFO0, &rxHeader, canRxData);
}
void motorSetOutput(uint16_t outputs[4])
{
  *(uint32_t *)canTxData = *(uint32_t *)outputs;
  *(uint32_t *)(canTxData + 4) = *(uint32_t *)(outputs + 2);
}