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

#include "OAICatalogsRetailFeedsUpdateRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsRetailFeedsUpdateRequest::OAICatalogsRetailFeedsUpdateRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsRetailFeedsUpdateRequest::OAICatalogsRetailFeedsUpdateRequest() {
    this->initializeModel();
}

OAICatalogsRetailFeedsUpdateRequest::~OAICatalogsRetailFeedsUpdateRequest() {}

void OAICatalogsRetailFeedsUpdateRequest::initializeModel() {

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

void OAICatalogsRetailFeedsUpdateRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsRetailFeedsUpdateRequest::fromJsonObject(QJsonObject json) {

    m_default_currency_isValid = ::OpenAPI::fromJsonValue(default_currency, json[QString("default_currency")]);
    m_default_currency_isSet = !json[QString("default_currency")].isNull() && m_default_currency_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_format_isValid = ::OpenAPI::fromJsonValue(format, json[QString("format")]);
    m_format_isSet = !json[QString("format")].isNull() && m_format_isValid;

    m_credentials_isValid = ::OpenAPI::fromJsonValue(credentials, json[QString("credentials")]);
    m_credentials_isSet = !json[QString("credentials")].isNull() && m_credentials_isValid;

    m_location_isValid = ::OpenAPI::fromJsonValue(location, json[QString("location")]);
    m_location_isSet = !json[QString("location")].isNull() && m_location_isValid;

    m_preferred_processing_schedule_isValid = ::OpenAPI::fromJsonValue(preferred_processing_schedule, json[QString("preferred_processing_schedule")]);
    m_preferred_processing_schedule_isSet = !json[QString("preferred_processing_schedule")].isNull() && m_preferred_processing_schedule_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_catalog_type_isValid = ::OpenAPI::fromJsonValue(catalog_type, json[QString("catalog_type")]);
    m_catalog_type_isSet = !json[QString("catalog_type")].isNull() && m_catalog_type_isValid;

    m_default_availability_isValid = ::OpenAPI::fromJsonValue(default_availability, json[QString("default_availability")]);
    m_default_availability_isSet = !json[QString("default_availability")].isNull() && m_default_availability_isValid;
}

QString OAICatalogsRetailFeedsUpdateRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsRetailFeedsUpdateRequest::asJsonObject() const {
    QJsonObject obj;
    if (default_currency.isSet()) {
        obj.insert(QString("default_currency"), ::OpenAPI::toJsonValue(default_currency));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (format.isSet()) {
        obj.insert(QString("format"), ::OpenAPI::toJsonValue(format));
    }
    if (credentials.isSet()) {
        obj.insert(QString("credentials"), ::OpenAPI::toJsonValue(credentials));
    }
    if (m_location_isSet) {
        obj.insert(QString("location"), ::OpenAPI::toJsonValue(location));
    }
    if (preferred_processing_schedule.isSet()) {
        obj.insert(QString("preferred_processing_schedule"), ::OpenAPI::toJsonValue(preferred_processing_schedule));
    }
    if (status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (catalog_type.isSet()) {
        obj.insert(QString("catalog_type"), ::OpenAPI::toJsonValue(catalog_type));
    }
    if (default_availability.isSet()) {
        obj.insert(QString("default_availability"), ::OpenAPI::toJsonValue(default_availability));
    }
    return obj;
}

OAINullableCurrency OAICatalogsRetailFeedsUpdateRequest::getDefaultCurrency() const {
    return default_currency;
}
void OAICatalogsRetailFeedsUpdateRequest::setDefaultCurrency(const OAINullableCurrency &default_currency) {
    this->default_currency = default_currency;
    this->m_default_currency_isSet = true;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_default_currency_Set() const{
    return m_default_currency_isSet;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_default_currency_Valid() const{
    return m_default_currency_isValid;
}

QString OAICatalogsRetailFeedsUpdateRequest::getName() const {
    return name;
}
void OAICatalogsRetailFeedsUpdateRequest::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_name_Set() const{
    return m_name_isSet;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_name_Valid() const{
    return m_name_isValid;
}

OAICatalogsFormat OAICatalogsRetailFeedsUpdateRequest::getFormat() const {
    return format;
}
void OAICatalogsRetailFeedsUpdateRequest::setFormat(const OAICatalogsFormat &format) {
    this->format = format;
    this->m_format_isSet = true;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_format_Set() const{
    return m_format_isSet;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_format_Valid() const{
    return m_format_isValid;
}

OAICatalogsFeedCredentials OAICatalogsRetailFeedsUpdateRequest::getCredentials() const {
    return credentials;
}
void OAICatalogsRetailFeedsUpdateRequest::setCredentials(const OAICatalogsFeedCredentials &credentials) {
    this->credentials = credentials;
    this->m_credentials_isSet = true;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_credentials_Set() const{
    return m_credentials_isSet;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_credentials_Valid() const{
    return m_credentials_isValid;
}

QString OAICatalogsRetailFeedsUpdateRequest::getLocation() const {
    return location;
}
void OAICatalogsRetailFeedsUpdateRequest::setLocation(const QString &location) {
    this->location = location;
    this->m_location_isSet = true;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_location_Set() const{
    return m_location_isSet;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_location_Valid() const{
    return m_location_isValid;
}

OAICatalogsFeedProcessingSchedule OAICatalogsRetailFeedsUpdateRequest::getPreferredProcessingSchedule() const {
    return preferred_processing_schedule;
}
void OAICatalogsRetailFeedsUpdateRequest::setPreferredProcessingSchedule(const OAICatalogsFeedProcessingSchedule &preferred_processing_schedule) {
    this->preferred_processing_schedule = preferred_processing_schedule;
    this->m_preferred_processing_schedule_isSet = true;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_preferred_processing_schedule_Set() const{
    return m_preferred_processing_schedule_isSet;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_preferred_processing_schedule_Valid() const{
    return m_preferred_processing_schedule_isValid;
}

OAICatalogsStatus OAICatalogsRetailFeedsUpdateRequest::getStatus() const {
    return status;
}
void OAICatalogsRetailFeedsUpdateRequest::setStatus(const OAICatalogsStatus &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_status_Set() const{
    return m_status_isSet;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_status_Valid() const{
    return m_status_isValid;
}

OAICatalogsType OAICatalogsRetailFeedsUpdateRequest::getCatalogType() const {
    return catalog_type;
}
void OAICatalogsRetailFeedsUpdateRequest::setCatalogType(const OAICatalogsType &catalog_type) {
    this->catalog_type = catalog_type;
    this->m_catalog_type_isSet = true;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_catalog_type_Set() const{
    return m_catalog_type_isSet;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_catalog_type_Valid() const{
    return m_catalog_type_isValid;
}

OAIProductAvailabilityType OAICatalogsRetailFeedsUpdateRequest::getDefaultAvailability() const {
    return default_availability;
}
void OAICatalogsRetailFeedsUpdateRequest::setDefaultAvailability(const OAIProductAvailabilityType &default_availability) {
    this->default_availability = default_availability;
    this->m_default_availability_isSet = true;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_default_availability_Set() const{
    return m_default_availability_isSet;
}

bool OAICatalogsRetailFeedsUpdateRequest::is_default_availability_Valid() const{
    return m_default_availability_isValid;
}

bool OAICatalogsRetailFeedsUpdateRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (default_currency.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (format.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (credentials.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_location_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (preferred_processing_schedule.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (status.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (catalog_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (default_availability.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsRetailFeedsUpdateRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_catalog_type_isValid && true;
}

} // namespace OpenAPI
