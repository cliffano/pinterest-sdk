/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIKeywordUpdateBody.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIKeywordUpdateBody::OAIKeywordUpdateBody(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIKeywordUpdateBody::OAIKeywordUpdateBody() {
    this->initializeModel();
}

OAIKeywordUpdateBody::~OAIKeywordUpdateBody() {}

void OAIKeywordUpdateBody::initializeModel() {

    m_keywords_isSet = false;
    m_keywords_isValid = false;
}

void OAIKeywordUpdateBody::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIKeywordUpdateBody::fromJsonObject(QJsonObject json) {

    m_keywords_isValid = ::OpenAPI::fromJsonValue(keywords, json[QString("keywords")]);
    m_keywords_isSet = !json[QString("keywords")].isNull() && m_keywords_isValid;
}

QString OAIKeywordUpdateBody::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIKeywordUpdateBody::asJsonObject() const {
    QJsonObject obj;
    if (keywords.size() > 0) {
        obj.insert(QString("keywords"), ::OpenAPI::toJsonValue(keywords));
    }
    return obj;
}

QList<OAIKeywordUpdate> OAIKeywordUpdateBody::getKeywords() const {
    return keywords;
}
void OAIKeywordUpdateBody::setKeywords(const QList<OAIKeywordUpdate> &keywords) {
    this->keywords = keywords;
    this->m_keywords_isSet = true;
}

bool OAIKeywordUpdateBody::is_keywords_Set() const{
    return m_keywords_isSet;
}

bool OAIKeywordUpdateBody::is_keywords_Valid() const{
    return m_keywords_isValid;
}

bool OAIKeywordUpdateBody::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (keywords.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIKeywordUpdateBody::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_keywords_isValid && true;
}

} // namespace OpenAPI
