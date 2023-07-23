#include "components/ble/WebCallService.h"

using namespace Pinetime::Controllers;

WebCallService::WebCallService() {
}

void WebCallService::Init() {
}

int WebCallService::MakeWebCall() {
    responseReceived = false;
    response = "One\nTwo\nThree\nFour\nFive\nSix\nSeven\nEight\nNine\nTen\nEleven\nTwelve\nThirteen\nVery long item here that certainly exceeds 20 chars";
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