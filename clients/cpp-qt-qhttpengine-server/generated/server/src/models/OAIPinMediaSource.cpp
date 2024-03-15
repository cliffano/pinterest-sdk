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

    m_is_standard_isSet = false;
    m_is_standard_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_cover_image_url_isSet = false;
    m_cover_image_url_isValid = false;

    m_cover_image_content_type_isSet = false;
    m_cover_image_content_type_isValid = false;

    m_cover_image_data_isSet = false;
    m_cover_image_data_isValid = false;

    m_media_id_isSet = false;
    m_media_id_isValid = false;

    m_items_isSet = false;
    m_items_isValid = false;

    m_index_isSet = false;
    m_index_isValid = false;

    m_is_affiliate_link_isSet = false;
    m_is_affiliate_link_isValid = false;
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

    m_is_standard_isValid = ::OpenAPI::fromJsonValue(is_standard, json[QString("is_standard")]);
    m_is_standard_isSet = !json[QString("is_standard")].isNull() && m_is_standard_isValid;

    m_url_isValid = ::OpenAPI::fromJsonValue(url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_cover_image_url_isValid = ::OpenAPI::fromJsonValue(cover_image_url, json[QString("cover_image_url")]);
    m_cover_image_url_isSet = !json[QString("cover_image_url")].isNull() && m_cover_image_url_isValid;

    m_cover_image_content_type_isValid = ::OpenAPI::fromJsonValue(cover_image_content_type, json[QString("cover_image_content_type")]);
    m_cover_image_content_type_isSet = !json[QString("cover_image_content_type")].isNull() && m_cover_image_content_type_isValid;

    m_cover_image_data_isValid = ::OpenAPI::fromJsonValue(cover_image_data, json[QString("cover_image_data")]);
    m_cover_image_data_isSet = !json[QString("cover_image_data")].isNull() && m_cover_image_data_isValid;

    m_media_id_isValid = ::OpenAPI::fromJsonValue(media_id, json[QString("media_id")]);
    m_media_id_isSet = !json[QString("media_id")].isNull() && m_media_id_isValid;

    m_items_isValid = ::OpenAPI::fromJsonValue(items, json[QString("items")]);
    m_items_isSet = !json[QString("items")].isNull() && m_items_isValid;

    m_index_isValid = ::OpenAPI::fromJsonValue(index, json[QString("index")]);
    m_index_isSet = !json[QString("index")].isNull() && m_index_isValid;

    m_is_affiliate_link_isValid = ::OpenAPI::fromJsonValue(is_affiliate_link, json[QString("is_affiliate_link")]);
    m_is_affiliate_link_isSet = !json[QString("is_affiliate_link")].isNull() && m_is_affiliate_link_isValid;
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
    if (m_is_standard_isSet) {
        obj.insert(QString("is_standard"), ::OpenAPI::toJsonValue(is_standard));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(url));
    }
    if (m_cover_image_url_isSet) {
        obj.insert(QString("cover_image_url"), ::OpenAPI::toJsonValue(cover_image_url));
    }
    if (m_cover_image_content_type_isSet) {
        obj.insert(QString("cover_image_content_type"), ::OpenAPI::toJsonValue(cover_image_content_type));
    }
    if (m_cover_image_data_isSet) {
        obj.insert(QString("cover_image_data"), ::OpenAPI::toJsonValue(cover_image_data));
    }
    if (m_media_id_isSet) {
        obj.insert(QString("media_id"), ::OpenAPI::toJsonValue(media_id));
    }
    if (items.size() > 0) {
        obj.insert(QString("items"), ::OpenAPI::toJsonValue(items));
    }
    if (m_index_isSet) {
        obj.insert(QString("index"), ::OpenAPI::toJsonValue(index));
    }
    if (m_is_affiliate_link_isSet) {
        obj.insert(QString("is_affiliate_link"), ::OpenAPI::toJsonValue(is_affiliate_link));
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

bool OAIPinMediaSource::isIsStandard() const {
    return is_standard;
}
void OAIPinMediaSource::setIsStandard(const bool &is_standard) {
    this->is_standard = is_standard;
    this->m_is_standard_isSet = true;
}

bool OAIPinMediaSource::is_is_standard_Set() const{
    return m_is_standard_isSet;
}

bool OAIPinMediaSource::is_is_standard_Valid() const{
    return m_is_standard_isValid;
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

QString OAIPinMediaSource::getCoverImageContentType() const {
    return cover_image_content_type;
}
void OAIPinMediaSource::setCoverImageContentType(const QString &cover_image_content_type) {
    this->cover_image_content_type = cover_image_content_type;
    this->m_cover_image_content_type_isSet = true;
}

bool OAIPinMediaSource::is_cover_image_content_type_Set() const{
    return m_cover_image_content_type_isSet;
}

bool OAIPinMediaSource::is_cover_image_content_type_Valid() const{
    return m_cover_image_content_type_isValid;
}

QString OAIPinMediaSource::getCoverImageData() const {
    return cover_image_data;
}
void OAIPinMediaSource::setCoverImageData(const QString &cover_image_data) {
    this->cover_image_data = cover_image_data;
    this->m_cover_image_data_isSet = true;
}

bool OAIPinMediaSource::is_cover_image_data_Set() const{
    return m_cover_image_data_isSet;
}

bool OAIPinMediaSource::is_cover_image_data_Valid() const{
    return m_cover_image_data_isValid;
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

QList<OAIPinMediaSourceImagesURL_items_inner> OAIPinMediaSource::getItems() const {
    return items;
}
void OAIPinMediaSource::setItems(const QList<OAIPinMediaSourceImagesURL_items_inner> &items) {
    this->items = items;
    this->m_items_isSet = true;
}

bool OAIPinMediaSource::is_items_Set() const{
    return m_items_isSet;
}

bool OAIPinMediaSource::is_items_Valid() const{
    return m_items_isValid;
}

qint32 OAIPinMediaSource::getIndex() const {
    return index;
}
void OAIPinMediaSource::setIndex(const qint32 &index) {
    this->index = index;
    this->m_index_isSet = true;
}

bool OAIPinMediaSource::is_index_Set() const{
    return m_index_isSet;
}

bool OAIPinMediaSource::is_index_Valid() const{
    return m_index_isValid;
}

bool OAIPinMediaSource::isIsAffiliateLink() const {
    return is_affiliate_link;
}
void OAIPinMediaSource::setIsAffiliateLink(const bool &is_affiliate_link) {
    this->is_affiliate_link = is_affiliate_link;
    this->m_is_affiliate_link_isSet = true;
}

bool OAIPinMediaSource::is_is_affiliate_link_Set() const{
    return m_is_affiliate_link_isSet;
}

bool OAIPinMediaSource::is_is_affiliate_link_Valid() const{
    return m_is_affiliate_link_isValid;
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

        if (m_is_standard_isSet) {
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

        if (m_cover_image_content_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cover_image_data_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_media_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (items.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_index_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_affiliate_link_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPinMediaSource::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_source_type_isValid && m_content_type_isValid && m_data_isValid && m_url_isValid && m_media_id_isValid && m_items_isValid && true;
}

} // namespace OpenAPI
