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

#include "CampaignsApi.h"
#include "Helpers.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

const std::string CampaignsApi::base = "/v5";

CampaignsApi::CampaignsApi(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : ApiBase(rtr)
{
}

void CampaignsApi::init() {
    setupRoutes();
}

void CampaignsApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Get(*router, base + "/ad_accounts/:ad_account_id/campaigns/targeting_analytics", Routes::bind(&CampaignsApi::campaign_targeting_analytics_get_handler, this));
    Routes::Get(*router, base + "/ad_accounts/:ad_account_id/campaigns/analytics", Routes::bind(&CampaignsApi::campaigns_analytics_handler, this));
    Routes::Post(*router, base + "/ad_accounts/:ad_account_id/campaigns", Routes::bind(&CampaignsApi::campaigns_create_handler, this));
    Routes::Get(*router, base + "/ad_accounts/:ad_account_id/campaigns/:campaign_id", Routes::bind(&CampaignsApi::campaigns_get_handler, this));
    Routes::Get(*router, base + "/ad_accounts/:ad_account_id/campaigns", Routes::bind(&CampaignsApi::campaigns_list_handler, this));
    Routes::Patch(*router, base + "/ad_accounts/:ad_account_id/campaigns", Routes::bind(&CampaignsApi::campaigns_update_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&CampaignsApi::campaigns_api_default_handler, this));
}

std::pair<Pistache::Http::Code, std::string> CampaignsApi::handleParsingException(const std::exception& ex) const noexcept
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

std::pair<Pistache::Http::Code, std::string> CampaignsApi::handleOperationException(const std::exception& ex) const noexcept
{
    return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void CampaignsApi::campaign_targeting_analytics_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    
    // Getting the query params
    auto campaignIdsQuery = request.query().get("campaign_ids");
    std::optional<std::vector<std::string>> campaignIds;
    if(campaignIdsQuery.has_value()){
        std::vector<std::string> valueQuery_instance;
        if(fromStringValue(campaignIdsQuery.value(), valueQuery_instance)){
            campaignIds = valueQuery_instance;
        }
    }
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
    auto targetingTypesQuery = request.query().get("targeting_types");
    std::optional<std::vector<AdsAnalyticsTargetingType>> targetingTypes;
    if(targetingTypesQuery.has_value()){
        std::vector<AdsAnalyticsTargetingType> valueQuery_instance;
        if(fromStringValue(targetingTypesQuery.value(), valueQuery_instance)){
            targetingTypes = valueQuery_instance;
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
    auto attributionTypesQuery = request.query().get("attribution_types");
    std::optional<ConversionReportAttributionType> attributionTypes;
    if(attributionTypesQuery.has_value()){
        ConversionReportAttributionType valueQuery_instance;
        if(fromStringValue(attributionTypesQuery.value(), valueQuery_instance)){
            attributionTypes = valueQuery_instance;
        }
    }
    
    try {
        this->campaign_targeting_analytics_get(adAccountId, campaignIds, startDate, endDate, targetingTypes, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, attributionTypes, response);
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
void CampaignsApi::campaigns_analytics_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
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
    auto campaignIdsQuery = request.query().get("campaign_ids");
    std::optional<std::vector<std::string>> campaignIds;
    if(campaignIdsQuery.has_value()){
        std::vector<std::string> valueQuery_instance;
        if(fromStringValue(campaignIdsQuery.value(), valueQuery_instance)){
            campaignIds = valueQuery_instance;
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
        this->campaigns_analytics(adAccountId, startDate, endDate, campaignIds, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, response);
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
void CampaignsApi::campaigns_create_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    
    // Getting the body param
    std::vector<CampaignCreateRequest> campaignCreateRequest;
    
    try {
        nlohmann::json::parse(request.body()).get_to(campaignCreateRequest);
        for (const auto& validationParam : campaignCreateRequest)
             validationParam.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->campaigns_create(adAccountId, campaignCreateRequest, response);
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
void CampaignsApi::campaigns_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    auto campaignId = request.param(":campaignId").as<std::string>();
    
    try {
        this->campaigns_get(adAccountId, campaignId, response);
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
void CampaignsApi::campaigns_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    
    // Getting the query params
    auto campaignIdsQuery = request.query().get("campaign_ids");
    std::optional<std::vector<std::string>> campaignIds;
    if(campaignIdsQuery.has_value()){
        std::vector<std::string> valueQuery_instance;
        if(fromStringValue(campaignIdsQuery.value(), valueQuery_instance)){
            campaignIds = valueQuery_instance;
        }
    }
    auto entityStatusesQuery = request.query().get("entity_statuses");
    std::optional<std::vector<std::string>> entityStatuses;
    if(entityStatusesQuery.has_value()){
        std::vector<std::string> valueQuery_instance;
        if(fromStringValue(entityStatusesQuery.value(), valueQuery_instance)){
            entityStatuses = valueQuery_instance;
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
    auto orderQuery = request.query().get("order");
    std::optional<std::string> order;
    if(orderQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(orderQuery.value(), valueQuery_instance)){
            order = valueQuery_instance;
        }
    }
    auto bookmarkQuery = request.query().get("bookmark");
    std::optional<std::string> bookmark;
    if(bookmarkQuery.has_value()){
        std::string valueQuery_instance;
        if(fromStringValue(bookmarkQuery.value(), valueQuery_instance)){
            bookmark = valueQuery_instance;
        }
    }
    
    try {
        this->campaigns_list(adAccountId, campaignIds, entityStatuses, pageSize, order, bookmark, response);
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
void CampaignsApi::campaigns_update_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    
    // Getting the body param
    std::vector<CampaignUpdateRequest> campaignUpdateRequest;
    
    try {
        nlohmann::json::parse(request.body()).get_to(campaignUpdateRequest);
        for (const auto& validationParam : campaignUpdateRequest)
             validationParam.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->campaigns_update(adAccountId, campaignUpdateRequest, response);
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

void CampaignsApi::campaigns_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

} // namespace org::openapitools::server::api

