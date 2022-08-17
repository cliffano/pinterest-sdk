/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ProductGroupPromotionsApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_ProductGroupPromotionsApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_ProductGroupPromotionsApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/Error.h"
#include "CppRestOpenAPIClient/model/ProductGroupPromotion.h"
#include "CppRestOpenAPIClient/model/ProductGroupPromotionArrayElement.h"
#include "CppRestOpenAPIClient/model/ProductGroupPromotionCreateRequest.h"
#include "CppRestOpenAPIClient/model/ProductGroupPromotionUpdateRequest.h"
#include "CppRestOpenAPIClient/model/ProductGroupPromotionUpdateResponseItem.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  ProductGroupPromotionsApi 
{
public:

    explicit ProductGroupPromotionsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ProductGroupPromotionsApi();

    /// <summary>
    /// Get a product group promotion by id
    /// </summary>
    /// <remarks>
    /// &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/features/ads-management/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt; &lt;p/&gt; Get a product group promotion by id
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="productGroupPromotionId">Unique identifier of a product group promotion</param>
    pplx::task<std::shared_ptr<ProductGroupPromotion>> productGroupPromotion_get(
        utility::string_t adAccountId,
        utility::string_t productGroupPromotionId
    ) const;
    /// <summary>
    /// Create product group promotions
    /// </summary>
    /// <remarks>
    /// &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/features/ads-management/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt; &lt;p/&gt; Add one or more product groups from your catalog to an existing ad group. (Product groups added to an ad group are a &#39;product group promotion.&#39;)
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="productGroupPromotionCreateRequest">List of Product Group Promotions to create, size limit [1, 30].</param>
    pplx::task<std::vector<std::shared_ptr<ProductGroupPromotionArrayElement>>> productGroupPromotions_create(
        utility::string_t adAccountId,
        std::shared_ptr<ProductGroupPromotionCreateRequest> productGroupPromotionCreateRequest
    ) const;
    /// <summary>
    /// Update product group promotions
    /// </summary>
    /// <remarks>
    /// &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/features/ads-management/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt; &lt;p/&gt; Update multiple existing Product Group Promotions (by product_group_id)
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="productGroupPromotionUpdateRequest">Parameters to update Product group promotions</param>
    pplx::task<std::vector<std::shared_ptr<ProductGroupPromotionUpdateResponseItem>>> productGroupPromotions_update(
        utility::string_t adAccountId,
        std::shared_ptr<ProductGroupPromotionUpdateRequest> productGroupPromotionUpdateRequest
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_ProductGroupPromotionsApi_H_ */

