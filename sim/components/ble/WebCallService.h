#pragma once

#include <cstdint>
#include <string>
#include <set>
#include "displayapp/screens/Screen.h"

namespace Pinetime {
    namespace System {
        class SystemTask;
    }

    namespace Controllers {
        class WebCallService {
            public:
                WebCallService();
                void Init();
                int MakeWebCall(std::string label);
                void Subscribe(Applications::Screens::Screen* screen);
                void Unsubscribe(Applications::Screens::Screen* screen);
            private:
                std::set<Applications::Screens::Screen*> subscribers {};
        };
    }
}
