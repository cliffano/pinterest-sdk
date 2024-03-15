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

#include "AdGroupsApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

AdGroupsApiImpl::AdGroupsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : AdGroupsApi(rtr)
{
}

void AdGroupsApiImpl::ad_groups_bid_floor_get(const std::string &adAccountId, const BidFloorRequest &bidFloorRequest, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AdGroupsApiImpl::ad_groups_targeting_analytics_get(const std::string &adAccountId, const std::optional<std::vector<std::string>> &adGroupIds, const std::optional<std::string> &startDate, const std::optional<std::string> &endDate, const std::optional<std::vector<org::openapitools::server::model::AdsAnalyticsTargetingType>> &targetingTypes, const std::optional<std::vector<std::string>> &columns, const std::optional<Granularity> &granularity, const std::optional<int32_t> &clickWindowDays, const std::optional<int32_t> &engagementWindowDays, const std::optional<int32_t> &viewWindowDays, const std::optional<std::string> &conversionReportTime, const std::optional<ConversionReportAttributionType> &attributionTypes, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AdGroupsApiImpl::ad_groups_analytics(const std::string &adAccountId, const std::optional<std::string> &startDate, const std::optional<std::string> &endDate, const std::optional<std::vector<std::string>> &adGroupIds, const std::optional<std::vector<std::string>> &columns, const std::optional<Granularity> &granularity, const std::optional<int32_t> &clickWindowDays, const std::optional<int32_t> &engagementWindowDays, const std::optional<int32_t> &viewWindowDays, const std::optional<std::string> &conversionReportTime, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AdGroupsApiImpl::ad_groups_audience_sizing(const std::string &adAccountId, const AdGroupAudienceSizingRequest &adGroupAudienceSizingRequest, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AdGroupsApiImpl::ad_groups_create(const std::string &adAccountId, const std::vector<org::openapitools::server::model::AdGroupCreateRequest> &adGroupCreateRequest, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AdGroupsApiImpl::ad_groups_get(const std::string &adAccountId, const std::string &adGroupId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AdGroupsApiImpl::ad_groups_list(const std::string &adAccountId, const std::optional<std::vector<std::string>> &campaignIds, const std::optional<std::vector<std::string>> &adGroupIds, const std::optional<std::vector<std::string>> &entityStatuses, const std::optional<int32_t> &pageSize, const std::optional<std::string> &order, const std::optional<std::string> &bookmark, const std::optional<bool> &translateInterestsToNames, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AdGroupsApiImpl::ad_groups_update(const std::string &adAccountId, const std::vector<org::openapitools::server::model::AdGroupUpdateRequest> &adGroupUpdateRequest, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

