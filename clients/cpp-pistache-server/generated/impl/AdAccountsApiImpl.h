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
* AdAccountsApiImpl.h
*
* 
*/

#ifndef AD_ACCOUNTS_API_IMPL_H_
#define AD_ACCOUNTS_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <AdAccountsApi.h>


#include "AdAccount.h"
#include "AdAccountAnalyticsResponse_inner.h"
#include "AdAccountCreateRequest.h"
#include "Ad_accounts_list_200_response.h"
#include "AdsAnalyticsCreateAsyncRequest.h"
#include "AdsAnalyticsCreateAsyncResponse.h"
#include "AdsAnalyticsGetAsyncResponse.h"
#include "AdsAnalyticsTargetingType.h"
#include "ConversionReportAttributionType.h"
#include "Error.h"
#include "Granularity.h"
#include "MetricsResponse.h"
#include <string>
#include <vector>

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class  AdAccountsApiImpl : public org::openapitools::server::api::AdAccountsApi {
public:
    explicit AdAccountsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~AdAccountsApiImpl() override = default;

    void ad_account_targeting_analytics_get(const std::string &adAccountId, const std::optional<std::string> &startDate, const std::optional<std::string> &endDate, const std::optional<std::vector<org::openapitools::server::model::AdsAnalyticsTargetingType>> &targetingTypes, const std::optional<std::vector<std::string>> &columns, const std::optional<Granularity> &granularity, const std::optional<int32_t> &clickWindowDays, const std::optional<int32_t> &engagementWindowDays, const std::optional<int32_t> &viewWindowDays, const std::optional<std::string> &conversionReportTime, const std::optional<ConversionReportAttributionType> &attributionTypes, Pistache::Http::ResponseWriter &response);
    void ad_account_analytics(const std::string &adAccountId, const std::optional<std::string> &startDate, const std::optional<std::string> &endDate, const std::optional<std::vector<std::string>> &columns, const std::optional<Granularity> &granularity, const std::optional<int32_t> &clickWindowDays, const std::optional<int32_t> &engagementWindowDays, const std::optional<int32_t> &viewWindowDays, const std::optional<std::string> &conversionReportTime, Pistache::Http::ResponseWriter &response);
    void ad_accounts_create(const AdAccountCreateRequest &adAccountCreateRequest, Pistache::Http::ResponseWriter &response);
    void ad_accounts_get(const std::string &adAccountId, Pistache::Http::ResponseWriter &response);
    void ad_accounts_list(const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, const std::optional<bool> &includeSharedAccounts, Pistache::Http::ResponseWriter &response);
    void analytics_create_report(const std::string &adAccountId, const AdsAnalyticsCreateAsyncRequest &adsAnalyticsCreateAsyncRequest, Pistache::Http::ResponseWriter &response);
    void analytics_get_report(const std::string &adAccountId, const std::optional<std::string> &token, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
