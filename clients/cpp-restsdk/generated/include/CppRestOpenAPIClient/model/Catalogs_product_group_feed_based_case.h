/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Catalogs_product_group_feed_based_case.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Catalogs_product_group_feed_based_case_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Catalogs_product_group_feed_based_case_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/CatalogsProductGroupType.h"
#include "CppRestOpenAPIClient/model/CatalogsProductGroupStatus.h"
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
class  Catalogs_product_group_feed_based_case
    : public ModelBase
{
public:
    Catalogs_product_group_feed_based_case();
    virtual ~Catalogs_product_group_feed_based_case();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Catalogs_product_group_feed_based_case members

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
    /// id of the catalogs feed belonging to this catalog product group
    /// </summary>
    utility::string_t getFeedId() const;
    bool feedIdIsSet() const;
    void unsetFeed_id();

    void setFeedId(const utility::string_t& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    std::shared_ptr<CatalogsProductGroupFilters> m_Filters;
    bool m_FiltersIsSet;
    bool m_Is_featured;
    bool m_Is_featuredIsSet;
    std::shared_ptr<CatalogsProductGroupType> m_Type;
    bool m_TypeIsSet;
    std::shared_ptr<CatalogsProductGroupStatus> m_Status;
    bool m_StatusIsSet;
    int32_t m_Created_at;
    bool m_Created_atIsSet;
    int32_t m_Updated_at;
    bool m_Updated_atIsSet;
    utility::string_t m_Feed_id;
    bool m_Feed_idIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Catalogs_product_group_feed_based_case_H_ */