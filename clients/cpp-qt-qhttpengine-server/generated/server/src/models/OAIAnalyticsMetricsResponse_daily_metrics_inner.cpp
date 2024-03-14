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

#include "OAIAnalyticsMetricsResponse_daily_metrics_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAnalyticsMetricsResponse_daily_metrics_inner::OAIAnalyticsMetricsResponse_daily_metrics_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAnalyticsMetricsResponse_daily_metrics_inner::OAIAnalyticsMetricsResponse_daily_metrics_inner() {
    this->initializeModel();
}

OAIAnalyticsMetricsResponse_daily_metrics_inner::~OAIAnalyticsMetricsResponse_daily_metrics_inner() {}

void OAIAnalyticsMetricsResponse_daily_metrics_inner::initializeModel() {

    m_data_status_isSet = false;
    m_data_status_isValid = false;

    m_date_isSet = false;
    m_date_isValid = false;

    m_metrics_isSet = false;
    m_metrics_isValid = false;
}

void OAIAnalyticsMetricsResponse_daily_metrics_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAnalyticsMetricsResponse_daily_metrics_inner::fromJsonObject(QJsonObject json) {

    m_data_status_isValid = ::OpenAPI::fromJsonValue(data_status, json[QString("data_status")]);
    m_data_status_isSet = !json[QString("data_status")].isNull() && m_data_status_isValid;

    m_date_isValid = ::OpenAPI::fromJsonValue(date, json[QString("date")]);
    m_date_isSet = !json[QString("date")].isNull() && m_date_isValid;

    m_metrics_isValid = ::OpenAPI::fromJsonValue(metrics, json[QString("metrics")]);
    m_metrics_isSet = !json[QString("metrics")].isNull() && m_metrics_isValid;
}

QString OAIAnalyticsMetricsResponse_daily_metrics_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAnalyticsMetricsResponse_daily_metrics_inner::asJsonObject() const {
    QJsonObject obj;
    if (data_status.isSet()) {
        obj.insert(QString("data_status"), ::OpenAPI::toJsonValue(data_status));
    }
    if (m_date_isSet) {
        obj.insert(QString("date"), ::OpenAPI::toJsonValue(date));
    }
    if (metrics.size() > 0) {
        obj.insert(QString("metrics"), ::OpenAPI::toJsonValue(metrics));
    }
    return obj;
}

OAIDataStatus OAIAnalyticsMetricsResponse_daily_metrics_inner::getDataStatus() const {
    return data_status;
}
void OAIAnalyticsMetricsResponse_daily_metrics_inner::setDataStatus(const OAIDataStatus &data_status) {
    this->data_status = data_status;
    this->m_data_status_isSet = true;
}

bool OAIAnalyticsMetricsResponse_daily_metrics_inner::is_data_status_Set() const{
    return m_data_status_isSet;
}

bool OAIAnalyticsMetricsResponse_daily_metrics_inner::is_data_status_Valid() const{
    return m_data_status_isValid;
}

QString OAIAnalyticsMetricsResponse_daily_metrics_inner::getDate() const {
    return date;
}
void OAIAnalyticsMetricsResponse_daily_metrics_inner::setDate(const QString &date) {
    this->date = date;
    this->m_date_isSet = true;
}

bool OAIAnalyticsMetricsResponse_daily_metrics_inner::is_date_Set() const{
    return m_date_isSet;
}

bool OAIAnalyticsMetricsResponse_daily_metrics_inner::is_date_Valid() const{
    return m_date_isValid;
}

QMap<QString, double> OAIAnalyticsMetricsResponse_daily_metrics_inner::getMetrics() const {
    return metrics;
}
void OAIAnalyticsMetricsResponse_daily_metrics_inner::setMetrics(const QMap<QString, double> &metrics) {
    this->metrics = metrics;
    this->m_metrics_isSet = true;
}

bool OAIAnalyticsMetricsResponse_daily_metrics_inner::is_metrics_Set() const{
    return m_metrics_isSet;
}

bool OAIAnalyticsMetricsResponse_daily_metrics_inner::is_metrics_Valid() const{
    return m_metrics_isValid;
}

bool OAIAnalyticsMetricsResponse_daily_metrics_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (data_status.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (metrics.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAnalyticsMetricsResponse_daily_metrics_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
