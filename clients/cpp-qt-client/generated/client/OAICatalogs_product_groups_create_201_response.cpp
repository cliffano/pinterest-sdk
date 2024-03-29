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

#include "OAICatalogs_product_groups_create_201_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogs_product_groups_create_201_response::OAICatalogs_product_groups_create_201_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogs_product_groups_create_201_response::OAICatalogs_product_groups_create_201_response() {
    this->initializeModel();
}

OAICatalogs_product_groups_create_201_response::~OAICatalogs_product_groups_create_201_response() {}

void OAICatalogs_product_groups_create_201_response::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_filters_isSet = false;
    m_filters_isValid = false;

    m_is_featured_isSet = false;
    m_is_featured_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_created_at_isSet = false;
    m_created_at_isValid = false;

    m_updated_at_isSet = false;
    m_updated_at_isValid = false;

    m_feed_id_isSet = false;
    m_feed_id_isValid = false;

    m_catalog_type_isSet = false;
    m_catalog_type_isValid = false;

    m_catalog_id_isSet = false;
    m_catalog_id_isValid = false;
}

void OAICatalogs_product_groups_create_201_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogs_product_groups_create_201_response::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_filters_isValid = ::OpenAPI::fromJsonValue(m_filters, json[QString("filters")]);
    m_filters_isSet = !json[QString("filters")].isNull() && m_filters_isValid;

    m_is_featured_isValid = ::OpenAPI::fromJsonValue(m_is_featured, json[QString("is_featured")]);
    m_is_featured_isSet = !json[QString("is_featured")].isNull() && m_is_featured_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_created_at_isValid = ::OpenAPI::fromJsonValue(m_created_at, json[QString("created_at")]);
    m_created_at_isSet = !json[QString("created_at")].isNull() && m_created_at_isValid;

    m_updated_at_isValid = ::OpenAPI::fromJsonValue(m_updated_at, json[QString("updated_at")]);
    m_updated_at_isSet = !json[QString("updated_at")].isNull() && m_updated_at_isValid;

    m_feed_id_isValid = ::OpenAPI::fromJsonValue(m_feed_id, json[QString("feed_id")]);
    m_feed_id_isSet = !json[QString("feed_id")].isNull() && m_feed_id_isValid;

    m_catalog_type_isValid = ::OpenAPI::fromJsonValue(m_catalog_type, json[QString("catalog_type")]);
    m_catalog_type_isSet = !json[QString("catalog_type")].isNull() && m_catalog_type_isValid;

    m_catalog_id_isValid = ::OpenAPI::fromJsonValue(m_catalog_id, json[QString("catalog_id")]);
    m_catalog_id_isSet = !json[QString("catalog_id")].isNull() && m_catalog_id_isValid;
}

QString OAICatalogs_product_groups_create_201_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogs_product_groups_create_201_response::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(m_description));
    }
    if (m_filters.isSet()) {
        obj.insert(QString("filters"), ::OpenAPI::toJsonValue(m_filters));
    }
    if (m_is_featured_isSet) {
        obj.insert(QString("is_featured"), ::OpenAPI::toJsonValue(m_is_featured));
    }
    if (m_type.isSet()) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(m_type));
    }
    if (m_status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(m_status));
    }
    if (m_created_at_isSet) {
        obj.insert(QString("created_at"), ::OpenAPI::toJsonValue(m_created_at));
    }
    if (m_updated_at_isSet) {
        obj.insert(QString("updated_at"), ::OpenAPI::toJsonValue(m_updated_at));
    }
    if (m_feed_id_isSet) {
        obj.insert(QString("feed_id"), ::OpenAPI::toJsonValue(m_feed_id));
    }
    if (m_catalog_type_isSet) {
        obj.insert(QString("catalog_type"), ::OpenAPI::toJsonValue(m_catalog_type));
    }
    if (m_catalog_id_isSet) {
        obj.insert(QString("catalog_id"), ::OpenAPI::toJsonValue(m_catalog_id));
    }
    return obj;
}

QString OAICatalogs_product_groups_create_201_response::getId() const {
    return m_id;
}
void OAICatalogs_product_groups_create_201_response::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAICatalogs_product_groups_create_201_response::is_id_Set() const{
    return m_id_isSet;
}

bool OAICatalogs_product_groups_create_201_response::is_id_Valid() const{
    return m_id_isValid;
}

QString OAICatalogs_product_groups_create_201_response::getName() const {
    return m_name;
}
void OAICatalogs_product_groups_create_201_response::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAICatalogs_product_groups_create_201_response::is_name_Set() const{
    return m_name_isSet;
}

bool OAICatalogs_product_groups_create_201_response::is_name_Valid() const{
    return m_name_isValid;
}

QString OAICatalogs_product_groups_create_201_response::getDescription() const {
    return m_description;
}
void OAICatalogs_product_groups_create_201_response::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAICatalogs_product_groups_create_201_response::is_description_Set() const{
    return m_description_isSet;
}

bool OAICatalogs_product_groups_create_201_response::is_description_Valid() const{
    return m_description_isValid;
}

OAICatalogsProductGroupFilters OAICatalogs_product_groups_create_201_response::getFilters() const {
    return m_filters;
}
void OAICatalogs_product_groups_create_201_response::setFilters(const OAICatalogsProductGroupFilters &filters) {
    m_filters = filters;
    m_filters_isSet = true;
}

bool OAICatalogs_product_groups_create_201_response::is_filters_Set() const{
    return m_filters_isSet;
}

bool OAICatalogs_product_groups_create_201_response::is_filters_Valid() const{
    return m_filters_isValid;
}

bool OAICatalogs_product_groups_create_201_response::isIsFeatured() const {
    return m_is_featured;
}
void OAICatalogs_product_groups_create_201_response::setIsFeatured(const bool &is_featured) {
    m_is_featured = is_featured;
    m_is_featured_isSet = true;
}

bool OAICatalogs_product_groups_create_201_response::is_is_featured_Set() const{
    return m_is_featured_isSet;
}

bool OAICatalogs_product_groups_create_201_response::is_is_featured_Valid() const{
    return m_is_featured_isValid;
}

OAICatalogsProductGroupType OAICatalogs_product_groups_create_201_response::getType() const {
    return m_type;
}
void OAICatalogs_product_groups_create_201_response::setType(const OAICatalogsProductGroupType &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAICatalogs_product_groups_create_201_response::is_type_Set() const{
    return m_type_isSet;
}

bool OAICatalogs_product_groups_create_201_response::is_type_Valid() const{
    return m_type_isValid;
}

OAICatalogsProductGroupStatus OAICatalogs_product_groups_create_201_response::getStatus() const {
    return m_status;
}
void OAICatalogs_product_groups_create_201_response::setStatus(const OAICatalogsProductGroupStatus &status) {
    m_status = status;
    m_status_isSet = true;
}

bool OAICatalogs_product_groups_create_201_response::is_status_Set() const{
    return m_status_isSet;
}

bool OAICatalogs_product_groups_create_201_response::is_status_Valid() const{
    return m_status_isValid;
}

qint32 OAICatalogs_product_groups_create_201_response::getCreatedAt() const {
    return m_created_at;
}
void OAICatalogs_product_groups_create_201_response::setCreatedAt(const qint32 &created_at) {
    m_created_at = created_at;
    m_created_at_isSet = true;
}

bool OAICatalogs_product_groups_create_201_response::is_created_at_Set() const{
    return m_created_at_isSet;
}

bool OAICatalogs_product_groups_create_201_response::is_created_at_Valid() const{
    return m_created_at_isValid;
}

qint32 OAICatalogs_product_groups_create_201_response::getUpdatedAt() const {
    return m_updated_at;
}
void OAICatalogs_product_groups_create_201_response::setUpdatedAt(const qint32 &updated_at) {
    m_updated_at = updated_at;
    m_updated_at_isSet = true;
}

bool OAICatalogs_product_groups_create_201_response::is_updated_at_Set() const{
    return m_updated_at_isSet;
}

bool OAICatalogs_product_groups_create_201_response::is_updated_at_Valid() const{
    return m_updated_at_isValid;
}

QString OAICatalogs_product_groups_create_201_response::getFeedId() const {
    return m_feed_id;
}
void OAICatalogs_product_groups_create_201_response::setFeedId(const QString &feed_id) {
    m_feed_id = feed_id;
    m_feed_id_isSet = true;
}

bool OAICatalogs_product_groups_create_201_response::is_feed_id_Set() const{
    return m_feed_id_isSet;
}

bool OAICatalogs_product_groups_create_201_response::is_feed_id_Valid() const{
    return m_feed_id_isValid;
}

QString OAICatalogs_product_groups_create_201_response::getCatalogType() const {
    return m_catalog_type;
}
void OAICatalogs_product_groups_create_201_response::setCatalogType(const QString &catalog_type) {
    m_catalog_type = catalog_type;
    m_catalog_type_isSet = true;
}

bool OAICatalogs_product_groups_create_201_response::is_catalog_type_Set() const{
    return m_catalog_type_isSet;
}

bool OAICatalogs_product_groups_create_201_response::is_catalog_type_Valid() const{
    return m_catalog_type_isValid;
}

QString OAICatalogs_product_groups_create_201_response::getCatalogId() const {
    return m_catalog_id;
}
void OAICatalogs_product_groups_create_201_response::setCatalogId(const QString &catalog_id) {
    m_catalog_id = catalog_id;
    m_catalog_id_isSet = true;
}

bool OAICatalogs_product_groups_create_201_response::is_catalog_id_Set() const{
    return m_catalog_id_isSet;
}

bool OAICatalogs_product_groups_create_201_response::is_catalog_id_Valid() const{
    return m_catalog_id_isValid;
}

bool OAICatalogs_product_groups_create_201_response::isSet() const {
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

        if (m_filters.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_featured_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_status.isSet()) {
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

        if (m_feed_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_catalog_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_catalog_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogs_product_groups_create_201_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_filters_isValid && m_feed_id_isValid && m_catalog_type_isValid && m_catalog_id_isValid && true;
}

} // namespace OpenAPI
