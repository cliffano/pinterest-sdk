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

#include "ProductGroupPromotionsApi.h"
#include "Helpers.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

const std::string ProductGroupPromotionsApi::base = "/v5";

ProductGroupPromotionsApi::ProductGroupPromotionsApi(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr)
{
}

void ProductGroupPromotionsApi::init() {
    setupRoutes();
}

void ProductGroupPromotionsApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Get(*router, base + "/ad_accounts/:ad_account_id/product_group_promotions/:product_group_promotion_id", Routes::bind(&ProductGroupPromotionsApi::product_group_promotion_get_handler, this));
    Routes::Post(*router, base + "/ad_accounts/:ad_account_id/product_group_promotions", Routes::bind(&ProductGroupPromotionsApi::product_group_promotions_create_handler, this));
    Routes::Patch(*router, base + "/ad_accounts/:ad_account_id/product_group_promotions", Routes::bind(&ProductGroupPromotionsApi::product_group_promotions_update_handler, this));
    Routes::Get(*router, base + "/ad_accounts/:ad_account_id/product_groups/analytics", Routes::bind(&ProductGroupPromotionsApi::product_groups_analytics_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&ProductGroupPromotionsApi::product_group_promotions_api_default_handler, this));
}

std::pair<Pistache::Http::Code, std::string> ProductGroupPromotionsApi::handleParsingException(const std::exception& ex) const noexcept
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

std::pair<Pistache::Http::Code, std::string> ProductGroupPromotionsApi::handleOperationException(const std::exception& ex) const noexcept
{
    return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void ProductGroupPromotionsApi::product_group_promotion_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    auto productGroupPromotionId = request.param(":productGroupPromotionId").as<std::string>();
    
    try {
        this->product_group_promotion_get(adAccountId, productGroupPromotionId, response);
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
void ProductGroupPromotionsApi::product_group_promotions_create_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    
    // Getting the body param
    
    ProductGroupPromotionCreateRequest productGroupPromotionCreateRequest;
    
    try {
        nlohmann::json::parse(request.body()).get_to(productGroupPromotionCreateRequest);
        productGroupPromotionCreateRequest.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->product_group_promotions_create(adAccountId, productGroupPromotionCreateRequest, response);
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
void ProductGroupPromotionsApi::product_group_promotions_update_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    
    // Getting the body param
    
    ProductGroupPromotionUpdateRequest productGroupPromotionUpdateRequest;
    
    try {
        nlohmann::json::parse(request.body()).get_to(productGroupPromotionUpdateRequest);
        productGroupPromotionUpdateRequest.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->product_group_promotions_update(adAccountId, productGroupPromotionUpdateRequest, response);
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
void ProductGroupPromotionsApi::product_groups_analytics_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    
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
    auto productGroupIdsQuery = request.query().get("product_group_ids");
    std::optional<std::vector<std::string>> productGroupIds;
    if(productGroupIdsQuery.has_value()){
        std::vector<std::string> valueQuery_instance;
        if(fromStringValue(productGroupIdsQuery.value(), valueQuery_instance)){
            productGroupIds = valueQuery_instance;
        }
    }
    auto columnsQuery = request.query().get("columns");
    std::optional<std::vector<std::string>> columns;
    if(columnsQuery.has_value()){
        std::vector<std::string> valueQuery_instance;
        if(fromStringValue(columnsQuery.value(), valueQuery_instance)){
            columns = valueQuery_instance;
        }
    }
    auto granularityQuery = request.query().get("granularity");
    std::optional<Granularity> granularity;
    if(granularityQuery.has_value()){
        Granularity valueQuery_instance;
        if(fromStringValue(granularityQuery.value(), valueQuery_instance)){
            granularity = valueQuery_instance;
        }
    }
    auto clickWindowDaysQuery = request.query().get("click_window_days");
    std::optional<int32_t> clickWindowDays;
    if(clickWindowDaysQuery.has_value()){
        int32_t valueQuery_instance;
        if(fromStringValue(clickWindowDaysQuery.value(), valueQuery_instance)){
            clickWindowDays = valueQuery_instance;
        }
    }
    auto engagementWindowDaysQuery = request.query().get("engagement_window_days");
    std::optional<int32_t> engagementWindowDays;
    if(engagementWindowDaysQuery.has_value()){
        int32_t valueQuery_instance;
        if(fromStringValue(engagementWindowDaysQuery.value(), valueQuery_instance)){
            engagementWindowDays = valueQuery_instance;
        }
    }
    auto viewWindowDaysQuery = request.query().get("view_window_days");
    std::optional<int32_t> viewWindowDays;
    if(viewWindowDaysQuery.has_value()){
        int32_t valueQuery_instance;
        if(fromStringValue(viewWindowDaysQuery.value(), valueQuery_instance)){
            viewWindowDays = valueQuery_instance;
        }
    }
    auto conversionReportTimeQuery = request.query().get("conversion_report_time");
    std::optional<std::string> conversionReportTime;
    if(conversionReportTimeQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(conversionReportTimeQuery.value(), valueQuery_instance)){
            conversionReportTime = valueQuery_instance;
        }
    }
    
    try {
        this->product_groups_analytics(adAccountId, startDate, endDate, productGroupIds, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, response);
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

void ProductGroupPromotionsApi::product_group_promotions_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

} // namespace org::openapitools::server::api

