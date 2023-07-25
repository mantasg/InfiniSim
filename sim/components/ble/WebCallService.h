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
                int MakeWebCall(std::string label);
                std::string getResponse() const;
                bool getResponseReceived() const;
                void reset();
            private:
                bool responseReceived = false;
                std::string response {"NA"};
        };
    }
}
