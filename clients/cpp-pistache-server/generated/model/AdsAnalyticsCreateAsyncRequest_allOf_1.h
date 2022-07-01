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
/*
 * AdsAnalyticsCreateAsyncRequest_allOf_1.h
 *
 * 
 */

#ifndef AdsAnalyticsCreateAsyncRequest_allOf_1_H_
#define AdsAnalyticsCreateAsyncRequest_allOf_1_H_


#include "DataOutputFormat.h"
#include "ReportingColumnAsync.h"
#include "MetricsReportingLevel.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  AdsAnalyticsCreateAsyncRequest_allOf_1
{
public:
    AdsAnalyticsCreateAsyncRequest_allOf_1();
    virtual ~AdsAnalyticsCreateAsyncRequest_allOf_1() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const AdsAnalyticsCreateAsyncRequest_allOf_1& rhs) const;
    bool operator!=(const AdsAnalyticsCreateAsyncRequest_allOf_1& rhs) const;

    /////////////////////////////////////////////
    /// AdsAnalyticsCreateAsyncRequest_allOf_1 members

    /// <summary>
    /// Metric and entity columns
    /// </summary>
    std::vector<ReportingColumnAsync> getColumns() const;
    void setColumns(std::vector<ReportingColumnAsync> const& value);
    /// <summary>
    /// Level of the report
    /// </summary>
    MetricsReportingLevel getLevel() const;
    void setLevel(MetricsReportingLevel const& value);
    /// <summary>
    /// Specification for formatting report data
    /// </summary>
    DataOutputFormat getReportFormat() const;
    void setReportFormat(DataOutputFormat const& value);
    bool reportFormatIsSet() const;
    void unsetReport_format();

    friend void to_json(nlohmann::json& j, const AdsAnalyticsCreateAsyncRequest_allOf_1& o);
    friend void from_json(const nlohmann::json& j, AdsAnalyticsCreateAsyncRequest_allOf_1& o);
protected:
    std::vector<ReportingColumnAsync> m_Columns;

    MetricsReportingLevel m_Level;

    DataOutputFormat m_Report_format;
    bool m_Report_formatIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* AdsAnalyticsCreateAsyncRequest_allOf_1_H_ */
