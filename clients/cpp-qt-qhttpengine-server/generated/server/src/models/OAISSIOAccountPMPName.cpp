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

#include "OAISSIOAccountPMPName.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISSIOAccountPMPName::OAISSIOAccountPMPName(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISSIOAccountPMPName::OAISSIOAccountPMPName() {
    this->initializeModel();
}

OAISSIOAccountPMPName::~OAISSIOAccountPMPName() {}

void OAISSIOAccountPMPName::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;
}

void OAISSIOAccountPMPName::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISSIOAccountPMPName::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;
}

QString OAISSIOAccountPMPName::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISSIOAccountPMPName::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    return obj;
}

QString OAISSIOAccountPMPName::getName() const {
    return name;
}
void OAISSIOAccountPMPName::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAISSIOAccountPMPName::is_name_Set() const{
    return m_name_isSet;
}

bool OAISSIOAccountPMPName::is_name_Valid() const{
    return m_name_isValid;
}

QString OAISSIOAccountPMPName::getId() const {
    return id;
}
void OAISSIOAccountPMPName::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAISSIOAccountPMPName::is_id_Set() const{
    return m_id_isSet;
}

bool OAISSIOAccountPMPName::is_id_Valid() const{
    return m_id_isValid;
}

bool OAISSIOAccountPMPName::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISSIOAccountPMPName::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
