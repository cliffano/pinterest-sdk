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

#include "OAIBulkUpsertRequestCreate.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBulkUpsertRequestCreate::OAIBulkUpsertRequestCreate(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBulkUpsertRequestCreate::OAIBulkUpsertRequestCreate() {
    this->initializeModel();
}

OAIBulkUpsertRequestCreate::~OAIBulkUpsertRequestCreate() {}

void OAIBulkUpsertRequestCreate::initializeModel() {

    m_campaigns_isSet = false;
    m_campaigns_isValid = false;

    m_ad_groups_isSet = false;
    m_ad_groups_isValid = false;

    m_ads_isSet = false;
    m_ads_isValid = false;

    m_product_groups_isSet = false;
    m_product_groups_isValid = false;

    m_keywords_isSet = false;
    m_keywords_isValid = false;
}

void OAIBulkUpsertRequestCreate::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBulkUpsertRequestCreate::fromJsonObject(QJsonObject json) {

    m_campaigns_isValid = ::OpenAPI::fromJsonValue(campaigns, json[QString("campaigns")]);
    m_campaigns_isSet = !json[QString("campaigns")].isNull() && m_campaigns_isValid;

    m_ad_groups_isValid = ::OpenAPI::fromJsonValue(ad_groups, json[QString("ad_groups")]);
    m_ad_groups_isSet = !json[QString("ad_groups")].isNull() && m_ad_groups_isValid;

    m_ads_isValid = ::OpenAPI::fromJsonValue(ads, json[QString("ads")]);
    m_ads_isSet = !json[QString("ads")].isNull() && m_ads_isValid;

    m_product_groups_isValid = ::OpenAPI::fromJsonValue(product_groups, json[QString("product_groups")]);
    m_product_groups_isSet = !json[QString("product_groups")].isNull() && m_product_groups_isValid;

    m_keywords_isValid = ::OpenAPI::fromJsonValue(keywords, json[QString("keywords")]);
    m_keywords_isSet = !json[QString("keywords")].isNull() && m_keywords_isValid;
}

QString OAIBulkUpsertRequestCreate::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBulkUpsertRequestCreate::asJsonObject() const {
    QJsonObject obj;
    if (campaigns.size() > 0) {
        obj.insert(QString("campaigns"), ::OpenAPI::toJsonValue(campaigns));
    }
    if (ad_groups.size() > 0) {
        obj.insert(QString("ad_groups"), ::OpenAPI::toJsonValue(ad_groups));
    }
    if (ads.size() > 0) {
        obj.insert(QString("ads"), ::OpenAPI::toJsonValue(ads));
    }
    if (product_groups.size() > 0) {
        obj.insert(QString("product_groups"), ::OpenAPI::toJsonValue(product_groups));
    }
    if (keywords.size() > 0) {
        obj.insert(QString("keywords"), ::OpenAPI::toJsonValue(keywords));
    }
    return obj;
}

QList<OAICampaignCreateRequest> OAIBulkUpsertRequestCreate::getCampaigns() const {
    return campaigns;
}
void OAIBulkUpsertRequestCreate::setCampaigns(const QList<OAICampaignCreateRequest> &campaigns) {
    this->campaigns = campaigns;
    this->m_campaigns_isSet = true;
}

bool OAIBulkUpsertRequestCreate::is_campaigns_Set() const{
    return m_campaigns_isSet;
}

bool OAIBulkUpsertRequestCreate::is_campaigns_Valid() const{
    return m_campaigns_isValid;
}

QList<OAIAdGroupCreateRequest> OAIBulkUpsertRequestCreate::getAdGroups() const {
    return ad_groups;
}
void OAIBulkUpsertRequestCreate::setAdGroups(const QList<OAIAdGroupCreateRequest> &ad_groups) {
    this->ad_groups = ad_groups;
    this->m_ad_groups_isSet = true;
}

bool OAIBulkUpsertRequestCreate::is_ad_groups_Set() const{
    return m_ad_groups_isSet;
}

bool OAIBulkUpsertRequestCreate::is_ad_groups_Valid() const{
    return m_ad_groups_isValid;
}

QList<OAIAdCreateRequest> OAIBulkUpsertRequestCreate::getAds() const {
    return ads;
}
void OAIBulkUpsertRequestCreate::setAds(const QList<OAIAdCreateRequest> &ads) {
    this->ads = ads;
    this->m_ads_isSet = true;
}

bool OAIBulkUpsertRequestCreate::is_ads_Set() const{
    return m_ads_isSet;
}

bool OAIBulkUpsertRequestCreate::is_ads_Valid() const{
    return m_ads_isValid;
}

QList<OAIProductGroupPromotionCreateRequest> OAIBulkUpsertRequestCreate::getProductGroups() const {
    return product_groups;
}
void OAIBulkUpsertRequestCreate::setProductGroups(const QList<OAIProductGroupPromotionCreateRequest> &product_groups) {
    this->product_groups = product_groups;
    this->m_product_groups_isSet = true;
}

bool OAIBulkUpsertRequestCreate::is_product_groups_Set() const{
    return m_product_groups_isSet;
}

bool OAIBulkUpsertRequestCreate::is_product_groups_Valid() const{
    return m_product_groups_isValid;
}

QList<OAIKeywordsRequest> OAIBulkUpsertRequestCreate::getKeywords() const {
    return keywords;
}
void OAIBulkUpsertRequestCreate::setKeywords(const QList<OAIKeywordsRequest> &keywords) {
    this->keywords = keywords;
    this->m_keywords_isSet = true;
}

bool OAIBulkUpsertRequestCreate::is_keywords_Set() const{
    return m_keywords_isSet;
}

bool OAIBulkUpsertRequestCreate::is_keywords_Valid() const{
    return m_keywords_isValid;
}

bool OAIBulkUpsertRequestCreate::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (campaigns.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (ad_groups.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (ads.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (product_groups.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (keywords.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBulkUpsertRequestCreate::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
