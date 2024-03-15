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

#include "OAIProductGroupPromotionResponseItem.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProductGroupPromotionResponseItem::OAIProductGroupPromotionResponseItem(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProductGroupPromotionResponseItem::OAIProductGroupPromotionResponseItem() {
    this->initializeModel();
}

OAIProductGroupPromotionResponseItem::~OAIProductGroupPromotionResponseItem() {}

void OAIProductGroupPromotionResponseItem::initializeModel() {

    m_data_isSet = false;
    m_data_isValid = false;

    m_exceptions_isSet = false;
    m_exceptions_isValid = false;
}

void OAIProductGroupPromotionResponseItem::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProductGroupPromotionResponseItem::fromJsonObject(QJsonObject json) {

    m_data_isValid = ::OpenAPI::fromJsonValue(data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;

    m_exceptions_isValid = ::OpenAPI::fromJsonValue(exceptions, json[QString("exceptions")]);
    m_exceptions_isSet = !json[QString("exceptions")].isNull() && m_exceptions_isValid;
}

QString OAIProductGroupPromotionResponseItem::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProductGroupPromotionResponseItem::asJsonObject() const {
    QJsonObject obj;
    if (data.isSet()) {
        obj.insert(QString("data"), ::OpenAPI::toJsonValue(data));
    }
    if (exceptions.size() > 0) {
        obj.insert(QString("exceptions"), ::OpenAPI::toJsonValue(exceptions));
    }
    return obj;
}

OAIProductGroupPromotion OAIProductGroupPromotionResponseItem::getData() const {
    return data;
}
void OAIProductGroupPromotionResponseItem::setData(const OAIProductGroupPromotion &data) {
    this->data = data;
    this->m_data_isSet = true;
}

bool OAIProductGroupPromotionResponseItem::is_data_Set() const{
    return m_data_isSet;
}

bool OAIProductGroupPromotionResponseItem::is_data_Valid() const{
    return m_data_isValid;
}

QList<OAIException> OAIProductGroupPromotionResponseItem::getExceptions() const {
    return exceptions;
}
void OAIProductGroupPromotionResponseItem::setExceptions(const QList<OAIException> &exceptions) {
    this->exceptions = exceptions;
    this->m_exceptions_isSet = true;
}

bool OAIProductGroupPromotionResponseItem::is_exceptions_Set() const{
    return m_exceptions_isSet;
}

bool OAIProductGroupPromotionResponseItem::is_exceptions_Valid() const{
    return m_exceptions_isValid;
}

bool OAIProductGroupPromotionResponseItem::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (exceptions.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProductGroupPromotionResponseItem::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
