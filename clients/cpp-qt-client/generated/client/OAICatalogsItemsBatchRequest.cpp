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

#include "OAICatalogsItemsBatchRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsItemsBatchRequest::OAICatalogsItemsBatchRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsItemsBatchRequest::OAICatalogsItemsBatchRequest() {
    this->initializeModel();
}

OAICatalogsItemsBatchRequest::~OAICatalogsItemsBatchRequest() {}

void OAICatalogsItemsBatchRequest::initializeModel() {

    m_country_isSet = false;
    m_country_isValid = false;

    m_language_isSet = false;
    m_language_isValid = false;

    m_operation_isSet = false;
    m_operation_isValid = false;

    m_items_isSet = false;
    m_items_isValid = false;
}

void OAICatalogsItemsBatchRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsItemsBatchRequest::fromJsonObject(QJsonObject json) {

    m_country_isValid = ::OpenAPI::fromJsonValue(m_country, json[QString("country")]);
    m_country_isSet = !json[QString("country")].isNull() && m_country_isValid;

    m_language_isValid = ::OpenAPI::fromJsonValue(m_language, json[QString("language")]);
    m_language_isSet = !json[QString("language")].isNull() && m_language_isValid;

    m_operation_isValid = ::OpenAPI::fromJsonValue(m_operation, json[QString("operation")]);
    m_operation_isSet = !json[QString("operation")].isNull() && m_operation_isValid;

    m_items_isValid = ::OpenAPI::fromJsonValue(m_items, json[QString("items")]);
    m_items_isSet = !json[QString("items")].isNull() && m_items_isValid;
}

QString OAICatalogsItemsBatchRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsItemsBatchRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_country.isSet()) {
        obj.insert(QString("country"), ::OpenAPI::toJsonValue(m_country));
    }
    if (m_language.isSet()) {
        obj.insert(QString("language"), ::OpenAPI::toJsonValue(m_language));
    }
    if (m_operation.isSet()) {
        obj.insert(QString("operation"), ::OpenAPI::toJsonValue(m_operation));
    }
    if (m_items.size() > 0) {
        obj.insert(QString("items"), ::OpenAPI::toJsonValue(m_items));
    }
    return obj;
}

OAICountry OAICatalogsItemsBatchRequest::getCountry() const {
    return m_country;
}
void OAICatalogsItemsBatchRequest::setCountry(const OAICountry &country) {
    m_country = country;
    m_country_isSet = true;
}

bool OAICatalogsItemsBatchRequest::is_country_Set() const{
    return m_country_isSet;
}

bool OAICatalogsItemsBatchRequest::is_country_Valid() const{
    return m_country_isValid;
}

OAILanguage OAICatalogsItemsBatchRequest::getLanguage() const {
    return m_language;
}
void OAICatalogsItemsBatchRequest::setLanguage(const OAILanguage &language) {
    m_language = language;
    m_language_isSet = true;
}

bool OAICatalogsItemsBatchRequest::is_language_Set() const{
    return m_language_isSet;
}

bool OAICatalogsItemsBatchRequest::is_language_Valid() const{
    return m_language_isValid;
}

OAIBatchOperation OAICatalogsItemsBatchRequest::getOperation() const {
    return m_operation;
}
void OAICatalogsItemsBatchRequest::setOperation(const OAIBatchOperation &operation) {
    m_operation = operation;
    m_operation_isSet = true;
}

bool OAICatalogsItemsBatchRequest::is_operation_Set() const{
    return m_operation_isSet;
}

bool OAICatalogsItemsBatchRequest::is_operation_Valid() const{
    return m_operation_isValid;
}

QList<OAIItemDeleteBatchRecord> OAICatalogsItemsBatchRequest::getItems() const {
    return m_items;
}
void OAICatalogsItemsBatchRequest::setItems(const QList<OAIItemDeleteBatchRecord> &items) {
    m_items = items;
    m_items_isSet = true;
}

bool OAICatalogsItemsBatchRequest::is_items_Set() const{
    return m_items_isSet;
}

bool OAICatalogsItemsBatchRequest::is_items_Valid() const{
    return m_items_isValid;
}

bool OAICatalogsItemsBatchRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_country.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_language.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_operation.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_items.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsItemsBatchRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_country_isValid && m_language_isValid && m_operation_isValid && m_items_isValid && true;
}

} // namespace OpenAPI
