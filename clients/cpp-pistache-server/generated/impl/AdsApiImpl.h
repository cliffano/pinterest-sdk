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
* AdsApiImpl.h
*
* 
*/

#ifndef ADS_API_IMPL_H_
#define ADS_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <AdsApi.h>


#include "AdArrayResponse.h"
#include "AdCreateRequest.h"
#include "AdPreviewRequest.h"
#include "AdPreviewURLResponse.h"
#include "AdResponse.h"
#include "AdUpdateRequest.h"
#include "AdsAnalyticsResponse_inner.h"
#include "AdsAnalyticsTargetingType.h"
#include "Ads_list_200_response.h"
#include "ConversionReportAttributionType.h"
#include "Error.h"
#include "Granularity.h"
#include "MetricsResponse.h"
#include <string>
#include <vector>

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class  AdsApiImpl : public org::openapitools::server::api::AdsApi {
public:
    explicit AdsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~AdsApiImpl() override = default;

    void ad_previews_create(const std::string &adAccountId, const AdPreviewRequest &adPreviewRequest, Pistache::Http::ResponseWriter &response);
    void ad_targeting_analytics_get(const std::string &adAccountId, const std::optional<std::vector<std::string>> &adIds, const std::optional<std::string> &startDate, const std::optional<std::string> &endDate, const std::optional<std::vector<org::openapitools::server::model::AdsAnalyticsTargetingType>> &targetingTypes, const std::optional<std::vector<std::string>> &columns, const std::optional<Granularity> &granularity, const std::optional<int32_t> &clickWindowDays, const std::optional<int32_t> &engagementWindowDays, const std::optional<int32_t> &viewWindowDays, const std::optional<std::string> &conversionReportTime, const std::optional<ConversionReportAttributionType> &attributionTypes, Pistache::Http::ResponseWriter &response);
    void ads_analytics(const std::string &adAccountId, const std::optional<std::string> &startDate, const std::optional<std::string> &endDate, const std::optional<std::vector<std::string>> &adIds, const std::optional<std::vector<std::string>> &columns, const std::optional<Granularity> &granularity, const std::optional<int32_t> &clickWindowDays, const std::optional<int32_t> &engagementWindowDays, const std::optional<int32_t> &viewWindowDays, const std::optional<std::string> &conversionReportTime, Pistache::Http::ResponseWriter &response);
    void ads_create(const std::string &adAccountId, const std::vector<org::openapitools::server::model::AdCreateRequest> &adCreateRequest, Pistache::Http::ResponseWriter &response);
    void ads_get(const std::string &adAccountId, const std::string &adId, Pistache::Http::ResponseWriter &response);
    void ads_list(const std::string &adAccountId, const std::optional<std::vector<std::string>> &campaignIds, const std::optional<std::vector<std::string>> &adGroupIds, const std::optional<std::vector<std::string>> &adIds, const std::optional<std::vector<std::string>> &entityStatuses, const std::optional<int32_t> &pageSize, const std::optional<std::string> &order, const std::optional<std::string> &bookmark, Pistache::Http::ResponseWriter &response);
    void ads_update(const std::string &adAccountId, const std::vector<org::openapitools::server::model::AdUpdateRequest> &adUpdateRequest, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
