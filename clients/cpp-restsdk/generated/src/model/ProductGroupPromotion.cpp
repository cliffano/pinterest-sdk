/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/ProductGroupPromotion.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



ProductGroupPromotion::ProductGroupPromotion()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Ad_group_id = utility::conversions::to_string_t("");
    m_Ad_group_idIsSet = false;
    m_Bid_in_micro_currency = 0;
    m_Bid_in_micro_currencyIsSet = false;
    m_Included = false;
    m_IncludedIsSet = false;
    m_Definition = utility::conversions::to_string_t("");
    m_DefinitionIsSet = false;
    m_Relative_definition = utility::conversions::to_string_t("");
    m_Relative_definitionIsSet = false;
    m_Parent_id = utility::conversions::to_string_t("");
    m_Parent_idIsSet = false;
    m_Slideshow_collections_title = utility::conversions::to_string_t("");
    m_Slideshow_collections_titleIsSet = false;
    m_Slideshow_collections_description = utility::conversions::to_string_t("");
    m_Slideshow_collections_descriptionIsSet = false;
    m_Is_mdl = false;
    m_Is_mdlIsSet = false;
    m_StatusIsSet = false;
    m_Tracking_url = utility::conversions::to_string_t("");
    m_Tracking_urlIsSet = false;
    m_Catalog_product_group_id = utility::conversions::to_string_t("");
    m_Catalog_product_group_idIsSet = false;
    m_Catalog_product_group_name = utility::conversions::to_string_t("");
    m_Catalog_product_group_nameIsSet = false;
    m_Creative_typeIsSet = false;
    m_Collections_hero_pin_id = utility::conversions::to_string_t("");
    m_Collections_hero_pin_idIsSet = false;
    m_Collections_hero_destination_url = utility::conversions::to_string_t("");
    m_Collections_hero_destination_urlIsSet = false;
    m_Grid_click_typeIsSet = false;
}

ProductGroupPromotion::~ProductGroupPromotion()
{
}

void ProductGroupPromotion::validate()
{
    // TODO: implement validation
}

web::json::value ProductGroupPromotion::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_Ad_group_idIsSet)
    {
        val[utility::conversions::to_string_t(U("ad_group_id"))] = ModelBase::toJson(m_Ad_group_id);
    }
    if(m_Bid_in_micro_currencyIsSet)
    {
        val[utility::conversions::to_string_t(U("bid_in_micro_currency"))] = ModelBase::toJson(m_Bid_in_micro_currency);
    }
    if(m_IncludedIsSet)
    {
        val[utility::conversions::to_string_t(U("included"))] = ModelBase::toJson(m_Included);
    }
    if(m_DefinitionIsSet)
    {
        val[utility::conversions::to_string_t(U("definition"))] = ModelBase::toJson(m_Definition);
    }
    if(m_Relative_definitionIsSet)
    {
        val[utility::conversions::to_string_t(U("relative_definition"))] = ModelBase::toJson(m_Relative_definition);
    }
    if(m_Parent_idIsSet)
    {
        val[utility::conversions::to_string_t(U("parent_id"))] = ModelBase::toJson(m_Parent_id);
    }
    if(m_Slideshow_collections_titleIsSet)
    {
        val[utility::conversions::to_string_t(U("slideshow_collections_title"))] = ModelBase::toJson(m_Slideshow_collections_title);
    }
    if(m_Slideshow_collections_descriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("slideshow_collections_description"))] = ModelBase::toJson(m_Slideshow_collections_description);
    }
    if(m_Is_mdlIsSet)
    {
        val[utility::conversions::to_string_t(U("is_mdl"))] = ModelBase::toJson(m_Is_mdl);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_Tracking_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("tracking_url"))] = ModelBase::toJson(m_Tracking_url);
    }
    if(m_Catalog_product_group_idIsSet)
    {
        val[utility::conversions::to_string_t(U("catalog_product_group_id"))] = ModelBase::toJson(m_Catalog_product_group_id);
    }
    if(m_Catalog_product_group_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("catalog_product_group_name"))] = ModelBase::toJson(m_Catalog_product_group_name);
    }
    if(m_Creative_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("creative_type"))] = ModelBase::toJson(m_Creative_type);
    }
    if(m_Collections_hero_pin_idIsSet)
    {
        val[utility::conversions::to_string_t(U("collections_hero_pin_id"))] = ModelBase::toJson(m_Collections_hero_pin_id);
    }
    if(m_Collections_hero_destination_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("collections_hero_destination_url"))] = ModelBase::toJson(m_Collections_hero_destination_url);
    }
    if(m_Grid_click_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("grid_click_type"))] = ModelBase::toJson(m_Grid_click_type);
    }

    return val;
}

bool ProductGroupPromotion::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ad_group_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ad_group_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAdGroupId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAdGroupId);
            setAdGroupId(refVal_setAdGroupId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bid_in_micro_currency"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bid_in_micro_currency")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setBidInMicroCurrency;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBidInMicroCurrency);
            setBidInMicroCurrency(refVal_setBidInMicroCurrency);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("included"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("included")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIncluded;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncluded);
            setIncluded(refVal_setIncluded);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("definition"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("definition")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDefinition;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDefinition);
            setDefinition(refVal_setDefinition);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("relative_definition"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("relative_definition")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRelativeDefinition;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRelativeDefinition);
            setRelativeDefinition(refVal_setRelativeDefinition);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("parent_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("parent_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setParentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setParentId);
            setParentId(refVal_setParentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("slideshow_collections_title"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("slideshow_collections_title")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSlideshowCollectionsTitle;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSlideshowCollectionsTitle);
            setSlideshowCollectionsTitle(refVal_setSlideshowCollectionsTitle);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("slideshow_collections_description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("slideshow_collections_description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSlideshowCollectionsDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSlideshowCollectionsDescription);
            setSlideshowCollectionsDescription(refVal_setSlideshowCollectionsDescription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("is_mdl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("is_mdl")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsMdl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsMdl);
            setIsMdl(refVal_setIsMdl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<EntityStatus> refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tracking_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tracking_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTrackingUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTrackingUrl);
            setTrackingUrl(refVal_setTrackingUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("catalog_product_group_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("catalog_product_group_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCatalogProductGroupId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCatalogProductGroupId);
            setCatalogProductGroupId(refVal_setCatalogProductGroupId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("catalog_product_group_name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("catalog_product_group_name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCatalogProductGroupName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCatalogProductGroupName);
            setCatalogProductGroupName(refVal_setCatalogProductGroupName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("creative_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("creative_type")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CreativeType> refVal_setCreativeType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreativeType);
            setCreativeType(refVal_setCreativeType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("collections_hero_pin_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("collections_hero_pin_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCollectionsHeroPinId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCollectionsHeroPinId);
            setCollectionsHeroPinId(refVal_setCollectionsHeroPinId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("collections_hero_destination_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("collections_hero_destination_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCollectionsHeroDestinationUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCollectionsHeroDestinationUrl);
            setCollectionsHeroDestinationUrl(refVal_setCollectionsHeroDestinationUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("grid_click_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("grid_click_type")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<GridClickType> refVal_setGridClickType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGridClickType);
            setGridClickType(refVal_setGridClickType);
        }
    }
    return ok;
}

void ProductGroupPromotion::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_Ad_group_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ad_group_id")), m_Ad_group_id));
    }
    if(m_Bid_in_micro_currencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bid_in_micro_currency")), m_Bid_in_micro_currency));
    }
    if(m_IncludedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("included")), m_Included));
    }
    if(m_DefinitionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("definition")), m_Definition));
    }
    if(m_Relative_definitionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("relative_definition")), m_Relative_definition));
    }
    if(m_Parent_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("parent_id")), m_Parent_id));
    }
    if(m_Slideshow_collections_titleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("slideshow_collections_title")), m_Slideshow_collections_title));
    }
    if(m_Slideshow_collections_descriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("slideshow_collections_description")), m_Slideshow_collections_description));
    }
    if(m_Is_mdlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_mdl")), m_Is_mdl));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_Tracking_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tracking_url")), m_Tracking_url));
    }
    if(m_Catalog_product_group_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("catalog_product_group_id")), m_Catalog_product_group_id));
    }
    if(m_Catalog_product_group_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("catalog_product_group_name")), m_Catalog_product_group_name));
    }
    if(m_Creative_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("creative_type")), m_Creative_type));
    }
    if(m_Collections_hero_pin_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("collections_hero_pin_id")), m_Collections_hero_pin_id));
    }
    if(m_Collections_hero_destination_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("collections_hero_destination_url")), m_Collections_hero_destination_url));
    }
    if(m_Grid_click_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("grid_click_type")), m_Grid_click_type));
    }
}

bool ProductGroupPromotion::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ad_group_id"))))
    {
        utility::string_t refVal_setAdGroupId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ad_group_id"))), refVal_setAdGroupId );
        setAdGroupId(refVal_setAdGroupId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bid_in_micro_currency"))))
    {
        int32_t refVal_setBidInMicroCurrency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bid_in_micro_currency"))), refVal_setBidInMicroCurrency );
        setBidInMicroCurrency(refVal_setBidInMicroCurrency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("included"))))
    {
        bool refVal_setIncluded;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("included"))), refVal_setIncluded );
        setIncluded(refVal_setIncluded);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("definition"))))
    {
        utility::string_t refVal_setDefinition;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("definition"))), refVal_setDefinition );
        setDefinition(refVal_setDefinition);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("relative_definition"))))
    {
        utility::string_t refVal_setRelativeDefinition;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("relative_definition"))), refVal_setRelativeDefinition );
        setRelativeDefinition(refVal_setRelativeDefinition);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("parent_id"))))
    {
        utility::string_t refVal_setParentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("parent_id"))), refVal_setParentId );
        setParentId(refVal_setParentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("slideshow_collections_title"))))
    {
        utility::string_t refVal_setSlideshowCollectionsTitle;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("slideshow_collections_title"))), refVal_setSlideshowCollectionsTitle );
        setSlideshowCollectionsTitle(refVal_setSlideshowCollectionsTitle);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("slideshow_collections_description"))))
    {
        utility::string_t refVal_setSlideshowCollectionsDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("slideshow_collections_description"))), refVal_setSlideshowCollectionsDescription );
        setSlideshowCollectionsDescription(refVal_setSlideshowCollectionsDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_mdl"))))
    {
        bool refVal_setIsMdl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_mdl"))), refVal_setIsMdl );
        setIsMdl(refVal_setIsMdl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        std::shared_ptr<EntityStatus> refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tracking_url"))))
    {
        utility::string_t refVal_setTrackingUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tracking_url"))), refVal_setTrackingUrl );
        setTrackingUrl(refVal_setTrackingUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("catalog_product_group_id"))))
    {
        utility::string_t refVal_setCatalogProductGroupId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("catalog_product_group_id"))), refVal_setCatalogProductGroupId );
        setCatalogProductGroupId(refVal_setCatalogProductGroupId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("catalog_product_group_name"))))
    {
        utility::string_t refVal_setCatalogProductGroupName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("catalog_product_group_name"))), refVal_setCatalogProductGroupName );
        setCatalogProductGroupName(refVal_setCatalogProductGroupName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("creative_type"))))
    {
        std::shared_ptr<CreativeType> refVal_setCreativeType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("creative_type"))), refVal_setCreativeType );
        setCreativeType(refVal_setCreativeType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("collections_hero_pin_id"))))
    {
        utility::string_t refVal_setCollectionsHeroPinId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("collections_hero_pin_id"))), refVal_setCollectionsHeroPinId );
        setCollectionsHeroPinId(refVal_setCollectionsHeroPinId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("collections_hero_destination_url"))))
    {
        utility::string_t refVal_setCollectionsHeroDestinationUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("collections_hero_destination_url"))), refVal_setCollectionsHeroDestinationUrl );
        setCollectionsHeroDestinationUrl(refVal_setCollectionsHeroDestinationUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("grid_click_type"))))
    {
        std::shared_ptr<GridClickType> refVal_setGridClickType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("grid_click_type"))), refVal_setGridClickType );
        setGridClickType(refVal_setGridClickType);
    }
    return ok;
}

utility::string_t ProductGroupPromotion::getId() const
{
    return m_Id;
}

void ProductGroupPromotion::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool ProductGroupPromotion::idIsSet() const
{
    return m_IdIsSet;
}

void ProductGroupPromotion::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t ProductGroupPromotion::getAdGroupId() const
{
    return m_Ad_group_id;
}

void ProductGroupPromotion::setAdGroupId(const utility::string_t& value)
{
    m_Ad_group_id = value;
    m_Ad_group_idIsSet = true;
}

bool ProductGroupPromotion::adGroupIdIsSet() const
{
    return m_Ad_group_idIsSet;
}

void ProductGroupPromotion::unsetAd_group_id()
{
    m_Ad_group_idIsSet = false;
}
int32_t ProductGroupPromotion::getBidInMicroCurrency() const
{
    return m_Bid_in_micro_currency;
}

void ProductGroupPromotion::setBidInMicroCurrency(int32_t value)
{
    m_Bid_in_micro_currency = value;
    m_Bid_in_micro_currencyIsSet = true;
}

bool ProductGroupPromotion::bidInMicroCurrencyIsSet() const
{
    return m_Bid_in_micro_currencyIsSet;
}

void ProductGroupPromotion::unsetBid_in_micro_currency()
{
    m_Bid_in_micro_currencyIsSet = false;
}
bool ProductGroupPromotion::isIncluded() const
{
    return m_Included;
}

void ProductGroupPromotion::setIncluded(bool value)
{
    m_Included = value;
    m_IncludedIsSet = true;
}

bool ProductGroupPromotion::includedIsSet() const
{
    return m_IncludedIsSet;
}

void ProductGroupPromotion::unsetIncluded()
{
    m_IncludedIsSet = false;
}
utility::string_t ProductGroupPromotion::getDefinition() const
{
    return m_Definition;
}

void ProductGroupPromotion::setDefinition(const utility::string_t& value)
{
    m_Definition = value;
    m_DefinitionIsSet = true;
}

bool ProductGroupPromotion::definitionIsSet() const
{
    return m_DefinitionIsSet;
}

void ProductGroupPromotion::unsetDefinition()
{
    m_DefinitionIsSet = false;
}
utility::string_t ProductGroupPromotion::getRelativeDefinition() const
{
    return m_Relative_definition;
}

void ProductGroupPromotion::setRelativeDefinition(const utility::string_t& value)
{
    m_Relative_definition = value;
    m_Relative_definitionIsSet = true;
}

bool ProductGroupPromotion::relativeDefinitionIsSet() const
{
    return m_Relative_definitionIsSet;
}

void ProductGroupPromotion::unsetRelative_definition()
{
    m_Relative_definitionIsSet = false;
}
utility::string_t ProductGroupPromotion::getParentId() const
{
    return m_Parent_id;
}

void ProductGroupPromotion::setParentId(const utility::string_t& value)
{
    m_Parent_id = value;
    m_Parent_idIsSet = true;
}

bool ProductGroupPromotion::parentIdIsSet() const
{
    return m_Parent_idIsSet;
}

void ProductGroupPromotion::unsetParent_id()
{
    m_Parent_idIsSet = false;
}
utility::string_t ProductGroupPromotion::getSlideshowCollectionsTitle() const
{
    return m_Slideshow_collections_title;
}

void ProductGroupPromotion::setSlideshowCollectionsTitle(const utility::string_t& value)
{
    m_Slideshow_collections_title = value;
    m_Slideshow_collections_titleIsSet = true;
}

bool ProductGroupPromotion::slideshowCollectionsTitleIsSet() const
{
    return m_Slideshow_collections_titleIsSet;
}

void ProductGroupPromotion::unsetSlideshow_collections_title()
{
    m_Slideshow_collections_titleIsSet = false;
}
utility::string_t ProductGroupPromotion::getSlideshowCollectionsDescription() const
{
    return m_Slideshow_collections_description;
}

void ProductGroupPromotion::setSlideshowCollectionsDescription(const utility::string_t& value)
{
    m_Slideshow_collections_description = value;
    m_Slideshow_collections_descriptionIsSet = true;
}

bool ProductGroupPromotion::slideshowCollectionsDescriptionIsSet() const
{
    return m_Slideshow_collections_descriptionIsSet;
}

void ProductGroupPromotion::unsetSlideshow_collections_description()
{
    m_Slideshow_collections_descriptionIsSet = false;
}
bool ProductGroupPromotion::isIsMdl() const
{
    return m_Is_mdl;
}

void ProductGroupPromotion::setIsMdl(bool value)
{
    m_Is_mdl = value;
    m_Is_mdlIsSet = true;
}

bool ProductGroupPromotion::isMdlIsSet() const
{
    return m_Is_mdlIsSet;
}

void ProductGroupPromotion::unsetIs_mdl()
{
    m_Is_mdlIsSet = false;
}
std::shared_ptr<EntityStatus> ProductGroupPromotion::getStatus() const
{
    return m_Status;
}

void ProductGroupPromotion::setStatus(const std::shared_ptr<EntityStatus>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool ProductGroupPromotion::statusIsSet() const
{
    return m_StatusIsSet;
}

void ProductGroupPromotion::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t ProductGroupPromotion::getTrackingUrl() const
{
    return m_Tracking_url;
}

void ProductGroupPromotion::setTrackingUrl(const utility::string_t& value)
{
    m_Tracking_url = value;
    m_Tracking_urlIsSet = true;
}

bool ProductGroupPromotion::trackingUrlIsSet() const
{
    return m_Tracking_urlIsSet;
}

void ProductGroupPromotion::unsetTracking_url()
{
    m_Tracking_urlIsSet = false;
}
utility::string_t ProductGroupPromotion::getCatalogProductGroupId() const
{
    return m_Catalog_product_group_id;
}

void ProductGroupPromotion::setCatalogProductGroupId(const utility::string_t& value)
{
    m_Catalog_product_group_id = value;
    m_Catalog_product_group_idIsSet = true;
}

bool ProductGroupPromotion::catalogProductGroupIdIsSet() const
{
    return m_Catalog_product_group_idIsSet;
}

void ProductGroupPromotion::unsetCatalog_product_group_id()
{
    m_Catalog_product_group_idIsSet = false;
}
utility::string_t ProductGroupPromotion::getCatalogProductGroupName() const
{
    return m_Catalog_product_group_name;
}

void ProductGroupPromotion::setCatalogProductGroupName(const utility::string_t& value)
{
    m_Catalog_product_group_name = value;
    m_Catalog_product_group_nameIsSet = true;
}

bool ProductGroupPromotion::catalogProductGroupNameIsSet() const
{
    return m_Catalog_product_group_nameIsSet;
}

void ProductGroupPromotion::unsetCatalog_product_group_name()
{
    m_Catalog_product_group_nameIsSet = false;
}
std::shared_ptr<CreativeType> ProductGroupPromotion::getCreativeType() const
{
    return m_Creative_type;
}

void ProductGroupPromotion::setCreativeType(const std::shared_ptr<CreativeType>& value)
{
    m_Creative_type = value;
    m_Creative_typeIsSet = true;
}

bool ProductGroupPromotion::creativeTypeIsSet() const
{
    return m_Creative_typeIsSet;
}

void ProductGroupPromotion::unsetCreative_type()
{
    m_Creative_typeIsSet = false;
}
utility::string_t ProductGroupPromotion::getCollectionsHeroPinId() const
{
    return m_Collections_hero_pin_id;
}

void ProductGroupPromotion::setCollectionsHeroPinId(const utility::string_t& value)
{
    m_Collections_hero_pin_id = value;
    m_Collections_hero_pin_idIsSet = true;
}

bool ProductGroupPromotion::collectionsHeroPinIdIsSet() const
{
    return m_Collections_hero_pin_idIsSet;
}

void ProductGroupPromotion::unsetCollections_hero_pin_id()
{
    m_Collections_hero_pin_idIsSet = false;
}
utility::string_t ProductGroupPromotion::getCollectionsHeroDestinationUrl() const
{
    return m_Collections_hero_destination_url;
}

void ProductGroupPromotion::setCollectionsHeroDestinationUrl(const utility::string_t& value)
{
    m_Collections_hero_destination_url = value;
    m_Collections_hero_destination_urlIsSet = true;
}

bool ProductGroupPromotion::collectionsHeroDestinationUrlIsSet() const
{
    return m_Collections_hero_destination_urlIsSet;
}

void ProductGroupPromotion::unsetCollections_hero_destination_url()
{
    m_Collections_hero_destination_urlIsSet = false;
}
std::shared_ptr<GridClickType> ProductGroupPromotion::getGridClickType() const
{
    return m_Grid_click_type;
}

void ProductGroupPromotion::setGridClickType(const std::shared_ptr<GridClickType>& value)
{
    m_Grid_click_type = value;
    m_Grid_click_typeIsSet = true;
}

bool ProductGroupPromotion::gridClickTypeIsSet() const
{
    return m_Grid_click_typeIsSet;
}

void ProductGroupPromotion::unsetGrid_click_type()
{
    m_Grid_click_typeIsSet = false;
}
}
}
}
}


