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

#include "OAIItemValidationEvent.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIItemValidationEvent::OAIItemValidationEvent(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIItemValidationEvent::OAIItemValidationEvent() {
    this->initializeModel();
}

OAIItemValidationEvent::~OAIItemValidationEvent() {}

void OAIItemValidationEvent::initializeModel() {

    m_attribute_isSet = false;
    m_attribute_isValid = false;

    m_code_isSet = false;
    m_code_isValid = false;

    m_message_isSet = false;
    m_message_isValid = false;
}

void OAIItemValidationEvent::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIItemValidationEvent::fromJsonObject(QJsonObject json) {

    m_attribute_isValid = ::OpenAPI::fromJsonValue(m_attribute, json[QString("attribute")]);
    m_attribute_isSet = !json[QString("attribute")].isNull() && m_attribute_isValid;

    m_code_isValid = ::OpenAPI::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_message_isValid = ::OpenAPI::fromJsonValue(m_message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;
}

QString OAIItemValidationEvent::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIItemValidationEvent::asJsonObject() const {
    QJsonObject obj;
    if (m_attribute_isSet) {
        obj.insert(QString("attribute"), ::OpenAPI::toJsonValue(m_attribute));
    }
    if (m_code_isSet) {
        obj.insert(QString("code"), ::OpenAPI::toJsonValue(m_code));
    }
    if (m_message_isSet) {
        obj.insert(QString("message"), ::OpenAPI::toJsonValue(m_message));
    }
    return obj;
}

QString OAIItemValidationEvent::getAttribute() const {
    return m_attribute;
}
void OAIItemValidationEvent::setAttribute(const QString &attribute) {
    m_attribute = attribute;
    m_attribute_isSet = true;
}

bool OAIItemValidationEvent::is_attribute_Set() const{
    return m_attribute_isSet;
}

bool OAIItemValidationEvent::is_attribute_Valid() const{
    return m_attribute_isValid;
}

qint32 OAIItemValidationEvent::getCode() const {
    return m_code;
}
void OAIItemValidationEvent::setCode(const qint32 &code) {
    m_code = code;
    m_code_isSet = true;
}

bool OAIItemValidationEvent::is_code_Set() const{
    return m_code_isSet;
}

bool OAIItemValidationEvent::is_code_Valid() const{
    return m_code_isValid;
}

QString OAIItemValidationEvent::getMessage() const {
    return m_message;
}
void OAIItemValidationEvent::setMessage(const QString &message) {
    m_message = message;
    m_message_isSet = true;
}

bool OAIItemValidationEvent::is_message_Set() const{
    return m_message_isSet;
}

bool OAIItemValidationEvent::is_message_Valid() const{
    return m_message_isValid;
}

bool OAIItemValidationEvent::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_attribute_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIItemValidationEvent::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
