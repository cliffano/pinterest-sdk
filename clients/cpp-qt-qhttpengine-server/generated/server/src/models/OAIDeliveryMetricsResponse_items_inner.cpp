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

#include "OAIDeliveryMetricsResponse_items_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDeliveryMetricsResponse_items_inner::OAIDeliveryMetricsResponse_items_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDeliveryMetricsResponse_items_inner::OAIDeliveryMetricsResponse_items_inner() {
    this->initializeModel();
}

OAIDeliveryMetricsResponse_items_inner::~OAIDeliveryMetricsResponse_items_inner() {}

void OAIDeliveryMetricsResponse_items_inner::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_category_isSet = false;
    m_category_isValid = false;

    m_definition_isSet = false;
    m_definition_isValid = false;

    m_display_name_isSet = false;
    m_display_name_isValid = false;
}

void OAIDeliveryMetricsResponse_items_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDeliveryMetricsResponse_items_inner::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_category_isValid = ::OpenAPI::fromJsonValue(category, json[QString("category")]);
    m_category_isSet = !json[QString("category")].isNull() && m_category_isValid;

    m_definition_isValid = ::OpenAPI::fromJsonValue(definition, json[QString("definition")]);
    m_definition_isSet = !json[QString("definition")].isNull() && m_definition_isValid;

    m_display_name_isValid = ::OpenAPI::fromJsonValue(display_name, json[QString("display_name")]);
    m_display_name_isSet = !json[QString("display_name")].isNull() && m_display_name_isValid;
}

QString OAIDeliveryMetricsResponse_items_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDeliveryMetricsResponse_items_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_category_isSet) {
        obj.insert(QString("category"), ::OpenAPI::toJsonValue(category));
    }
    if (m_definition_isSet) {
        obj.insert(QString("definition"), ::OpenAPI::toJsonValue(definition));
    }
    if (m_display_name_isSet) {
        obj.insert(QString("display_name"), ::OpenAPI::toJsonValue(display_name));
    }
    return obj;
}

QString OAIDeliveryMetricsResponse_items_inner::getName() const {
    return name;
}
void OAIDeliveryMetricsResponse_items_inner::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIDeliveryMetricsResponse_items_inner::is_name_Set() const{
    return m_name_isSet;
}

bool OAIDeliveryMetricsResponse_items_inner::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIDeliveryMetricsResponse_items_inner::getCategory() const {
    return category;
}
void OAIDeliveryMetricsResponse_items_inner::setCategory(const QString &category) {
    this->category = category;
    this->m_category_isSet = true;
}

bool OAIDeliveryMetricsResponse_items_inner::is_category_Set() const{
    return m_category_isSet;
}

bool OAIDeliveryMetricsResponse_items_inner::is_category_Valid() const{
    return m_category_isValid;
}

QString OAIDeliveryMetricsResponse_items_inner::getDefinition() const {
    return definition;
}
void OAIDeliveryMetricsResponse_items_inner::setDefinition(const QString &definition) {
    this->definition = definition;
    this->m_definition_isSet = true;
}

bool OAIDeliveryMetricsResponse_items_inner::is_definition_Set() const{
    return m_definition_isSet;
}

bool OAIDeliveryMetricsResponse_items_inner::is_definition_Valid() const{
    return m_definition_isValid;
}

QString OAIDeliveryMetricsResponse_items_inner::getDisplayName() const {
    return display_name;
}
void OAIDeliveryMetricsResponse_items_inner::setDisplayName(const QString &display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

bool OAIDeliveryMetricsResponse_items_inner::is_display_name_Set() const{
    return m_display_name_isSet;
}

bool OAIDeliveryMetricsResponse_items_inner::is_display_name_Valid() const{
    return m_display_name_isValid;
}

bool OAIDeliveryMetricsResponse_items_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_category_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_definition_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_display_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDeliveryMetricsResponse_items_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
