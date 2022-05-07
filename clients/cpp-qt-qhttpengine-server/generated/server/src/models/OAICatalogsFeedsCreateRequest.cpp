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

#include "OAICatalogsFeedsCreateRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsFeedsCreateRequest::OAICatalogsFeedsCreateRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsFeedsCreateRequest::OAICatalogsFeedsCreateRequest() {
    this->initializeModel();
}

OAICatalogsFeedsCreateRequest::~OAICatalogsFeedsCreateRequest() {}

void OAICatalogsFeedsCreateRequest::initializeModel() {

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
}

void OAICatalogsFeedsCreateRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsFeedsCreateRequest::fromJsonObject(QJsonObject json) {

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
}

QString OAICatalogsFeedsCreateRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsFeedsCreateRequest::asJsonObject() const {
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
    return obj;
}

OAICountry OAICatalogsFeedsCreateRequest::getDefaultCountry() const {
    return default_country;
}
void OAICatalogsFeedsCreateRequest::setDefaultCountry(const OAICountry &default_country) {
    this->default_country = default_country;
    this->m_default_country_isSet = true;
}

bool OAICatalogsFeedsCreateRequest::is_default_country_Set() const{
    return m_default_country_isSet;
}

bool OAICatalogsFeedsCreateRequest::is_default_country_Valid() const{
    return m_default_country_isValid;
}

OAIProductAvailabilityType OAICatalogsFeedsCreateRequest::getDefaultAvailability() const {
    return default_availability;
}
void OAICatalogsFeedsCreateRequest::setDefaultAvailability(const OAIProductAvailabilityType &default_availability) {
    this->default_availability = default_availability;
    this->m_default_availability_isSet = true;
}

bool OAICatalogsFeedsCreateRequest::is_default_availability_Set() const{
    return m_default_availability_isSet;
}

bool OAICatalogsFeedsCreateRequest::is_default_availability_Valid() const{
    return m_default_availability_isValid;
}

OAINullableCurrency OAICatalogsFeedsCreateRequest::getDefaultCurrency() const {
    return default_currency;
}
void OAICatalogsFeedsCreateRequest::setDefaultCurrency(const OAINullableCurrency &default_currency) {
    this->default_currency = default_currency;
    this->m_default_currency_isSet = true;
}

bool OAICatalogsFeedsCreateRequest::is_default_currency_Set() const{
    return m_default_currency_isSet;
}

bool OAICatalogsFeedsCreateRequest::is_default_currency_Valid() const{
    return m_default_currency_isValid;
}

QString OAICatalogsFeedsCreateRequest::getName() const {
    return name;
}
void OAICatalogsFeedsCreateRequest::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAICatalogsFeedsCreateRequest::is_name_Set() const{
    return m_name_isSet;
}

bool OAICatalogsFeedsCreateRequest::is_name_Valid() const{
    return m_name_isValid;
}

OAICatalogsFormat OAICatalogsFeedsCreateRequest::getFormat() const {
    return format;
}
void OAICatalogsFeedsCreateRequest::setFormat(const OAICatalogsFormat &format) {
    this->format = format;
    this->m_format_isSet = true;
}

bool OAICatalogsFeedsCreateRequest::is_format_Set() const{
    return m_format_isSet;
}

bool OAICatalogsFeedsCreateRequest::is_format_Valid() const{
    return m_format_isValid;
}

QString OAICatalogsFeedsCreateRequest::getDefaultLocale() const {
    return default_locale;
}
void OAICatalogsFeedsCreateRequest::setDefaultLocale(const QString &default_locale) {
    this->default_locale = default_locale;
    this->m_default_locale_isSet = true;
}

bool OAICatalogsFeedsCreateRequest::is_default_locale_Set() const{
    return m_default_locale_isSet;
}

bool OAICatalogsFeedsCreateRequest::is_default_locale_Valid() const{
    return m_default_locale_isValid;
}

OAICatalogsFeedCredentials OAICatalogsFeedsCreateRequest::getCredentials() const {
    return credentials;
}
void OAICatalogsFeedsCreateRequest::setCredentials(const OAICatalogsFeedCredentials &credentials) {
    this->credentials = credentials;
    this->m_credentials_isSet = true;
}

bool OAICatalogsFeedsCreateRequest::is_credentials_Set() const{
    return m_credentials_isSet;
}

bool OAICatalogsFeedsCreateRequest::is_credentials_Valid() const{
    return m_credentials_isValid;
}

QString OAICatalogsFeedsCreateRequest::getLocation() const {
    return location;
}
void OAICatalogsFeedsCreateRequest::setLocation(const QString &location) {
    this->location = location;
    this->m_location_isSet = true;
}

bool OAICatalogsFeedsCreateRequest::is_location_Set() const{
    return m_location_isSet;
}

bool OAICatalogsFeedsCreateRequest::is_location_Valid() const{
    return m_location_isValid;
}

OAICatalogsFeedProcessingSchedule OAICatalogsFeedsCreateRequest::getPreferredProcessingSchedule() const {
    return preferred_processing_schedule;
}
void OAICatalogsFeedsCreateRequest::setPreferredProcessingSchedule(const OAICatalogsFeedProcessingSchedule &preferred_processing_schedule) {
    this->preferred_processing_schedule = preferred_processing_schedule;
    this->m_preferred_processing_schedule_isSet = true;
}

bool OAICatalogsFeedsCreateRequest::is_preferred_processing_schedule_Set() const{
    return m_preferred_processing_schedule_isSet;
}

bool OAICatalogsFeedsCreateRequest::is_preferred_processing_schedule_Valid() const{
    return m_preferred_processing_schedule_isValid;
}

bool OAICatalogsFeedsCreateRequest::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsFeedsCreateRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && m_format_isValid && m_location_isValid && true;
}

} // namespace OpenAPI
