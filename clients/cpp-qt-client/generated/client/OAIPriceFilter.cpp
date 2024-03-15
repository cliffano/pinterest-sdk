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

#include "OAIPriceFilter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPriceFilter::OAIPriceFilter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPriceFilter::OAIPriceFilter() {
    this->initializeModel();
}

OAIPriceFilter::~OAIPriceFilter() {}

void OAIPriceFilter::initializeModel() {

    m_price_isSet = false;
    m_price_isValid = false;
}

void OAIPriceFilter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPriceFilter::fromJsonObject(QJsonObject json) {

    m_price_isValid = ::OpenAPI::fromJsonValue(m_price, json[QString("PRICE")]);
    m_price_isSet = !json[QString("PRICE")].isNull() && m_price_isValid;
}

QString OAIPriceFilter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPriceFilter::asJsonObject() const {
    QJsonObject obj;
    if (m_price.isSet()) {
        obj.insert(QString("PRICE"), ::OpenAPI::toJsonValue(m_price));
    }
    return obj;
}

OAICatalogs_product_group_pricing_currency_criteria OAIPriceFilter::getPrice() const {
    return m_price;
}
void OAIPriceFilter::setPrice(const OAICatalogs_product_group_pricing_currency_criteria &price) {
    m_price = price;
    m_price_isSet = true;
}

bool OAIPriceFilter::is_price_Set() const{
    return m_price_isSet;
}

bool OAIPriceFilter::is_price_Valid() const{
    return m_price_isValid;
}

bool OAIPriceFilter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_price.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPriceFilter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_price_isValid && true;
}

} // namespace OpenAPI
