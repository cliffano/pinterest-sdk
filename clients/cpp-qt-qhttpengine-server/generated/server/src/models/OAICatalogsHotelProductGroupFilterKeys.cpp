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

#include "OAICatalogsHotelProductGroupFilterKeys.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsHotelProductGroupFilterKeys::OAICatalogsHotelProductGroupFilterKeys(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsHotelProductGroupFilterKeys::OAICatalogsHotelProductGroupFilterKeys() {
    this->initializeModel();
}

OAICatalogsHotelProductGroupFilterKeys::~OAICatalogsHotelProductGroupFilterKeys() {}

void OAICatalogsHotelProductGroupFilterKeys::initializeModel() {

    m_price_isSet = false;
    m_price_isValid = false;

    m_hotel_id_isSet = false;
    m_hotel_id_isValid = false;

    m_brand_isSet = false;
    m_brand_isValid = false;

    m_custom_label_0_isSet = false;
    m_custom_label_0_isValid = false;

    m_custom_label_1_isSet = false;
    m_custom_label_1_isValid = false;

    m_custom_label_2_isSet = false;
    m_custom_label_2_isValid = false;

    m_custom_label_3_isSet = false;
    m_custom_label_3_isValid = false;

    m_custom_label_4_isSet = false;
    m_custom_label_4_isValid = false;

    m_country_isSet = false;
    m_country_isValid = false;
}

void OAICatalogsHotelProductGroupFilterKeys::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsHotelProductGroupFilterKeys::fromJsonObject(QJsonObject json) {

    m_price_isValid = ::OpenAPI::fromJsonValue(price, json[QString("PRICE")]);
    m_price_isSet = !json[QString("PRICE")].isNull() && m_price_isValid;

    m_hotel_id_isValid = ::OpenAPI::fromJsonValue(hotel_id, json[QString("HOTEL_ID")]);
    m_hotel_id_isSet = !json[QString("HOTEL_ID")].isNull() && m_hotel_id_isValid;

    m_brand_isValid = ::OpenAPI::fromJsonValue(brand, json[QString("BRAND")]);
    m_brand_isSet = !json[QString("BRAND")].isNull() && m_brand_isValid;

    m_custom_label_0_isValid = ::OpenAPI::fromJsonValue(custom_label_0, json[QString("CUSTOM_LABEL_0")]);
    m_custom_label_0_isSet = !json[QString("CUSTOM_LABEL_0")].isNull() && m_custom_label_0_isValid;

    m_custom_label_1_isValid = ::OpenAPI::fromJsonValue(custom_label_1, json[QString("CUSTOM_LABEL_1")]);
    m_custom_label_1_isSet = !json[QString("CUSTOM_LABEL_1")].isNull() && m_custom_label_1_isValid;

    m_custom_label_2_isValid = ::OpenAPI::fromJsonValue(custom_label_2, json[QString("CUSTOM_LABEL_2")]);
    m_custom_label_2_isSet = !json[QString("CUSTOM_LABEL_2")].isNull() && m_custom_label_2_isValid;

    m_custom_label_3_isValid = ::OpenAPI::fromJsonValue(custom_label_3, json[QString("CUSTOM_LABEL_3")]);
    m_custom_label_3_isSet = !json[QString("CUSTOM_LABEL_3")].isNull() && m_custom_label_3_isValid;

    m_custom_label_4_isValid = ::OpenAPI::fromJsonValue(custom_label_4, json[QString("CUSTOM_LABEL_4")]);
    m_custom_label_4_isSet = !json[QString("CUSTOM_LABEL_4")].isNull() && m_custom_label_4_isValid;

    m_country_isValid = ::OpenAPI::fromJsonValue(country, json[QString("COUNTRY")]);
    m_country_isSet = !json[QString("COUNTRY")].isNull() && m_country_isValid;
}

QString OAICatalogsHotelProductGroupFilterKeys::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsHotelProductGroupFilterKeys::asJsonObject() const {
    QJsonObject obj;
    if (price.isSet()) {
        obj.insert(QString("PRICE"), ::OpenAPI::toJsonValue(price));
    }
    if (hotel_id.isSet()) {
        obj.insert(QString("HOTEL_ID"), ::OpenAPI::toJsonValue(hotel_id));
    }
    if (brand.isSet()) {
        obj.insert(QString("BRAND"), ::OpenAPI::toJsonValue(brand));
    }
    if (custom_label_0.isSet()) {
        obj.insert(QString("CUSTOM_LABEL_0"), ::OpenAPI::toJsonValue(custom_label_0));
    }
    if (custom_label_1.isSet()) {
        obj.insert(QString("CUSTOM_LABEL_1"), ::OpenAPI::toJsonValue(custom_label_1));
    }
    if (custom_label_2.isSet()) {
        obj.insert(QString("CUSTOM_LABEL_2"), ::OpenAPI::toJsonValue(custom_label_2));
    }
    if (custom_label_3.isSet()) {
        obj.insert(QString("CUSTOM_LABEL_3"), ::OpenAPI::toJsonValue(custom_label_3));
    }
    if (custom_label_4.isSet()) {
        obj.insert(QString("CUSTOM_LABEL_4"), ::OpenAPI::toJsonValue(custom_label_4));
    }
    if (country.isSet()) {
        obj.insert(QString("COUNTRY"), ::OpenAPI::toJsonValue(country));
    }
    return obj;
}

OAICatalogs_product_group_pricing_currency_criteria OAICatalogsHotelProductGroupFilterKeys::getPrice() const {
    return price;
}
void OAICatalogsHotelProductGroupFilterKeys::setPrice(const OAICatalogs_product_group_pricing_currency_criteria &price) {
    this->price = price;
    this->m_price_isSet = true;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_price_Set() const{
    return m_price_isSet;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_price_Valid() const{
    return m_price_isValid;
}

OAICatalogsProductGroupMultipleStringCriteria OAICatalogsHotelProductGroupFilterKeys::getHotelId() const {
    return hotel_id;
}
void OAICatalogsHotelProductGroupFilterKeys::setHotelId(const OAICatalogsProductGroupMultipleStringCriteria &hotel_id) {
    this->hotel_id = hotel_id;
    this->m_hotel_id_isSet = true;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_hotel_id_Set() const{
    return m_hotel_id_isSet;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_hotel_id_Valid() const{
    return m_hotel_id_isValid;
}

OAICatalogsProductGroupMultipleStringCriteria OAICatalogsHotelProductGroupFilterKeys::getBrand() const {
    return brand;
}
void OAICatalogsHotelProductGroupFilterKeys::setBrand(const OAICatalogsProductGroupMultipleStringCriteria &brand) {
    this->brand = brand;
    this->m_brand_isSet = true;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_brand_Set() const{
    return m_brand_isSet;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_brand_Valid() const{
    return m_brand_isValid;
}

OAICatalogsProductGroupMultipleStringCriteria OAICatalogsHotelProductGroupFilterKeys::getCustomLabel0() const {
    return custom_label_0;
}
void OAICatalogsHotelProductGroupFilterKeys::setCustomLabel0(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_0) {
    this->custom_label_0 = custom_label_0;
    this->m_custom_label_0_isSet = true;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_custom_label_0_Set() const{
    return m_custom_label_0_isSet;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_custom_label_0_Valid() const{
    return m_custom_label_0_isValid;
}

OAICatalogsProductGroupMultipleStringCriteria OAICatalogsHotelProductGroupFilterKeys::getCustomLabel1() const {
    return custom_label_1;
}
void OAICatalogsHotelProductGroupFilterKeys::setCustomLabel1(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_1) {
    this->custom_label_1 = custom_label_1;
    this->m_custom_label_1_isSet = true;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_custom_label_1_Set() const{
    return m_custom_label_1_isSet;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_custom_label_1_Valid() const{
    return m_custom_label_1_isValid;
}

OAICatalogsProductGroupMultipleStringCriteria OAICatalogsHotelProductGroupFilterKeys::getCustomLabel2() const {
    return custom_label_2;
}
void OAICatalogsHotelProductGroupFilterKeys::setCustomLabel2(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_2) {
    this->custom_label_2 = custom_label_2;
    this->m_custom_label_2_isSet = true;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_custom_label_2_Set() const{
    return m_custom_label_2_isSet;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_custom_label_2_Valid() const{
    return m_custom_label_2_isValid;
}

OAICatalogsProductGroupMultipleStringCriteria OAICatalogsHotelProductGroupFilterKeys::getCustomLabel3() const {
    return custom_label_3;
}
void OAICatalogsHotelProductGroupFilterKeys::setCustomLabel3(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_3) {
    this->custom_label_3 = custom_label_3;
    this->m_custom_label_3_isSet = true;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_custom_label_3_Set() const{
    return m_custom_label_3_isSet;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_custom_label_3_Valid() const{
    return m_custom_label_3_isValid;
}

OAICatalogsProductGroupMultipleStringCriteria OAICatalogsHotelProductGroupFilterKeys::getCustomLabel4() const {
    return custom_label_4;
}
void OAICatalogsHotelProductGroupFilterKeys::setCustomLabel4(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_4) {
    this->custom_label_4 = custom_label_4;
    this->m_custom_label_4_isSet = true;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_custom_label_4_Set() const{
    return m_custom_label_4_isSet;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_custom_label_4_Valid() const{
    return m_custom_label_4_isValid;
}

OAICatalogsProductGroupMultipleCountriesCriteria OAICatalogsHotelProductGroupFilterKeys::getCountry() const {
    return country;
}
void OAICatalogsHotelProductGroupFilterKeys::setCountry(const OAICatalogsProductGroupMultipleCountriesCriteria &country) {
    this->country = country;
    this->m_country_isSet = true;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_country_Set() const{
    return m_country_isSet;
}

bool OAICatalogsHotelProductGroupFilterKeys::is_country_Valid() const{
    return m_country_isValid;
}

bool OAICatalogsHotelProductGroupFilterKeys::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (price.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (hotel_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (brand.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (custom_label_0.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (custom_label_1.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (custom_label_2.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (custom_label_3.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (custom_label_4.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (country.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsHotelProductGroupFilterKeys::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_price_isValid && m_hotel_id_isValid && m_brand_isValid && m_custom_label_0_isValid && m_custom_label_1_isValid && m_custom_label_2_isValid && m_custom_label_3_isValid && m_custom_label_4_isValid && m_country_isValid && true;
}

} // namespace OpenAPI
