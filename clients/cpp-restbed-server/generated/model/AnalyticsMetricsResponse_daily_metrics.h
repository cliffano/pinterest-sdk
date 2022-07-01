/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * AnalyticsMetricsResponse_daily_metrics.h
 *
 * 
 */

#ifndef AnalyticsMetricsResponse_daily_metrics_H_
#define AnalyticsMetricsResponse_daily_metrics_H_



#include <string>
#include <map>
#include <vector>
#include <memory>
#include <vector>
#include <array>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  AnalyticsMetricsResponse_daily_metrics 
{
public:
    AnalyticsMetricsResponse_daily_metrics() = default;
    explicit AnalyticsMetricsResponse_daily_metrics(boost::property_tree::ptree const& pt);
    virtual ~AnalyticsMetricsResponse_daily_metrics() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// AnalyticsMetricsResponse_daily_metrics members

    /// <summary>
    /// Metrics availablity, e.g., \&quot;READY\&quot;.
    /// </summary>
    std::string getDataStatus() const;
    void setDataStatus(std::string value);

    /// <summary>
    /// Metrics date (UTC): YYYY-MM-DD.
    /// </summary>
    std::string getDate() const;
    void setDate(std::string value);

    /// <summary>
    /// The metric name and daily value for each requested metric
    /// </summary>
    std::map<std::string, double> getMetrics() const;
    void setMetrics(std::map<std::string, double> value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::string m_Data_status = "";
    std::string m_date = "";
    std::map<std::string, double> m_Metrics;
    const std::array<std::string, 23> m_Data_statusEnum = {
          "PROCESSING","READY","ESTIMATE","BEFORE_BUSINESS_CREATED","BEFORE_DATA_RETENTION_PERIOD","BEFORE_PIN_DATA_RETENTION_PERIOD","BEFORE_METRIC_START_DATE","BEFORE_CORE_METRIC_START_DATE","BEFORE_PIN_FORMAT_METRIC_START_DATE","BEFORE_AUDIENCE_METRIC_START_DATE","BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE","BEFORE_VIDEO_METRIC_START_DATE","BEFORE_CONVERSION_METRIC_START_DATE","PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD","IN_BAD_TAG_DATE","BEFORE_PUBLISHED_METRIC_START_DATE","BEFORE_ASSIST_METRIC_START_DATE","BEFORE_PIN_CREATED","BEFORE_ACCOUNT_CLAIMED","BEFORE_DEMOGRAPHIC_FILTERS_START_DATE","AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD","AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD","BEFORE_PRODUCT_GROUP_FILTER_START_DATE"
    };

};

std::vector<AnalyticsMetricsResponse_daily_metrics> createAnalyticsMetricsResponse_daily_metricsVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* AnalyticsMetricsResponse_daily_metrics_H_ */
