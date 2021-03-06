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

#include "OAIFeed_fields.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFeed_fields::OAIFeed_fields(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFeed_fields::OAIFeed_fields() {
    this->initializeModel();
}

OAIFeed_fields::~OAIFeed_fields() {}

void OAIFeed_fields::initializeModel() {

    m_default_country_isSet = false;
    m_default_country_isValid = false;

    m_default_availability_isSet = false;
    m_default_availability_isValid = false;

    m_default_currency_isSet = false;
    m_default_currency_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_format_isSet = false;
    m_format_isValid = false;

    m_default_locale_isSet = false;
    m_default_locale_isValid = false;

    m_credentials_isSet = false;
    m_credentials_isValid = false;

    m_location_isSet = false;
    m_location_isValid = false;

    m_preferred_processing_schedule_isSet = false;
    m_preferred_processing_schedule_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;
}

void OAIFeed_fields::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFeed_fields::fromJsonObject(QJsonObject json) {

    m_default_country_isValid = ::OpenAPI::fromJsonValue(default_country, json[QString("default_country")]);
    m_default_country_isSet = !json[QString("default_country")].isNull() && m_default_country_isValid;

    m_default_availability_isValid = ::OpenAPI::fromJsonValue(default_availability, json[QString("default_availability")]);
    m_default_availability_isSet = !json[QString("default_availability")].isNull() && m_default_availability_isValid;

    m_default_currency_isValid = ::OpenAPI::fromJsonValue(default_currency, json[QString("default_currency")]);
    m_default_currency_isSet = !json[QString("default_currency")].isNull() && m_default_currency_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_format_isValid = ::OpenAPI::fromJsonValue(format, json[QString("format")]);
    m_format_isSet = !json[QString("format")].isNull() && m_format_isValid;

    m_default_locale_isValid = ::OpenAPI::fromJsonValue(default_locale, json[QString("default_locale")]);
    m_default_locale_isSet = !json[QString("default_locale")].isNull() && m_default_locale_isValid;

    m_credentials_isValid = ::OpenAPI::fromJsonValue(credentials, json[QString("credentials")]);
    m_credentials_isSet = !json[QString("credentials")].isNull() && m_credentials_isValid;

    m_location_isValid = ::OpenAPI::fromJsonValue(location, json[QString("location")]);
    m_location_isSet = !json[QString("location")].isNull() && m_location_isValid;

    m_preferred_processing_schedule_isValid = ::OpenAPI::fromJsonValue(preferred_processing_schedule, json[QString("preferred_processing_schedule")]);
    m_preferred_processing_schedule_isSet = !json[QString("preferred_processing_schedule")].isNull() && m_preferred_processing_schedule_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;
}

QString OAIFeed_fields::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFeed_fields::asJsonObject() const {
    QJsonObject obj;
    if (default_country.isSet()) {
        obj.insert(QString("default_country"), ::OpenAPI::toJsonValue(default_country));
    }
    if (default_availability.isSet()) {
        obj.insert(QString("default_availability"), ::OpenAPI::toJsonValue(default_availability));
    }
    if (default_currency.isSet()) {
        obj.insert(QString("default_currency"), ::OpenAPI::toJsonValue(default_currency));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (format.isSet()) {
        obj.insert(QString("format"), ::OpenAPI::toJsonValue(format));
    }
    if (m_default_locale_isSet) {
        obj.insert(QString("default_locale"), ::OpenAPI::toJsonValue(default_locale));
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
    return obj;
}

OAICountry OAIFeed_fields::getDefaultCountry() const {
    return default_country;
}
void OAIFeed_fields::setDefaultCountry(const OAICountry &default_country) {
    this->default_country = default_country;
    this->m_default_country_isSet = true;
}

bool OAIFeed_fields::is_default_country_Set() const{
    return m_default_country_isSet;
}

bool OAIFeed_fields::is_default_country_Valid() const{
    return m_default_country_isValid;
}

OAIProductAvailabilityType OAIFeed_fields::getDefaultAvailability() const {
    return default_availability;
}
void OAIFeed_fields::setDefaultAvailability(const OAIProductAvailabilityType &default_availability) {
    this->default_availability = default_availability;
    this->m_default_availability_isSet = true;
}

bool OAIFeed_fields::is_default_availability_Set() const{
    return m_default_availability_isSet;
}

bool OAIFeed_fields::is_default_availability_Valid() const{
    return m_default_availability_isValid;
}

OAINullableCurrency OAIFeed_fields::getDefaultCurrency() const {
    return default_currency;
}
void OAIFeed_fields::setDefaultCurrency(const OAINullableCurrency &default_currency) {
    this->default_currency = default_currency;
    this->m_default_currency_isSet = true;
}

bool OAIFeed_fields::is_default_currency_Set() const{
    return m_default_currency_isSet;
}

bool OAIFeed_fields::is_default_currency_Valid() const{
    return m_default_currency_isValid;
}

QString OAIFeed_fields::getName() const {
    return name;
}
void OAIFeed_fields::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIFeed_fields::is_name_Set() const{
    return m_name_isSet;
}

bool OAIFeed_fields::is_name_Valid() const{
    return m_name_isValid;
}

OAICatalogsFormat OAIFeed_fields::getFormat() const {
    return format;
}
void OAIFeed_fields::setFormat(const OAICatalogsFormat &format) {
    this->format = format;
    this->m_format_isSet = true;
}

bool OAIFeed_fields::is_format_Set() const{
    return m_format_isSet;
}

bool OAIFeed_fields::is_format_Valid() const{
    return m_format_isValid;
}

QString OAIFeed_fields::getDefaultLocale() const {
    return default_locale;
}
void OAIFeed_fields::setDefaultLocale(const QString &default_locale) {
    this->default_locale = default_locale;
    this->m_default_locale_isSet = true;
}

bool OAIFeed_fields::is_default_locale_Set() const{
    return m_default_locale_isSet;
}

bool OAIFeed_fields::is_default_locale_Valid() const{
    return m_default_locale_isValid;
}

OAICatalogsFeedCredentials OAIFeed_fields::getCredentials() const {
    return credentials;
}
void OAIFeed_fields::setCredentials(const OAICatalogsFeedCredentials &credentials) {
    this->credentials = credentials;
    this->m_credentials_isSet = true;
}

bool OAIFeed_fields::is_credentials_Set() const{
    return m_credentials_isSet;
}

bool OAIFeed_fields::is_credentials_Valid() const{
    return m_credentials_isValid;
}

QString OAIFeed_fields::getLocation() const {
    return location;
}
void OAIFeed_fields::setLocation(const QString &location) {
    this->location = location;
    this->m_location_isSet = true;
}

bool OAIFeed_fields::is_location_Set() const{
    return m_location_isSet;
}

bool OAIFeed_fields::is_location_Valid() const{
    return m_location_isValid;
}

OAICatalogsFeedProcessingSchedule OAIFeed_fields::getPreferredProcessingSchedule() const {
    return preferred_processing_schedule;
}
void OAIFeed_fields::setPreferredProcessingSchedule(const OAICatalogsFeedProcessingSchedule &preferred_processing_schedule) {
    this->preferred_processing_schedule = preferred_processing_schedule;
    this->m_preferred_processing_schedule_isSet = true;
}

bool OAIFeed_fields::is_preferred_processing_schedule_Set() const{
    return m_preferred_processing_schedule_isSet;
}

bool OAIFeed_fields::is_preferred_processing_schedule_Valid() const{
    return m_preferred_processing_schedule_isValid;
}

OAICatalogsStatus OAIFeed_fields::getStatus() const {
    return status;
}
void OAIFeed_fields::setStatus(const OAICatalogsStatus &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAIFeed_fields::is_status_Set() const{
    return m_status_isSet;
}

bool OAIFeed_fields::is_status_Valid() const{
    return m_status_isValid;
}

bool OAIFeed_fields::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (default_country.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (default_availability.isSet()) {
            isObjectUpdated = true;
            break;
        }

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

        if (m_default_locale_isSet) {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIFeed_fields::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_default_country_isValid && m_default_availability_isValid && m_default_currency_isValid && m_name_isValid && m_format_isValid && m_default_locale_isValid && m_credentials_isValid && m_location_isValid && m_preferred_processing_schedule_isValid && m_status_isValid && true;
}

} // namespace OpenAPI
