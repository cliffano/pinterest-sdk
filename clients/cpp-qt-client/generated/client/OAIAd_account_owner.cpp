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

#include "OAIAd_account_owner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAd_account_owner::OAIAd_account_owner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAd_account_owner::OAIAd_account_owner() {
    this->initializeModel();
}

OAIAd_account_owner::~OAIAd_account_owner() {}

void OAIAd_account_owner::initializeModel() {

    m_username_isSet = false;
    m_username_isValid = false;
}

void OAIAd_account_owner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAd_account_owner::fromJsonObject(QJsonObject json) {

    m_username_isValid = ::OpenAPI::fromJsonValue(username, json[QString("username")]);
    m_username_isSet = !json[QString("username")].isNull() && m_username_isValid;
}

QString OAIAd_account_owner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAd_account_owner::asJsonObject() const {
    QJsonObject obj;
    if (m_username_isSet) {
        obj.insert(QString("username"), ::OpenAPI::toJsonValue(username));
    }
    return obj;
}

QString OAIAd_account_owner::getUsername() const {
    return username;
}
void OAIAd_account_owner::setUsername(const QString &username) {
    this->username = username;
    this->m_username_isSet = true;
}

bool OAIAd_account_owner::is_username_Set() const{
    return m_username_isSet;
}

bool OAIAd_account_owner::is_username_Valid() const{
    return m_username_isValid;
}

bool OAIAd_account_owner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_username_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAd_account_owner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
