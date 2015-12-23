#ifndef __SOTS_CURL_H
#define __SOTS_CURL_H

#include <stdbool.h>

typedef size_t (*curl_func)(void * ptr, size_t size, size_t num, void * ud);

CURLcode curl_easy_setopt_string(CURL *curl, CURLoption option, const char *param);
CURLcode curl_easy_setopt_bool(CURL *curl, CURLoption option, bool param);
CURLcode curl_easy_setopt_func(CURL *handle, CURLoption option, curl_func param);
CURLcode curl_easy_setopt_pointer(CURL *handle, CURLoption option, void* param);

#endif
