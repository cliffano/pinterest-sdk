/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAITopPinsAnalyticsResponse_pins_inner.h
 *
 * Array with metrics, status, and pin id for the requested metric
 */

#ifndef OAITopPinsAnalyticsResponse_pins_inner_H
#define OAITopPinsAnalyticsResponse_pins_inner_H

#include <QJsonObject>

#include "OAIDataStatus.h"
#include <QMap>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAITopPinsAnalyticsResponse_pins_inner : public OAIObject {
public:
    OAITopPinsAnalyticsResponse_pins_inner();
    OAITopPinsAnalyticsResponse_pins_inner(QString json);
    ~OAITopPinsAnalyticsResponse_pins_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QMap<QString, double> getMetrics() const;
    void setMetrics(const QMap<QString, double> &metrics);
    bool is_metrics_Set() const;
    bool is_metrics_Valid() const;

    QMap<QString, OAIDataStatus> getDataStatus() const;
    void setDataStatus(const QMap<QString, OAIDataStatus> &data_status);
    bool is_data_status_Set() const;
    bool is_data_status_Valid() const;

    QString getPinId() const;
    void setPinId(const QString &pin_id);
    bool is_pin_id_Set() const;
    bool is_pin_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QMap<QString, double> metrics;
    bool m_metrics_isSet;
    bool m_metrics_isValid;

    QMap<QString, OAIDataStatus> data_status;
    bool m_data_status_isSet;
    bool m_data_status_isValid;

    QString pin_id;
    bool m_pin_id_isSet;
    bool m_pin_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITopPinsAnalyticsResponse_pins_inner)

#endif // OAITopPinsAnalyticsResponse_pins_inner_H
