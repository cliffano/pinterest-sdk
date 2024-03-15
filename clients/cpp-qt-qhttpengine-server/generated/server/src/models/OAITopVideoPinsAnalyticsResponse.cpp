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

#include "OAITopVideoPinsAnalyticsResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITopVideoPinsAnalyticsResponse::OAITopVideoPinsAnalyticsResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITopVideoPinsAnalyticsResponse::OAITopVideoPinsAnalyticsResponse() {
    this->initializeModel();
}

OAITopVideoPinsAnalyticsResponse::~OAITopVideoPinsAnalyticsResponse() {}

void OAITopVideoPinsAnalyticsResponse::initializeModel() {

    m_date_availability_isSet = false;
    m_date_availability_isValid = false;

    m_pins_isSet = false;
    m_pins_isValid = false;

    m_sort_by_isSet = false;
    m_sort_by_isValid = false;
}

void OAITopVideoPinsAnalyticsResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITopVideoPinsAnalyticsResponse::fromJsonObject(QJsonObject json) {

    m_date_availability_isValid = ::OpenAPI::fromJsonValue(date_availability, json[QString("date_availability")]);
    m_date_availability_isSet = !json[QString("date_availability")].isNull() && m_date_availability_isValid;

    m_pins_isValid = ::OpenAPI::fromJsonValue(pins, json[QString("pins")]);
    m_pins_isSet = !json[QString("pins")].isNull() && m_pins_isValid;

    m_sort_by_isValid = ::OpenAPI::fromJsonValue(sort_by, json[QString("sort_by")]);
    m_sort_by_isSet = !json[QString("sort_by")].isNull() && m_sort_by_isValid;
}

QString OAITopVideoPinsAnalyticsResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITopVideoPinsAnalyticsResponse::asJsonObject() const {
    QJsonObject obj;
    if (date_availability.isSet()) {
        obj.insert(QString("date_availability"), ::OpenAPI::toJsonValue(date_availability));
    }
    if (pins.size() > 0) {
        obj.insert(QString("pins"), ::OpenAPI::toJsonValue(pins));
    }
    if (m_sort_by_isSet) {
        obj.insert(QString("sort_by"), ::OpenAPI::toJsonValue(sort_by));
    }
    return obj;
}

OAITopPinsAnalyticsResponse_date_availability OAITopVideoPinsAnalyticsResponse::getDateAvailability() const {
    return date_availability;
}
void OAITopVideoPinsAnalyticsResponse::setDateAvailability(const OAITopPinsAnalyticsResponse_date_availability &date_availability) {
    this->date_availability = date_availability;
    this->m_date_availability_isSet = true;
}

bool OAITopVideoPinsAnalyticsResponse::is_date_availability_Set() const{
    return m_date_availability_isSet;
}

bool OAITopVideoPinsAnalyticsResponse::is_date_availability_Valid() const{
    return m_date_availability_isValid;
}

QList<OAITopVideoPinsAnalyticsResponse_pins_inner> OAITopVideoPinsAnalyticsResponse::getPins() const {
    return pins;
}
void OAITopVideoPinsAnalyticsResponse::setPins(const QList<OAITopVideoPinsAnalyticsResponse_pins_inner> &pins) {
    this->pins = pins;
    this->m_pins_isSet = true;
}

bool OAITopVideoPinsAnalyticsResponse::is_pins_Set() const{
    return m_pins_isSet;
}

bool OAITopVideoPinsAnalyticsResponse::is_pins_Valid() const{
    return m_pins_isValid;
}

QString OAITopVideoPinsAnalyticsResponse::getSortBy() const {
    return sort_by;
}
void OAITopVideoPinsAnalyticsResponse::setSortBy(const QString &sort_by) {
    this->sort_by = sort_by;
    this->m_sort_by_isSet = true;
}

bool OAITopVideoPinsAnalyticsResponse::is_sort_by_Set() const{
    return m_sort_by_isSet;
}

bool OAITopVideoPinsAnalyticsResponse::is_sort_by_Valid() const{
    return m_sort_by_isValid;
}

bool OAITopVideoPinsAnalyticsResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (date_availability.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (pins.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_sort_by_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITopVideoPinsAnalyticsResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
