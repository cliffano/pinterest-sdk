/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICatalogsFeedValidationDetails.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsFeedValidationDetails::OAICatalogsFeedValidationDetails(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsFeedValidationDetails::OAICatalogsFeedValidationDetails() {
    this->initializeModel();
}

OAICatalogsFeedValidationDetails::~OAICatalogsFeedValidationDetails() {}

void OAICatalogsFeedValidationDetails::initializeModel() {

    m_errors_isSet = false;
    m_errors_isValid = false;

    m_warnings_isSet = false;
    m_warnings_isValid = false;
}

void OAICatalogsFeedValidationDetails::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICatalogsFeedValidationDetails::fromJsonObject(QJsonObject json) {

    m_errors_isValid = ::OpenAPI::fromJsonValue(errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;

    m_warnings_isValid = ::OpenAPI::fromJsonValue(warnings, json[QString("warnings")]);
    m_warnings_isSet = !json[QString("warnings")].isNull() && m_warnings_isValid;
}

QString OAICatalogsFeedValidationDetails::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICatalogsFeedValidationDetails::asJsonObject() const {
    QJsonObject obj;
    if (errors.isSet()) {
        obj.insert(QString("errors"), ::OpenAPI::toJsonValue(errors));
    }
    if (warnings.isSet()) {
        obj.insert(QString("warnings"), ::OpenAPI::toJsonValue(warnings));
    }
    return obj;
}

OAICatalogsFeedValidationErrors OAICatalogsFeedValidationDetails::getErrors() const {
    return errors;
}
void OAICatalogsFeedValidationDetails::setErrors(const OAICatalogsFeedValidationErrors &errors) {
    this->errors = errors;
    this->m_errors_isSet = true;
}

bool OAICatalogsFeedValidationDetails::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAICatalogsFeedValidationDetails::is_errors_Valid() const{
    return m_errors_isValid;
}

OAICatalogsFeedValidationWarnings OAICatalogsFeedValidationDetails::getWarnings() const {
    return warnings;
}
void OAICatalogsFeedValidationDetails::setWarnings(const OAICatalogsFeedValidationWarnings &warnings) {
    this->warnings = warnings;
    this->m_warnings_isSet = true;
}

bool OAICatalogsFeedValidationDetails::is_warnings_Set() const{
    return m_warnings_isSet;
}

bool OAICatalogsFeedValidationDetails::is_warnings_Valid() const{
    return m_warnings_isValid;
}

bool OAICatalogsFeedValidationDetails::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (errors.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (warnings.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICatalogsFeedValidationDetails::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_errors_isValid && m_warnings_isValid && true;
}

} // namespace OpenAPI
