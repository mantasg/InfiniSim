#include <cstring>
#include "components/ble/WebCallService.h"

using namespace Pinetime::Controllers;

WebCallService::WebCallService() {
}

void WebCallService::Init() {
}

int WebCallService::MakeWebCall(std::string label) {
    responseReceived = false;
    if (label == "nagios_list") {
      response = "[W] PRODUCTION01-c2c-environment\n[W] PRODUCTION01-web-host\n[W] ga-prod-environment"; 
    }
    responseReceived = true;
    return 0;
}

std::string WebCallService::getResponse() const {
    return response;
}

bool WebCallService::getResponseReceived() const {
    return responseReceived;
}

void WebCallService::reset() {
    responseReceived = false;
}