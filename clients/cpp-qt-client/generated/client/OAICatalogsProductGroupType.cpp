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

#include "OAICatalogsProductGroupType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsProductGroupType::OAICatalogsProductGroupType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsProductGroupType::OAICatalogsProductGroupType() {
    this->initializeModel();
}

OAICatalogsProductGroupType::~OAICatalogsProductGroupType() {}

void OAICatalogsProductGroupType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAICatalogsProductGroupType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAICatalogsProductGroupType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("MERCHANT_CREATED", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsProductGroupType::MERCHANT_CREATED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ALL_PRODUCTS", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsProductGroupType::ALL_PRODUCTS;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BEST_DEALS", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsProductGroupType::BEST_DEALS;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PINNER_FAVORITES", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsProductGroupType::PINNER_FAVORITES;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TOP_SELLERS", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsProductGroupType::TOP_SELLERS;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BACK_IN_STOCK", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsProductGroupType::BACK_IN_STOCK;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("NEW_ARRIVALS", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsProductGroupType::NEW_ARRIVALS;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAICatalogsProductGroupType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAICatalogsProductGroupType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAICatalogsProductGroupType::MERCHANT_CREATED:
            val = "MERCHANT_CREATED";
            break;
        case eOAICatalogsProductGroupType::ALL_PRODUCTS:
            val = "ALL_PRODUCTS";
            break;
        case eOAICatalogsProductGroupType::BEST_DEALS:
            val = "BEST_DEALS";
            break;
        case eOAICatalogsProductGroupType::PINNER_FAVORITES:
            val = "PINNER_FAVORITES";
            break;
        case eOAICatalogsProductGroupType::TOP_SELLERS:
            val = "TOP_SELLERS";
            break;
        case eOAICatalogsProductGroupType::BACK_IN_STOCK:
            val = "BACK_IN_STOCK";
            break;
        case eOAICatalogsProductGroupType::NEW_ARRIVALS:
            val = "NEW_ARRIVALS";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAICatalogsProductGroupType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAICatalogsProductGroupType::eOAICatalogsProductGroupType OAICatalogsProductGroupType::getValue() const {
    return m_value;
}

void OAICatalogsProductGroupType::setValue(const OAICatalogsProductGroupType::eOAICatalogsProductGroupType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAICatalogsProductGroupType::isSet() const {
    
    return m_value_isSet;
}

bool OAICatalogsProductGroupType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
