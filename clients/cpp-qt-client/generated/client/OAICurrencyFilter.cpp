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

#include "OAICurrencyFilter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICurrencyFilter::OAICurrencyFilter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICurrencyFilter::OAICurrencyFilter() {
    this->initializeModel();
}

OAICurrencyFilter::~OAICurrencyFilter() {}

void OAICurrencyFilter::initializeModel() {

    m_currency_isSet = false;
    m_currency_isValid = false;
}

void OAICurrencyFilter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICurrencyFilter::fromJsonObject(QJsonObject json) {

    m_currency_isValid = ::OpenAPI::fromJsonValue(m_currency, json[QString("CURRENCY")]);
    m_currency_isSet = !json[QString("CURRENCY")].isNull() && m_currency_isValid;
}

QString OAICurrencyFilter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICurrencyFilter::asJsonObject() const {
    QJsonObject obj;
    if (m_currency_isSet) {
        obj.insert(QString("CURRENCY"), ::OpenAPI::toJsonValue(m_currency));
    }
    return obj;
}

OAICatalogsProductGroupCurrencyCriteria OAICurrencyFilter::getCurrency() const {
    return m_currency;
}
void OAICurrencyFilter::setCurrency(const OAICatalogsProductGroupCurrencyCriteria &currency) {
    m_currency = currency;
    m_currency_isSet = true;
}

bool OAICurrencyFilter::is_currency_Set() const{
    return m_currency_isSet;
}

bool OAICurrencyFilter::is_currency_Valid() const{
    return m_currency_isValid;
}

bool OAICurrencyFilter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_currency_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICurrencyFilter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_currency_isValid && true;
}

} // namespace OpenAPI
