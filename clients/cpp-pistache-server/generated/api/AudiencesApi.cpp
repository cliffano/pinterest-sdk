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

#include "AudiencesApi.h"
#include "Helpers.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

const std::string AudiencesApi::base = "/v5";

AudiencesApi::AudiencesApi(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : ApiBase(rtr)
{
}

void AudiencesApi::init() {
    setupRoutes();
}

void AudiencesApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Post(*router, base + "/ad_accounts/:ad_account_id/audiences", Routes::bind(&AudiencesApi::audiences_create_handler, this));
    Routes::Post(*router, base + "/ad_accounts/:ad_account_id/audiences/custom", Routes::bind(&AudiencesApi::audiences_create_custom_handler, this));
    Routes::Get(*router, base + "/ad_accounts/:ad_account_id/audiences/:audience_id", Routes::bind(&AudiencesApi::audiences_get_handler, this));
    Routes::Get(*router, base + "/ad_accounts/:ad_account_id/audiences", Routes::bind(&AudiencesApi::audiences_list_handler, this));
    Routes::Patch(*router, base + "/ad_accounts/:ad_account_id/audiences/:audience_id", Routes::bind(&AudiencesApi::audiences_update_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&AudiencesApi::audiences_api_default_handler, this));
}

std::pair<Pistache::Http::Code, std::string> AudiencesApi::handleParsingException(const std::exception& ex) const noexcept
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

std::pair<Pistache::Http::Code, std::string> AudiencesApi::handleOperationException(const std::exception& ex) const noexcept
{
    return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void AudiencesApi::audiences_create_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    
    // Getting the body param
    
    AudienceCreateRequest audienceCreateRequest;
    
    try {
        nlohmann::json::parse(request.body()).get_to(audienceCreateRequest);
        audienceCreateRequest.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->audiences_create(adAccountId, audienceCreateRequest, response);
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
void AudiencesApi::audiences_create_custom_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    
    // Getting the body param
    
    AudienceCreateCustomRequest audienceCreateCustomRequest;
    
    try {
        nlohmann::json::parse(request.body()).get_to(audienceCreateCustomRequest);
        audienceCreateCustomRequest.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->audiences_create_custom(adAccountId, audienceCreateCustomRequest, response);
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
void AudiencesApi::audiences_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    auto audienceId = request.param(":audienceId").as<std::string>();
    
    try {
        this->audiences_get(adAccountId, audienceId, response);
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
void AudiencesApi::audiences_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    
    // Getting the query params
    auto bookmarkQuery = request.query().get("bookmark");
    std::optional<std::string> bookmark;
    if(bookmarkQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(bookmarkQuery.value(), valueQuery_instance)){
            bookmark = valueQuery_instance;
        }
    }
    auto orderQuery = request.query().get("order");
    std::optional<std::string> order;
    if(orderQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(orderQuery.value(), valueQuery_instance)){
            order = valueQuery_instance;
        }
    }
    auto pageSizeQuery = request.query().get("page_size");
    std::optional<int32_t> pageSize;
    if(pageSizeQuery.has_value()){
        int32_t valueQuery_instance;
        if(fromStringValue(pageSizeQuery.value(), valueQuery_instance)){
            pageSize = valueQuery_instance;
        }
    }
    auto ownershipTypeQuery = request.query().get("ownership_type");
    std::optional<std::string> ownershipType;
    if(ownershipTypeQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(ownershipTypeQuery.value(), valueQuery_instance)){
            ownershipType = valueQuery_instance;
        }
    }
    
    try {
        this->audiences_list(adAccountId, bookmark, order, pageSize, ownershipType, response);
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
void AudiencesApi::audiences_update_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    auto audienceId = request.param(":audienceId").as<std::string>();
    
    // Getting the body param
    
    AudienceUpdateRequest audienceUpdateRequest;
    
    try {
        nlohmann::json::parse(request.body()).get_to(audienceUpdateRequest);
        audienceUpdateRequest.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->audiences_update(adAccountId, audienceId, audienceUpdateRequest, response);
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

void AudiencesApi::audiences_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

} // namespace org::openapitools::server::api

