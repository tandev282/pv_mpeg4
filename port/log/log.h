#pragma once
// Android logging compatibility; upstream decoder sources remain unmodified.
#include "esp_log.h"
#ifndef LOG_TAG
#define LOG_TAG "PacketVideo"
#endif
#define ALOGE(...) ESP_LOGE(LOG_TAG, __VA_ARGS__)
inline int android_errorWriteLog(int, const char* issue) {
    ESP_LOGE("PacketVideo", "Rejected malformed stream (%s)", issue);
    return 0;
}
