/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * TermsOfServiceApi.h
 *
 * 
 */

#ifndef TermsOfServiceApi_H_
#define TermsOfServiceApi_H_


#include "ApiBase.h"

#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include <optional>
#include <utility>

#include "Error.h"
#include "TermsOfService.h"
#include <string>

namespace org::openapitools::server::api
{

class  TermsOfServiceApi : public ApiBase {
public:
    explicit TermsOfServiceApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~TermsOfServiceApi() override = default;
    void init() override;

    static const std::string base;

private:
    void setupRoutes();

    void terms_of_service_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void terms_of_service_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

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
    /// Get terms of service
    /// </summary>
    /// <remarks>
    /// Get the text of the terms of service and see whether the advertiser has accepted the terms of service.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="includeHtml">Return HTML in TOS text. (optional, default to false)</param>
    /// <param name="tosType">Request type. (optional, default to &quot;&quot;)</param>
    virtual void terms_of_service_get(const std::string &adAccountId, const std::optional<bool> &includeHtml, const std::optional<std::string> &tosType, Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace org::openapitools::server::api

#endif /* TermsOfServiceApi_H_ */

