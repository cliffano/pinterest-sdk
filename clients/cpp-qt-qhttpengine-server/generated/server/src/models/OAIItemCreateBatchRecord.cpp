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

#include "OAIItemCreateBatchRecord.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIItemCreateBatchRecord::OAIItemCreateBatchRecord(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIItemCreateBatchRecord::OAIItemCreateBatchRecord() {
    this->initializeModel();
}

OAIItemCreateBatchRecord::~OAIItemCreateBatchRecord() {}

void OAIItemCreateBatchRecord::initializeModel() {

    m_item_id_isSet = false;
    m_item_id_isValid = false;

    m_attributes_isSet = false;
    m_attributes_isValid = false;
}

void OAIItemCreateBatchRecord::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIItemCreateBatchRecord::fromJsonObject(QJsonObject json) {

    m_item_id_isValid = ::OpenAPI::fromJsonValue(item_id, json[QString("item_id")]);
    m_item_id_isSet = !json[QString("item_id")].isNull() && m_item_id_isValid;

    m_attributes_isValid = ::OpenAPI::fromJsonValue(attributes, json[QString("attributes")]);
    m_attributes_isSet = !json[QString("attributes")].isNull() && m_attributes_isValid;
}

QString OAIItemCreateBatchRecord::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIItemCreateBatchRecord::asJsonObject() const {
    QJsonObject obj;
    if (m_item_id_isSet) {
        obj.insert(QString("item_id"), ::OpenAPI::toJsonValue(item_id));
    }
    if (attributes.isSet()) {
        obj.insert(QString("attributes"), ::OpenAPI::toJsonValue(attributes));
    }
    return obj;
}

QString OAIItemCreateBatchRecord::getItemId() const {
    return item_id;
}
void OAIItemCreateBatchRecord::setItemId(const QString &item_id) {
    this->item_id = item_id;
    this->m_item_id_isSet = true;
}

bool OAIItemCreateBatchRecord::is_item_id_Set() const{
    return m_item_id_isSet;
}

bool OAIItemCreateBatchRecord::is_item_id_Valid() const{
    return m_item_id_isValid;
}

OAIItemAttributes OAIItemCreateBatchRecord::getAttributes() const {
    return attributes;
}
void OAIItemCreateBatchRecord::setAttributes(const OAIItemAttributes &attributes) {
    this->attributes = attributes;
    this->m_attributes_isSet = true;
}

bool OAIItemCreateBatchRecord::is_attributes_Set() const{
    return m_attributes_isSet;
}

bool OAIItemCreateBatchRecord::is_attributes_Valid() const{
    return m_attributes_isValid;
}

bool OAIItemCreateBatchRecord::isSet() const {
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

bool OAIItemCreateBatchRecord::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
