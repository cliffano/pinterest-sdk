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

#include "PinsApi.h"
#include "Helpers.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

const std::string PinsApi::base = "/v5";

PinsApi::PinsApi(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr)
{
}

void PinsApi::init() {
    setupRoutes();
}

void PinsApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Get(*router, base + "/pins/:pin_id/analytics", Routes::bind(&PinsApi::pins_analytics_handler, this));
    Routes::Post(*router, base + "/pins", Routes::bind(&PinsApi::pins_create_handler, this));
    Routes::Delete(*router, base + "/pins/:pin_id", Routes::bind(&PinsApi::pins_delete_handler, this));
    Routes::Get(*router, base + "/pins/:pin_id", Routes::bind(&PinsApi::pins_get_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&PinsApi::pins_api_default_handler, this));
}

std::pair<Pistache::Http::Code, std::string> PinsApi::handleParsingException(const std::exception& ex) const noexcept
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

std::pair<Pistache::Http::Code, std::string> PinsApi::handleOperationException(const std::exception& ex) const noexcept
{
    return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void PinsApi::pins_analytics_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto pinId = request.param(":pinId").as<std::string>();
    
    // Getting the query params
    auto startDateQuery = request.query().get("start_date");
    std::optional<std::string> startDate;
    if(startDateQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(startDateQuery.value(), valueQuery_instance)){
            startDate = valueQuery_instance;
        }
    }
    auto endDateQuery = request.query().get("end_date");
    std::optional<std::string> endDate;
    if(endDateQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(endDateQuery.value(), valueQuery_instance)){
            endDate = valueQuery_instance;
        }
    }
    auto appTypesQuery = request.query().get("app_types");
    std::optional<std::string> appTypes;
    if(appTypesQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(appTypesQuery.value(), valueQuery_instance)){
            appTypes = valueQuery_instance;
        }
    }
    auto metricTypesQuery = request.query().get("metric_types");
    std::optional<std::vector<std::string>> metricTypes;
    if(metricTypesQuery.has_value()){
        std::vector<std::string> valueQuery_instance;
        if(fromStringValue(metricTypesQuery.value(), valueQuery_instance)){
            metricTypes = valueQuery_instance;
        }
    }
    auto splitFieldQuery = request.query().get("split_field");
    std::optional<std::string> splitField;
    if(splitFieldQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(splitFieldQuery.value(), valueQuery_instance)){
            splitField = valueQuery_instance;
        }
    }
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        this->pins_analytics(pinId, startDate, endDate, metricTypes, appTypes, splitField, adAccountId, response);
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
void PinsApi::pins_create_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {


    // Getting the body param
    
    Pin pin;
    
    try {
        nlohmann::json::parse(request.body()).get_to(pin);
        pin.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->pins_create(pin, response);
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
void PinsApi::pins_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto pinId = request.param(":pinId").as<std::string>();
    
    try {
        this->pins_delete(pinId, response);
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
void PinsApi::pins_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto pinId = request.param(":pinId").as<std::string>();
    
    // Getting the query params
    auto adAccountIdQuery = request.query().get("ad_account_id");
    std::optional<std::string> adAccountId;
    if(adAccountIdQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(adAccountIdQuery.value(), valueQuery_instance)){
            adAccountId = valueQuery_instance;
        }
    }
    
    try {
        this->pins_get(pinId, adAccountId, response);
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

void PinsApi::pins_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

} // namespace org::openapitools::server::api

