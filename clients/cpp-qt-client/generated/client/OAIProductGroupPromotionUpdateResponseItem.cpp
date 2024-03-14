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

    m_data_isValid = ::OpenAPI::fromJsonValue(m_data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;

    m_exceptions_isValid = ::OpenAPI::fromJsonValue(m_exceptions, json[QString("exceptions")]);
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
    if (m_data.isSet()) {
        obj.insert(QString("data"), ::OpenAPI::toJsonValue(m_data));
    }
    if (m_exceptions.isSet()) {
        obj.insert(QString("exceptions"), ::OpenAPI::toJsonValue(m_exceptions));
    }
    return obj;
}

OAIProductGroupPromotion OAIProductGroupPromotionUpdateResponseItem::getData() const {
    return m_data;
}
void OAIProductGroupPromotionUpdateResponseItem::setData(const OAIProductGroupPromotion &data) {
    m_data = data;
    m_data_isSet = true;
}

bool OAIProductGroupPromotionUpdateResponseItem::is_data_Set() const{
    return m_data_isSet;
}

bool OAIProductGroupPromotionUpdateResponseItem::is_data_Valid() const{
    return m_data_isValid;
}

OAIException OAIProductGroupPromotionUpdateResponseItem::getExceptions() const {
    return m_exceptions;
}
void OAIProductGroupPromotionUpdateResponseItem::setExceptions(const OAIException &exceptions) {
    m_exceptions = exceptions;
    m_exceptions_isSet = true;
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
        if (m_data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_exceptions.isSet()) {
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