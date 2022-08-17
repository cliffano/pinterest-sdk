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

#include "OAIAdCreateRequest_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAdCreateRequest_inner::OAIAdCreateRequest_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAdCreateRequest_inner::OAIAdCreateRequest_inner() {
    this->initializeModel();
}

OAIAdCreateRequest_inner::~OAIAdCreateRequest_inner() {}

void OAIAdCreateRequest_inner::initializeModel() {

    m_ad_group_id_isSet = false;
    m_ad_group_id_isValid = false;

    m_android_deep_link_isSet = false;
    m_android_deep_link_isValid = false;

    m_carousel_android_deep_links_isSet = false;
    m_carousel_android_deep_links_isValid = false;

    m_carousel_destination_urls_isSet = false;
    m_carousel_destination_urls_isValid = false;

    m_carousel_ios_deep_links_isSet = false;
    m_carousel_ios_deep_links_isValid = false;

    m_click_tracking_url_isSet = false;
    m_click_tracking_url_isValid = false;

    m_creative_type_isSet = false;
    m_creative_type_isValid = false;

    m_destination_url_isSet = false;
    m_destination_url_isValid = false;

    m_ios_deep_link_isSet = false;
    m_ios_deep_link_isValid = false;

    m_is_pin_deleted_isSet = false;
    m_is_pin_deleted_isValid = false;

    m_is_removable_isSet = false;
    m_is_removable_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_pin_id_isSet = false;
    m_pin_id_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_tracking_urls_isSet = false;
    m_tracking_urls_isValid = false;

    m_view_tracking_url_isSet = false;
    m_view_tracking_url_isValid = false;
}

void OAIAdCreateRequest_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAdCreateRequest_inner::fromJsonObject(QJsonObject json) {

    m_ad_group_id_isValid = ::OpenAPI::fromJsonValue(ad_group_id, json[QString("ad_group_id")]);
    m_ad_group_id_isSet = !json[QString("ad_group_id")].isNull() && m_ad_group_id_isValid;

    m_android_deep_link_isValid = ::OpenAPI::fromJsonValue(android_deep_link, json[QString("android_deep_link")]);
    m_android_deep_link_isSet = !json[QString("android_deep_link")].isNull() && m_android_deep_link_isValid;

    m_carousel_android_deep_links_isValid = ::OpenAPI::fromJsonValue(carousel_android_deep_links, json[QString("carousel_android_deep_links")]);
    m_carousel_android_deep_links_isSet = !json[QString("carousel_android_deep_links")].isNull() && m_carousel_android_deep_links_isValid;

    m_carousel_destination_urls_isValid = ::OpenAPI::fromJsonValue(carousel_destination_urls, json[QString("carousel_destination_urls")]);
    m_carousel_destination_urls_isSet = !json[QString("carousel_destination_urls")].isNull() && m_carousel_destination_urls_isValid;

    m_carousel_ios_deep_links_isValid = ::OpenAPI::fromJsonValue(carousel_ios_deep_links, json[QString("carousel_ios_deep_links")]);
    m_carousel_ios_deep_links_isSet = !json[QString("carousel_ios_deep_links")].isNull() && m_carousel_ios_deep_links_isValid;

    m_click_tracking_url_isValid = ::OpenAPI::fromJsonValue(click_tracking_url, json[QString("click_tracking_url")]);
    m_click_tracking_url_isSet = !json[QString("click_tracking_url")].isNull() && m_click_tracking_url_isValid;

    m_creative_type_isValid = ::OpenAPI::fromJsonValue(creative_type, json[QString("creative_type")]);
    m_creative_type_isSet = !json[QString("creative_type")].isNull() && m_creative_type_isValid;

    m_destination_url_isValid = ::OpenAPI::fromJsonValue(destination_url, json[QString("destination_url")]);
    m_destination_url_isSet = !json[QString("destination_url")].isNull() && m_destination_url_isValid;

    m_ios_deep_link_isValid = ::OpenAPI::fromJsonValue(ios_deep_link, json[QString("ios_deep_link")]);
    m_ios_deep_link_isSet = !json[QString("ios_deep_link")].isNull() && m_ios_deep_link_isValid;

    m_is_pin_deleted_isValid = ::OpenAPI::fromJsonValue(is_pin_deleted, json[QString("is_pin_deleted")]);
    m_is_pin_deleted_isSet = !json[QString("is_pin_deleted")].isNull() && m_is_pin_deleted_isValid;

    m_is_removable_isValid = ::OpenAPI::fromJsonValue(is_removable, json[QString("is_removable")]);
    m_is_removable_isSet = !json[QString("is_removable")].isNull() && m_is_removable_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_pin_id_isValid = ::OpenAPI::fromJsonValue(pin_id, json[QString("pin_id")]);
    m_pin_id_isSet = !json[QString("pin_id")].isNull() && m_pin_id_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_tracking_urls_isValid = ::OpenAPI::fromJsonValue(tracking_urls, json[QString("tracking_urls")]);
    m_tracking_urls_isSet = !json[QString("tracking_urls")].isNull() && m_tracking_urls_isValid;

    m_view_tracking_url_isValid = ::OpenAPI::fromJsonValue(view_tracking_url, json[QString("view_tracking_url")]);
    m_view_tracking_url_isSet = !json[QString("view_tracking_url")].isNull() && m_view_tracking_url_isValid;
}

QString OAIAdCreateRequest_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAdCreateRequest_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_ad_group_id_isSet) {
        obj.insert(QString("ad_group_id"), ::OpenAPI::toJsonValue(ad_group_id));
    }
    if (m_android_deep_link_isSet) {
        obj.insert(QString("android_deep_link"), ::OpenAPI::toJsonValue(android_deep_link));
    }
    if (carousel_android_deep_links.size() > 0) {
        obj.insert(QString("carousel_android_deep_links"), ::OpenAPI::toJsonValue(carousel_android_deep_links));
    }
    if (carousel_destination_urls.size() > 0) {
        obj.insert(QString("carousel_destination_urls"), ::OpenAPI::toJsonValue(carousel_destination_urls));
    }
    if (carousel_ios_deep_links.size() > 0) {
        obj.insert(QString("carousel_ios_deep_links"), ::OpenAPI::toJsonValue(carousel_ios_deep_links));
    }
    if (m_click_tracking_url_isSet) {
        obj.insert(QString("click_tracking_url"), ::OpenAPI::toJsonValue(click_tracking_url));
    }
    if (creative_type.isSet()) {
        obj.insert(QString("creative_type"), ::OpenAPI::toJsonValue(creative_type));
    }
    if (m_destination_url_isSet) {
        obj.insert(QString("destination_url"), ::OpenAPI::toJsonValue(destination_url));
    }
    if (m_ios_deep_link_isSet) {
        obj.insert(QString("ios_deep_link"), ::OpenAPI::toJsonValue(ios_deep_link));
    }
    if (m_is_pin_deleted_isSet) {
        obj.insert(QString("is_pin_deleted"), ::OpenAPI::toJsonValue(is_pin_deleted));
    }
    if (m_is_removable_isSet) {
        obj.insert(QString("is_removable"), ::OpenAPI::toJsonValue(is_removable));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_pin_id_isSet) {
        obj.insert(QString("pin_id"), ::OpenAPI::toJsonValue(pin_id));
    }
    if (status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (tracking_urls.isSet()) {
        obj.insert(QString("tracking_urls"), ::OpenAPI::toJsonValue(tracking_urls));
    }
    if (m_view_tracking_url_isSet) {
        obj.insert(QString("view_tracking_url"), ::OpenAPI::toJsonValue(view_tracking_url));
    }
    return obj;
}

QString OAIAdCreateRequest_inner::getAdGroupId() const {
    return ad_group_id;
}
void OAIAdCreateRequest_inner::setAdGroupId(const QString &ad_group_id) {
    this->ad_group_id = ad_group_id;
    this->m_ad_group_id_isSet = true;
}

bool OAIAdCreateRequest_inner::is_ad_group_id_Set() const{
    return m_ad_group_id_isSet;
}

bool OAIAdCreateRequest_inner::is_ad_group_id_Valid() const{
    return m_ad_group_id_isValid;
}

QString OAIAdCreateRequest_inner::getAndroidDeepLink() const {
    return android_deep_link;
}
void OAIAdCreateRequest_inner::setAndroidDeepLink(const QString &android_deep_link) {
    this->android_deep_link = android_deep_link;
    this->m_android_deep_link_isSet = true;
}

bool OAIAdCreateRequest_inner::is_android_deep_link_Set() const{
    return m_android_deep_link_isSet;
}

bool OAIAdCreateRequest_inner::is_android_deep_link_Valid() const{
    return m_android_deep_link_isValid;
}

QList<QString> OAIAdCreateRequest_inner::getCarouselAndroidDeepLinks() const {
    return carousel_android_deep_links;
}
void OAIAdCreateRequest_inner::setCarouselAndroidDeepLinks(const QList<QString> &carousel_android_deep_links) {
    this->carousel_android_deep_links = carousel_android_deep_links;
    this->m_carousel_android_deep_links_isSet = true;
}

bool OAIAdCreateRequest_inner::is_carousel_android_deep_links_Set() const{
    return m_carousel_android_deep_links_isSet;
}

bool OAIAdCreateRequest_inner::is_carousel_android_deep_links_Valid() const{
    return m_carousel_android_deep_links_isValid;
}

QList<QString> OAIAdCreateRequest_inner::getCarouselDestinationUrls() const {
    return carousel_destination_urls;
}
void OAIAdCreateRequest_inner::setCarouselDestinationUrls(const QList<QString> &carousel_destination_urls) {
    this->carousel_destination_urls = carousel_destination_urls;
    this->m_carousel_destination_urls_isSet = true;
}

bool OAIAdCreateRequest_inner::is_carousel_destination_urls_Set() const{
    return m_carousel_destination_urls_isSet;
}

bool OAIAdCreateRequest_inner::is_carousel_destination_urls_Valid() const{
    return m_carousel_destination_urls_isValid;
}

QList<QString> OAIAdCreateRequest_inner::getCarouselIosDeepLinks() const {
    return carousel_ios_deep_links;
}
void OAIAdCreateRequest_inner::setCarouselIosDeepLinks(const QList<QString> &carousel_ios_deep_links) {
    this->carousel_ios_deep_links = carousel_ios_deep_links;
    this->m_carousel_ios_deep_links_isSet = true;
}

bool OAIAdCreateRequest_inner::is_carousel_ios_deep_links_Set() const{
    return m_carousel_ios_deep_links_isSet;
}

bool OAIAdCreateRequest_inner::is_carousel_ios_deep_links_Valid() const{
    return m_carousel_ios_deep_links_isValid;
}

QString OAIAdCreateRequest_inner::getClickTrackingUrl() const {
    return click_tracking_url;
}
void OAIAdCreateRequest_inner::setClickTrackingUrl(const QString &click_tracking_url) {
    this->click_tracking_url = click_tracking_url;
    this->m_click_tracking_url_isSet = true;
}

bool OAIAdCreateRequest_inner::is_click_tracking_url_Set() const{
    return m_click_tracking_url_isSet;
}

bool OAIAdCreateRequest_inner::is_click_tracking_url_Valid() const{
    return m_click_tracking_url_isValid;
}

OAICreativeType OAIAdCreateRequest_inner::getCreativeType() const {
    return creative_type;
}
void OAIAdCreateRequest_inner::setCreativeType(const OAICreativeType &creative_type) {
    this->creative_type = creative_type;
    this->m_creative_type_isSet = true;
}

bool OAIAdCreateRequest_inner::is_creative_type_Set() const{
    return m_creative_type_isSet;
}

bool OAIAdCreateRequest_inner::is_creative_type_Valid() const{
    return m_creative_type_isValid;
}

QString OAIAdCreateRequest_inner::getDestinationUrl() const {
    return destination_url;
}
void OAIAdCreateRequest_inner::setDestinationUrl(const QString &destination_url) {
    this->destination_url = destination_url;
    this->m_destination_url_isSet = true;
}

bool OAIAdCreateRequest_inner::is_destination_url_Set() const{
    return m_destination_url_isSet;
}

bool OAIAdCreateRequest_inner::is_destination_url_Valid() const{
    return m_destination_url_isValid;
}

QString OAIAdCreateRequest_inner::getIosDeepLink() const {
    return ios_deep_link;
}
void OAIAdCreateRequest_inner::setIosDeepLink(const QString &ios_deep_link) {
    this->ios_deep_link = ios_deep_link;
    this->m_ios_deep_link_isSet = true;
}

bool OAIAdCreateRequest_inner::is_ios_deep_link_Set() const{
    return m_ios_deep_link_isSet;
}

bool OAIAdCreateRequest_inner::is_ios_deep_link_Valid() const{
    return m_ios_deep_link_isValid;
}

bool OAIAdCreateRequest_inner::isIsPinDeleted() const {
    return is_pin_deleted;
}
void OAIAdCreateRequest_inner::setIsPinDeleted(const bool &is_pin_deleted) {
    this->is_pin_deleted = is_pin_deleted;
    this->m_is_pin_deleted_isSet = true;
}

bool OAIAdCreateRequest_inner::is_is_pin_deleted_Set() const{
    return m_is_pin_deleted_isSet;
}

bool OAIAdCreateRequest_inner::is_is_pin_deleted_Valid() const{
    return m_is_pin_deleted_isValid;
}

bool OAIAdCreateRequest_inner::isIsRemovable() const {
    return is_removable;
}
void OAIAdCreateRequest_inner::setIsRemovable(const bool &is_removable) {
    this->is_removable = is_removable;
    this->m_is_removable_isSet = true;
}

bool OAIAdCreateRequest_inner::is_is_removable_Set() const{
    return m_is_removable_isSet;
}

bool OAIAdCreateRequest_inner::is_is_removable_Valid() const{
    return m_is_removable_isValid;
}

QString OAIAdCreateRequest_inner::getName() const {
    return name;
}
void OAIAdCreateRequest_inner::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIAdCreateRequest_inner::is_name_Set() const{
    return m_name_isSet;
}

bool OAIAdCreateRequest_inner::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIAdCreateRequest_inner::getPinId() const {
    return pin_id;
}
void OAIAdCreateRequest_inner::setPinId(const QString &pin_id) {
    this->pin_id = pin_id;
    this->m_pin_id_isSet = true;
}

bool OAIAdCreateRequest_inner::is_pin_id_Set() const{
    return m_pin_id_isSet;
}

bool OAIAdCreateRequest_inner::is_pin_id_Valid() const{
    return m_pin_id_isValid;
}

OAIEntityStatus OAIAdCreateRequest_inner::getStatus() const {
    return status;
}
void OAIAdCreateRequest_inner::setStatus(const OAIEntityStatus &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAIAdCreateRequest_inner::is_status_Set() const{
    return m_status_isSet;
}

bool OAIAdCreateRequest_inner::is_status_Valid() const{
    return m_status_isValid;
}

OAIAdCommon_tracking_urls OAIAdCreateRequest_inner::getTrackingUrls() const {
    return tracking_urls;
}
void OAIAdCreateRequest_inner::setTrackingUrls(const OAIAdCommon_tracking_urls &tracking_urls) {
    this->tracking_urls = tracking_urls;
    this->m_tracking_urls_isSet = true;
}

bool OAIAdCreateRequest_inner::is_tracking_urls_Set() const{
    return m_tracking_urls_isSet;
}

bool OAIAdCreateRequest_inner::is_tracking_urls_Valid() const{
    return m_tracking_urls_isValid;
}

QString OAIAdCreateRequest_inner::getViewTrackingUrl() const {
    return view_tracking_url;
}
void OAIAdCreateRequest_inner::setViewTrackingUrl(const QString &view_tracking_url) {
    this->view_tracking_url = view_tracking_url;
    this->m_view_tracking_url_isSet = true;
}

bool OAIAdCreateRequest_inner::is_view_tracking_url_Set() const{
    return m_view_tracking_url_isSet;
}

bool OAIAdCreateRequest_inner::is_view_tracking_url_Valid() const{
    return m_view_tracking_url_isValid;
}

bool OAIAdCreateRequest_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_ad_group_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_android_deep_link_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (carousel_android_deep_links.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (carousel_destination_urls.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (carousel_ios_deep_links.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_click_tracking_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (creative_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_destination_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ios_deep_link_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_pin_deleted_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_removable_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pin_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (status.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (tracking_urls.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_view_tracking_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAdCreateRequest_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_ad_group_id_isValid && m_creative_type_isValid && m_pin_id_isValid && true;
}

} // namespace OpenAPI
