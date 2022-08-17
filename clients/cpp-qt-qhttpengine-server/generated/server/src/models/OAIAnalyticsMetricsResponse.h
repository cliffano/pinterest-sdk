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

/*
 * OAIAnalyticsMetricsResponse.h
 *
 * 
 */

#ifndef OAIAnalyticsMetricsResponse_H
#define OAIAnalyticsMetricsResponse_H

#include <QJsonObject>

#include "OAIAnalyticsMetricsResponse_daily_metrics_inner.h"
#include <QList>
#include <QMap>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAnalyticsMetricsResponse : public OAIObject {
public:
    OAIAnalyticsMetricsResponse();
    OAIAnalyticsMetricsResponse(QString json);
    ~OAIAnalyticsMetricsResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIAnalyticsMetricsResponse_daily_metrics_inner> getDailyMetrics() const;
    void setDailyMetrics(const QList<OAIAnalyticsMetricsResponse_daily_metrics_inner> &daily_metrics);
    bool is_daily_metrics_Set() const;
    bool is_daily_metrics_Valid() const;

    QMap<QString, double> getSummaryMetrics() const;
    void setSummaryMetrics(const QMap<QString, double> &summary_metrics);
    bool is_summary_metrics_Set() const;
    bool is_summary_metrics_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIAnalyticsMetricsResponse_daily_metrics_inner> daily_metrics;
    bool m_daily_metrics_isSet;
    bool m_daily_metrics_isValid;

    QMap<QString, double> summary_metrics;
    bool m_summary_metrics_isSet;
    bool m_summary_metrics_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAnalyticsMetricsResponse)

#endif // OAIAnalyticsMetricsResponse_H
