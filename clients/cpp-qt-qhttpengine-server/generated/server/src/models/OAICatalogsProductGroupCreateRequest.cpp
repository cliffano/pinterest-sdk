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

#include "OAICatalogsProductGroupCreateRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsProductGroupCreateRequest::OAICatalogsProductGroupCreateRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsProductGroupCreateRequest::OAICatalogsProductGroupCreateRequest() {
    this->initializeModel();
}

OAICatalogsProductGroupCreateRequest::~OAICatalogsProductGroupCreateRequest() {}

void OAICatalogsProductGroupCreateRequest::initializeModel() {

    m_feed_id_isSet = false;
    m_feed_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_filters_isSet = false;
    m_filters_isValid = false;
}

void OAICatalogsProductGroupCreateRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsProductGroupCreateRequest::fromJsonObject(QJsonObject json) {

    m_feed_id_isValid = ::OpenAPI::fromJsonValue(feed_id, json[QString("feed_id")]);
    m_feed_id_isSet = !json[QString("feed_id")].isNull() && m_feed_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_filters_isValid = ::OpenAPI::fromJsonValue(filters, json[QString("filters")]);
    m_filters_isSet = !json[QString("filters")].isNull() && m_filters_isValid;
}

QString OAICatalogsProductGroupCreateRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsProductGroupCreateRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_feed_id_isSet) {
        obj.insert(QString("feed_id"), ::OpenAPI::toJsonValue(feed_id));
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
    return obj;
}

QString OAICatalogsProductGroupCreateRequest::getFeedId() const {
    return feed_id;
}
void OAICatalogsProductGroupCreateRequest::setFeedId(const QString &feed_id) {
    this->feed_id = feed_id;
    this->m_feed_id_isSet = true;
}

bool OAICatalogsProductGroupCreateRequest::is_feed_id_Set() const{
    return m_feed_id_isSet;
}

bool OAICatalogsProductGroupCreateRequest::is_feed_id_Valid() const{
    return m_feed_id_isValid;
}

QString OAICatalogsProductGroupCreateRequest::getName() const {
    return name;
}
void OAICatalogsProductGroupCreateRequest::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAICatalogsProductGroupCreateRequest::is_name_Set() const{
    return m_name_isSet;
}

bool OAICatalogsProductGroupCreateRequest::is_name_Valid() const{
    return m_name_isValid;
}

QString OAICatalogsProductGroupCreateRequest::getDescription() const {
    return description;
}
void OAICatalogsProductGroupCreateRequest::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

bool OAICatalogsProductGroupCreateRequest::is_description_Set() const{
    return m_description_isSet;
}

bool OAICatalogsProductGroupCreateRequest::is_description_Valid() const{
    return m_description_isValid;
}

OAICatalogsProductGroupFilters OAICatalogsProductGroupCreateRequest::getFilters() const {
    return filters;
}
void OAICatalogsProductGroupCreateRequest::setFilters(const OAICatalogsProductGroupFilters &filters) {
    this->filters = filters;
    this->m_filters_isSet = true;
}

bool OAICatalogsProductGroupCreateRequest::is_filters_Set() const{
    return m_filters_isSet;
}

bool OAICatalogsProductGroupCreateRequest::is_filters_Valid() const{
    return m_filters_isValid;
}

bool OAICatalogsProductGroupCreateRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_feed_id_isSet) {
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
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsProductGroupCreateRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_feed_id_isValid && m_name_isValid && m_filters_isValid && true;
}

} // namespace OpenAPI