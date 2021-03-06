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

#include "OAIOauthAccessTokenResponseCode_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOauthAccessTokenResponseCode_allOf::OAIOauthAccessTokenResponseCode_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOauthAccessTokenResponseCode_allOf::OAIOauthAccessTokenResponseCode_allOf() {
    this->initializeModel();
}

OAIOauthAccessTokenResponseCode_allOf::~OAIOauthAccessTokenResponseCode_allOf() {}

void OAIOauthAccessTokenResponseCode_allOf::initializeModel() {

    m_refresh_token_isSet = false;
    m_refresh_token_isValid = false;

    m_refresh_token_expires_in_isSet = false;
    m_refresh_token_expires_in_isValid = false;
}

void OAIOauthAccessTokenResponseCode_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOauthAccessTokenResponseCode_allOf::fromJsonObject(QJsonObject json) {

    m_refresh_token_isValid = ::OpenAPI::fromJsonValue(refresh_token, json[QString("refresh_token")]);
    m_refresh_token_isSet = !json[QString("refresh_token")].isNull() && m_refresh_token_isValid;

    m_refresh_token_expires_in_isValid = ::OpenAPI::fromJsonValue(refresh_token_expires_in, json[QString("refresh_token_expires_in")]);
    m_refresh_token_expires_in_isSet = !json[QString("refresh_token_expires_in")].isNull() && m_refresh_token_expires_in_isValid;
}

QString OAIOauthAccessTokenResponseCode_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOauthAccessTokenResponseCode_allOf::asJsonObject() const {
    QJsonObject obj;
    if (m_refresh_token_isSet) {
        obj.insert(QString("refresh_token"), ::OpenAPI::toJsonValue(refresh_token));
    }
    if (m_refresh_token_expires_in_isSet) {
        obj.insert(QString("refresh_token_expires_in"), ::OpenAPI::toJsonValue(refresh_token_expires_in));
    }
    return obj;
}

QString OAIOauthAccessTokenResponseCode_allOf::getRefreshToken() const {
    return refresh_token;
}
void OAIOauthAccessTokenResponseCode_allOf::setRefreshToken(const QString &refresh_token) {
    this->refresh_token = refresh_token;
    this->m_refresh_token_isSet = true;
}

bool OAIOauthAccessTokenResponseCode_allOf::is_refresh_token_Set() const{
    return m_refresh_token_isSet;
}

bool OAIOauthAccessTokenResponseCode_allOf::is_refresh_token_Valid() const{
    return m_refresh_token_isValid;
}

qint32 OAIOauthAccessTokenResponseCode_allOf::getRefreshTokenExpiresIn() const {
    return refresh_token_expires_in;
}
void OAIOauthAccessTokenResponseCode_allOf::setRefreshTokenExpiresIn(const qint32 &refresh_token_expires_in) {
    this->refresh_token_expires_in = refresh_token_expires_in;
    this->m_refresh_token_expires_in_isSet = true;
}

bool OAIOauthAccessTokenResponseCode_allOf::is_refresh_token_expires_in_Set() const{
    return m_refresh_token_expires_in_isSet;
}

bool OAIOauthAccessTokenResponseCode_allOf::is_refresh_token_expires_in_Valid() const{
    return m_refresh_token_expires_in_isValid;
}

bool OAIOauthAccessTokenResponseCode_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_refresh_token_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_refresh_token_expires_in_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOauthAccessTokenResponseCode_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_refresh_token_isValid && m_refresh_token_expires_in_isValid && true;
}

} // namespace OpenAPI
