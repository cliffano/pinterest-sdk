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
* ProductGroupsApiImpl.h
*
* 
*/

#ifndef PRODUCT_GROUPS_API_IMPL_H_
#define PRODUCT_GROUPS_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <ProductGroupsApi.h>


#include "Ad_accounts_catalogs_product_groups_list_200_response.h"
#include "Error.h"
#include <string>

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class  ProductGroupsApiImpl : public org::openapitools::server::api::ProductGroupsApi {
public:
    explicit ProductGroupsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~ProductGroupsApiImpl() override = default;

    void ad_accounts_catalogs_product_groups_list(const std::string &adAccountId, const std::optional<std::string> &feedProfileId, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
