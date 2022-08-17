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

#include "OAIPinMediaSourceImageURL.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPinMediaSourceImageURL::OAIPinMediaSourceImageURL(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPinMediaSourceImageURL::OAIPinMediaSourceImageURL() {
    this->initializeModel();
}

OAIPinMediaSourceImageURL::~OAIPinMediaSourceImageURL() {}

void OAIPinMediaSourceImageURL::initializeModel() {

    m_source_type_isSet = false;
    m_source_type_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;
}

void OAIPinMediaSourceImageURL::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPinMediaSourceImageURL::fromJsonObject(QJsonObject json) {

    m_source_type_isValid = ::OpenAPI::fromJsonValue(source_type, json[QString("source_type")]);
    m_source_type_isSet = !json[QString("source_type")].isNull() && m_source_type_isValid;

    m_url_isValid = ::OpenAPI::fromJsonValue(url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;
}

QString OAIPinMediaSourceImageURL::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPinMediaSourceImageURL::asJsonObject() const {
    QJsonObject obj;
    if (m_source_type_isSet) {
        obj.insert(QString("source_type"), ::OpenAPI::toJsonValue(source_type));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(url));
    }
    return obj;
}

QString OAIPinMediaSourceImageURL::getSourceType() const {
    return source_type;
}
void OAIPinMediaSourceImageURL::setSourceType(const QString &source_type) {
    this->source_type = source_type;
    this->m_source_type_isSet = true;
}

bool OAIPinMediaSourceImageURL::is_source_type_Set() const{
    return m_source_type_isSet;
}

bool OAIPinMediaSourceImageURL::is_source_type_Valid() const{
    return m_source_type_isValid;
}

QString OAIPinMediaSourceImageURL::getUrl() const {
    return url;
}
void OAIPinMediaSourceImageURL::setUrl(const QString &url) {
    this->url = url;
    this->m_url_isSet = true;
}

bool OAIPinMediaSourceImageURL::is_url_Set() const{
    return m_url_isSet;
}

bool OAIPinMediaSourceImageURL::is_url_Valid() const{
    return m_url_isValid;
}

bool OAIPinMediaSourceImageURL::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_source_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPinMediaSourceImageURL::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_source_type_isValid && m_url_isValid && true;
}

} // namespace OpenAPI
