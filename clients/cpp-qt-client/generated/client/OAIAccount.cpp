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

#include "OAIAccount.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAccount::OAIAccount(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAccount::OAIAccount() {
    this->initializeModel();
}

OAIAccount::~OAIAccount() {}

void OAIAccount::initializeModel() {

    m_account_type_isSet = false;
    m_account_type_isValid = false;

    m_profile_image_isSet = false;
    m_profile_image_isValid = false;

    m_website_url_isSet = false;
    m_website_url_isValid = false;

    m_username_isSet = false;
    m_username_isValid = false;
}

void OAIAccount::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAccount::fromJsonObject(QJsonObject json) {

    m_account_type_isValid = ::OpenAPI::fromJsonValue(account_type, json[QString("account_type")]);
    m_account_type_isSet = !json[QString("account_type")].isNull() && m_account_type_isValid;

    m_profile_image_isValid = ::OpenAPI::fromJsonValue(profile_image, json[QString("profile_image")]);
    m_profile_image_isSet = !json[QString("profile_image")].isNull() && m_profile_image_isValid;

    m_website_url_isValid = ::OpenAPI::fromJsonValue(website_url, json[QString("website_url")]);
    m_website_url_isSet = !json[QString("website_url")].isNull() && m_website_url_isValid;

    m_username_isValid = ::OpenAPI::fromJsonValue(username, json[QString("username")]);
    m_username_isSet = !json[QString("username")].isNull() && m_username_isValid;
}

QString OAIAccount::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAccount::asJsonObject() const {
    QJsonObject obj;
    if (m_account_type_isSet) {
        obj.insert(QString("account_type"), ::OpenAPI::toJsonValue(account_type));
    }
    if (m_profile_image_isSet) {
        obj.insert(QString("profile_image"), ::OpenAPI::toJsonValue(profile_image));
    }
    if (m_website_url_isSet) {
        obj.insert(QString("website_url"), ::OpenAPI::toJsonValue(website_url));
    }
    if (m_username_isSet) {
        obj.insert(QString("username"), ::OpenAPI::toJsonValue(username));
    }
    return obj;
}

QString OAIAccount::getAccountType() const {
    return account_type;
}
void OAIAccount::setAccountType(const QString &account_type) {
    this->account_type = account_type;
    this->m_account_type_isSet = true;
}

bool OAIAccount::is_account_type_Set() const{
    return m_account_type_isSet;
}

bool OAIAccount::is_account_type_Valid() const{
    return m_account_type_isValid;
}

QString OAIAccount::getProfileImage() const {
    return profile_image;
}
void OAIAccount::setProfileImage(const QString &profile_image) {
    this->profile_image = profile_image;
    this->m_profile_image_isSet = true;
}

bool OAIAccount::is_profile_image_Set() const{
    return m_profile_image_isSet;
}

bool OAIAccount::is_profile_image_Valid() const{
    return m_profile_image_isValid;
}

QString OAIAccount::getWebsiteUrl() const {
    return website_url;
}
void OAIAccount::setWebsiteUrl(const QString &website_url) {
    this->website_url = website_url;
    this->m_website_url_isSet = true;
}

bool OAIAccount::is_website_url_Set() const{
    return m_website_url_isSet;
}

bool OAIAccount::is_website_url_Valid() const{
    return m_website_url_isValid;
}

QString OAIAccount::getUsername() const {
    return username;
}
void OAIAccount::setUsername(const QString &username) {
    this->username = username;
    this->m_username_isSet = true;
}

bool OAIAccount::is_username_Set() const{
    return m_username_isSet;
}

bool OAIAccount::is_username_Valid() const{
    return m_username_isValid;
}

bool OAIAccount::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_account_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_profile_image_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_website_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_username_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAccount::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
