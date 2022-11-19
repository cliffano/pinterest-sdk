/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ProductGroupPromotionCommon.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ProductGroupPromotionCommon_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ProductGroupPromotionCommon_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/EntityStatus.h"
#include "CppRestOpenAPIClient/model/CreativeType.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ProductGroupPromotionCommon
    : public ModelBase
{
public:
    ProductGroupPromotionCommon();
    virtual ~ProductGroupPromotionCommon();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ProductGroupPromotionCommon members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<EntityStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<EntityStatus>& value);

    /// <summary>
    /// Tracking template for proudct group promotions. 4000 limit
    /// </summary>
    utility::string_t getTrackingUrl() const;
    bool trackingUrlIsSet() const;
    void unsetTracking_url();

    void setTrackingUrl(const utility::string_t& value);

    /// <summary>
    /// ID of the catalogs product group that this product group promotion references
    /// </summary>
    utility::string_t getCatalogsProductGroupId() const;
    bool catalogsProductGroupIdIsSet() const;
    void unsetCatalogs_product_group_id();

    void setCatalogsProductGroupId(const utility::string_t& value);

    /// <summary>
    /// Catalogs product group
    /// </summary>
    utility::string_t getCatalogsProductGroupName() const;
    bool catalogsProductGroupNameIsSet() const;
    void unsetCatalogs_product_group_name();

    void setCatalogsProductGroupName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CreativeType> getCreativeType() const;
    bool creativeTypeIsSet() const;
    void unsetCreative_type();

    void setCreativeType(const std::shared_ptr<CreativeType>& value);

    /// <summary>
    /// Hero Pin ID if this PG is promoted as a Collection
    /// </summary>
    utility::string_t getCollectionsHeroPinId() const;
    bool collectionsHeroPinIdIsSet() const;
    void unsetCollections_hero_pin_id();

    void setCollectionsHeroPinId(const utility::string_t& value);

    /// <summary>
    /// Collections Hero Destination Url
    /// </summary>
    utility::string_t getCollectionsHeroDestinationUrl() const;
    bool collectionsHeroDestinationUrlIsSet() const;
    void unsetCollections_hero_destination_url();

    void setCollectionsHeroDestinationUrl(const utility::string_t& value);

    /// <summary>
    /// Slideshow Collections Title
    /// </summary>
    utility::string_t getSlideshowCollectionsTitle() const;
    bool slideshowCollectionsTitleIsSet() const;
    void unsetSlideshow_collections_title();

    void setSlideshowCollectionsTitle(const utility::string_t& value);

    /// <summary>
    /// Slideshow Collections Description
    /// </summary>
    utility::string_t getSlideshowCollectionsDescription() const;
    bool slideshowCollectionsDescriptionIsSet() const;
    void unsetSlideshow_collections_description();

    void setSlideshowCollectionsDescription(const utility::string_t& value);

    /// <summary>
    /// If set to true products promoted in this product group will use the Mobile Deep Link specified in your catalog
    /// </summary>
    bool isIsMdl() const;
    bool isMdlIsSet() const;
    void unsetIs_mdl();

    void setIsMdl(bool value);


protected:
    std::shared_ptr<EntityStatus> m_Status;
    bool m_StatusIsSet;
    utility::string_t m_Tracking_url;
    bool m_Tracking_urlIsSet;
    utility::string_t m_Catalogs_product_group_id;
    bool m_Catalogs_product_group_idIsSet;
    utility::string_t m_Catalogs_product_group_name;
    bool m_Catalogs_product_group_nameIsSet;
    std::shared_ptr<CreativeType> m_Creative_type;
    bool m_Creative_typeIsSet;
    utility::string_t m_Collections_hero_pin_id;
    bool m_Collections_hero_pin_idIsSet;
    utility::string_t m_Collections_hero_destination_url;
    bool m_Collections_hero_destination_urlIsSet;
    utility::string_t m_Slideshow_collections_title;
    bool m_Slideshow_collections_titleIsSet;
    utility::string_t m_Slideshow_collections_description;
    bool m_Slideshow_collections_descriptionIsSet;
    bool m_Is_mdl;
    bool m_Is_mdlIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ProductGroupPromotionCommon_H_ */
