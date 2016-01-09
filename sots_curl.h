#ifndef __SOTS_CURL_H
#define __SOTS_CURL_H

#include <stdbool.h>

typedef size_t (*curl_func)(void * ptr, size_t size, size_t num, void * ud);

// functions for curl_easy_setopt
CURLcode curl_easy_setopt_string(CURL *curl, CURLoption option, const char *param);
CURLcode curl_easy_setopt_bool(CURL *curl, CURLoption option, bool param);
CURLcode curl_easy_setopt_func(CURL *handle, CURLoption option, curl_func param);
CURLcode curl_easy_setopt_pointer(CURL *handle, CURLoption option, void *param);
CURLcode curl_easy_setopt_long(CURL *handle, CURLoption option, int64_t param);
CURLcode curl_easy_setopt_slist(CURL *handle, CURLoption option, struct curl_slist *param);

// functions for curl_easy_get_info
CURLcode curl_easy_getinfo_long(CURL *handle, CURLINFO option, int64_t *param);
CURLcode curl_easy_getinfo_string(CURL *handle, CURLINFO option, const char **param);
CURLcode curl_easy_getinfo_slist(CURL *handle, CURLINFO option, struct curl_slist **param);

// functions for curl_get_msg_result
CURLcode curl_get_msg_result(CURLMsg * msg);

#endif
