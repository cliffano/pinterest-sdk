/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAITopPinsAnalyticsResponse_date_availability.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITopPinsAnalyticsResponse_date_availability::OAITopPinsAnalyticsResponse_date_availability(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITopPinsAnalyticsResponse_date_availability::OAITopPinsAnalyticsResponse_date_availability() {
    this->initializeModel();
}

OAITopPinsAnalyticsResponse_date_availability::~OAITopPinsAnalyticsResponse_date_availability() {}

void OAITopPinsAnalyticsResponse_date_availability::initializeModel() {

    m_latest_available_timestamp_isSet = false;
    m_latest_available_timestamp_isValid = false;

    m_is_realtime_isSet = false;
    m_is_realtime_isValid = false;
}

void OAITopPinsAnalyticsResponse_date_availability::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITopPinsAnalyticsResponse_date_availability::fromJsonObject(QJsonObject json) {

    m_latest_available_timestamp_isValid = ::OpenAPI::fromJsonValue(m_latest_available_timestamp, json[QString("latest_available_timestamp")]);
    m_latest_available_timestamp_isSet = !json[QString("latest_available_timestamp")].isNull() && m_latest_available_timestamp_isValid;

    m_is_realtime_isValid = ::OpenAPI::fromJsonValue(m_is_realtime, json[QString("is_realtime")]);
    m_is_realtime_isSet = !json[QString("is_realtime")].isNull() && m_is_realtime_isValid;
}

QString OAITopPinsAnalyticsResponse_date_availability::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITopPinsAnalyticsResponse_date_availability::asJsonObject() const {
    QJsonObject obj;
    if (m_latest_available_timestamp_isSet) {
        obj.insert(QString("latest_available_timestamp"), ::OpenAPI::toJsonValue(m_latest_available_timestamp));
    }
    if (m_is_realtime_isSet) {
        obj.insert(QString("is_realtime"), ::OpenAPI::toJsonValue(m_is_realtime));
    }
    return obj;
}

double OAITopPinsAnalyticsResponse_date_availability::getLatestAvailableTimestamp() const {
    return m_latest_available_timestamp;
}
void OAITopPinsAnalyticsResponse_date_availability::setLatestAvailableTimestamp(const double &latest_available_timestamp) {
    m_latest_available_timestamp = latest_available_timestamp;
    m_latest_available_timestamp_isSet = true;
}

bool OAITopPinsAnalyticsResponse_date_availability::is_latest_available_timestamp_Set() const{
    return m_latest_available_timestamp_isSet;
}

bool OAITopPinsAnalyticsResponse_date_availability::is_latest_available_timestamp_Valid() const{
    return m_latest_available_timestamp_isValid;
}

bool OAITopPinsAnalyticsResponse_date_availability::isIsRealtime() const {
    return m_is_realtime;
}
void OAITopPinsAnalyticsResponse_date_availability::setIsRealtime(const bool &is_realtime) {
    m_is_realtime = is_realtime;
    m_is_realtime_isSet = true;
}

bool OAITopPinsAnalyticsResponse_date_availability::is_is_realtime_Set() const{
    return m_is_realtime_isSet;
}

bool OAITopPinsAnalyticsResponse_date_availability::is_is_realtime_Valid() const{
    return m_is_realtime_isValid;
}

bool OAITopPinsAnalyticsResponse_date_availability::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_latest_available_timestamp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_realtime_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITopPinsAnalyticsResponse_date_availability::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
