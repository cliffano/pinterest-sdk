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

#include "OAIPinMediaWithVideos.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPinMediaWithVideos::OAIPinMediaWithVideos(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPinMediaWithVideos::OAIPinMediaWithVideos() {
    this->initializeModel();
}

OAIPinMediaWithVideos::~OAIPinMediaWithVideos() {}

void OAIPinMediaWithVideos::initializeModel() {

    m_items_isSet = false;
    m_items_isValid = false;

    m_media_type_isSet = false;
    m_media_type_isValid = false;
}

void OAIPinMediaWithVideos::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPinMediaWithVideos::fromJsonObject(QJsonObject json) {

    m_items_isValid = ::OpenAPI::fromJsonValue(items, json[QString("items")]);
    m_items_isSet = !json[QString("items")].isNull() && m_items_isValid;

    m_media_type_isValid = ::OpenAPI::fromJsonValue(media_type, json[QString("media_type")]);
    m_media_type_isSet = !json[QString("media_type")].isNull() && m_media_type_isValid;
}

QString OAIPinMediaWithVideos::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPinMediaWithVideos::asJsonObject() const {
    QJsonObject obj;
    if (items.size() > 0) {
        obj.insert(QString("items"), ::OpenAPI::toJsonValue(items));
    }
    if (m_media_type_isSet) {
        obj.insert(QString("media_type"), ::OpenAPI::toJsonValue(media_type));
    }
    return obj;
}

QList<OAIVideoMetadata> OAIPinMediaWithVideos::getItems() const {
    return items;
}
void OAIPinMediaWithVideos::setItems(const QList<OAIVideoMetadata> &items) {
    this->items = items;
    this->m_items_isSet = true;
}

bool OAIPinMediaWithVideos::is_items_Set() const{
    return m_items_isSet;
}

bool OAIPinMediaWithVideos::is_items_Valid() const{
    return m_items_isValid;
}

QString OAIPinMediaWithVideos::getMediaType() const {
    return media_type;
}
void OAIPinMediaWithVideos::setMediaType(const QString &media_type) {
    this->media_type = media_type;
    this->m_media_type_isSet = true;
}

bool OAIPinMediaWithVideos::is_media_type_Set() const{
    return m_media_type_isSet;
}

bool OAIPinMediaWithVideos::is_media_type_Valid() const{
    return m_media_type_isValid;
}

bool OAIPinMediaWithVideos::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (items.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_media_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPinMediaWithVideos::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
