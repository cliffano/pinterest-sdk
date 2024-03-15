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

#include "OAICatalogsHotelProductGroupUpdateRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsHotelProductGroupUpdateRequest::OAICatalogsHotelProductGroupUpdateRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsHotelProductGroupUpdateRequest::OAICatalogsHotelProductGroupUpdateRequest() {
    this->initializeModel();
}

OAICatalogsHotelProductGroupUpdateRequest::~OAICatalogsHotelProductGroupUpdateRequest() {}

void OAICatalogsHotelProductGroupUpdateRequest::initializeModel() {

    m_catalog_type_isSet = false;
    m_catalog_type_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_filters_isSet = false;
    m_filters_isValid = false;
}

void OAICatalogsHotelProductGroupUpdateRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsHotelProductGroupUpdateRequest::fromJsonObject(QJsonObject json) {

    m_catalog_type_isValid = ::OpenAPI::fromJsonValue(m_catalog_type, json[QString("catalog_type")]);
    m_catalog_type_isSet = !json[QString("catalog_type")].isNull() && m_catalog_type_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_filters_isValid = ::OpenAPI::fromJsonValue(m_filters, json[QString("filters")]);
    m_filters_isSet = !json[QString("filters")].isNull() && m_filters_isValid;
}

QString OAICatalogsHotelProductGroupUpdateRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsHotelProductGroupUpdateRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_catalog_type_isSet) {
        obj.insert(QString("catalog_type"), ::OpenAPI::toJsonValue(m_catalog_type));
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
    return obj;
}

QString OAICatalogsHotelProductGroupUpdateRequest::getCatalogType() const {
    return m_catalog_type;
}
void OAICatalogsHotelProductGroupUpdateRequest::setCatalogType(const QString &catalog_type) {
    m_catalog_type = catalog_type;
    m_catalog_type_isSet = true;
}

bool OAICatalogsHotelProductGroupUpdateRequest::is_catalog_type_Set() const{
    return m_catalog_type_isSet;
}

bool OAICatalogsHotelProductGroupUpdateRequest::is_catalog_type_Valid() const{
    return m_catalog_type_isValid;
}

QString OAICatalogsHotelProductGroupUpdateRequest::getName() const {
    return m_name;
}
void OAICatalogsHotelProductGroupUpdateRequest::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAICatalogsHotelProductGroupUpdateRequest::is_name_Set() const{
    return m_name_isSet;
}

bool OAICatalogsHotelProductGroupUpdateRequest::is_name_Valid() const{
    return m_name_isValid;
}

QString OAICatalogsHotelProductGroupUpdateRequest::getDescription() const {
    return m_description;
}
void OAICatalogsHotelProductGroupUpdateRequest::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAICatalogsHotelProductGroupUpdateRequest::is_description_Set() const{
    return m_description_isSet;
}

bool OAICatalogsHotelProductGroupUpdateRequest::is_description_Valid() const{
    return m_description_isValid;
}

OAICatalogsHotelProductGroupFilters OAICatalogsHotelProductGroupUpdateRequest::getFilters() const {
    return m_filters;
}
void OAICatalogsHotelProductGroupUpdateRequest::setFilters(const OAICatalogsHotelProductGroupFilters &filters) {
    m_filters = filters;
    m_filters_isSet = true;
}

bool OAICatalogsHotelProductGroupUpdateRequest::is_filters_Set() const{
    return m_filters_isSet;
}

bool OAICatalogsHotelProductGroupUpdateRequest::is_filters_Valid() const{
    return m_filters_isValid;
}

bool OAICatalogsHotelProductGroupUpdateRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_catalog_type_isSet) {
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
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsHotelProductGroupUpdateRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
