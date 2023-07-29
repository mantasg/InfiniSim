#pragma once

#include <cstdint>
#include <string>
#include <set>
#include "displayapp/screens/Screen.h"
#include "timers.h"

namespace Pinetime {
    namespace Controllers {
        class SleepTrackingService {
        public:
            SleepTrackingService();
            void Init();
        private:
            TimerHandle_t timer;
        };
    }
}
