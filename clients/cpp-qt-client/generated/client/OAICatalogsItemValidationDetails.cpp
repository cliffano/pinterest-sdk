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

#include "OAICatalogsItemValidationDetails.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsItemValidationDetails::OAICatalogsItemValidationDetails(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsItemValidationDetails::OAICatalogsItemValidationDetails() {
    this->initializeModel();
}

OAICatalogsItemValidationDetails::~OAICatalogsItemValidationDetails() {}

void OAICatalogsItemValidationDetails::initializeModel() {

    m_attribute_name_isSet = false;
    m_attribute_name_isValid = false;

    m_provided_value_isSet = false;
    m_provided_value_isValid = false;
}

void OAICatalogsItemValidationDetails::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsItemValidationDetails::fromJsonObject(QJsonObject json) {

    m_attribute_name_isValid = ::OpenAPI::fromJsonValue(m_attribute_name, json[QString("attribute_name")]);
    m_attribute_name_isSet = !json[QString("attribute_name")].isNull() && m_attribute_name_isValid;

    m_provided_value_isValid = ::OpenAPI::fromJsonValue(m_provided_value, json[QString("provided_value")]);
    m_provided_value_isSet = !json[QString("provided_value")].isNull() && m_provided_value_isValid;
}

QString OAICatalogsItemValidationDetails::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsItemValidationDetails::asJsonObject() const {
    QJsonObject obj;
    if (m_attribute_name.isSet()) {
        obj.insert(QString("attribute_name"), ::OpenAPI::toJsonValue(m_attribute_name));
    }
    if (m_provided_value_isSet) {
        obj.insert(QString("provided_value"), ::OpenAPI::toJsonValue(m_provided_value));
    }
    return obj;
}

OAINullableCatalogsItemFieldType OAICatalogsItemValidationDetails::getAttributeName() const {
    return m_attribute_name;
}
void OAICatalogsItemValidationDetails::setAttributeName(const OAINullableCatalogsItemFieldType &attribute_name) {
    m_attribute_name = attribute_name;
    m_attribute_name_isSet = true;
}

bool OAICatalogsItemValidationDetails::is_attribute_name_Set() const{
    return m_attribute_name_isSet;
}

bool OAICatalogsItemValidationDetails::is_attribute_name_Valid() const{
    return m_attribute_name_isValid;
}

QString OAICatalogsItemValidationDetails::getProvidedValue() const {
    return m_provided_value;
}
void OAICatalogsItemValidationDetails::setProvidedValue(const QString &provided_value) {
    m_provided_value = provided_value;
    m_provided_value_isSet = true;
}

bool OAICatalogsItemValidationDetails::is_provided_value_Set() const{
    return m_provided_value_isSet;
}

bool OAICatalogsItemValidationDetails::is_provided_value_Valid() const{
    return m_provided_value_isValid;
}

bool OAICatalogsItemValidationDetails::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_attribute_name.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_provided_value_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsItemValidationDetails::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_attribute_name_isValid && m_provided_value_isValid && true;
}

} // namespace OpenAPI
