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

#include "OAIAdResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAdResponse::OAIAdResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAdResponse::OAIAdResponse() {
    this->initializeModel();
}

OAIAdResponse::~OAIAdResponse() {}

void OAIAdResponse::initializeModel() {

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

    m_ad_account_id_isSet = false;
    m_ad_account_id_isValid = false;

    m_campaign_id_isSet = false;
    m_campaign_id_isValid = false;

    m_collection_items_destination_url_template_isSet = false;
    m_collection_items_destination_url_template_isValid = false;

    m_created_time_isSet = false;
    m_created_time_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_rejected_reasons_isSet = false;
    m_rejected_reasons_isValid = false;

    m_rejection_labels_isSet = false;
    m_rejection_labels_isValid = false;

    m_review_status_isSet = false;
    m_review_status_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_updated_time_isSet = false;
    m_updated_time_isValid = false;

    m_summary_status_isSet = false;
    m_summary_status_isValid = false;
}

void OAIAdResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAdResponse::fromJsonObject(QJsonObject json) {

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

    m_ad_account_id_isValid = ::OpenAPI::fromJsonValue(ad_account_id, json[QString("ad_account_id")]);
    m_ad_account_id_isSet = !json[QString("ad_account_id")].isNull() && m_ad_account_id_isValid;

    m_campaign_id_isValid = ::OpenAPI::fromJsonValue(campaign_id, json[QString("campaign_id")]);
    m_campaign_id_isSet = !json[QString("campaign_id")].isNull() && m_campaign_id_isValid;

    m_collection_items_destination_url_template_isValid = ::OpenAPI::fromJsonValue(collection_items_destination_url_template, json[QString("collection_items_destination_url_template")]);
    m_collection_items_destination_url_template_isSet = !json[QString("collection_items_destination_url_template")].isNull() && m_collection_items_destination_url_template_isValid;

    m_created_time_isValid = ::OpenAPI::fromJsonValue(created_time, json[QString("created_time")]);
    m_created_time_isSet = !json[QString("created_time")].isNull() && m_created_time_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_rejected_reasons_isValid = ::OpenAPI::fromJsonValue(rejected_reasons, json[QString("rejected_reasons")]);
    m_rejected_reasons_isSet = !json[QString("rejected_reasons")].isNull() && m_rejected_reasons_isValid;

    m_rejection_labels_isValid = ::OpenAPI::fromJsonValue(rejection_labels, json[QString("rejection_labels")]);
    m_rejection_labels_isSet = !json[QString("rejection_labels")].isNull() && m_rejection_labels_isValid;

    m_review_status_isValid = ::OpenAPI::fromJsonValue(review_status, json[QString("review_status")]);
    m_review_status_isSet = !json[QString("review_status")].isNull() && m_review_status_isValid;

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_updated_time_isValid = ::OpenAPI::fromJsonValue(updated_time, json[QString("updated_time")]);
    m_updated_time_isSet = !json[QString("updated_time")].isNull() && m_updated_time_isValid;

    m_summary_status_isValid = ::OpenAPI::fromJsonValue(summary_status, json[QString("summary_status")]);
    m_summary_status_isSet = !json[QString("summary_status")].isNull() && m_summary_status_isValid;
}

QString OAIAdResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAdResponse::asJsonObject() const {
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
    if (m_ad_account_id_isSet) {
        obj.insert(QString("ad_account_id"), ::OpenAPI::toJsonValue(ad_account_id));
    }
    if (m_campaign_id_isSet) {
        obj.insert(QString("campaign_id"), ::OpenAPI::toJsonValue(campaign_id));
    }
    if (m_collection_items_destination_url_template_isSet) {
        obj.insert(QString("collection_items_destination_url_template"), ::OpenAPI::toJsonValue(collection_items_destination_url_template));
    }
    if (m_created_time_isSet) {
        obj.insert(QString("created_time"), ::OpenAPI::toJsonValue(created_time));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (rejected_reasons.size() > 0) {
        obj.insert(QString("rejected_reasons"), ::OpenAPI::toJsonValue(rejected_reasons));
    }
    if (rejection_labels.size() > 0) {
        obj.insert(QString("rejection_labels"), ::OpenAPI::toJsonValue(rejection_labels));
    }
    if (m_review_status_isSet) {
        obj.insert(QString("review_status"), ::OpenAPI::toJsonValue(review_status));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    if (m_updated_time_isSet) {
        obj.insert(QString("updated_time"), ::OpenAPI::toJsonValue(updated_time));
    }
    if (summary_status.isSet()) {
        obj.insert(QString("summary_status"), ::OpenAPI::toJsonValue(summary_status));
    }
    return obj;
}

QString OAIAdResponse::getAdGroupId() const {
    return ad_group_id;
}
void OAIAdResponse::setAdGroupId(const QString &ad_group_id) {
    this->ad_group_id = ad_group_id;
    this->m_ad_group_id_isSet = true;
}

bool OAIAdResponse::is_ad_group_id_Set() const{
    return m_ad_group_id_isSet;
}

bool OAIAdResponse::is_ad_group_id_Valid() const{
    return m_ad_group_id_isValid;
}

QString OAIAdResponse::getAndroidDeepLink() const {
    return android_deep_link;
}
void OAIAdResponse::setAndroidDeepLink(const QString &android_deep_link) {
    this->android_deep_link = android_deep_link;
    this->m_android_deep_link_isSet = true;
}

bool OAIAdResponse::is_android_deep_link_Set() const{
    return m_android_deep_link_isSet;
}

bool OAIAdResponse::is_android_deep_link_Valid() const{
    return m_android_deep_link_isValid;
}

QList<QString> OAIAdResponse::getCarouselAndroidDeepLinks() const {
    return carousel_android_deep_links;
}
void OAIAdResponse::setCarouselAndroidDeepLinks(const QList<QString> &carousel_android_deep_links) {
    this->carousel_android_deep_links = carousel_android_deep_links;
    this->m_carousel_android_deep_links_isSet = true;
}

bool OAIAdResponse::is_carousel_android_deep_links_Set() const{
    return m_carousel_android_deep_links_isSet;
}

bool OAIAdResponse::is_carousel_android_deep_links_Valid() const{
    return m_carousel_android_deep_links_isValid;
}

QList<QString> OAIAdResponse::getCarouselDestinationUrls() const {
    return carousel_destination_urls;
}
void OAIAdResponse::setCarouselDestinationUrls(const QList<QString> &carousel_destination_urls) {
    this->carousel_destination_urls = carousel_destination_urls;
    this->m_carousel_destination_urls_isSet = true;
}

bool OAIAdResponse::is_carousel_destination_urls_Set() const{
    return m_carousel_destination_urls_isSet;
}

bool OAIAdResponse::is_carousel_destination_urls_Valid() const{
    return m_carousel_destination_urls_isValid;
}

QList<QString> OAIAdResponse::getCarouselIosDeepLinks() const {
    return carousel_ios_deep_links;
}
void OAIAdResponse::setCarouselIosDeepLinks(const QList<QString> &carousel_ios_deep_links) {
    this->carousel_ios_deep_links = carousel_ios_deep_links;
    this->m_carousel_ios_deep_links_isSet = true;
}

bool OAIAdResponse::is_carousel_ios_deep_links_Set() const{
    return m_carousel_ios_deep_links_isSet;
}

bool OAIAdResponse::is_carousel_ios_deep_links_Valid() const{
    return m_carousel_ios_deep_links_isValid;
}

QString OAIAdResponse::getClickTrackingUrl() const {
    return click_tracking_url;
}
void OAIAdResponse::setClickTrackingUrl(const QString &click_tracking_url) {
    this->click_tracking_url = click_tracking_url;
    this->m_click_tracking_url_isSet = true;
}

bool OAIAdResponse::is_click_tracking_url_Set() const{
    return m_click_tracking_url_isSet;
}

bool OAIAdResponse::is_click_tracking_url_Valid() const{
    return m_click_tracking_url_isValid;
}

OAICreativeType OAIAdResponse::getCreativeType() const {
    return creative_type;
}
void OAIAdResponse::setCreativeType(const OAICreativeType &creative_type) {
    this->creative_type = creative_type;
    this->m_creative_type_isSet = true;
}

bool OAIAdResponse::is_creative_type_Set() const{
    return m_creative_type_isSet;
}

bool OAIAdResponse::is_creative_type_Valid() const{
    return m_creative_type_isValid;
}

QString OAIAdResponse::getDestinationUrl() const {
    return destination_url;
}
void OAIAdResponse::setDestinationUrl(const QString &destination_url) {
    this->destination_url = destination_url;
    this->m_destination_url_isSet = true;
}

bool OAIAdResponse::is_destination_url_Set() const{
    return m_destination_url_isSet;
}

bool OAIAdResponse::is_destination_url_Valid() const{
    return m_destination_url_isValid;
}

QString OAIAdResponse::getIosDeepLink() const {
    return ios_deep_link;
}
void OAIAdResponse::setIosDeepLink(const QString &ios_deep_link) {
    this->ios_deep_link = ios_deep_link;
    this->m_ios_deep_link_isSet = true;
}

bool OAIAdResponse::is_ios_deep_link_Set() const{
    return m_ios_deep_link_isSet;
}

bool OAIAdResponse::is_ios_deep_link_Valid() const{
    return m_ios_deep_link_isValid;
}

bool OAIAdResponse::isIsPinDeleted() const {
    return is_pin_deleted;
}
void OAIAdResponse::setIsPinDeleted(const bool &is_pin_deleted) {
    this->is_pin_deleted = is_pin_deleted;
    this->m_is_pin_deleted_isSet = true;
}

bool OAIAdResponse::is_is_pin_deleted_Set() const{
    return m_is_pin_deleted_isSet;
}

bool OAIAdResponse::is_is_pin_deleted_Valid() const{
    return m_is_pin_deleted_isValid;
}

bool OAIAdResponse::isIsRemovable() const {
    return is_removable;
}
void OAIAdResponse::setIsRemovable(const bool &is_removable) {
    this->is_removable = is_removable;
    this->m_is_removable_isSet = true;
}

bool OAIAdResponse::is_is_removable_Set() const{
    return m_is_removable_isSet;
}

bool OAIAdResponse::is_is_removable_Valid() const{
    return m_is_removable_isValid;
}

QString OAIAdResponse::getName() const {
    return name;
}
void OAIAdResponse::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIAdResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIAdResponse::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIAdResponse::getPinId() const {
    return pin_id;
}
void OAIAdResponse::setPinId(const QString &pin_id) {
    this->pin_id = pin_id;
    this->m_pin_id_isSet = true;
}

bool OAIAdResponse::is_pin_id_Set() const{
    return m_pin_id_isSet;
}

bool OAIAdResponse::is_pin_id_Valid() const{
    return m_pin_id_isValid;
}

OAIEntityStatus OAIAdResponse::getStatus() const {
    return status;
}
void OAIAdResponse::setStatus(const OAIEntityStatus &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAIAdResponse::is_status_Set() const{
    return m_status_isSet;
}

bool OAIAdResponse::is_status_Valid() const{
    return m_status_isValid;
}

OAIAdCommon_tracking_urls OAIAdResponse::getTrackingUrls() const {
    return tracking_urls;
}
void OAIAdResponse::setTrackingUrls(const OAIAdCommon_tracking_urls &tracking_urls) {
    this->tracking_urls = tracking_urls;
    this->m_tracking_urls_isSet = true;
}

bool OAIAdResponse::is_tracking_urls_Set() const{
    return m_tracking_urls_isSet;
}

bool OAIAdResponse::is_tracking_urls_Valid() const{
    return m_tracking_urls_isValid;
}

QString OAIAdResponse::getViewTrackingUrl() const {
    return view_tracking_url;
}
void OAIAdResponse::setViewTrackingUrl(const QString &view_tracking_url) {
    this->view_tracking_url = view_tracking_url;
    this->m_view_tracking_url_isSet = true;
}

bool OAIAdResponse::is_view_tracking_url_Set() const{
    return m_view_tracking_url_isSet;
}

bool OAIAdResponse::is_view_tracking_url_Valid() const{
    return m_view_tracking_url_isValid;
}

QString OAIAdResponse::getAdAccountId() const {
    return ad_account_id;
}
void OAIAdResponse::setAdAccountId(const QString &ad_account_id) {
    this->ad_account_id = ad_account_id;
    this->m_ad_account_id_isSet = true;
}

bool OAIAdResponse::is_ad_account_id_Set() const{
    return m_ad_account_id_isSet;
}

bool OAIAdResponse::is_ad_account_id_Valid() const{
    return m_ad_account_id_isValid;
}

QString OAIAdResponse::getCampaignId() const {
    return campaign_id;
}
void OAIAdResponse::setCampaignId(const QString &campaign_id) {
    this->campaign_id = campaign_id;
    this->m_campaign_id_isSet = true;
}

bool OAIAdResponse::is_campaign_id_Set() const{
    return m_campaign_id_isSet;
}

bool OAIAdResponse::is_campaign_id_Valid() const{
    return m_campaign_id_isValid;
}

QString OAIAdResponse::getCollectionItemsDestinationUrlTemplate() const {
    return collection_items_destination_url_template;
}
void OAIAdResponse::setCollectionItemsDestinationUrlTemplate(const QString &collection_items_destination_url_template) {
    this->collection_items_destination_url_template = collection_items_destination_url_template;
    this->m_collection_items_destination_url_template_isSet = true;
}

bool OAIAdResponse::is_collection_items_destination_url_template_Set() const{
    return m_collection_items_destination_url_template_isSet;
}

bool OAIAdResponse::is_collection_items_destination_url_template_Valid() const{
    return m_collection_items_destination_url_template_isValid;
}

qint32 OAIAdResponse::getCreatedTime() const {
    return created_time;
}
void OAIAdResponse::setCreatedTime(const qint32 &created_time) {
    this->created_time = created_time;
    this->m_created_time_isSet = true;
}

bool OAIAdResponse::is_created_time_Set() const{
    return m_created_time_isSet;
}

bool OAIAdResponse::is_created_time_Valid() const{
    return m_created_time_isValid;
}

QString OAIAdResponse::getId() const {
    return id;
}
void OAIAdResponse::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIAdResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIAdResponse::is_id_Valid() const{
    return m_id_isValid;
}

QList<QString> OAIAdResponse::getRejectedReasons() const {
    return rejected_reasons;
}
void OAIAdResponse::setRejectedReasons(const QList<QString> &rejected_reasons) {
    this->rejected_reasons = rejected_reasons;
    this->m_rejected_reasons_isSet = true;
}

bool OAIAdResponse::is_rejected_reasons_Set() const{
    return m_rejected_reasons_isSet;
}

bool OAIAdResponse::is_rejected_reasons_Valid() const{
    return m_rejected_reasons_isValid;
}

QList<QString> OAIAdResponse::getRejectionLabels() const {
    return rejection_labels;
}
void OAIAdResponse::setRejectionLabels(const QList<QString> &rejection_labels) {
    this->rejection_labels = rejection_labels;
    this->m_rejection_labels_isSet = true;
}

bool OAIAdResponse::is_rejection_labels_Set() const{
    return m_rejection_labels_isSet;
}

bool OAIAdResponse::is_rejection_labels_Valid() const{
    return m_rejection_labels_isValid;
}

QString OAIAdResponse::getReviewStatus() const {
    return review_status;
}
void OAIAdResponse::setReviewStatus(const QString &review_status) {
    this->review_status = review_status;
    this->m_review_status_isSet = true;
}

bool OAIAdResponse::is_review_status_Set() const{
    return m_review_status_isSet;
}

bool OAIAdResponse::is_review_status_Valid() const{
    return m_review_status_isValid;
}

QString OAIAdResponse::getType() const {
    return type;
}
void OAIAdResponse::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool OAIAdResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIAdResponse::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAIAdResponse::getUpdatedTime() const {
    return updated_time;
}
void OAIAdResponse::setUpdatedTime(const qint32 &updated_time) {
    this->updated_time = updated_time;
    this->m_updated_time_isSet = true;
}

bool OAIAdResponse::is_updated_time_Set() const{
    return m_updated_time_isSet;
}

bool OAIAdResponse::is_updated_time_Valid() const{
    return m_updated_time_isValid;
}

OAIPinPromotionSummaryStatus OAIAdResponse::getSummaryStatus() const {
    return summary_status;
}
void OAIAdResponse::setSummaryStatus(const OAIPinPromotionSummaryStatus &summary_status) {
    this->summary_status = summary_status;
    this->m_summary_status_isSet = true;
}

bool OAIAdResponse::is_summary_status_Set() const{
    return m_summary_status_isSet;
}

bool OAIAdResponse::is_summary_status_Valid() const{
    return m_summary_status_isValid;
}

bool OAIAdResponse::isSet() const {
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

        if (m_ad_account_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_campaign_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_collection_items_destination_url_template_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (rejected_reasons.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (rejection_labels.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_review_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_updated_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (summary_status.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAdResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
