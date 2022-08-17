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

#include "OAIPinMedia.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPinMedia::OAIPinMedia(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPinMedia::OAIPinMedia() {
    this->initializeModel();
}

OAIPinMedia::~OAIPinMedia() {}

void OAIPinMedia::initializeModel() {

    m_media_type_isSet = false;
    m_media_type_isValid = false;
}

void OAIPinMedia::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPinMedia::fromJsonObject(QJsonObject json) {

    m_media_type_isValid = ::OpenAPI::fromJsonValue(media_type, json[QString("media_type")]);
    m_media_type_isSet = !json[QString("media_type")].isNull() && m_media_type_isValid;
}

QString OAIPinMedia::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPinMedia::asJsonObject() const {
    QJsonObject obj;
    if (m_media_type_isSet) {
        obj.insert(QString("media_type"), ::OpenAPI::toJsonValue(media_type));
    }
    return obj;
}

QString OAIPinMedia::getMediaType() const {
    return media_type;
}
void OAIPinMedia::setMediaType(const QString &media_type) {
    this->media_type = media_type;
    this->m_media_type_isSet = true;
}

bool OAIPinMedia::is_media_type_Set() const{
    return m_media_type_isSet;
}

bool OAIPinMedia::is_media_type_Valid() const{
    return m_media_type_isValid;
}

bool OAIPinMedia::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_media_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPinMedia::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
