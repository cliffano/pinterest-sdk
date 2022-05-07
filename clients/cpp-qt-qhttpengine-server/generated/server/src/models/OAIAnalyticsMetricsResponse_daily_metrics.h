/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIAnalyticsMetricsResponse_daily_metrics.h
 *
 * 
 */

#ifndef OAIAnalyticsMetricsResponse_daily_metrics_H
#define OAIAnalyticsMetricsResponse_daily_metrics_H

#include <QJsonObject>

#include <QList>
#include <QMap>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAnalyticsMetricsResponse_daily_metrics : public OAIObject {
public:
    OAIAnalyticsMetricsResponse_daily_metrics();
    OAIAnalyticsMetricsResponse_daily_metrics(QString json);
    ~OAIAnalyticsMetricsResponse_daily_metrics() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getDataStatus() const;
    void setDataStatus(const QString &data_status);
    bool is_data_status_Set() const;
    bool is_data_status_Valid() const;

    QString getDate() const;
    void setDate(const QString &date);
    bool is_date_Set() const;
    bool is_date_Valid() const;

    QMap<QString, double> getMetrics() const;
    void setMetrics(const QMap<QString, double> &metrics);
    bool is_metrics_Set() const;
    bool is_metrics_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString data_status;
    bool m_data_status_isSet;
    bool m_data_status_isValid;

    QString date;
    bool m_date_isSet;
    bool m_date_isValid;

    QMap<QString, double> metrics;
    bool m_metrics_isSet;
    bool m_metrics_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAnalyticsMetricsResponse_daily_metrics)

#endif // OAIAnalyticsMetricsResponse_daily_metrics_H
