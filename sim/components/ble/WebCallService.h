#pragma once

#include <cstdint>
#include <string>

namespace Pinetime {
    namespace System {
        class SystemTask;
    }

    namespace Controllers {
        class WebCallService {
            public:
                WebCallService();
                void Init();
                int MakeWebCall();
                std::string getResponse() const;
                bool getResponseReceived() const;
            private:
                bool responseReceived = false;
                std::string response {"NA"};
        };
    }
}
