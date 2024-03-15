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

#include "OAIInterest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIInterest::OAIInterest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInterest::OAIInterest() {
    this->initializeModel();
}

OAIInterest::~OAIInterest() {}

void OAIInterest::initializeModel() {

    m_canonical_url_isSet = false;
    m_canonical_url_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_key_isSet = false;
    m_key_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;
}

void OAIInterest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInterest::fromJsonObject(QJsonObject json) {

    m_canonical_url_isValid = ::OpenAPI::fromJsonValue(canonical_url, json[QString("canonical_url")]);
    m_canonical_url_isSet = !json[QString("canonical_url")].isNull() && m_canonical_url_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_key_isValid = ::OpenAPI::fromJsonValue(key, json[QString("key")]);
    m_key_isSet = !json[QString("key")].isNull() && m_key_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;
}

QString OAIInterest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInterest::asJsonObject() const {
    QJsonObject obj;
    if (m_canonical_url_isSet) {
        obj.insert(QString("canonical_url"), ::OpenAPI::toJsonValue(canonical_url));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_key_isSet) {
        obj.insert(QString("key"), ::OpenAPI::toJsonValue(key));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    return obj;
}

QString OAIInterest::getCanonicalUrl() const {
    return canonical_url;
}
void OAIInterest::setCanonicalUrl(const QString &canonical_url) {
    this->canonical_url = canonical_url;
    this->m_canonical_url_isSet = true;
}

bool OAIInterest::is_canonical_url_Set() const{
    return m_canonical_url_isSet;
}

bool OAIInterest::is_canonical_url_Valid() const{
    return m_canonical_url_isValid;
}

QString OAIInterest::getId() const {
    return id;
}
void OAIInterest::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIInterest::is_id_Set() const{
    return m_id_isSet;
}

bool OAIInterest::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIInterest::getKey() const {
    return key;
}
void OAIInterest::setKey(const QString &key) {
    this->key = key;
    this->m_key_isSet = true;
}

bool OAIInterest::is_key_Set() const{
    return m_key_isSet;
}

bool OAIInterest::is_key_Valid() const{
    return m_key_isValid;
}

QString OAIInterest::getName() const {
    return name;
}
void OAIInterest::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIInterest::is_name_Set() const{
    return m_name_isSet;
}

bool OAIInterest::is_name_Valid() const{
    return m_name_isValid;
}

bool OAIInterest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_canonical_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_key_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInterest::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
