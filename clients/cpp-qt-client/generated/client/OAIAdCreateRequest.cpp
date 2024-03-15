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

#include "OAIAdCreateRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAdCreateRequest::OAIAdCreateRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAdCreateRequest::OAIAdCreateRequest() {
    this->initializeModel();
}

OAIAdCreateRequest::~OAIAdCreateRequest() {}

void OAIAdCreateRequest::initializeModel() {

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

    m_status_isSet = false;
    m_status_isValid = false;

    m_tracking_urls_isSet = false;
    m_tracking_urls_isValid = false;

    m_view_tracking_url_isSet = false;
    m_view_tracking_url_isValid = false;

    m_lead_form_id_isSet = false;
    m_lead_form_id_isValid = false;

    m_grid_click_type_isSet = false;
    m_grid_click_type_isValid = false;

    m_customizable_cta_type_isSet = false;
    m_customizable_cta_type_isValid = false;

    m_quiz_pin_data_isSet = false;
    m_quiz_pin_data_isValid = false;

    m_pin_id_isSet = false;
    m_pin_id_isValid = false;
}

void OAIAdCreateRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAdCreateRequest::fromJsonObject(QJsonObject json) {

    m_ad_group_id_isValid = ::OpenAPI::fromJsonValue(m_ad_group_id, json[QString("ad_group_id")]);
    m_ad_group_id_isSet = !json[QString("ad_group_id")].isNull() && m_ad_group_id_isValid;

    m_android_deep_link_isValid = ::OpenAPI::fromJsonValue(m_android_deep_link, json[QString("android_deep_link")]);
    m_android_deep_link_isSet = !json[QString("android_deep_link")].isNull() && m_android_deep_link_isValid;

    m_carousel_android_deep_links_isValid = ::OpenAPI::fromJsonValue(m_carousel_android_deep_links, json[QString("carousel_android_deep_links")]);
    m_carousel_android_deep_links_isSet = !json[QString("carousel_android_deep_links")].isNull() && m_carousel_android_deep_links_isValid;

    m_carousel_destination_urls_isValid = ::OpenAPI::fromJsonValue(m_carousel_destination_urls, json[QString("carousel_destination_urls")]);
    m_carousel_destination_urls_isSet = !json[QString("carousel_destination_urls")].isNull() && m_carousel_destination_urls_isValid;

    m_carousel_ios_deep_links_isValid = ::OpenAPI::fromJsonValue(m_carousel_ios_deep_links, json[QString("carousel_ios_deep_links")]);
    m_carousel_ios_deep_links_isSet = !json[QString("carousel_ios_deep_links")].isNull() && m_carousel_ios_deep_links_isValid;

    m_click_tracking_url_isValid = ::OpenAPI::fromJsonValue(m_click_tracking_url, json[QString("click_tracking_url")]);
    m_click_tracking_url_isSet = !json[QString("click_tracking_url")].isNull() && m_click_tracking_url_isValid;

    m_creative_type_isValid = ::OpenAPI::fromJsonValue(m_creative_type, json[QString("creative_type")]);
    m_creative_type_isSet = !json[QString("creative_type")].isNull() && m_creative_type_isValid;

    m_destination_url_isValid = ::OpenAPI::fromJsonValue(m_destination_url, json[QString("destination_url")]);
    m_destination_url_isSet = !json[QString("destination_url")].isNull() && m_destination_url_isValid;

    m_ios_deep_link_isValid = ::OpenAPI::fromJsonValue(m_ios_deep_link, json[QString("ios_deep_link")]);
    m_ios_deep_link_isSet = !json[QString("ios_deep_link")].isNull() && m_ios_deep_link_isValid;

    m_is_pin_deleted_isValid = ::OpenAPI::fromJsonValue(m_is_pin_deleted, json[QString("is_pin_deleted")]);
    m_is_pin_deleted_isSet = !json[QString("is_pin_deleted")].isNull() && m_is_pin_deleted_isValid;

    m_is_removable_isValid = ::OpenAPI::fromJsonValue(m_is_removable, json[QString("is_removable")]);
    m_is_removable_isSet = !json[QString("is_removable")].isNull() && m_is_removable_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_tracking_urls_isValid = ::OpenAPI::fromJsonValue(m_tracking_urls, json[QString("tracking_urls")]);
    m_tracking_urls_isSet = !json[QString("tracking_urls")].isNull() && m_tracking_urls_isValid;

    m_view_tracking_url_isValid = ::OpenAPI::fromJsonValue(m_view_tracking_url, json[QString("view_tracking_url")]);
    m_view_tracking_url_isSet = !json[QString("view_tracking_url")].isNull() && m_view_tracking_url_isValid;

    m_lead_form_id_isValid = ::OpenAPI::fromJsonValue(m_lead_form_id, json[QString("lead_form_id")]);
    m_lead_form_id_isSet = !json[QString("lead_form_id")].isNull() && m_lead_form_id_isValid;

    m_grid_click_type_isValid = ::OpenAPI::fromJsonValue(m_grid_click_type, json[QString("grid_click_type")]);
    m_grid_click_type_isSet = !json[QString("grid_click_type")].isNull() && m_grid_click_type_isValid;

    m_customizable_cta_type_isValid = ::OpenAPI::fromJsonValue(m_customizable_cta_type, json[QString("customizable_cta_type")]);
    m_customizable_cta_type_isSet = !json[QString("customizable_cta_type")].isNull() && m_customizable_cta_type_isValid;

    m_quiz_pin_data_isValid = ::OpenAPI::fromJsonValue(m_quiz_pin_data, json[QString("quiz_pin_data")]);
    m_quiz_pin_data_isSet = !json[QString("quiz_pin_data")].isNull() && m_quiz_pin_data_isValid;

    m_pin_id_isValid = ::OpenAPI::fromJsonValue(m_pin_id, json[QString("pin_id")]);
    m_pin_id_isSet = !json[QString("pin_id")].isNull() && m_pin_id_isValid;
}

QString OAIAdCreateRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAdCreateRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_ad_group_id_isSet) {
        obj.insert(QString("ad_group_id"), ::OpenAPI::toJsonValue(m_ad_group_id));
    }
    if (m_android_deep_link_isSet) {
        obj.insert(QString("android_deep_link"), ::OpenAPI::toJsonValue(m_android_deep_link));
    }
    if (m_carousel_android_deep_links.size() > 0) {
        obj.insert(QString("carousel_android_deep_links"), ::OpenAPI::toJsonValue(m_carousel_android_deep_links));
    }
    if (m_carousel_destination_urls.size() > 0) {
        obj.insert(QString("carousel_destination_urls"), ::OpenAPI::toJsonValue(m_carousel_destination_urls));
    }
    if (m_carousel_ios_deep_links.size() > 0) {
        obj.insert(QString("carousel_ios_deep_links"), ::OpenAPI::toJsonValue(m_carousel_ios_deep_links));
    }
    if (m_click_tracking_url_isSet) {
        obj.insert(QString("click_tracking_url"), ::OpenAPI::toJsonValue(m_click_tracking_url));
    }
    if (m_creative_type.isSet()) {
        obj.insert(QString("creative_type"), ::OpenAPI::toJsonValue(m_creative_type));
    }
    if (m_destination_url_isSet) {
        obj.insert(QString("destination_url"), ::OpenAPI::toJsonValue(m_destination_url));
    }
    if (m_ios_deep_link_isSet) {
        obj.insert(QString("ios_deep_link"), ::OpenAPI::toJsonValue(m_ios_deep_link));
    }
    if (m_is_pin_deleted_isSet) {
        obj.insert(QString("is_pin_deleted"), ::OpenAPI::toJsonValue(m_is_pin_deleted));
    }
    if (m_is_removable_isSet) {
        obj.insert(QString("is_removable"), ::OpenAPI::toJsonValue(m_is_removable));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(m_status));
    }
    if (m_tracking_urls.isSet()) {
        obj.insert(QString("tracking_urls"), ::OpenAPI::toJsonValue(m_tracking_urls));
    }
    if (m_view_tracking_url_isSet) {
        obj.insert(QString("view_tracking_url"), ::OpenAPI::toJsonValue(m_view_tracking_url));
    }
    if (m_lead_form_id_isSet) {
        obj.insert(QString("lead_form_id"), ::OpenAPI::toJsonValue(m_lead_form_id));
    }
    if (m_grid_click_type.isSet()) {
        obj.insert(QString("grid_click_type"), ::OpenAPI::toJsonValue(m_grid_click_type));
    }
    if (m_customizable_cta_type_isSet) {
        obj.insert(QString("customizable_cta_type"), ::OpenAPI::toJsonValue(m_customizable_cta_type));
    }
    if (m_quiz_pin_data.isSet()) {
        obj.insert(QString("quiz_pin_data"), ::OpenAPI::toJsonValue(m_quiz_pin_data));
    }
    if (m_pin_id_isSet) {
        obj.insert(QString("pin_id"), ::OpenAPI::toJsonValue(m_pin_id));
    }
    return obj;
}

QString OAIAdCreateRequest::getAdGroupId() const {
    return m_ad_group_id;
}
void OAIAdCreateRequest::setAdGroupId(const QString &ad_group_id) {
    m_ad_group_id = ad_group_id;
    m_ad_group_id_isSet = true;
}

bool OAIAdCreateRequest::is_ad_group_id_Set() const{
    return m_ad_group_id_isSet;
}

bool OAIAdCreateRequest::is_ad_group_id_Valid() const{
    return m_ad_group_id_isValid;
}

QString OAIAdCreateRequest::getAndroidDeepLink() const {
    return m_android_deep_link;
}
void OAIAdCreateRequest::setAndroidDeepLink(const QString &android_deep_link) {
    m_android_deep_link = android_deep_link;
    m_android_deep_link_isSet = true;
}

bool OAIAdCreateRequest::is_android_deep_link_Set() const{
    return m_android_deep_link_isSet;
}

bool OAIAdCreateRequest::is_android_deep_link_Valid() const{
    return m_android_deep_link_isValid;
}

QList<QString> OAIAdCreateRequest::getCarouselAndroidDeepLinks() const {
    return m_carousel_android_deep_links;
}
void OAIAdCreateRequest::setCarouselAndroidDeepLinks(const QList<QString> &carousel_android_deep_links) {
    m_carousel_android_deep_links = carousel_android_deep_links;
    m_carousel_android_deep_links_isSet = true;
}

bool OAIAdCreateRequest::is_carousel_android_deep_links_Set() const{
    return m_carousel_android_deep_links_isSet;
}

bool OAIAdCreateRequest::is_carousel_android_deep_links_Valid() const{
    return m_carousel_android_deep_links_isValid;
}

QList<QString> OAIAdCreateRequest::getCarouselDestinationUrls() const {
    return m_carousel_destination_urls;
}
void OAIAdCreateRequest::setCarouselDestinationUrls(const QList<QString> &carousel_destination_urls) {
    m_carousel_destination_urls = carousel_destination_urls;
    m_carousel_destination_urls_isSet = true;
}

bool OAIAdCreateRequest::is_carousel_destination_urls_Set() const{
    return m_carousel_destination_urls_isSet;
}

bool OAIAdCreateRequest::is_carousel_destination_urls_Valid() const{
    return m_carousel_destination_urls_isValid;
}

QList<QString> OAIAdCreateRequest::getCarouselIosDeepLinks() const {
    return m_carousel_ios_deep_links;
}
void OAIAdCreateRequest::setCarouselIosDeepLinks(const QList<QString> &carousel_ios_deep_links) {
    m_carousel_ios_deep_links = carousel_ios_deep_links;
    m_carousel_ios_deep_links_isSet = true;
}

bool OAIAdCreateRequest::is_carousel_ios_deep_links_Set() const{
    return m_carousel_ios_deep_links_isSet;
}

bool OAIAdCreateRequest::is_carousel_ios_deep_links_Valid() const{
    return m_carousel_ios_deep_links_isValid;
}

QString OAIAdCreateRequest::getClickTrackingUrl() const {
    return m_click_tracking_url;
}
void OAIAdCreateRequest::setClickTrackingUrl(const QString &click_tracking_url) {
    m_click_tracking_url = click_tracking_url;
    m_click_tracking_url_isSet = true;
}

bool OAIAdCreateRequest::is_click_tracking_url_Set() const{
    return m_click_tracking_url_isSet;
}

bool OAIAdCreateRequest::is_click_tracking_url_Valid() const{
    return m_click_tracking_url_isValid;
}

OAICreativeType OAIAdCreateRequest::getCreativeType() const {
    return m_creative_type;
}
void OAIAdCreateRequest::setCreativeType(const OAICreativeType &creative_type) {
    m_creative_type = creative_type;
    m_creative_type_isSet = true;
}

bool OAIAdCreateRequest::is_creative_type_Set() const{
    return m_creative_type_isSet;
}

bool OAIAdCreateRequest::is_creative_type_Valid() const{
    return m_creative_type_isValid;
}

QString OAIAdCreateRequest::getDestinationUrl() const {
    return m_destination_url;
}
void OAIAdCreateRequest::setDestinationUrl(const QString &destination_url) {
    m_destination_url = destination_url;
    m_destination_url_isSet = true;
}

bool OAIAdCreateRequest::is_destination_url_Set() const{
    return m_destination_url_isSet;
}

bool OAIAdCreateRequest::is_destination_url_Valid() const{
    return m_destination_url_isValid;
}

QString OAIAdCreateRequest::getIosDeepLink() const {
    return m_ios_deep_link;
}
void OAIAdCreateRequest::setIosDeepLink(const QString &ios_deep_link) {
    m_ios_deep_link = ios_deep_link;
    m_ios_deep_link_isSet = true;
}

bool OAIAdCreateRequest::is_ios_deep_link_Set() const{
    return m_ios_deep_link_isSet;
}

bool OAIAdCreateRequest::is_ios_deep_link_Valid() const{
    return m_ios_deep_link_isValid;
}

bool OAIAdCreateRequest::isIsPinDeleted() const {
    return m_is_pin_deleted;
}
void OAIAdCreateRequest::setIsPinDeleted(const bool &is_pin_deleted) {
    m_is_pin_deleted = is_pin_deleted;
    m_is_pin_deleted_isSet = true;
}

bool OAIAdCreateRequest::is_is_pin_deleted_Set() const{
    return m_is_pin_deleted_isSet;
}

bool OAIAdCreateRequest::is_is_pin_deleted_Valid() const{
    return m_is_pin_deleted_isValid;
}

bool OAIAdCreateRequest::isIsRemovable() const {
    return m_is_removable;
}
void OAIAdCreateRequest::setIsRemovable(const bool &is_removable) {
    m_is_removable = is_removable;
    m_is_removable_isSet = true;
}

bool OAIAdCreateRequest::is_is_removable_Set() const{
    return m_is_removable_isSet;
}

bool OAIAdCreateRequest::is_is_removable_Valid() const{
    return m_is_removable_isValid;
}

QString OAIAdCreateRequest::getName() const {
    return m_name;
}
void OAIAdCreateRequest::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIAdCreateRequest::is_name_Set() const{
    return m_name_isSet;
}

bool OAIAdCreateRequest::is_name_Valid() const{
    return m_name_isValid;
}

OAIEntityStatus OAIAdCreateRequest::getStatus() const {
    return m_status;
}
void OAIAdCreateRequest::setStatus(const OAIEntityStatus &status) {
    m_status = status;
    m_status_isSet = true;
}

bool OAIAdCreateRequest::is_status_Set() const{
    return m_status_isSet;
}

bool OAIAdCreateRequest::is_status_Valid() const{
    return m_status_isValid;
}

OAIAdCommon_tracking_urls OAIAdCreateRequest::getTrackingUrls() const {
    return m_tracking_urls;
}
void OAIAdCreateRequest::setTrackingUrls(const OAIAdCommon_tracking_urls &tracking_urls) {
    m_tracking_urls = tracking_urls;
    m_tracking_urls_isSet = true;
}

bool OAIAdCreateRequest::is_tracking_urls_Set() const{
    return m_tracking_urls_isSet;
}

bool OAIAdCreateRequest::is_tracking_urls_Valid() const{
    return m_tracking_urls_isValid;
}

QString OAIAdCreateRequest::getViewTrackingUrl() const {
    return m_view_tracking_url;
}
void OAIAdCreateRequest::setViewTrackingUrl(const QString &view_tracking_url) {
    m_view_tracking_url = view_tracking_url;
    m_view_tracking_url_isSet = true;
}

bool OAIAdCreateRequest::is_view_tracking_url_Set() const{
    return m_view_tracking_url_isSet;
}

bool OAIAdCreateRequest::is_view_tracking_url_Valid() const{
    return m_view_tracking_url_isValid;
}

QString OAIAdCreateRequest::getLeadFormId() const {
    return m_lead_form_id;
}
void OAIAdCreateRequest::setLeadFormId(const QString &lead_form_id) {
    m_lead_form_id = lead_form_id;
    m_lead_form_id_isSet = true;
}

bool OAIAdCreateRequest::is_lead_form_id_Set() const{
    return m_lead_form_id_isSet;
}

bool OAIAdCreateRequest::is_lead_form_id_Valid() const{
    return m_lead_form_id_isValid;
}

OAIGridClickType OAIAdCreateRequest::getGridClickType() const {
    return m_grid_click_type;
}
void OAIAdCreateRequest::setGridClickType(const OAIGridClickType &grid_click_type) {
    m_grid_click_type = grid_click_type;
    m_grid_click_type_isSet = true;
}

bool OAIAdCreateRequest::is_grid_click_type_Set() const{
    return m_grid_click_type_isSet;
}

bool OAIAdCreateRequest::is_grid_click_type_Valid() const{
    return m_grid_click_type_isValid;
}

QString OAIAdCreateRequest::getCustomizableCtaType() const {
    return m_customizable_cta_type;
}
void OAIAdCreateRequest::setCustomizableCtaType(const QString &customizable_cta_type) {
    m_customizable_cta_type = customizable_cta_type;
    m_customizable_cta_type_isSet = true;
}

bool OAIAdCreateRequest::is_customizable_cta_type_Set() const{
    return m_customizable_cta_type_isSet;
}

bool OAIAdCreateRequest::is_customizable_cta_type_Valid() const{
    return m_customizable_cta_type_isValid;
}

OAIAdCommon_quiz_pin_data OAIAdCreateRequest::getQuizPinData() const {
    return m_quiz_pin_data;
}
void OAIAdCreateRequest::setQuizPinData(const OAIAdCommon_quiz_pin_data &quiz_pin_data) {
    m_quiz_pin_data = quiz_pin_data;
    m_quiz_pin_data_isSet = true;
}

bool OAIAdCreateRequest::is_quiz_pin_data_Set() const{
    return m_quiz_pin_data_isSet;
}

bool OAIAdCreateRequest::is_quiz_pin_data_Valid() const{
    return m_quiz_pin_data_isValid;
}

QString OAIAdCreateRequest::getPinId() const {
    return m_pin_id;
}
void OAIAdCreateRequest::setPinId(const QString &pin_id) {
    m_pin_id = pin_id;
    m_pin_id_isSet = true;
}

bool OAIAdCreateRequest::is_pin_id_Set() const{
    return m_pin_id_isSet;
}

bool OAIAdCreateRequest::is_pin_id_Valid() const{
    return m_pin_id_isValid;
}

bool OAIAdCreateRequest::isSet() const {
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

        if (m_carousel_android_deep_links.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_carousel_destination_urls.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_carousel_ios_deep_links.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_click_tracking_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_creative_type.isSet()) {
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

        if (m_status.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_tracking_urls.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_view_tracking_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_lead_form_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_grid_click_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_customizable_cta_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_quiz_pin_data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_pin_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAdCreateRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_ad_group_id_isValid && m_creative_type_isValid && m_pin_id_isValid && true;
}

} // namespace OpenAPI
