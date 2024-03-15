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

#include "OAIFeeds_update_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFeeds_update_request::OAIFeeds_update_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFeeds_update_request::OAIFeeds_update_request() {
    this->initializeModel();
}

OAIFeeds_update_request::~OAIFeeds_update_request() {}

void OAIFeeds_update_request::initializeModel() {

    m_default_currency_isSet = false;
    m_default_currency_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_format_isSet = false;
    m_format_isValid = false;

    m_credentials_isSet = false;
    m_credentials_isValid = false;

    m_location_isSet = false;
    m_location_isValid = false;

    m_preferred_processing_schedule_isSet = false;
    m_preferred_processing_schedule_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_catalog_type_isSet = false;
    m_catalog_type_isValid = false;

    m_default_availability_isSet = false;
    m_default_availability_isValid = false;
}

void OAIFeeds_update_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFeeds_update_request::fromJsonObject(QJsonObject json) {

    m_default_currency_isValid = ::OpenAPI::fromJsonValue(m_default_currency, json[QString("default_currency")]);
    m_default_currency_isSet = !json[QString("default_currency")].isNull() && m_default_currency_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_format_isValid = ::OpenAPI::fromJsonValue(m_format, json[QString("format")]);
    m_format_isSet = !json[QString("format")].isNull() && m_format_isValid;

    m_credentials_isValid = ::OpenAPI::fromJsonValue(m_credentials, json[QString("credentials")]);
    m_credentials_isSet = !json[QString("credentials")].isNull() && m_credentials_isValid;

    m_location_isValid = ::OpenAPI::fromJsonValue(m_location, json[QString("location")]);
    m_location_isSet = !json[QString("location")].isNull() && m_location_isValid;

    m_preferred_processing_schedule_isValid = ::OpenAPI::fromJsonValue(m_preferred_processing_schedule, json[QString("preferred_processing_schedule")]);
    m_preferred_processing_schedule_isSet = !json[QString("preferred_processing_schedule")].isNull() && m_preferred_processing_schedule_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_catalog_type_isValid = ::OpenAPI::fromJsonValue(m_catalog_type, json[QString("catalog_type")]);
    m_catalog_type_isSet = !json[QString("catalog_type")].isNull() && m_catalog_type_isValid;

    m_default_availability_isValid = ::OpenAPI::fromJsonValue(m_default_availability, json[QString("default_availability")]);
    m_default_availability_isSet = !json[QString("default_availability")].isNull() && m_default_availability_isValid;
}

QString OAIFeeds_update_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFeeds_update_request::asJsonObject() const {
    QJsonObject obj;
    if (m_default_currency.isSet()) {
        obj.insert(QString("default_currency"), ::OpenAPI::toJsonValue(m_default_currency));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_format.isSet()) {
        obj.insert(QString("format"), ::OpenAPI::toJsonValue(m_format));
    }
    if (m_credentials.isSet()) {
        obj.insert(QString("credentials"), ::OpenAPI::toJsonValue(m_credentials));
    }
    if (m_location_isSet) {
        obj.insert(QString("location"), ::OpenAPI::toJsonValue(m_location));
    }
    if (m_preferred_processing_schedule.isSet()) {
        obj.insert(QString("preferred_processing_schedule"), ::OpenAPI::toJsonValue(m_preferred_processing_schedule));
    }
    if (m_status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(m_status));
    }
    if (m_catalog_type.isSet()) {
        obj.insert(QString("catalog_type"), ::OpenAPI::toJsonValue(m_catalog_type));
    }
    if (m_default_availability.isSet()) {
        obj.insert(QString("default_availability"), ::OpenAPI::toJsonValue(m_default_availability));
    }
    return obj;
}

OAINullableCurrency OAIFeeds_update_request::getDefaultCurrency() const {
    return m_default_currency;
}
void OAIFeeds_update_request::setDefaultCurrency(const OAINullableCurrency &default_currency) {
    m_default_currency = default_currency;
    m_default_currency_isSet = true;
}

bool OAIFeeds_update_request::is_default_currency_Set() const{
    return m_default_currency_isSet;
}

bool OAIFeeds_update_request::is_default_currency_Valid() const{
    return m_default_currency_isValid;
}

QString OAIFeeds_update_request::getName() const {
    return m_name;
}
void OAIFeeds_update_request::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIFeeds_update_request::is_name_Set() const{
    return m_name_isSet;
}

bool OAIFeeds_update_request::is_name_Valid() const{
    return m_name_isValid;
}

OAICatalogsFormat OAIFeeds_update_request::getFormat() const {
    return m_format;
}
void OAIFeeds_update_request::setFormat(const OAICatalogsFormat &format) {
    m_format = format;
    m_format_isSet = true;
}

bool OAIFeeds_update_request::is_format_Set() const{
    return m_format_isSet;
}

bool OAIFeeds_update_request::is_format_Valid() const{
    return m_format_isValid;
}

OAICatalogsFeedCredentials OAIFeeds_update_request::getCredentials() const {
    return m_credentials;
}
void OAIFeeds_update_request::setCredentials(const OAICatalogsFeedCredentials &credentials) {
    m_credentials = credentials;
    m_credentials_isSet = true;
}

bool OAIFeeds_update_request::is_credentials_Set() const{
    return m_credentials_isSet;
}

bool OAIFeeds_update_request::is_credentials_Valid() const{
    return m_credentials_isValid;
}

QString OAIFeeds_update_request::getLocation() const {
    return m_location;
}
void OAIFeeds_update_request::setLocation(const QString &location) {
    m_location = location;
    m_location_isSet = true;
}

bool OAIFeeds_update_request::is_location_Set() const{
    return m_location_isSet;
}

bool OAIFeeds_update_request::is_location_Valid() const{
    return m_location_isValid;
}

OAICatalogsFeedProcessingSchedule OAIFeeds_update_request::getPreferredProcessingSchedule() const {
    return m_preferred_processing_schedule;
}
void OAIFeeds_update_request::setPreferredProcessingSchedule(const OAICatalogsFeedProcessingSchedule &preferred_processing_schedule) {
    m_preferred_processing_schedule = preferred_processing_schedule;
    m_preferred_processing_schedule_isSet = true;
}

bool OAIFeeds_update_request::is_preferred_processing_schedule_Set() const{
    return m_preferred_processing_schedule_isSet;
}

bool OAIFeeds_update_request::is_preferred_processing_schedule_Valid() const{
    return m_preferred_processing_schedule_isValid;
}

OAICatalogsStatus OAIFeeds_update_request::getStatus() const {
    return m_status;
}
void OAIFeeds_update_request::setStatus(const OAICatalogsStatus &status) {
    m_status = status;
    m_status_isSet = true;
}

bool OAIFeeds_update_request::is_status_Set() const{
    return m_status_isSet;
}

bool OAIFeeds_update_request::is_status_Valid() const{
    return m_status_isValid;
}

OAICatalogsType OAIFeeds_update_request::getCatalogType() const {
    return m_catalog_type;
}
void OAIFeeds_update_request::setCatalogType(const OAICatalogsType &catalog_type) {
    m_catalog_type = catalog_type;
    m_catalog_type_isSet = true;
}

bool OAIFeeds_update_request::is_catalog_type_Set() const{
    return m_catalog_type_isSet;
}

bool OAIFeeds_update_request::is_catalog_type_Valid() const{
    return m_catalog_type_isValid;
}

OAIProductAvailabilityType OAIFeeds_update_request::getDefaultAvailability() const {
    return m_default_availability;
}
void OAIFeeds_update_request::setDefaultAvailability(const OAIProductAvailabilityType &default_availability) {
    m_default_availability = default_availability;
    m_default_availability_isSet = true;
}

bool OAIFeeds_update_request::is_default_availability_Set() const{
    return m_default_availability_isSet;
}

bool OAIFeeds_update_request::is_default_availability_Valid() const{
    return m_default_availability_isValid;
}

bool OAIFeeds_update_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_default_currency.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_format.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_credentials.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_location_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_preferred_processing_schedule.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_status.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_catalog_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_availability.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFeeds_update_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_catalog_type_isValid && true;
}

} // namespace OpenAPI