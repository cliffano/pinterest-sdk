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

#include "OAIOauthAccessTokenRequestCode_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOauthAccessTokenRequestCode_allOf::OAIOauthAccessTokenRequestCode_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOauthAccessTokenRequestCode_allOf::OAIOauthAccessTokenRequestCode_allOf() {
    this->initializeModel();
}

OAIOauthAccessTokenRequestCode_allOf::~OAIOauthAccessTokenRequestCode_allOf() {}

void OAIOauthAccessTokenRequestCode_allOf::initializeModel() {

    m_code_isSet = false;
    m_code_isValid = false;

    m_redirect_uri_isSet = false;
    m_redirect_uri_isValid = false;
}

void OAIOauthAccessTokenRequestCode_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOauthAccessTokenRequestCode_allOf::fromJsonObject(QJsonObject json) {

    m_code_isValid = ::OpenAPI::fromJsonValue(code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_redirect_uri_isValid = ::OpenAPI::fromJsonValue(redirect_uri, json[QString("redirect_uri")]);
    m_redirect_uri_isSet = !json[QString("redirect_uri")].isNull() && m_redirect_uri_isValid;
}

QString OAIOauthAccessTokenRequestCode_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOauthAccessTokenRequestCode_allOf::asJsonObject() const {
    QJsonObject obj;
    if (m_code_isSet) {
        obj.insert(QString("code"), ::OpenAPI::toJsonValue(code));
    }
    if (m_redirect_uri_isSet) {
        obj.insert(QString("redirect_uri"), ::OpenAPI::toJsonValue(redirect_uri));
    }
    return obj;
}

QString OAIOauthAccessTokenRequestCode_allOf::getCode() const {
    return code;
}
void OAIOauthAccessTokenRequestCode_allOf::setCode(const QString &code) {
    this->code = code;
    this->m_code_isSet = true;
}

bool OAIOauthAccessTokenRequestCode_allOf::is_code_Set() const{
    return m_code_isSet;
}

bool OAIOauthAccessTokenRequestCode_allOf::is_code_Valid() const{
    return m_code_isValid;
}

QString OAIOauthAccessTokenRequestCode_allOf::getRedirectUri() const {
    return redirect_uri;
}
void OAIOauthAccessTokenRequestCode_allOf::setRedirectUri(const QString &redirect_uri) {
    this->redirect_uri = redirect_uri;
    this->m_redirect_uri_isSet = true;
}

bool OAIOauthAccessTokenRequestCode_allOf::is_redirect_uri_Set() const{
    return m_redirect_uri_isSet;
}

bool OAIOauthAccessTokenRequestCode_allOf::is_redirect_uri_Valid() const{
    return m_redirect_uri_isValid;
}

bool OAIOauthAccessTokenRequestCode_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_redirect_uri_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOauthAccessTokenRequestCode_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_code_isValid && m_redirect_uri_isValid && true;
}

} // namespace OpenAPI
