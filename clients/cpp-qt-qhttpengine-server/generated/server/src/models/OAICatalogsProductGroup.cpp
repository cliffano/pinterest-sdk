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

#include "OAICatalogsProductGroup.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsProductGroup::OAICatalogsProductGroup(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsProductGroup::OAICatalogsProductGroup() {
    this->initializeModel();
}

OAICatalogsProductGroup::~OAICatalogsProductGroup() {}

void OAICatalogsProductGroup::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_filters_isSet = false;
    m_filters_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_feed_id_isSet = false;
    m_feed_id_isValid = false;

    m_created_at_isSet = false;
    m_created_at_isValid = false;

    m_updated_at_isSet = false;
    m_updated_at_isValid = false;
}

void OAICatalogsProductGroup::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsProductGroup::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_filters_isValid = ::OpenAPI::fromJsonValue(filters, json[QString("filters")]);
    m_filters_isSet = !json[QString("filters")].isNull() && m_filters_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_feed_id_isValid = ::OpenAPI::fromJsonValue(feed_id, json[QString("feed_id")]);
    m_feed_id_isSet = !json[QString("feed_id")].isNull() && m_feed_id_isValid;

    m_created_at_isValid = ::OpenAPI::fromJsonValue(created_at, json[QString("created_at")]);
    m_created_at_isSet = !json[QString("created_at")].isNull() && m_created_at_isValid;

    m_updated_at_isValid = ::OpenAPI::fromJsonValue(updated_at, json[QString("updated_at")]);
    m_updated_at_isSet = !json[QString("updated_at")].isNull() && m_updated_at_isValid;
}

QString OAICatalogsProductGroup::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsProductGroup::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(description));
    }
    if (filters.isSet()) {
        obj.insert(QString("filters"), ::OpenAPI::toJsonValue(filters));
    }
    if (type.isSet()) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    if (status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (m_feed_id_isSet) {
        obj.insert(QString("feed_id"), ::OpenAPI::toJsonValue(feed_id));
    }
    if (m_created_at_isSet) {
        obj.insert(QString("created_at"), ::OpenAPI::toJsonValue(created_at));
    }
    if (m_updated_at_isSet) {
        obj.insert(QString("updated_at"), ::OpenAPI::toJsonValue(updated_at));
    }
    return obj;
}

QString OAICatalogsProductGroup::getId() const {
    return id;
}
void OAICatalogsProductGroup::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAICatalogsProductGroup::is_id_Set() const{
    return m_id_isSet;
}

bool OAICatalogsProductGroup::is_id_Valid() const{
    return m_id_isValid;
}

QString OAICatalogsProductGroup::getName() const {
    return name;
}
void OAICatalogsProductGroup::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAICatalogsProductGroup::is_name_Set() const{
    return m_name_isSet;
}

bool OAICatalogsProductGroup::is_name_Valid() const{
    return m_name_isValid;
}

QString OAICatalogsProductGroup::getDescription() const {
    return description;
}
void OAICatalogsProductGroup::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

bool OAICatalogsProductGroup::is_description_Set() const{
    return m_description_isSet;
}

bool OAICatalogsProductGroup::is_description_Valid() const{
    return m_description_isValid;
}

OAICatalogsProductGroupFilters OAICatalogsProductGroup::getFilters() const {
    return filters;
}
void OAICatalogsProductGroup::setFilters(const OAICatalogsProductGroupFilters &filters) {
    this->filters = filters;
    this->m_filters_isSet = true;
}

bool OAICatalogsProductGroup::is_filters_Set() const{
    return m_filters_isSet;
}

bool OAICatalogsProductGroup::is_filters_Valid() const{
    return m_filters_isValid;
}

OAICatalogsProductGroupType OAICatalogsProductGroup::getType() const {
    return type;
}
void OAICatalogsProductGroup::setType(const OAICatalogsProductGroupType &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool OAICatalogsProductGroup::is_type_Set() const{
    return m_type_isSet;
}

bool OAICatalogsProductGroup::is_type_Valid() const{
    return m_type_isValid;
}

OAICatalogsProductGroupStatus OAICatalogsProductGroup::getStatus() const {
    return status;
}
void OAICatalogsProductGroup::setStatus(const OAICatalogsProductGroupStatus &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAICatalogsProductGroup::is_status_Set() const{
    return m_status_isSet;
}

bool OAICatalogsProductGroup::is_status_Valid() const{
    return m_status_isValid;
}

QString OAICatalogsProductGroup::getFeedId() const {
    return feed_id;
}
void OAICatalogsProductGroup::setFeedId(const QString &feed_id) {
    this->feed_id = feed_id;
    this->m_feed_id_isSet = true;
}

bool OAICatalogsProductGroup::is_feed_id_Set() const{
    return m_feed_id_isSet;
}

bool OAICatalogsProductGroup::is_feed_id_Valid() const{
    return m_feed_id_isValid;
}

qint32 OAICatalogsProductGroup::getCreatedAt() const {
    return created_at;
}
void OAICatalogsProductGroup::setCreatedAt(const qint32 &created_at) {
    this->created_at = created_at;
    this->m_created_at_isSet = true;
}

bool OAICatalogsProductGroup::is_created_at_Set() const{
    return m_created_at_isSet;
}

bool OAICatalogsProductGroup::is_created_at_Valid() const{
    return m_created_at_isValid;
}

qint32 OAICatalogsProductGroup::getUpdatedAt() const {
    return updated_at;
}
void OAICatalogsProductGroup::setUpdatedAt(const qint32 &updated_at) {
    this->updated_at = updated_at;
    this->m_updated_at_isSet = true;
}

bool OAICatalogsProductGroup::is_updated_at_Set() const{
    return m_updated_at_isSet;
}

bool OAICatalogsProductGroup::is_updated_at_Valid() const{
    return m_updated_at_isValid;
}

bool OAICatalogsProductGroup::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (filters.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (status.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_feed_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_updated_at_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsProductGroup::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_filters_isValid && true;
}

} // namespace OpenAPI
