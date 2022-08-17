/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIProductGroupPromotionUpdateResponseItem.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProductGroupPromotionUpdateResponseItem::OAIProductGroupPromotionUpdateResponseItem(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProductGroupPromotionUpdateResponseItem::OAIProductGroupPromotionUpdateResponseItem() {
    this->initializeModel();
}

OAIProductGroupPromotionUpdateResponseItem::~OAIProductGroupPromotionUpdateResponseItem() {}

void OAIProductGroupPromotionUpdateResponseItem::initializeModel() {

    m_data_isSet = false;
    m_data_isValid = false;

    m_exceptions_isSet = false;
    m_exceptions_isValid = false;
}

void OAIProductGroupPromotionUpdateResponseItem::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProductGroupPromotionUpdateResponseItem::fromJsonObject(QJsonObject json) {

    m_data_isValid = ::OpenAPI::fromJsonValue(data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;

    m_exceptions_isValid = ::OpenAPI::fromJsonValue(exceptions, json[QString("exceptions")]);
    m_exceptions_isSet = !json[QString("exceptions")].isNull() && m_exceptions_isValid;
}

QString OAIProductGroupPromotionUpdateResponseItem::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProductGroupPromotionUpdateResponseItem::asJsonObject() const {
    QJsonObject obj;
    if (data.isSet()) {
        obj.insert(QString("data"), ::OpenAPI::toJsonValue(data));
    }
    if (exceptions.isSet()) {
        obj.insert(QString("exceptions"), ::OpenAPI::toJsonValue(exceptions));
    }
    return obj;
}

OAIProductGroupPromotion OAIProductGroupPromotionUpdateResponseItem::getData() const {
    return data;
}
void OAIProductGroupPromotionUpdateResponseItem::setData(const OAIProductGroupPromotion &data) {
    this->data = data;
    this->m_data_isSet = true;
}

bool OAIProductGroupPromotionUpdateResponseItem::is_data_Set() const{
    return m_data_isSet;
}

bool OAIProductGroupPromotionUpdateResponseItem::is_data_Valid() const{
    return m_data_isValid;
}

OAIException OAIProductGroupPromotionUpdateResponseItem::getExceptions() const {
    return exceptions;
}
void OAIProductGroupPromotionUpdateResponseItem::setExceptions(const OAIException &exceptions) {
    this->exceptions = exceptions;
    this->m_exceptions_isSet = true;
}

bool OAIProductGroupPromotionUpdateResponseItem::is_exceptions_Set() const{
    return m_exceptions_isSet;
}

bool OAIProductGroupPromotionUpdateResponseItem::is_exceptions_Valid() const{
    return m_exceptions_isValid;
}

bool OAIProductGroupPromotionUpdateResponseItem::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (exceptions.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProductGroupPromotionUpdateResponseItem::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
