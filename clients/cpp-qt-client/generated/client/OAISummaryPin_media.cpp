/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAISummaryPin_media.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISummaryPin_media::OAISummaryPin_media(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISummaryPin_media::OAISummaryPin_media() {
    this->initializeModel();
}

OAISummaryPin_media::~OAISummaryPin_media() {}

void OAISummaryPin_media::initializeModel() {

    m_media_type_isSet = false;
    m_media_type_isValid = false;
}

void OAISummaryPin_media::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISummaryPin_media::fromJsonObject(QJsonObject json) {

    m_media_type_isValid = ::OpenAPI::fromJsonValue(m_media_type, json[QString("media_type")]);
    m_media_type_isSet = !json[QString("media_type")].isNull() && m_media_type_isValid;
}

QString OAISummaryPin_media::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISummaryPin_media::asJsonObject() const {
    QJsonObject obj;
    if (m_media_type_isSet) {
        obj.insert(QString("media_type"), ::OpenAPI::toJsonValue(m_media_type));
    }
    return obj;
}

QString OAISummaryPin_media::getMediaType() const {
    return m_media_type;
}
void OAISummaryPin_media::setMediaType(const QString &media_type) {
    m_media_type = media_type;
    m_media_type_isSet = true;
}

bool OAISummaryPin_media::is_media_type_Set() const{
    return m_media_type_isSet;
}

bool OAISummaryPin_media::is_media_type_Valid() const{
    return m_media_type_isValid;
}

bool OAISummaryPin_media::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_media_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISummaryPin_media::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
