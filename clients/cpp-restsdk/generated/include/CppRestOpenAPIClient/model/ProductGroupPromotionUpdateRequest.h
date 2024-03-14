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
 * ProductGroupPromotionUpdateRequest.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ProductGroupPromotionUpdateRequest_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ProductGroupPromotionUpdateRequest_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/ProductGroupPromotionUpdateItem.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class ProductGroupPromotionUpdateItem;

/// <summary>
/// 
/// </summary>
class  ProductGroupPromotionUpdateRequest
    : public ModelBase
{
public:
    ProductGroupPromotionUpdateRequest();
    virtual ~ProductGroupPromotionUpdateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ProductGroupPromotionUpdateRequest members

    /// <summary>
    /// ID of the ad group the product group belongs to.
    /// </summary>
    utility::string_t getAdGroupId() const;
    bool adGroupIdIsSet() const;
    void unsetAd_group_id();

    void setAdGroupId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ProductGroupPromotionUpdateItem>>& getProductGroupPromotion();
    bool productGroupPromotionIsSet() const;
    void unsetProduct_group_promotion();

    void setProductGroupPromotion(const std::vector<std::shared_ptr<ProductGroupPromotionUpdateItem>>& value);


protected:
    utility::string_t m_Ad_group_id;
    bool m_Ad_group_idIsSet;
    std::vector<std::shared_ptr<ProductGroupPromotionUpdateItem>> m_Product_group_promotion;
    bool m_Product_group_promotionIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ProductGroupPromotionUpdateRequest_H_ */
