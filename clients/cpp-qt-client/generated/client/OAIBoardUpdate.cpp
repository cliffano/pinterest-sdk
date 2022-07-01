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

#include "OAIBoardUpdate.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBoardUpdate::OAIBoardUpdate(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBoardUpdate::OAIBoardUpdate() {
    this->initializeModel();
}

OAIBoardUpdate::~OAIBoardUpdate() {}

void OAIBoardUpdate::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_privacy_isSet = false;
    m_privacy_isValid = false;
}

void OAIBoardUpdate::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBoardUpdate::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_privacy_isValid = ::OpenAPI::fromJsonValue(privacy, json[QString("privacy")]);
    m_privacy_isSet = !json[QString("privacy")].isNull() && m_privacy_isValid;
}

QString OAIBoardUpdate::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBoardUpdate::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(description));
    }
    if (m_privacy_isSet) {
        obj.insert(QString("privacy"), ::OpenAPI::toJsonValue(privacy));
    }
    return obj;
}

QString OAIBoardUpdate::getName() const {
    return name;
}
void OAIBoardUpdate::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIBoardUpdate::is_name_Set() const{
    return m_name_isSet;
}

bool OAIBoardUpdate::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIBoardUpdate::getDescription() const {
    return description;
}
void OAIBoardUpdate::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

bool OAIBoardUpdate::is_description_Set() const{
    return m_description_isSet;
}

bool OAIBoardUpdate::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIBoardUpdate::getPrivacy() const {
    return privacy;
}
void OAIBoardUpdate::setPrivacy(const QString &privacy) {
    this->privacy = privacy;
    this->m_privacy_isSet = true;
}

bool OAIBoardUpdate::is_privacy_Set() const{
    return m_privacy_isSet;
}

bool OAIBoardUpdate::is_privacy_Valid() const{
    return m_privacy_isValid;
}

bool OAIBoardUpdate::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_privacy_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBoardUpdate::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
