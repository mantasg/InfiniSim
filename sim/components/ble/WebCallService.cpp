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
      response = "PRODUCTION01-c2c\nPRODUCTION01-web\nga-prod-env"; 
    }
    else if (label == "nagios_status") {
      response = "100\n2\n0\nMG/MG\nAD/OP";
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