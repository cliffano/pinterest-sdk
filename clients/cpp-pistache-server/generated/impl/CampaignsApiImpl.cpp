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

#include "CampaignsApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

CampaignsApiImpl::CampaignsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : CampaignsApi(rtr)
{
}

void CampaignsApiImpl::campaign_targeting_analytics_get(const std::string &adAccountId, const std::optional<std::vector<std::string>> &campaignIds, const std::optional<std::string> &startDate, const std::optional<std::string> &endDate, const std::optional<std::vector<org::openapitools::server::model::AdsAnalyticsTargetingType>> &targetingTypes, const std::optional<std::vector<std::string>> &columns, const std::optional<Granularity> &granularity, const std::optional<int32_t> &clickWindowDays, const std::optional<int32_t> &engagementWindowDays, const std::optional<int32_t> &viewWindowDays, const std::optional<std::string> &conversionReportTime, const std::optional<ConversionReportAttributionType> &attributionTypes, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CampaignsApiImpl::campaigns_analytics(const std::string &adAccountId, const std::optional<std::string> &startDate, const std::optional<std::string> &endDate, const std::optional<std::vector<std::string>> &campaignIds, const std::optional<std::vector<std::string>> &columns, const std::optional<Granularity> &granularity, const std::optional<int32_t> &clickWindowDays, const std::optional<int32_t> &engagementWindowDays, const std::optional<int32_t> &viewWindowDays, const std::optional<std::string> &conversionReportTime, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CampaignsApiImpl::campaigns_create(const std::string &adAccountId, const std::vector<org::openapitools::server::model::CampaignCreateRequest> &campaignCreateRequest, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CampaignsApiImpl::campaigns_get(const std::string &adAccountId, const std::string &campaignId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CampaignsApiImpl::campaigns_list(const std::string &adAccountId, const std::optional<std::vector<std::string>> &campaignIds, const std::optional<std::vector<std::string>> &entityStatuses, const std::optional<int32_t> &pageSize, const std::optional<std::string> &order, const std::optional<std::string> &bookmark, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void CampaignsApiImpl::campaigns_update(const std::string &adAccountId, const std::vector<org::openapitools::server::model::CampaignUpdateRequest> &campaignUpdateRequest, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

