/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* MediaApiImpl.h
*
* 
*/

#ifndef MEDIA_API_IMPL_H_
#define MEDIA_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <MediaApi.h>


#include "Error.h"
#include "MediaUpload.h"
#include "MediaUploadDetails.h"
#include "MediaUploadRequest.h"
#include "Object.h"
#include "Paginated.h"
#include <string>

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class MediaApiImpl : public org::openapitools::server::api::MediaApi {
public:
    explicit MediaApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~MediaApiImpl() override = default;

    void media_create(const MediaUploadRequest &mediaUploadRequest, Pistache::Http::ResponseWriter &response);
    void media_get(const std::string &mediaId, Pistache::Http::ResponseWriter &response);
    void media_list(const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
