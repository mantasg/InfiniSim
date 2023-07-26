#include <cstring>
#include "components/ble/WebCallService.h"

using namespace Pinetime::Controllers;

WebCallService::WebCallService() {}

void WebCallService::Init() {}

int WebCallService::MakeWebCall(std::string label) {
    std::string response;
    if (label == "nagios_list") {
      response = "[WARN] PRODUCTION01-nginx-Instance Age\n[CRIT] PRODUCTION01-nginx-Instance Age"; 
    }
    else if (label == "nagios_status") {
      response = "100\n2\n0\nMG/MG\nAD/OP";
    }
    
    std::set<Applications::Screens::Screen*>::iterator it;
    for (it = subscribers.begin(); it != subscribers.end(); ++it) {
      Applications::Screens::Screen* screen = *it;
      screen->OnReceiveWebCall(response);
    }
    
    return 0;
}

void WebCallService::Subscribe(Applications::Screens::Screen* screen) {
  subscribers.insert(screen);
}

void WebCallService::Unsubscribe(Applications::Screens::Screen* screen) {
  subscribers.erase(screen);
}