/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * AnalyticsMetricsResponse.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AnalyticsMetricsResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AnalyticsMetricsResponse_H_


#include "ModelBase.h"

#include "model/AnalyticsMetricsResponse_daily_metrics.h"
#include <map>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  AnalyticsMetricsResponse
    : public ModelBase
{
public:
    AnalyticsMetricsResponse();
    virtual ~AnalyticsMetricsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AnalyticsMetricsResponse members

    /// <summary>
    /// Array with the requested daily metric records
    /// </summary>
    std::vector<std::shared_ptr<AnalyticsMetricsResponse_daily_metrics>>& getDailyMetrics();
    bool dailyMetricsIsSet() const;
    void unsetDaily_metrics();

    void setDailyMetrics(const std::vector<std::shared_ptr<AnalyticsMetricsResponse_daily_metrics>>& value);

    /// <summary>
    /// The metric name and value over the requested period for each requested metric
    /// </summary>
    std::map<utility::string_t, double>& getSummaryMetrics();
    bool summaryMetricsIsSet() const;
    void unsetSummary_metrics();

    void setSummaryMetrics(std::map<utility::string_t, double> value);


protected:
    std::vector<std::shared_ptr<AnalyticsMetricsResponse_daily_metrics>> m_Daily_metrics;
    bool m_Daily_metricsIsSet;
    std::map<utility::string_t, double> m_Summary_metrics;
    bool m_Summary_metricsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AnalyticsMetricsResponse_H_ */
