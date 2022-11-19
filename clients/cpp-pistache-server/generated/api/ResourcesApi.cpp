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

#include "ResourcesApi.h"
#include "Helpers.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

const std::string ResourcesApi::base = "/v5";

ResourcesApi::ResourcesApi(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr)
{
}

void ResourcesApi::init() {
    setupRoutes();
}

void ResourcesApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Get(*router, base + "/resources/ad_account_countries", Routes::bind(&ResourcesApi::ad_account_countries_get_handler, this));
    Routes::Get(*router, base + "/resources/delivery_metrics", Routes::bind(&ResourcesApi::delivery_metrics_get_handler, this));
    Routes::Get(*router, base + "/resources/targeting/interests/:interest_id", Routes::bind(&ResourcesApi::interest_targeting_options_get_handler, this));
    Routes::Get(*router, base + "/resources/metrics_ready_state", Routes::bind(&ResourcesApi::metrics_ready_state_get_handler, this));
    Routes::Get(*router, base + "/resources/targeting/:targeting_type", Routes::bind(&ResourcesApi::targeting_options_get_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&ResourcesApi::resources_api_default_handler, this));
}

std::pair<Pistache::Http::Code, std::string> ResourcesApi::handleParsingException(const std::exception& ex) const noexcept
{
    try {
        throw;
    } catch (nlohmann::detail::exception &e) {
        return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
    } catch (org::openapitools::server::helpers::ValidationException &e) {
        return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
    } catch (std::exception &e) {
        return std::make_pair(Pistache::Http::Code::Internal_Server_Error, e.what());
    }
}

std::pair<Pistache::Http::Code, std::string> ResourcesApi::handleOperationException(const std::exception& ex) const noexcept
{
    return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void ResourcesApi::ad_account_countries_get_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    try {


    try {
        this->ad_account_countries_get(response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void ResourcesApi::delivery_metrics_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the query params
    auto reportTypeQuery = request.query().get("report_type");
    std::optional<std::string> reportType;
    if(reportTypeQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(reportTypeQuery.value(), valueQuery_instance)){
            reportType = valueQuery_instance;
        }
    }
    
    try {
        this->delivery_metrics_get(reportType, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void ResourcesApi::interest_targeting_options_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto interestId = request.param(":interestId").as<std::string>();
    
    try {
        this->interest_targeting_options_get(interestId, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void ResourcesApi::metrics_ready_state_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the query params
    auto dateQuery = request.query().get("date");
    std::optional<std::string> date;
    if(dateQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(dateQuery.value(), valueQuery_instance)){
            date = valueQuery_instance;
        }
    }
    
    try {
        this->metrics_ready_state_get(date, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}
void ResourcesApi::targeting_options_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto targetingType = request.param(":targetingType").as<std::string>();
    
    // Getting the query params
    auto clientIdQuery = request.query().get("client_id");
    std::optional<std::string> clientId;
    if(clientIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(clientIdQuery.value(), valueQuery_instance)){
            clientId = valueQuery_instance;
        }
    }
    auto oauthSignatureQuery = request.query().get("oauth_signature");
    std::optional<std::string> oauthSignature;
    if(oauthSignatureQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(oauthSignatureQuery.value(), valueQuery_instance)){
            oauthSignature = valueQuery_instance;
        }
    }
    auto timestampQuery = request.query().get("timestamp");
    std::optional<std::string> timestamp;
    if(timestampQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(timestampQuery.value(), valueQuery_instance)){
            timestamp = valueQuery_instance;
        }
    }
    
    try {
        this->targeting_options_get(targetingType, clientId, oauthSignature, timestamp, response);
    } catch (Pistache::Http::HttpError &e) {
        response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
        return;
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleOperationException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    } catch (std::exception &e) {
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    }

}

void ResourcesApi::resources_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

} // namespace org::openapitools::server::api

