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
 * AdsAnalyticsCreateAsyncRequest_allOf_1.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AdsAnalyticsCreateAsyncRequest_allOf_1_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AdsAnalyticsCreateAsyncRequest_allOf_1_H_


#include "ModelBase.h"

#include "model/ReportingColumnAsync.h"
#include <vector>
#include "model/DataOutputFormat.h"
#include "model/MetricsReportingLevel.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  AdsAnalyticsCreateAsyncRequest_allOf_1
    : public ModelBase
{
public:
    AdsAnalyticsCreateAsyncRequest_allOf_1();
    virtual ~AdsAnalyticsCreateAsyncRequest_allOf_1();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AdsAnalyticsCreateAsyncRequest_allOf_1 members

    /// <summary>
    /// Metric and entity columns
    /// </summary>
    std::vector<std::shared_ptr<ReportingColumnAsync>>& getColumns();
    bool columnsIsSet() const;
    void unsetColumns();

    void setColumns(const std::vector<std::shared_ptr<ReportingColumnAsync>>& value);

    /// <summary>
    /// Level of the report
    /// </summary>
    MetricsReportingLevel getLevel() const;
    bool levelIsSet() const;
    void unsetLevel();

    void setLevel(const MetricsReportingLevel& value);

    /// <summary>
    /// Specification for formatting report data
    /// </summary>
    DataOutputFormat getReportFormat() const;
    bool reportFormatIsSet() const;
    void unsetReport_format();

    void setReportFormat(const DataOutputFormat& value);


protected:
    std::vector<std::shared_ptr<ReportingColumnAsync>> m_Columns;
    bool m_ColumnsIsSet;
    MetricsReportingLevel m_Level;
    bool m_LevelIsSet;
    DataOutputFormat m_Report_format;
    bool m_Report_formatIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AdsAnalyticsCreateAsyncRequest_allOf_1_H_ */
