/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "AdGroupsApi.h"
#include "Helpers.h"

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

const std::string AdGroupsApi::base = "/v5";

AdGroupsApi::AdGroupsApi(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr)
{
}

void AdGroupsApi::init() {
    setupRoutes();
}

void AdGroupsApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Post(*router, base + "/ad_accounts/:ad_account_id/bid_floor", Routes::bind(&AdGroupsApi::ad_groups_bid_floor_get_handler, this));
    Routes::Post(*router, base + "/ad_accounts/:ad_account_id/ad_groups", Routes::bind(&AdGroupsApi::ad_groups_create_handler, this));
    Routes::Get(*router, base + "/ad_accounts/:ad_account_id/ad_groups/:ad_group_id", Routes::bind(&AdGroupsApi::ad_groups_get_handler, this));
    Routes::Get(*router, base + "/ad_accounts/:ad_account_id/ad_groups", Routes::bind(&AdGroupsApi::ad_groups_list_handler, this));
    Routes::Patch(*router, base + "/ad_accounts/:ad_account_id/ad_groups", Routes::bind(&AdGroupsApi::ad_groups_update_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&AdGroupsApi::ad_groups_api_default_handler, this));
}

std::pair<Pistache::Http::Code, std::string> AdGroupsApi::handleParsingException(const std::exception& ex) const noexcept
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

std::pair<Pistache::Http::Code, std::string> AdGroupsApi::handleOperationException(const std::exception& ex) const noexcept
{
    return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void AdGroupsApi::ad_groups_bid_floor_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    
    // Getting the body param
    
    BidFloorRequest bidFloorRequest;
    
    try {
        nlohmann::json::parse(request.body()).get_to(bidFloorRequest);
        bidFloorRequest.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->ad_groups_bid_floor_get(adAccountId, bidFloorRequest, response);
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
void AdGroupsApi::ad_groups_create_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    
    // Getting the body param
    std::vector<AdGroupCreateRequest> adGroupCreateRequest;
    
    try {
        nlohmann::json::parse(request.body()).get_to(adGroupCreateRequest);
        for (const auto& validationParam : adGroupCreateRequest)
             validationParam.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->ad_groups_create(adAccountId, adGroupCreateRequest, response);
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
void AdGroupsApi::ad_groups_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    auto adGroupId = request.param(":adGroupId").as<std::string>();
    
    try {
        this->ad_groups_get(adAccountId, adGroupId, response);
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
void AdGroupsApi::ad_groups_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
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
    auto adGroupIdsQuery = request.query().get("ad_group_ids");
    std::optional<std::vector<std::string>> adGroupIds;
    if(adGroupIdsQuery.has_value()){
        std::vector<std::string> valueQuery_instance;
        if(fromStringValue(adGroupIdsQuery.value(), valueQuery_instance)){
            adGroupIds = valueQuery_instance;
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
    auto translateInterestsToNamesQuery = request.query().get("translate_interests_to_names");
    std::optional<bool> translateInterestsToNames;
    if(translateInterestsToNamesQuery.has_value()){
        bool valueQuery_instance;
        if(fromStringValue(translateInterestsToNamesQuery.value(), valueQuery_instance)){
            translateInterestsToNames = valueQuery_instance;
        }
    }
    
    try {
        this->ad_groups_list(adAccountId, campaignIds, adGroupIds, entityStatuses, pageSize, order, bookmark, translateInterestsToNames, response);
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
void AdGroupsApi::ad_groups_update_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    try {

    // Getting the path params
    auto adAccountId = request.param(":adAccountId").as<std::string>();
    
    // Getting the body param
    std::vector<AdGroupUpdateRequest> adGroupUpdateRequest;
    
    try {
        nlohmann::json::parse(request.body()).get_to(adGroupUpdateRequest);
        for (const auto& validationParam : adGroupUpdateRequest)
             validationParam.validate();
    } catch (std::exception &e) {
        const std::pair<Pistache::Http::Code, std::string> errorInfo = this->handleParsingException(e);
        response.send(errorInfo.first, errorInfo.second);
        return;
    }

    try {
        this->ad_groups_update(adAccountId, adGroupUpdateRequest, response);
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

void AdGroupsApi::ad_groups_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

} // namespace org::openapitools::server::api
