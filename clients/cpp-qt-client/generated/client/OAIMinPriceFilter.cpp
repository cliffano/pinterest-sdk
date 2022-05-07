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

#include "OAIMinPriceFilter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMinPriceFilter::OAIMinPriceFilter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMinPriceFilter::OAIMinPriceFilter() {
    this->initializeModel();
}

OAIMinPriceFilter::~OAIMinPriceFilter() {}

void OAIMinPriceFilter::initializeModel() {

    m_min_price_isSet = false;
    m_min_price_isValid = false;
}

void OAIMinPriceFilter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMinPriceFilter::fromJsonObject(QJsonObject json) {

    m_min_price_isValid = ::OpenAPI::fromJsonValue(min_price, json[QString("MIN_PRICE")]);
    m_min_price_isSet = !json[QString("MIN_PRICE")].isNull() && m_min_price_isValid;
}

QString OAIMinPriceFilter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMinPriceFilter::asJsonObject() const {
    QJsonObject obj;
    if (m_min_price_isSet) {
        obj.insert(QString("MIN_PRICE"), ::OpenAPI::toJsonValue(min_price));
    }
    return obj;
}

OAICatalogsProductGroupPricingCriteria OAIMinPriceFilter::getMinPrice() const {
    return min_price;
}
void OAIMinPriceFilter::setMinPrice(const OAICatalogsProductGroupPricingCriteria &min_price) {
    this->min_price = min_price;
    this->m_min_price_isSet = true;
}

bool OAIMinPriceFilter::is_min_price_Set() const{
    return m_min_price_isSet;
}

bool OAIMinPriceFilter::is_min_price_Valid() const{
    return m_min_price_isValid;
}

bool OAIMinPriceFilter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_min_price_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMinPriceFilter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_min_price_isValid && true;
}

} // namespace OpenAPI
