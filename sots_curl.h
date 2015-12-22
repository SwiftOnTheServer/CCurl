#ifndef __RKA_CURL_H
#define __RKA_CURL_H

#include <stdbool.h>


CURLcode curl_easy_setopt_string(CURL *curl, CURLoption option, const char *param);
CURLcode curl_easy_setopt_bool(CURL *curl, CURLoption option, bool param);

#endif
