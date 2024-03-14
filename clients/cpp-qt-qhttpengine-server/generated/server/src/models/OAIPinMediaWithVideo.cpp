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

#include "OAIPinMediaWithVideo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPinMediaWithVideo::OAIPinMediaWithVideo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPinMediaWithVideo::OAIPinMediaWithVideo() {
    this->initializeModel();
}

OAIPinMediaWithVideo::~OAIPinMediaWithVideo() {}

void OAIPinMediaWithVideo::initializeModel() {

    m_media_type_isSet = false;
    m_media_type_isValid = false;

    m_images_isSet = false;
    m_images_isValid = false;

    m_cover_image_url_isSet = false;
    m_cover_image_url_isValid = false;

    m_duration_isSet = false;
    m_duration_isValid = false;

    m_height_isSet = false;
    m_height_isValid = false;

    m_width_isSet = false;
    m_width_isValid = false;
}

void OAIPinMediaWithVideo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPinMediaWithVideo::fromJsonObject(QJsonObject json) {

    m_media_type_isValid = ::OpenAPI::fromJsonValue(media_type, json[QString("media_type")]);
    m_media_type_isSet = !json[QString("media_type")].isNull() && m_media_type_isValid;

    m_images_isValid = ::OpenAPI::fromJsonValue(images, json[QString("images")]);
    m_images_isSet = !json[QString("images")].isNull() && m_images_isValid;

    m_cover_image_url_isValid = ::OpenAPI::fromJsonValue(cover_image_url, json[QString("cover_image_url")]);
    m_cover_image_url_isSet = !json[QString("cover_image_url")].isNull() && m_cover_image_url_isValid;

    m_duration_isValid = ::OpenAPI::fromJsonValue(duration, json[QString("duration")]);
    m_duration_isSet = !json[QString("duration")].isNull() && m_duration_isValid;

    m_height_isValid = ::OpenAPI::fromJsonValue(height, json[QString("height")]);
    m_height_isSet = !json[QString("height")].isNull() && m_height_isValid;

    m_width_isValid = ::OpenAPI::fromJsonValue(width, json[QString("width")]);
    m_width_isSet = !json[QString("width")].isNull() && m_width_isValid;
}

QString OAIPinMediaWithVideo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPinMediaWithVideo::asJsonObject() const {
    QJsonObject obj;
    if (m_media_type_isSet) {
        obj.insert(QString("media_type"), ::OpenAPI::toJsonValue(media_type));
    }
    if (images.size() > 0) {
        obj.insert(QString("images"), ::OpenAPI::toJsonValue(images));
    }
    if (m_cover_image_url_isSet) {
        obj.insert(QString("cover_image_url"), ::OpenAPI::toJsonValue(cover_image_url));
    }
    if (m_duration_isSet) {
        obj.insert(QString("duration"), ::OpenAPI::toJsonValue(duration));
    }
    if (m_height_isSet) {
        obj.insert(QString("height"), ::OpenAPI::toJsonValue(height));
    }
    if (m_width_isSet) {
        obj.insert(QString("width"), ::OpenAPI::toJsonValue(width));
    }
    return obj;
}

QString OAIPinMediaWithVideo::getMediaType() const {
    return media_type;
}
void OAIPinMediaWithVideo::setMediaType(const QString &media_type) {
    this->media_type = media_type;
    this->m_media_type_isSet = true;
}

bool OAIPinMediaWithVideo::is_media_type_Set() const{
    return m_media_type_isSet;
}

bool OAIPinMediaWithVideo::is_media_type_Valid() const{
    return m_media_type_isValid;
}

QMap<QString, OAIImageDetails> OAIPinMediaWithVideo::getImages() const {
    return images;
}
void OAIPinMediaWithVideo::setImages(const QMap<QString, OAIImageDetails> &images) {
    this->images = images;
    this->m_images_isSet = true;
}

bool OAIPinMediaWithVideo::is_images_Set() const{
    return m_images_isSet;
}

bool OAIPinMediaWithVideo::is_images_Valid() const{
    return m_images_isValid;
}

QString OAIPinMediaWithVideo::getCoverImageUrl() const {
    return cover_image_url;
}
void OAIPinMediaWithVideo::setCoverImageUrl(const QString &cover_image_url) {
    this->cover_image_url = cover_image_url;
    this->m_cover_image_url_isSet = true;
}

bool OAIPinMediaWithVideo::is_cover_image_url_Set() const{
    return m_cover_image_url_isSet;
}

bool OAIPinMediaWithVideo::is_cover_image_url_Valid() const{
    return m_cover_image_url_isValid;
}

double OAIPinMediaWithVideo::getDuration() const {
    return duration;
}
void OAIPinMediaWithVideo::setDuration(const double &duration) {
    this->duration = duration;
    this->m_duration_isSet = true;
}

bool OAIPinMediaWithVideo::is_duration_Set() const{
    return m_duration_isSet;
}

bool OAIPinMediaWithVideo::is_duration_Valid() const{
    return m_duration_isValid;
}

qint32 OAIPinMediaWithVideo::getHeight() const {
    return height;
}
void OAIPinMediaWithVideo::setHeight(const qint32 &height) {
    this->height = height;
    this->m_height_isSet = true;
}

bool OAIPinMediaWithVideo::is_height_Set() const{
    return m_height_isSet;
}

bool OAIPinMediaWithVideo::is_height_Valid() const{
    return m_height_isValid;
}

qint32 OAIPinMediaWithVideo::getWidth() const {
    return width;
}
void OAIPinMediaWithVideo::setWidth(const qint32 &width) {
    this->width = width;
    this->m_width_isSet = true;
}

bool OAIPinMediaWithVideo::is_width_Set() const{
    return m_width_isSet;
}

bool OAIPinMediaWithVideo::is_width_Valid() const{
    return m_width_isValid;
}

bool OAIPinMediaWithVideo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_media_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (images.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_cover_image_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_width_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPinMediaWithVideo::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
