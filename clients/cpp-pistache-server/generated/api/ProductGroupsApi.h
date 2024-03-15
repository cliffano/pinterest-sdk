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
 * ProductGroupsApi.h
 *
 * 
 */

#ifndef ProductGroupsApi_H_
#define ProductGroupsApi_H_


#include "ApiBase.h"

#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include <optional>
#include <utility>

#include "Ad_accounts_catalogs_product_groups_list_200_response.h"
#include "Error.h"
#include <string>

namespace org::openapitools::server::api
{

class  ProductGroupsApi : public ApiBase {
public:
    explicit ProductGroupsApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~ProductGroupsApi() override = default;
    void init() override;

    static const std::string base;

private:
    void setupRoutes();

    void ad_accounts_catalogs_product_groups_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void product_groups_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    /// <summary>
    /// Helper function to handle unexpected Exceptions during Parameter parsing and validation.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleParsingException(const std::exception& ex) const noexcept;

    /// <summary>
    /// Helper function to handle unexpected Exceptions during processing of the request in handler functions.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleOperationException(const std::exception& ex) const noexcept;

    /// <summary>
    /// Get catalog product groups
    /// </summary>
    /// <remarks>
    /// This endpoint is completely deprecated. Please use &lt;a href&#x3D;&#39;/docs/api/v5/#operation/catalogs_product_groups/list&#39;&gt;List product groups&lt;/a&gt; from Catalogs API instead.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="feedProfileId">The feed profile id whose catalog product groups we want to return. (optional, default to &quot;&quot;)</param>
    virtual void ad_accounts_catalogs_product_groups_list(const std::string &adAccountId, const std::optional<std::string> &feedProfileId, Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace org::openapitools::server::api

#endif /* ProductGroupsApi_H_ */

