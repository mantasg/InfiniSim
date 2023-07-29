#include "components/ble/SleepTrackingService.h"

using namespace Pinetime::Controllers;

void handleTimer(TimerHandle_t timer) {
}

SleepTrackingService::SleepTrackingService() {
  timer = xTimerCreate("SleepTrackingService", pdMS_TO_TICKS(2000), pdTRUE, this, handleTimer);
  xTimerStart(timer, 0);
}

void SleepTrackingService::Init() {
}