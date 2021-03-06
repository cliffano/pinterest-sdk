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
 * OAIAdsAnalyticsCreateAsyncRequest_allOf_1.h
 *
 * 
 */

#ifndef OAIAdsAnalyticsCreateAsyncRequest_allOf_1_H
#define OAIAdsAnalyticsCreateAsyncRequest_allOf_1_H

#include <QJsonObject>

#include "OAIDataOutputFormat.h"
#include "OAIMetricsReportingLevel.h"
#include "OAIReportingColumnAsync.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdsAnalyticsCreateAsyncRequest_allOf_1 : public OAIObject {
public:
    OAIAdsAnalyticsCreateAsyncRequest_allOf_1();
    OAIAdsAnalyticsCreateAsyncRequest_allOf_1(QString json);
    ~OAIAdsAnalyticsCreateAsyncRequest_allOf_1() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIReportingColumnAsync> getColumns() const;
    void setColumns(const QList<OAIReportingColumnAsync> &columns);
    bool is_columns_Set() const;
    bool is_columns_Valid() const;

    OAIMetricsReportingLevel getLevel() const;
    void setLevel(const OAIMetricsReportingLevel &level);
    bool is_level_Set() const;
    bool is_level_Valid() const;

    OAIDataOutputFormat getReportFormat() const;
    void setReportFormat(const OAIDataOutputFormat &report_format);
    bool is_report_format_Set() const;
    bool is_report_format_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIReportingColumnAsync> columns;
    bool m_columns_isSet;
    bool m_columns_isValid;

    OAIMetricsReportingLevel level;
    bool m_level_isSet;
    bool m_level_isValid;

    OAIDataOutputFormat report_format;
    bool m_report_format_isSet;
    bool m_report_format_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdsAnalyticsCreateAsyncRequest_allOf_1)

#endif // OAIAdsAnalyticsCreateAsyncRequest_allOf_1_H
