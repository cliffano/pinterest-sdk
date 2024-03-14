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
 * Product_groups_create_request_feed_base_case.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Product_groups_create_request_feed_base_case_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Product_groups_create_request_feed_base_case_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/CatalogsProductGroupFiltersAllOfRequest.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class CatalogsProductGroupFiltersAllOfRequest;

/// <summary>
/// 
/// </summary>
class  Product_groups_create_request_feed_base_case
    : public ModelBase
{
public:
    Product_groups_create_request_feed_base_case();
    virtual ~Product_groups_create_request_feed_base_case();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Product_groups_create_request_feed_base_case members

    /// <summary>
    /// 
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
    /// boolean indicator of whether the product group is being featured or not
    /// </summary>
    bool isIsFeatured() const;
    bool isFeaturedIsSet() const;
    void unsetIs_featured();

    void setIsFeatured(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupFiltersAllOfRequest> getFilters() const;
    bool filtersIsSet() const;
    void unsetFilters();

    void setFilters(const std::shared_ptr<CatalogsProductGroupFiltersAllOfRequest>& value);

    /// <summary>
    /// Catalog Feed id pertaining to the catalog product group.
    /// </summary>
    utility::string_t getFeedId() const;
    bool feedIdIsSet() const;
    void unsetFeed_id();

    void setFeedId(const utility::string_t& value);


protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    bool m_Is_featured;
    bool m_Is_featuredIsSet;
    std::shared_ptr<CatalogsProductGroupFiltersAllOfRequest> m_Filters;
    bool m_FiltersIsSet;
    utility::string_t m_Feed_id;
    bool m_Feed_idIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Product_groups_create_request_feed_base_case_H_ */
