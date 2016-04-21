#ifndef _LOG_H_SELF_
#define _LOG_H_SELF_

#include <android/log.h>

#define LENGTH sizeof(struct CalculateData1)
#define LOG_TAG    "com.csh.wuziqi from C"
#define LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)


#endif
