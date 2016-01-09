#include <stdbool.h>
#include <curl/curl.h>
#include "sots_curl.h"


CURLcode curl_easy_setopt_string(CURL *curl, CURLoption option, const char *param) {
    return curl_easy_setopt(curl, option, param);
}

CURLcode curl_easy_setopt_bool(CURL *curl, CURLoption option, bool param) {
    return curl_easy_setopt(curl, option, param);
}

CURLcode curl_easy_setopt_func(CURL *handle, CURLoption option, curl_func param)
{
    return curl_easy_setopt(handle, option, param);
}

CURLcode curl_easy_setopt_pointer(CURL *handle, CURLoption option, void* param)
{
    return curl_easy_setopt(handle, option, param);
}

CURLcode curl_easy_setopt_long(CURL *curl, CURLoption option, int64_t param) {
    return curl_easy_setopt(curl, option, param);
}

CURLcode curl_easy_setopt_slist(CURL *curl, CURLoption option, struct curl_slist *param) {
    return curl_easy_setopt(curl, option, param);
}

CURLcode curl_easy_getinfo_long(CURL *handle, CURLINFO option, int64_t *param)
{
    return curl_easy_getinfo(handle, option, param);
}

CURLcode curl_easy_getinfo_string(CURL *handle, CURLINFO option, const char **param)
{
    return curl_easy_getinfo(handle, option, param);
}

CURLcode curl_easy_getinfo_double(CURL *handle, CURLINFO option, double *param)
{
    return curl_easy_getinfo(handle, option, param);
}

CURLcode curl_easy_getinfo_slist(CURL *handle, CURLINFO option, struct curl_slist **param)
{
    return curl_easy_getinfo(handle, option, param);
}

CURLcode curl_get_msg_result(CURLMsg * msg)
{
    return msg->data.result;
}

