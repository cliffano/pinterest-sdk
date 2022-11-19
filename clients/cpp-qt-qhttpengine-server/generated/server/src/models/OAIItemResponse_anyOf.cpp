/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIItemResponse_anyOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIItemResponse_anyOf::OAIItemResponse_anyOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIItemResponse_anyOf::OAIItemResponse_anyOf() {
    this->initializeModel();
}

OAIItemResponse_anyOf::~OAIItemResponse_anyOf() {}

void OAIItemResponse_anyOf::initializeModel() {

    m_item_id_isSet = false;
    m_item_id_isValid = false;

    m_attributes_isSet = false;
    m_attributes_isValid = false;
}

void OAIItemResponse_anyOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIItemResponse_anyOf::fromJsonObject(QJsonObject json) {

    m_item_id_isValid = ::OpenAPI::fromJsonValue(item_id, json[QString("item_id")]);
    m_item_id_isSet = !json[QString("item_id")].isNull() && m_item_id_isValid;

    m_attributes_isValid = ::OpenAPI::fromJsonValue(attributes, json[QString("attributes")]);
    m_attributes_isSet = !json[QString("attributes")].isNull() && m_attributes_isValid;
}

QString OAIItemResponse_anyOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIItemResponse_anyOf::asJsonObject() const {
    QJsonObject obj;
    if (m_item_id_isSet) {
        obj.insert(QString("item_id"), ::OpenAPI::toJsonValue(item_id));
    }
    if (attributes.isSet()) {
        obj.insert(QString("attributes"), ::OpenAPI::toJsonValue(attributes));
    }
    return obj;
}

QString OAIItemResponse_anyOf::getItemId() const {
    return item_id;
}
void OAIItemResponse_anyOf::setItemId(const QString &item_id) {
    this->item_id = item_id;
    this->m_item_id_isSet = true;
}

bool OAIItemResponse_anyOf::is_item_id_Set() const{
    return m_item_id_isSet;
}

bool OAIItemResponse_anyOf::is_item_id_Valid() const{
    return m_item_id_isValid;
}

OAIItemAttributes OAIItemResponse_anyOf::getAttributes() const {
    return attributes;
}
void OAIItemResponse_anyOf::setAttributes(const OAIItemAttributes &attributes) {
    this->attributes = attributes;
    this->m_attributes_isSet = true;
}

bool OAIItemResponse_anyOf::is_attributes_Set() const{
    return m_attributes_isSet;
}

bool OAIItemResponse_anyOf::is_attributes_Valid() const{
    return m_attributes_isValid;
}

bool OAIItemResponse_anyOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_item_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (attributes.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIItemResponse_anyOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
