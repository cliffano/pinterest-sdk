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

#include "OAIOauthAccessTokenRequestRefresh.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOauthAccessTokenRequestRefresh::OAIOauthAccessTokenRequestRefresh(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOauthAccessTokenRequestRefresh::OAIOauthAccessTokenRequestRefresh() {
    this->initializeModel();
}

OAIOauthAccessTokenRequestRefresh::~OAIOauthAccessTokenRequestRefresh() {}

void OAIOauthAccessTokenRequestRefresh::initializeModel() {

    m_grant_type_isSet = false;
    m_grant_type_isValid = false;

    m_refresh_token_isSet = false;
    m_refresh_token_isValid = false;

    m_scope_isSet = false;
    m_scope_isValid = false;
}

void OAIOauthAccessTokenRequestRefresh::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOauthAccessTokenRequestRefresh::fromJsonObject(QJsonObject json) {

    m_grant_type_isValid = ::OpenAPI::fromJsonValue(grant_type, json[QString("grant_type")]);
    m_grant_type_isSet = !json[QString("grant_type")].isNull() && m_grant_type_isValid;

    m_refresh_token_isValid = ::OpenAPI::fromJsonValue(refresh_token, json[QString("refresh_token")]);
    m_refresh_token_isSet = !json[QString("refresh_token")].isNull() && m_refresh_token_isValid;

    m_scope_isValid = ::OpenAPI::fromJsonValue(scope, json[QString("scope")]);
    m_scope_isSet = !json[QString("scope")].isNull() && m_scope_isValid;
}

QString OAIOauthAccessTokenRequestRefresh::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOauthAccessTokenRequestRefresh::asJsonObject() const {
    QJsonObject obj;
    if (m_grant_type_isSet) {
        obj.insert(QString("grant_type"), ::OpenAPI::toJsonValue(grant_type));
    }
    if (m_refresh_token_isSet) {
        obj.insert(QString("refresh_token"), ::OpenAPI::toJsonValue(refresh_token));
    }
    if (m_scope_isSet) {
        obj.insert(QString("scope"), ::OpenAPI::toJsonValue(scope));
    }
    return obj;
}

QString OAIOauthAccessTokenRequestRefresh::getGrantType() const {
    return grant_type;
}
void OAIOauthAccessTokenRequestRefresh::setGrantType(const QString &grant_type) {
    this->grant_type = grant_type;
    this->m_grant_type_isSet = true;
}

bool OAIOauthAccessTokenRequestRefresh::is_grant_type_Set() const{
    return m_grant_type_isSet;
}

bool OAIOauthAccessTokenRequestRefresh::is_grant_type_Valid() const{
    return m_grant_type_isValid;
}

QString OAIOauthAccessTokenRequestRefresh::getRefreshToken() const {
    return refresh_token;
}
void OAIOauthAccessTokenRequestRefresh::setRefreshToken(const QString &refresh_token) {
    this->refresh_token = refresh_token;
    this->m_refresh_token_isSet = true;
}

bool OAIOauthAccessTokenRequestRefresh::is_refresh_token_Set() const{
    return m_refresh_token_isSet;
}

bool OAIOauthAccessTokenRequestRefresh::is_refresh_token_Valid() const{
    return m_refresh_token_isValid;
}

QString OAIOauthAccessTokenRequestRefresh::getScope() const {
    return scope;
}
void OAIOauthAccessTokenRequestRefresh::setScope(const QString &scope) {
    this->scope = scope;
    this->m_scope_isSet = true;
}

bool OAIOauthAccessTokenRequestRefresh::is_scope_Set() const{
    return m_scope_isSet;
}

bool OAIOauthAccessTokenRequestRefresh::is_scope_Valid() const{
    return m_scope_isValid;
}

bool OAIOauthAccessTokenRequestRefresh::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_grant_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_refresh_token_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_scope_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOauthAccessTokenRequestRefresh::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_grant_type_isValid && m_refresh_token_isValid && true;
}

} // namespace OpenAPI
