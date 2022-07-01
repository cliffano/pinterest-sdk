/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICatalogsItemsBatch.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsItemsBatch::OAICatalogsItemsBatch(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsItemsBatch::OAICatalogsItemsBatch() {
    this->initializeModel();
}

OAICatalogsItemsBatch::~OAICatalogsItemsBatch() {}

void OAICatalogsItemsBatch::initializeModel() {

    m_items_isSet = false;
    m_items_isValid = false;

    m_batch_id_isSet = false;
    m_batch_id_isValid = false;

    m_created_time_isSet = false;
    m_created_time_isValid = false;

    m_completed_time_isSet = false;
    m_completed_time_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;
}

void OAICatalogsItemsBatch::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsItemsBatch::fromJsonObject(QJsonObject json) {

    m_items_isValid = ::OpenAPI::fromJsonValue(items, json[QString("items")]);
    m_items_isSet = !json[QString("items")].isNull() && m_items_isValid;

    m_batch_id_isValid = ::OpenAPI::fromJsonValue(batch_id, json[QString("batch_id")]);
    m_batch_id_isSet = !json[QString("batch_id")].isNull() && m_batch_id_isValid;

    m_created_time_isValid = ::OpenAPI::fromJsonValue(created_time, json[QString("created_time")]);
    m_created_time_isSet = !json[QString("created_time")].isNull() && m_created_time_isValid;

    m_completed_time_isValid = ::OpenAPI::fromJsonValue(completed_time, json[QString("completed_time")]);
    m_completed_time_isSet = !json[QString("completed_time")].isNull() && m_completed_time_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;
}

QString OAICatalogsItemsBatch::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsItemsBatch::asJsonObject() const {
    QJsonObject obj;
    if (items.size() > 0) {
        obj.insert(QString("items"), ::OpenAPI::toJsonValue(items));
    }
    if (m_batch_id_isSet) {
        obj.insert(QString("batch_id"), ::OpenAPI::toJsonValue(batch_id));
    }
    if (m_created_time_isSet) {
        obj.insert(QString("created_time"), ::OpenAPI::toJsonValue(created_time));
    }
    if (m_completed_time_isSet) {
        obj.insert(QString("completed_time"), ::OpenAPI::toJsonValue(completed_time));
    }
    if (status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    return obj;
}

QList<OAIItemProcessingRecord> OAICatalogsItemsBatch::getItems() const {
    return items;
}
void OAICatalogsItemsBatch::setItems(const QList<OAIItemProcessingRecord> &items) {
    this->items = items;
    this->m_items_isSet = true;
}

bool OAICatalogsItemsBatch::is_items_Set() const{
    return m_items_isSet;
}

bool OAICatalogsItemsBatch::is_items_Valid() const{
    return m_items_isValid;
}

QString OAICatalogsItemsBatch::getBatchId() const {
    return batch_id;
}
void OAICatalogsItemsBatch::setBatchId(const QString &batch_id) {
    this->batch_id = batch_id;
    this->m_batch_id_isSet = true;
}

bool OAICatalogsItemsBatch::is_batch_id_Set() const{
    return m_batch_id_isSet;
}

bool OAICatalogsItemsBatch::is_batch_id_Valid() const{
    return m_batch_id_isValid;
}

QDateTime OAICatalogsItemsBatch::getCreatedTime() const {
    return created_time;
}
void OAICatalogsItemsBatch::setCreatedTime(const QDateTime &created_time) {
    this->created_time = created_time;
    this->m_created_time_isSet = true;
}

bool OAICatalogsItemsBatch::is_created_time_Set() const{
    return m_created_time_isSet;
}

bool OAICatalogsItemsBatch::is_created_time_Valid() const{
    return m_created_time_isValid;
}

QDateTime OAICatalogsItemsBatch::getCompletedTime() const {
    return completed_time;
}
void OAICatalogsItemsBatch::setCompletedTime(const QDateTime &completed_time) {
    this->completed_time = completed_time;
    this->m_completed_time_isSet = true;
}

bool OAICatalogsItemsBatch::is_completed_time_Set() const{
    return m_completed_time_isSet;
}

bool OAICatalogsItemsBatch::is_completed_time_Valid() const{
    return m_completed_time_isValid;
}

OAIBatchOperationStatus OAICatalogsItemsBatch::getStatus() const {
    return status;
}
void OAICatalogsItemsBatch::setStatus(const OAIBatchOperationStatus &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAICatalogsItemsBatch::is_status_Set() const{
    return m_status_isSet;
}

bool OAICatalogsItemsBatch::is_status_Valid() const{
    return m_status_isValid;
}

bool OAICatalogsItemsBatch::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (items.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_batch_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_completed_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (status.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsItemsBatch::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
