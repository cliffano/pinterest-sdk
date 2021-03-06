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

#include "OAIPinMediaWithImage.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPinMediaWithImage::OAIPinMediaWithImage(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPinMediaWithImage::OAIPinMediaWithImage() {
    this->initializeModel();
}

OAIPinMediaWithImage::~OAIPinMediaWithImage() {}

void OAIPinMediaWithImage::initializeModel() {

    m_images_isSet = false;
    m_images_isValid = false;

    m_media_type_isSet = false;
    m_media_type_isValid = false;
}

void OAIPinMediaWithImage::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPinMediaWithImage::fromJsonObject(QJsonObject json) {

    m_images_isValid = ::OpenAPI::fromJsonValue(images, json[QString("images")]);
    m_images_isSet = !json[QString("images")].isNull() && m_images_isValid;

    m_media_type_isValid = ::OpenAPI::fromJsonValue(media_type, json[QString("media_type")]);
    m_media_type_isSet = !json[QString("media_type")].isNull() && m_media_type_isValid;
}

QString OAIPinMediaWithImage::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPinMediaWithImage::asJsonObject() const {
    QJsonObject obj;
    if (images.size() > 0) {
        obj.insert(QString("images"), ::OpenAPI::toJsonValue(images));
    }
    if (m_media_type_isSet) {
        obj.insert(QString("media_type"), ::OpenAPI::toJsonValue(media_type));
    }
    return obj;
}

QMap<QString, OAIImageDetails> OAIPinMediaWithImage::getImages() const {
    return images;
}
void OAIPinMediaWithImage::setImages(const QMap<QString, OAIImageDetails> &images) {
    this->images = images;
    this->m_images_isSet = true;
}

bool OAIPinMediaWithImage::is_images_Set() const{
    return m_images_isSet;
}

bool OAIPinMediaWithImage::is_images_Valid() const{
    return m_images_isValid;
}

QString OAIPinMediaWithImage::getMediaType() const {
    return media_type;
}
void OAIPinMediaWithImage::setMediaType(const QString &media_type) {
    this->media_type = media_type;
    this->m_media_type_isSet = true;
}

bool OAIPinMediaWithImage::is_media_type_Set() const{
    return m_media_type_isSet;
}

bool OAIPinMediaWithImage::is_media_type_Valid() const{
    return m_media_type_isValid;
}

bool OAIPinMediaWithImage::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (images.size() > 0) {
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

bool OAIPinMediaWithImage::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
