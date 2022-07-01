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

#include "OAIPinMediaSource.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPinMediaSource::OAIPinMediaSource(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPinMediaSource::OAIPinMediaSource() {
    this->initializeModel();
}

OAIPinMediaSource::~OAIPinMediaSource() {}

void OAIPinMediaSource::initializeModel() {

    m_source_type_isSet = false;
    m_source_type_isValid = false;

    m_content_type_isSet = false;
    m_content_type_isValid = false;

    m_data_isSet = false;
    m_data_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_cover_image_url_isSet = false;
    m_cover_image_url_isValid = false;

    m_media_id_isSet = false;
    m_media_id_isValid = false;
}

void OAIPinMediaSource::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPinMediaSource::fromJsonObject(QJsonObject json) {

    m_source_type_isValid = ::OpenAPI::fromJsonValue(source_type, json[QString("source_type")]);
    m_source_type_isSet = !json[QString("source_type")].isNull() && m_source_type_isValid;

    m_content_type_isValid = ::OpenAPI::fromJsonValue(content_type, json[QString("content_type")]);
    m_content_type_isSet = !json[QString("content_type")].isNull() && m_content_type_isValid;

    m_data_isValid = ::OpenAPI::fromJsonValue(data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;

    m_url_isValid = ::OpenAPI::fromJsonValue(url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_cover_image_url_isValid = ::OpenAPI::fromJsonValue(cover_image_url, json[QString("cover_image_url")]);
    m_cover_image_url_isSet = !json[QString("cover_image_url")].isNull() && m_cover_image_url_isValid;

    m_media_id_isValid = ::OpenAPI::fromJsonValue(media_id, json[QString("media_id")]);
    m_media_id_isSet = !json[QString("media_id")].isNull() && m_media_id_isValid;
}

QString OAIPinMediaSource::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPinMediaSource::asJsonObject() const {
    QJsonObject obj;
    if (m_source_type_isSet) {
        obj.insert(QString("source_type"), ::OpenAPI::toJsonValue(source_type));
    }
    if (m_content_type_isSet) {
        obj.insert(QString("content_type"), ::OpenAPI::toJsonValue(content_type));
    }
    if (m_data_isSet) {
        obj.insert(QString("data"), ::OpenAPI::toJsonValue(data));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(url));
    }
    if (m_cover_image_url_isSet) {
        obj.insert(QString("cover_image_url"), ::OpenAPI::toJsonValue(cover_image_url));
    }
    if (m_media_id_isSet) {
        obj.insert(QString("media_id"), ::OpenAPI::toJsonValue(media_id));
    }
    return obj;
}

QString OAIPinMediaSource::getSourceType() const {
    return source_type;
}
void OAIPinMediaSource::setSourceType(const QString &source_type) {
    this->source_type = source_type;
    this->m_source_type_isSet = true;
}

bool OAIPinMediaSource::is_source_type_Set() const{
    return m_source_type_isSet;
}

bool OAIPinMediaSource::is_source_type_Valid() const{
    return m_source_type_isValid;
}

QString OAIPinMediaSource::getContentType() const {
    return content_type;
}
void OAIPinMediaSource::setContentType(const QString &content_type) {
    this->content_type = content_type;
    this->m_content_type_isSet = true;
}

bool OAIPinMediaSource::is_content_type_Set() const{
    return m_content_type_isSet;
}

bool OAIPinMediaSource::is_content_type_Valid() const{
    return m_content_type_isValid;
}

QString OAIPinMediaSource::getData() const {
    return data;
}
void OAIPinMediaSource::setData(const QString &data) {
    this->data = data;
    this->m_data_isSet = true;
}

bool OAIPinMediaSource::is_data_Set() const{
    return m_data_isSet;
}

bool OAIPinMediaSource::is_data_Valid() const{
    return m_data_isValid;
}

QString OAIPinMediaSource::getUrl() const {
    return url;
}
void OAIPinMediaSource::setUrl(const QString &url) {
    this->url = url;
    this->m_url_isSet = true;
}

bool OAIPinMediaSource::is_url_Set() const{
    return m_url_isSet;
}

bool OAIPinMediaSource::is_url_Valid() const{
    return m_url_isValid;
}

QString OAIPinMediaSource::getCoverImageUrl() const {
    return cover_image_url;
}
void OAIPinMediaSource::setCoverImageUrl(const QString &cover_image_url) {
    this->cover_image_url = cover_image_url;
    this->m_cover_image_url_isSet = true;
}

bool OAIPinMediaSource::is_cover_image_url_Set() const{
    return m_cover_image_url_isSet;
}

bool OAIPinMediaSource::is_cover_image_url_Valid() const{
    return m_cover_image_url_isValid;
}

QString OAIPinMediaSource::getMediaId() const {
    return media_id;
}
void OAIPinMediaSource::setMediaId(const QString &media_id) {
    this->media_id = media_id;
    this->m_media_id_isSet = true;
}

bool OAIPinMediaSource::is_media_id_Set() const{
    return m_media_id_isSet;
}

bool OAIPinMediaSource::is_media_id_Valid() const{
    return m_media_id_isValid;
}

bool OAIPinMediaSource::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_source_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_content_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_data_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cover_image_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_media_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPinMediaSource::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_source_type_isValid && m_content_type_isValid && m_data_isValid && m_url_isValid && m_cover_image_url_isValid && m_media_id_isValid && true;
}

} // namespace OpenAPI
