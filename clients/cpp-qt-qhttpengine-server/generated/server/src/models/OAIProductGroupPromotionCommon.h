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

/*
 * OAIProductGroupPromotionCommon.h
 *
 * 
 */

#ifndef OAIProductGroupPromotionCommon_H
#define OAIProductGroupPromotionCommon_H

#include <QJsonObject>

#include "OAICreativeType.h"
#include "OAIEntityStatus.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductGroupPromotionCommon : public OAIObject {
public:
    OAIProductGroupPromotionCommon();
    OAIProductGroupPromotionCommon(QString json);
    ~OAIProductGroupPromotionCommon() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEntityStatus getStatus() const;
    void setStatus(const OAIEntityStatus &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    QString getTrackingUrl() const;
    void setTrackingUrl(const QString &tracking_url);
    bool is_tracking_url_Set() const;
    bool is_tracking_url_Valid() const;

    QString getCatalogsProductGroupId() const;
    void setCatalogsProductGroupId(const QString &catalogs_product_group_id);
    bool is_catalogs_product_group_id_Set() const;
    bool is_catalogs_product_group_id_Valid() const;

    QString getCatalogsProductGroupName() const;
    void setCatalogsProductGroupName(const QString &catalogs_product_group_name);
    bool is_catalogs_product_group_name_Set() const;
    bool is_catalogs_product_group_name_Valid() const;

    OAICreativeType getCreativeType() const;
    void setCreativeType(const OAICreativeType &creative_type);
    bool is_creative_type_Set() const;
    bool is_creative_type_Valid() const;

    QString getCollectionsHeroPinId() const;
    void setCollectionsHeroPinId(const QString &collections_hero_pin_id);
    bool is_collections_hero_pin_id_Set() const;
    bool is_collections_hero_pin_id_Valid() const;

    QString getCollectionsHeroDestinationUrl() const;
    void setCollectionsHeroDestinationUrl(const QString &collections_hero_destination_url);
    bool is_collections_hero_destination_url_Set() const;
    bool is_collections_hero_destination_url_Valid() const;

    QString getSlideshowCollectionsTitle() const;
    void setSlideshowCollectionsTitle(const QString &slideshow_collections_title);
    bool is_slideshow_collections_title_Set() const;
    bool is_slideshow_collections_title_Valid() const;

    QString getSlideshowCollectionsDescription() const;
    void setSlideshowCollectionsDescription(const QString &slideshow_collections_description);
    bool is_slideshow_collections_description_Set() const;
    bool is_slideshow_collections_description_Valid() const;

    bool isIsMdl() const;
    void setIsMdl(const bool &is_mdl);
    bool is_is_mdl_Set() const;
    bool is_is_mdl_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEntityStatus status;
    bool m_status_isSet;
    bool m_status_isValid;

    QString tracking_url;
    bool m_tracking_url_isSet;
    bool m_tracking_url_isValid;

    QString catalogs_product_group_id;
    bool m_catalogs_product_group_id_isSet;
    bool m_catalogs_product_group_id_isValid;

    QString catalogs_product_group_name;
    bool m_catalogs_product_group_name_isSet;
    bool m_catalogs_product_group_name_isValid;

    OAICreativeType creative_type;
    bool m_creative_type_isSet;
    bool m_creative_type_isValid;

    QString collections_hero_pin_id;
    bool m_collections_hero_pin_id_isSet;
    bool m_collections_hero_pin_id_isValid;

    QString collections_hero_destination_url;
    bool m_collections_hero_destination_url_isSet;
    bool m_collections_hero_destination_url_isValid;

    QString slideshow_collections_title;
    bool m_slideshow_collections_title_isSet;
    bool m_slideshow_collections_title_isValid;

    QString slideshow_collections_description;
    bool m_slideshow_collections_description_isSet;
    bool m_slideshow_collections_description_isValid;

    bool is_mdl;
    bool m_is_mdl_isSet;
    bool m_is_mdl_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductGroupPromotionCommon)

#endif // OAIProductGroupPromotionCommon_H
