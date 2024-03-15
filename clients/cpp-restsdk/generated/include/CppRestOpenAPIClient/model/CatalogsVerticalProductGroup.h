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

/*
 * CatalogsVerticalProductGroup.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsVerticalProductGroup_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsVerticalProductGroup_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/CatalogsProductGroupType.h"
#include "CppRestOpenAPIClient/model/CatalogsProductGroupStatus.h"
#include "CppRestOpenAPIClient/model/CatalogsRetailProductGroup.h"
#include "CppRestOpenAPIClient/model/CatalogsHotelProductGroup.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CatalogsProductGroupFilters.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class CatalogsProductGroupFilters;

/// <summary>
/// 
/// </summary>
class  CatalogsVerticalProductGroup
    : public ModelBase
{
public:
    CatalogsVerticalProductGroup();
    virtual ~CatalogsVerticalProductGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsVerticalProductGroup members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCatalogType() const;
    bool catalogTypeIsSet() const;
    void unsetCatalog_type();

    void setCatalogType(const utility::string_t& value);

    /// <summary>
    /// ID of the catalog product group.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// Name of catalog product group
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupFilters> getFilters() const;
    bool filtersIsSet() const;
    void unsetFilters();

    void setFilters(const std::shared_ptr<CatalogsProductGroupFilters>& value);

    /// <summary>
    /// Unix timestamp in seconds of when catalog product group was created.
    /// </summary>
    int32_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreated_at();

    void setCreatedAt(int32_t value);

    /// <summary>
    /// Unix timestamp in seconds of last time catalog product group was updated.
    /// </summary>
    int32_t getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdated_at();

    void setUpdatedAt(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCatalogId() const;
    bool catalogIdIsSet() const;
    void unsetCatalog_id();

    void setCatalogId(const utility::string_t& value);

    /// <summary>
    /// boolean indicator of whether the product group is being featured or not
    /// </summary>
    bool isIsFeatured() const;
    bool isFeaturedIsSet() const;
    void unsetIs_featured();

    void setIsFeatured(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupType> getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const std::shared_ptr<CatalogsProductGroupType>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<CatalogsProductGroupStatus>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFeedId() const;
    bool feedIdIsSet() const;
    void unsetFeed_id();

    void setFeedId(const utility::string_t& value);


protected:
    utility::string_t m_Catalog_type;
    bool m_Catalog_typeIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    std::shared_ptr<CatalogsProductGroupFilters> m_Filters;
    bool m_FiltersIsSet;
    int32_t m_Created_at;
    bool m_Created_atIsSet;
    int32_t m_Updated_at;
    bool m_Updated_atIsSet;
    utility::string_t m_Catalog_id;
    bool m_Catalog_idIsSet;
    bool m_Is_featured;
    bool m_Is_featuredIsSet;
    std::shared_ptr<CatalogsProductGroupType> m_Type;
    bool m_TypeIsSet;
    std::shared_ptr<CatalogsProductGroupStatus> m_Status;
    bool m_StatusIsSet;
    utility::string_t m_Feed_id;
    bool m_Feed_idIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsVerticalProductGroup_H_ */
