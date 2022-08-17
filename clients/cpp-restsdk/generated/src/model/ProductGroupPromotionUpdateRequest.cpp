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



#include "CppRestOpenAPIClient/model/ProductGroupPromotionUpdateRequest.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



ProductGroupPromotionUpdateRequest::ProductGroupPromotionUpdateRequest()
{
    m_Ad_group_id = utility::conversions::to_string_t("");
    m_Ad_group_idIsSet = false;
    m_Product_group_promotionIsSet = false;
}

ProductGroupPromotionUpdateRequest::~ProductGroupPromotionUpdateRequest()
{
}

void ProductGroupPromotionUpdateRequest::validate()
{
    // TODO: implement validation
}

web::json::value ProductGroupPromotionUpdateRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Ad_group_idIsSet)
    {
        val[utility::conversions::to_string_t(U("ad_group_id"))] = ModelBase::toJson(m_Ad_group_id);
    }
    if(m_Product_group_promotionIsSet)
    {
        val[utility::conversions::to_string_t(U("product_group_promotion"))] = ModelBase::toJson(m_Product_group_promotion);
    }

    return val;
}

bool ProductGroupPromotionUpdateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("product_group_promotion"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("product_group_promotion")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ProductGroupPromotionUpdateItem>> refVal_setProductGroupPromotion;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProductGroupPromotion);
            setProductGroupPromotion(refVal_setProductGroupPromotion);
        }
    }
    return ok;
}

void ProductGroupPromotionUpdateRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Ad_group_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ad_group_id")), m_Ad_group_id));
    }
    if(m_Product_group_promotionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("product_group_promotion")), m_Product_group_promotion));
    }
}

bool ProductGroupPromotionUpdateRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("ad_group_id"))))
    {
        utility::string_t refVal_setAdGroupId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ad_group_id"))), refVal_setAdGroupId );
        setAdGroupId(refVal_setAdGroupId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("product_group_promotion"))))
    {
        std::vector<std::shared_ptr<ProductGroupPromotionUpdateItem>> refVal_setProductGroupPromotion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("product_group_promotion"))), refVal_setProductGroupPromotion );
        setProductGroupPromotion(refVal_setProductGroupPromotion);
    }
    return ok;
}

utility::string_t ProductGroupPromotionUpdateRequest::getAdGroupId() const
{
    return m_Ad_group_id;
}

void ProductGroupPromotionUpdateRequest::setAdGroupId(const utility::string_t& value)
{
    m_Ad_group_id = value;
    m_Ad_group_idIsSet = true;
}

bool ProductGroupPromotionUpdateRequest::adGroupIdIsSet() const
{
    return m_Ad_group_idIsSet;
}

void ProductGroupPromotionUpdateRequest::unsetAd_group_id()
{
    m_Ad_group_idIsSet = false;
}
std::vector<std::shared_ptr<ProductGroupPromotionUpdateItem>>& ProductGroupPromotionUpdateRequest::getProductGroupPromotion()
{
    return m_Product_group_promotion;
}

void ProductGroupPromotionUpdateRequest::setProductGroupPromotion(const std::vector<std::shared_ptr<ProductGroupPromotionUpdateItem>>& value)
{
    m_Product_group_promotion = value;
    m_Product_group_promotionIsSet = true;
}

bool ProductGroupPromotionUpdateRequest::productGroupPromotionIsSet() const
{
    return m_Product_group_promotionIsSet;
}

void ProductGroupPromotionUpdateRequest::unsetProduct_group_promotion()
{
    m_Product_group_promotionIsSet = false;
}
}
}
}
}

