#include "components/ble/WebCallService.h"

using namespace Pinetime::Controllers;

WebCallService::WebCallService() {
}

void WebCallService::Init() {
}

int WebCallService::MakeWebCall() {
    responseReceived = false;
    response = "Mock web response";
    responseReceived = true;
    return 0;
}

std::string WebCallService::getResponse() const {
    return response;
}

bool WebCallService::getResponseReceived() const {
    return responseReceived;
}