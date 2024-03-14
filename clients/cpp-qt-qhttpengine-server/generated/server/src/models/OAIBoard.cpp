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

#include "OAIBoard.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBoard::OAIBoard(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBoard::OAIBoard() {
    this->initializeModel();
}

OAIBoard::~OAIBoard() {}

void OAIBoard::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_owner_isSet = false;
    m_owner_isValid = false;

    m_privacy_isSet = false;
    m_privacy_isValid = false;
}

void OAIBoard::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBoard::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_owner_isValid = ::OpenAPI::fromJsonValue(owner, json[QString("owner")]);
    m_owner_isSet = !json[QString("owner")].isNull() && m_owner_isValid;

    m_privacy_isValid = ::OpenAPI::fromJsonValue(privacy, json[QString("privacy")]);
    m_privacy_isSet = !json[QString("privacy")].isNull() && m_privacy_isValid;
}

QString OAIBoard::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBoard::asJsonObject() const {
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
    if (owner.isSet()) {
        obj.insert(QString("owner"), ::OpenAPI::toJsonValue(owner));
    }
    if (m_privacy_isSet) {
        obj.insert(QString("privacy"), ::OpenAPI::toJsonValue(privacy));
    }
    return obj;
}

QString OAIBoard::getId() const {
    return id;
}
void OAIBoard::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIBoard::is_id_Set() const{
    return m_id_isSet;
}

bool OAIBoard::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIBoard::getName() const {
    return name;
}
void OAIBoard::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIBoard::is_name_Set() const{
    return m_name_isSet;
}

bool OAIBoard::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIBoard::getDescription() const {
    return description;
}
void OAIBoard::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

bool OAIBoard::is_description_Set() const{
    return m_description_isSet;
}

bool OAIBoard::is_description_Valid() const{
    return m_description_isValid;
}

OAIBoard_owner OAIBoard::getOwner() const {
    return owner;
}
void OAIBoard::setOwner(const OAIBoard_owner &owner) {
    this->owner = owner;
    this->m_owner_isSet = true;
}

bool OAIBoard::is_owner_Set() const{
    return m_owner_isSet;
}

bool OAIBoard::is_owner_Valid() const{
    return m_owner_isValid;
}

QString OAIBoard::getPrivacy() const {
    return privacy;
}
void OAIBoard::setPrivacy(const QString &privacy) {
    this->privacy = privacy;
    this->m_privacy_isSet = true;
}

bool OAIBoard::is_privacy_Set() const{
    return m_privacy_isSet;
}

bool OAIBoard::is_privacy_Valid() const{
    return m_privacy_isValid;
}

bool OAIBoard::isSet() const {
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

        if (owner.isSet()) {
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

bool OAIBoard::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && true;
}

} // namespace OpenAPI