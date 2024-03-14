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

#include "OAIKeywordsResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIKeywordsResponse::OAIKeywordsResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIKeywordsResponse::OAIKeywordsResponse() {
    this->initializeModel();
}

OAIKeywordsResponse::~OAIKeywordsResponse() {}

void OAIKeywordsResponse::initializeModel() {

    m_errors_isSet = false;
    m_errors_isValid = false;

    m_keywords_isSet = false;
    m_keywords_isValid = false;
}

void OAIKeywordsResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIKeywordsResponse::fromJsonObject(QJsonObject json) {

    m_errors_isValid = ::OpenAPI::fromJsonValue(errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;

    m_keywords_isValid = ::OpenAPI::fromJsonValue(keywords, json[QString("keywords")]);
    m_keywords_isSet = !json[QString("keywords")].isNull() && m_keywords_isValid;
}

QString OAIKeywordsResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIKeywordsResponse::asJsonObject() const {
    QJsonObject obj;
    if (errors.size() > 0) {
        obj.insert(QString("errors"), ::OpenAPI::toJsonValue(errors));
    }
    if (keywords.size() > 0) {
        obj.insert(QString("keywords"), ::OpenAPI::toJsonValue(keywords));
    }
    return obj;
}

QList<OAIKeywordError> OAIKeywordsResponse::getErrors() const {
    return errors;
}
void OAIKeywordsResponse::setErrors(const QList<OAIKeywordError> &errors) {
    this->errors = errors;
    this->m_errors_isSet = true;
}

bool OAIKeywordsResponse::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAIKeywordsResponse::is_errors_Valid() const{
    return m_errors_isValid;
}

QList<OAIKeyword> OAIKeywordsResponse::getKeywords() const {
    return keywords;
}
void OAIKeywordsResponse::setKeywords(const QList<OAIKeyword> &keywords) {
    this->keywords = keywords;
    this->m_keywords_isSet = true;
}

bool OAIKeywordsResponse::is_keywords_Set() const{
    return m_keywords_isSet;
}

bool OAIKeywordsResponse::is_keywords_Valid() const{
    return m_keywords_isValid;
}

bool OAIKeywordsResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (errors.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (keywords.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIKeywordsResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI