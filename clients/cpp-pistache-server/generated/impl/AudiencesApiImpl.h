/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* AudiencesApiImpl.h
*
* 
*/

#ifndef AUDIENCES_API_IMPL_H_
#define AUDIENCES_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <AudiencesApi.h>


#include "Audience.h"
#include "AudienceCreateRequest.h"
#include "AudienceUpdateRequest.h"
#include "Audiences_list_200_response.h"
#include "Error.h"
#include <string>

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class AudiencesApiImpl : public org::openapitools::server::api::AudiencesApi {
public:
    explicit AudiencesApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~AudiencesApiImpl() override = default;

    void audiences_create(const std::string &adAccountId, const AudienceCreateRequest &audienceCreateRequest, Pistache::Http::ResponseWriter &response);
    void audiences_get(const std::string &adAccountId, const std::string &audienceId, Pistache::Http::ResponseWriter &response);
    void audiences_list(const std::string &adAccountId, const std::optional<std::string> &bookmark, const std::optional<std::vector<std::string>> &entityStatuses, const std::optional<std::string> &order, const std::optional<int32_t> &pageSize, Pistache::Http::ResponseWriter &response);
    void audiences_update(const std::string &adAccountId, const std::string &audienceId, const AudienceUpdateRequest &audienceUpdateRequest, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
