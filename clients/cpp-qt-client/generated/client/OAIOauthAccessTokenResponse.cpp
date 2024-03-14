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

#include "OAIOauthAccessTokenResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOauthAccessTokenResponse::OAIOauthAccessTokenResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOauthAccessTokenResponse::OAIOauthAccessTokenResponse() {
    this->initializeModel();
}

OAIOauthAccessTokenResponse::~OAIOauthAccessTokenResponse() {}

void OAIOauthAccessTokenResponse::initializeModel() {

    m_response_type_isSet = false;
    m_response_type_isValid = false;

    m_access_token_isSet = false;
    m_access_token_isValid = false;

    m_token_type_isSet = false;
    m_token_type_isValid = false;

    m_expires_in_isSet = false;
    m_expires_in_isValid = false;

    m_scope_isSet = false;
    m_scope_isValid = false;
}

void OAIOauthAccessTokenResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOauthAccessTokenResponse::fromJsonObject(QJsonObject json) {

    m_response_type_isValid = ::OpenAPI::fromJsonValue(m_response_type, json[QString("response_type")]);
    m_response_type_isSet = !json[QString("response_type")].isNull() && m_response_type_isValid;

    m_access_token_isValid = ::OpenAPI::fromJsonValue(m_access_token, json[QString("access_token")]);
    m_access_token_isSet = !json[QString("access_token")].isNull() && m_access_token_isValid;

    m_token_type_isValid = ::OpenAPI::fromJsonValue(m_token_type, json[QString("token_type")]);
    m_token_type_isSet = !json[QString("token_type")].isNull() && m_token_type_isValid;

    m_expires_in_isValid = ::OpenAPI::fromJsonValue(m_expires_in, json[QString("expires_in")]);
    m_expires_in_isSet = !json[QString("expires_in")].isNull() && m_expires_in_isValid;

    m_scope_isValid = ::OpenAPI::fromJsonValue(m_scope, json[QString("scope")]);
    m_scope_isSet = !json[QString("scope")].isNull() && m_scope_isValid;
}

QString OAIOauthAccessTokenResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOauthAccessTokenResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_response_type_isSet) {
        obj.insert(QString("response_type"), ::OpenAPI::toJsonValue(m_response_type));
    }
    if (m_access_token_isSet) {
        obj.insert(QString("access_token"), ::OpenAPI::toJsonValue(m_access_token));
    }
    if (m_token_type_isSet) {
        obj.insert(QString("token_type"), ::OpenAPI::toJsonValue(m_token_type));
    }
    if (m_expires_in_isSet) {
        obj.insert(QString("expires_in"), ::OpenAPI::toJsonValue(m_expires_in));
    }
    if (m_scope_isSet) {
        obj.insert(QString("scope"), ::OpenAPI::toJsonValue(m_scope));
    }
    return obj;
}

QString OAIOauthAccessTokenResponse::getResponseType() const {
    return m_response_type;
}
void OAIOauthAccessTokenResponse::setResponseType(const QString &response_type) {
    m_response_type = response_type;
    m_response_type_isSet = true;
}

bool OAIOauthAccessTokenResponse::is_response_type_Set() const{
    return m_response_type_isSet;
}

bool OAIOauthAccessTokenResponse::is_response_type_Valid() const{
    return m_response_type_isValid;
}

QString OAIOauthAccessTokenResponse::getAccessToken() const {
    return m_access_token;
}
void OAIOauthAccessTokenResponse::setAccessToken(const QString &access_token) {
    m_access_token = access_token;
    m_access_token_isSet = true;
}

bool OAIOauthAccessTokenResponse::is_access_token_Set() const{
    return m_access_token_isSet;
}

bool OAIOauthAccessTokenResponse::is_access_token_Valid() const{
    return m_access_token_isValid;
}

QString OAIOauthAccessTokenResponse::getTokenType() const {
    return m_token_type;
}
void OAIOauthAccessTokenResponse::setTokenType(const QString &token_type) {
    m_token_type = token_type;
    m_token_type_isSet = true;
}

bool OAIOauthAccessTokenResponse::is_token_type_Set() const{
    return m_token_type_isSet;
}

bool OAIOauthAccessTokenResponse::is_token_type_Valid() const{
    return m_token_type_isValid;
}

qint32 OAIOauthAccessTokenResponse::getExpiresIn() const {
    return m_expires_in;
}
void OAIOauthAccessTokenResponse::setExpiresIn(const qint32 &expires_in) {
    m_expires_in = expires_in;
    m_expires_in_isSet = true;
}

bool OAIOauthAccessTokenResponse::is_expires_in_Set() const{
    return m_expires_in_isSet;
}

bool OAIOauthAccessTokenResponse::is_expires_in_Valid() const{
    return m_expires_in_isValid;
}

QString OAIOauthAccessTokenResponse::getScope() const {
    return m_scope;
}
void OAIOauthAccessTokenResponse::setScope(const QString &scope) {
    m_scope = scope;
    m_scope_isSet = true;
}

bool OAIOauthAccessTokenResponse::is_scope_Set() const{
    return m_scope_isSet;
}

bool OAIOauthAccessTokenResponse::is_scope_Valid() const{
    return m_scope_isValid;
}

bool OAIOauthAccessTokenResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_response_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_access_token_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_token_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expires_in_isSet) {
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

bool OAIOauthAccessTokenResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_access_token_isValid && m_token_type_isValid && m_expires_in_isValid && m_scope_isValid && true;
}

} // namespace OpenAPI
