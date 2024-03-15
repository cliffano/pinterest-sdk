/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* OauthApiImpl.h
*
* 
*/

#ifndef OAUTH_API_IMPL_H_
#define OAUTH_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <OauthApi.h>


#include "Error.h"
#include "OauthAccessTokenResponse.h"
#include <string>

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class  OauthApiImpl : public org::openapitools::server::api::OauthApi {
public:
    explicit OauthApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~OauthApiImpl() override = default;

    void oauth_token(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
