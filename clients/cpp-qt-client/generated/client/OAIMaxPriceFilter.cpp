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

#include "OAIMaxPriceFilter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMaxPriceFilter::OAIMaxPriceFilter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMaxPriceFilter::OAIMaxPriceFilter() {
    this->initializeModel();
}

OAIMaxPriceFilter::~OAIMaxPriceFilter() {}

void OAIMaxPriceFilter::initializeModel() {

    m_max_price_isSet = false;
    m_max_price_isValid = false;
}

void OAIMaxPriceFilter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMaxPriceFilter::fromJsonObject(QJsonObject json) {

    m_max_price_isValid = ::OpenAPI::fromJsonValue(m_max_price, json[QString("MAX_PRICE")]);
    m_max_price_isSet = !json[QString("MAX_PRICE")].isNull() && m_max_price_isValid;
}

QString OAIMaxPriceFilter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMaxPriceFilter::asJsonObject() const {
    QJsonObject obj;
    if (m_max_price_isSet) {
        obj.insert(QString("MAX_PRICE"), ::OpenAPI::toJsonValue(m_max_price));
    }
    return obj;
}

OAICatalogsProductGroupPricingCriteria OAIMaxPriceFilter::getMaxPrice() const {
    return m_max_price;
}
void OAIMaxPriceFilter::setMaxPrice(const OAICatalogsProductGroupPricingCriteria &max_price) {
    m_max_price = max_price;
    m_max_price_isSet = true;
}

bool OAIMaxPriceFilter::is_max_price_Set() const{
    return m_max_price_isSet;
}

bool OAIMaxPriceFilter::is_max_price_Valid() const{
    return m_max_price_isValid;
}

bool OAIMaxPriceFilter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_max_price_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMaxPriceFilter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_max_price_isValid && true;
}

} // namespace OpenAPI
