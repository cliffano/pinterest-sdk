/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* ProductGroupPromotionsApiImpl.h
*
* 
*/

#ifndef PRODUCT_GROUP_PROMOTIONS_API_IMPL_H_
#define PRODUCT_GROUP_PROMOTIONS_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <ProductGroupPromotionsApi.h>


#include "Error.h"
#include "ProductGroupPromotion.h"
#include "ProductGroupPromotionArrayElement.h"
#include "ProductGroupPromotionCreateRequest.h"
#include "ProductGroupPromotionUpdateRequest.h"
#include "ProductGroupPromotionUpdateResponseItem.h"
#include <string>

namespace org::openapitools::server::api
{

using namespace org::openapitools::server::model;

class ProductGroupPromotionsApiImpl : public org::openapitools::server::api::ProductGroupPromotionsApi {
public:
    explicit ProductGroupPromotionsApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~ProductGroupPromotionsApiImpl() override = default;

    void product_group_promotion_get(const std::string &adAccountId, const std::string &productGroupPromotionId, Pistache::Http::ResponseWriter &response);
    void product_group_promotions_create(const std::string &adAccountId, const ProductGroupPromotionCreateRequest &productGroupPromotionCreateRequest, Pistache::Http::ResponseWriter &response);
    void product_group_promotions_update(const std::string &adAccountId, const ProductGroupPromotionUpdateRequest &productGroupPromotionUpdateRequest, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif