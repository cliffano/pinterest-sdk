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

#include "OAIBulkUpsertRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBulkUpsertRequest::OAIBulkUpsertRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBulkUpsertRequest::OAIBulkUpsertRequest() {
    this->initializeModel();
}

OAIBulkUpsertRequest::~OAIBulkUpsertRequest() {}

void OAIBulkUpsertRequest::initializeModel() {

    m_create_isSet = false;
    m_create_isValid = false;

    m_update_isSet = false;
    m_update_isValid = false;
}

void OAIBulkUpsertRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBulkUpsertRequest::fromJsonObject(QJsonObject json) {

    m_create_isValid = ::OpenAPI::fromJsonValue(create, json[QString("create")]);
    m_create_isSet = !json[QString("create")].isNull() && m_create_isValid;

    m_update_isValid = ::OpenAPI::fromJsonValue(update, json[QString("update")]);
    m_update_isSet = !json[QString("update")].isNull() && m_update_isValid;
}

QString OAIBulkUpsertRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBulkUpsertRequest::asJsonObject() const {
    QJsonObject obj;
    if (create.isSet()) {
        obj.insert(QString("create"), ::OpenAPI::toJsonValue(create));
    }
    if (update.isSet()) {
        obj.insert(QString("update"), ::OpenAPI::toJsonValue(update));
    }
    return obj;
}

OAIBulkUpsertRequestCreate OAIBulkUpsertRequest::getCreate() const {
    return create;
}
void OAIBulkUpsertRequest::setCreate(const OAIBulkUpsertRequestCreate &create) {
    this->create = create;
    this->m_create_isSet = true;
}

bool OAIBulkUpsertRequest::is_create_Set() const{
    return m_create_isSet;
}

bool OAIBulkUpsertRequest::is_create_Valid() const{
    return m_create_isValid;
}

OAIBulkUpsertRequestUpdate OAIBulkUpsertRequest::getUpdate() const {
    return update;
}
void OAIBulkUpsertRequest::setUpdate(const OAIBulkUpsertRequestUpdate &update) {
    this->update = update;
    this->m_update_isSet = true;
}

bool OAIBulkUpsertRequest::is_update_Set() const{
    return m_update_isSet;
}

bool OAIBulkUpsertRequest::is_update_Valid() const{
    return m_update_isValid;
}

bool OAIBulkUpsertRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (create.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (update.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBulkUpsertRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI