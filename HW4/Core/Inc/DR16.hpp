#pragma once
#include "main.h"
namespace Drivers
{
namespace DR16
{
class DR16
{
   private:
    struct RcData
    {
        enum Switch
        {
            UP = 1,
            MID = 3,
            DOWN = 2
        };
        Switch sw1;
        Switch sw2;
        uint16_t ch0;
        uint16_t ch1;
        uint16_t ch2;
        uint16_t ch3;
    } rcData;

   public:
    DR16(){};
    RcData getRcData() { return rcData; }
    void decode(uint8_t *rxBuffer);
};
void init();
}  // namespace DR16
}  // namespace Drivers