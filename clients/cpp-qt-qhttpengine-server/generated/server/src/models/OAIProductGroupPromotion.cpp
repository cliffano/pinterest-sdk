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

#include "OAIProductGroupPromotion.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIProductGroupPromotion::OAIProductGroupPromotion(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIProductGroupPromotion::OAIProductGroupPromotion() {
    this->initializeModel();
}

OAIProductGroupPromotion::~OAIProductGroupPromotion() {}

void OAIProductGroupPromotion::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_ad_group_id_isSet = false;
    m_ad_group_id_isValid = false;

    m_bid_in_micro_currency_isSet = false;
    m_bid_in_micro_currency_isValid = false;

    m_included_isSet = false;
    m_included_isValid = false;

    m_definition_isSet = false;
    m_definition_isValid = false;

    m_relative_definition_isSet = false;
    m_relative_definition_isValid = false;

    m_parent_id_isSet = false;
    m_parent_id_isValid = false;

    m_slideshow_collections_title_isSet = false;
    m_slideshow_collections_title_isValid = false;

    m_slideshow_collections_description_isSet = false;
    m_slideshow_collections_description_isValid = false;

    m_is_mdl_isSet = false;
    m_is_mdl_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_tracking_url_isSet = false;
    m_tracking_url_isValid = false;

    m_catalog_product_group_id_isSet = false;
    m_catalog_product_group_id_isValid = false;

    m_catalog_product_group_name_isSet = false;
    m_catalog_product_group_name_isValid = false;

    m_creative_type_isSet = false;
    m_creative_type_isValid = false;

    m_collections_hero_pin_id_isSet = false;
    m_collections_hero_pin_id_isValid = false;

    m_collections_hero_destination_url_isSet = false;
    m_collections_hero_destination_url_isValid = false;

    m_grid_click_type_isSet = false;
    m_grid_click_type_isValid = false;
}

void OAIProductGroupPromotion::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIProductGroupPromotion::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_ad_group_id_isValid = ::OpenAPI::fromJsonValue(ad_group_id, json[QString("ad_group_id")]);
    m_ad_group_id_isSet = !json[QString("ad_group_id")].isNull() && m_ad_group_id_isValid;

    m_bid_in_micro_currency_isValid = ::OpenAPI::fromJsonValue(bid_in_micro_currency, json[QString("bid_in_micro_currency")]);
    m_bid_in_micro_currency_isSet = !json[QString("bid_in_micro_currency")].isNull() && m_bid_in_micro_currency_isValid;

    m_included_isValid = ::OpenAPI::fromJsonValue(included, json[QString("included")]);
    m_included_isSet = !json[QString("included")].isNull() && m_included_isValid;

    m_definition_isValid = ::OpenAPI::fromJsonValue(definition, json[QString("definition")]);
    m_definition_isSet = !json[QString("definition")].isNull() && m_definition_isValid;

    m_relative_definition_isValid = ::OpenAPI::fromJsonValue(relative_definition, json[QString("relative_definition")]);
    m_relative_definition_isSet = !json[QString("relative_definition")].isNull() && m_relative_definition_isValid;

    m_parent_id_isValid = ::OpenAPI::fromJsonValue(parent_id, json[QString("parent_id")]);
    m_parent_id_isSet = !json[QString("parent_id")].isNull() && m_parent_id_isValid;

    m_slideshow_collections_title_isValid = ::OpenAPI::fromJsonValue(slideshow_collections_title, json[QString("slideshow_collections_title")]);
    m_slideshow_collections_title_isSet = !json[QString("slideshow_collections_title")].isNull() && m_slideshow_collections_title_isValid;

    m_slideshow_collections_description_isValid = ::OpenAPI::fromJsonValue(slideshow_collections_description, json[QString("slideshow_collections_description")]);
    m_slideshow_collections_description_isSet = !json[QString("slideshow_collections_description")].isNull() && m_slideshow_collections_description_isValid;

    m_is_mdl_isValid = ::OpenAPI::fromJsonValue(is_mdl, json[QString("is_mdl")]);
    m_is_mdl_isSet = !json[QString("is_mdl")].isNull() && m_is_mdl_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_tracking_url_isValid = ::OpenAPI::fromJsonValue(tracking_url, json[QString("tracking_url")]);
    m_tracking_url_isSet = !json[QString("tracking_url")].isNull() && m_tracking_url_isValid;

    m_catalog_product_group_id_isValid = ::OpenAPI::fromJsonValue(catalog_product_group_id, json[QString("catalog_product_group_id")]);
    m_catalog_product_group_id_isSet = !json[QString("catalog_product_group_id")].isNull() && m_catalog_product_group_id_isValid;

    m_catalog_product_group_name_isValid = ::OpenAPI::fromJsonValue(catalog_product_group_name, json[QString("catalog_product_group_name")]);
    m_catalog_product_group_name_isSet = !json[QString("catalog_product_group_name")].isNull() && m_catalog_product_group_name_isValid;

    m_creative_type_isValid = ::OpenAPI::fromJsonValue(creative_type, json[QString("creative_type")]);
    m_creative_type_isSet = !json[QString("creative_type")].isNull() && m_creative_type_isValid;

    m_collections_hero_pin_id_isValid = ::OpenAPI::fromJsonValue(collections_hero_pin_id, json[QString("collections_hero_pin_id")]);
    m_collections_hero_pin_id_isSet = !json[QString("collections_hero_pin_id")].isNull() && m_collections_hero_pin_id_isValid;

    m_collections_hero_destination_url_isValid = ::OpenAPI::fromJsonValue(collections_hero_destination_url, json[QString("collections_hero_destination_url")]);
    m_collections_hero_destination_url_isSet = !json[QString("collections_hero_destination_url")].isNull() && m_collections_hero_destination_url_isValid;

    m_grid_click_type_isValid = ::OpenAPI::fromJsonValue(grid_click_type, json[QString("grid_click_type")]);
    m_grid_click_type_isSet = !json[QString("grid_click_type")].isNull() && m_grid_click_type_isValid;
}

QString OAIProductGroupPromotion::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIProductGroupPromotion::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_ad_group_id_isSet) {
        obj.insert(QString("ad_group_id"), ::OpenAPI::toJsonValue(ad_group_id));
    }
    if (m_bid_in_micro_currency_isSet) {
        obj.insert(QString("bid_in_micro_currency"), ::OpenAPI::toJsonValue(bid_in_micro_currency));
    }
    if (m_included_isSet) {
        obj.insert(QString("included"), ::OpenAPI::toJsonValue(included));
    }
    if (m_definition_isSet) {
        obj.insert(QString("definition"), ::OpenAPI::toJsonValue(definition));
    }
    if (m_relative_definition_isSet) {
        obj.insert(QString("relative_definition"), ::OpenAPI::toJsonValue(relative_definition));
    }
    if (m_parent_id_isSet) {
        obj.insert(QString("parent_id"), ::OpenAPI::toJsonValue(parent_id));
    }
    if (m_slideshow_collections_title_isSet) {
        obj.insert(QString("slideshow_collections_title"), ::OpenAPI::toJsonValue(slideshow_collections_title));
    }
    if (m_slideshow_collections_description_isSet) {
        obj.insert(QString("slideshow_collections_description"), ::OpenAPI::toJsonValue(slideshow_collections_description));
    }
    if (m_is_mdl_isSet) {
        obj.insert(QString("is_mdl"), ::OpenAPI::toJsonValue(is_mdl));
    }
    if (status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (m_tracking_url_isSet) {
        obj.insert(QString("tracking_url"), ::OpenAPI::toJsonValue(tracking_url));
    }
    if (m_catalog_product_group_id_isSet) {
        obj.insert(QString("catalog_product_group_id"), ::OpenAPI::toJsonValue(catalog_product_group_id));
    }
    if (m_catalog_product_group_name_isSet) {
        obj.insert(QString("catalog_product_group_name"), ::OpenAPI::toJsonValue(catalog_product_group_name));
    }
    if (creative_type.isSet()) {
        obj.insert(QString("creative_type"), ::OpenAPI::toJsonValue(creative_type));
    }
    if (m_collections_hero_pin_id_isSet) {
        obj.insert(QString("collections_hero_pin_id"), ::OpenAPI::toJsonValue(collections_hero_pin_id));
    }
    if (m_collections_hero_destination_url_isSet) {
        obj.insert(QString("collections_hero_destination_url"), ::OpenAPI::toJsonValue(collections_hero_destination_url));
    }
    if (grid_click_type.isSet()) {
        obj.insert(QString("grid_click_type"), ::OpenAPI::toJsonValue(grid_click_type));
    }
    return obj;
}

QString OAIProductGroupPromotion::getId() const {
    return id;
}
void OAIProductGroupPromotion::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIProductGroupPromotion::is_id_Set() const{
    return m_id_isSet;
}

bool OAIProductGroupPromotion::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIProductGroupPromotion::getAdGroupId() const {
    return ad_group_id;
}
void OAIProductGroupPromotion::setAdGroupId(const QString &ad_group_id) {
    this->ad_group_id = ad_group_id;
    this->m_ad_group_id_isSet = true;
}

bool OAIProductGroupPromotion::is_ad_group_id_Set() const{
    return m_ad_group_id_isSet;
}

bool OAIProductGroupPromotion::is_ad_group_id_Valid() const{
    return m_ad_group_id_isValid;
}

qint32 OAIProductGroupPromotion::getBidInMicroCurrency() const {
    return bid_in_micro_currency;
}
void OAIProductGroupPromotion::setBidInMicroCurrency(const qint32 &bid_in_micro_currency) {
    this->bid_in_micro_currency = bid_in_micro_currency;
    this->m_bid_in_micro_currency_isSet = true;
}

bool OAIProductGroupPromotion::is_bid_in_micro_currency_Set() const{
    return m_bid_in_micro_currency_isSet;
}

bool OAIProductGroupPromotion::is_bid_in_micro_currency_Valid() const{
    return m_bid_in_micro_currency_isValid;
}

bool OAIProductGroupPromotion::isIncluded() const {
    return included;
}
void OAIProductGroupPromotion::setIncluded(const bool &included) {
    this->included = included;
    this->m_included_isSet = true;
}

bool OAIProductGroupPromotion::is_included_Set() const{
    return m_included_isSet;
}

bool OAIProductGroupPromotion::is_included_Valid() const{
    return m_included_isValid;
}

QString OAIProductGroupPromotion::getDefinition() const {
    return definition;
}
void OAIProductGroupPromotion::setDefinition(const QString &definition) {
    this->definition = definition;
    this->m_definition_isSet = true;
}

bool OAIProductGroupPromotion::is_definition_Set() const{
    return m_definition_isSet;
}

bool OAIProductGroupPromotion::is_definition_Valid() const{
    return m_definition_isValid;
}

QString OAIProductGroupPromotion::getRelativeDefinition() const {
    return relative_definition;
}
void OAIProductGroupPromotion::setRelativeDefinition(const QString &relative_definition) {
    this->relative_definition = relative_definition;
    this->m_relative_definition_isSet = true;
}

bool OAIProductGroupPromotion::is_relative_definition_Set() const{
    return m_relative_definition_isSet;
}

bool OAIProductGroupPromotion::is_relative_definition_Valid() const{
    return m_relative_definition_isValid;
}

QString OAIProductGroupPromotion::getParentId() const {
    return parent_id;
}
void OAIProductGroupPromotion::setParentId(const QString &parent_id) {
    this->parent_id = parent_id;
    this->m_parent_id_isSet = true;
}

bool OAIProductGroupPromotion::is_parent_id_Set() const{
    return m_parent_id_isSet;
}

bool OAIProductGroupPromotion::is_parent_id_Valid() const{
    return m_parent_id_isValid;
}

QString OAIProductGroupPromotion::getSlideshowCollectionsTitle() const {
    return slideshow_collections_title;
}
void OAIProductGroupPromotion::setSlideshowCollectionsTitle(const QString &slideshow_collections_title) {
    this->slideshow_collections_title = slideshow_collections_title;
    this->m_slideshow_collections_title_isSet = true;
}

bool OAIProductGroupPromotion::is_slideshow_collections_title_Set() const{
    return m_slideshow_collections_title_isSet;
}

bool OAIProductGroupPromotion::is_slideshow_collections_title_Valid() const{
    return m_slideshow_collections_title_isValid;
}

QString OAIProductGroupPromotion::getSlideshowCollectionsDescription() const {
    return slideshow_collections_description;
}
void OAIProductGroupPromotion::setSlideshowCollectionsDescription(const QString &slideshow_collections_description) {
    this->slideshow_collections_description = slideshow_collections_description;
    this->m_slideshow_collections_description_isSet = true;
}

bool OAIProductGroupPromotion::is_slideshow_collections_description_Set() const{
    return m_slideshow_collections_description_isSet;
}

bool OAIProductGroupPromotion::is_slideshow_collections_description_Valid() const{
    return m_slideshow_collections_description_isValid;
}

bool OAIProductGroupPromotion::isIsMdl() const {
    return is_mdl;
}
void OAIProductGroupPromotion::setIsMdl(const bool &is_mdl) {
    this->is_mdl = is_mdl;
    this->m_is_mdl_isSet = true;
}

bool OAIProductGroupPromotion::is_is_mdl_Set() const{
    return m_is_mdl_isSet;
}

bool OAIProductGroupPromotion::is_is_mdl_Valid() const{
    return m_is_mdl_isValid;
}

OAIEntityStatus OAIProductGroupPromotion::getStatus() const {
    return status;
}
void OAIProductGroupPromotion::setStatus(const OAIEntityStatus &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAIProductGroupPromotion::is_status_Set() const{
    return m_status_isSet;
}

bool OAIProductGroupPromotion::is_status_Valid() const{
    return m_status_isValid;
}

QString OAIProductGroupPromotion::getTrackingUrl() const {
    return tracking_url;
}
void OAIProductGroupPromotion::setTrackingUrl(const QString &tracking_url) {
    this->tracking_url = tracking_url;
    this->m_tracking_url_isSet = true;
}

bool OAIProductGroupPromotion::is_tracking_url_Set() const{
    return m_tracking_url_isSet;
}

bool OAIProductGroupPromotion::is_tracking_url_Valid() const{
    return m_tracking_url_isValid;
}

QString OAIProductGroupPromotion::getCatalogProductGroupId() const {
    return catalog_product_group_id;
}
void OAIProductGroupPromotion::setCatalogProductGroupId(const QString &catalog_product_group_id) {
    this->catalog_product_group_id = catalog_product_group_id;
    this->m_catalog_product_group_id_isSet = true;
}

bool OAIProductGroupPromotion::is_catalog_product_group_id_Set() const{
    return m_catalog_product_group_id_isSet;
}

bool OAIProductGroupPromotion::is_catalog_product_group_id_Valid() const{
    return m_catalog_product_group_id_isValid;
}

QString OAIProductGroupPromotion::getCatalogProductGroupName() const {
    return catalog_product_group_name;
}
void OAIProductGroupPromotion::setCatalogProductGroupName(const QString &catalog_product_group_name) {
    this->catalog_product_group_name = catalog_product_group_name;
    this->m_catalog_product_group_name_isSet = true;
}

bool OAIProductGroupPromotion::is_catalog_product_group_name_Set() const{
    return m_catalog_product_group_name_isSet;
}

bool OAIProductGroupPromotion::is_catalog_product_group_name_Valid() const{
    return m_catalog_product_group_name_isValid;
}

OAICreativeType OAIProductGroupPromotion::getCreativeType() const {
    return creative_type;
}
void OAIProductGroupPromotion::setCreativeType(const OAICreativeType &creative_type) {
    this->creative_type = creative_type;
    this->m_creative_type_isSet = true;
}

bool OAIProductGroupPromotion::is_creative_type_Set() const{
    return m_creative_type_isSet;
}

bool OAIProductGroupPromotion::is_creative_type_Valid() const{
    return m_creative_type_isValid;
}

QString OAIProductGroupPromotion::getCollectionsHeroPinId() const {
    return collections_hero_pin_id;
}
void OAIProductGroupPromotion::setCollectionsHeroPinId(const QString &collections_hero_pin_id) {
    this->collections_hero_pin_id = collections_hero_pin_id;
    this->m_collections_hero_pin_id_isSet = true;
}

bool OAIProductGroupPromotion::is_collections_hero_pin_id_Set() const{
    return m_collections_hero_pin_id_isSet;
}

bool OAIProductGroupPromotion::is_collections_hero_pin_id_Valid() const{
    return m_collections_hero_pin_id_isValid;
}

QString OAIProductGroupPromotion::getCollectionsHeroDestinationUrl() const {
    return collections_hero_destination_url;
}
void OAIProductGroupPromotion::setCollectionsHeroDestinationUrl(const QString &collections_hero_destination_url) {
    this->collections_hero_destination_url = collections_hero_destination_url;
    this->m_collections_hero_destination_url_isSet = true;
}

bool OAIProductGroupPromotion::is_collections_hero_destination_url_Set() const{
    return m_collections_hero_destination_url_isSet;
}

bool OAIProductGroupPromotion::is_collections_hero_destination_url_Valid() const{
    return m_collections_hero_destination_url_isValid;
}

OAIGridClickType OAIProductGroupPromotion::getGridClickType() const {
    return grid_click_type;
}
void OAIProductGroupPromotion::setGridClickType(const OAIGridClickType &grid_click_type) {
    this->grid_click_type = grid_click_type;
    this->m_grid_click_type_isSet = true;
}

bool OAIProductGroupPromotion::is_grid_click_type_Set() const{
    return m_grid_click_type_isSet;
}

bool OAIProductGroupPromotion::is_grid_click_type_Valid() const{
    return m_grid_click_type_isValid;
}

bool OAIProductGroupPromotion::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ad_group_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bid_in_micro_currency_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_included_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_definition_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_relative_definition_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_parent_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_slideshow_collections_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_slideshow_collections_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_mdl_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (status.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_tracking_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_catalog_product_group_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_catalog_product_group_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (creative_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_collections_hero_pin_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_collections_hero_destination_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (grid_click_type.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIProductGroupPromotion::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
