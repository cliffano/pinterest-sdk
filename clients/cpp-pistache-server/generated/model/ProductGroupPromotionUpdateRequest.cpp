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


#include "ProductGroupPromotionUpdateRequest.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

ProductGroupPromotionUpdateRequest::ProductGroupPromotionUpdateRequest()
{
    m_Ad_group_id = "";
    
}

void ProductGroupPromotionUpdateRequest::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ProductGroupPromotionUpdateRequest::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ProductGroupPromotionUpdateRequest::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ProductGroupPromotionUpdateRequest" : pathPrefix;

         
    
    /* Ad_group_id */ {
        const std::string& value = m_Ad_group_id;
        const std::string currentValuePath = _pathPrefix + ".adGroupId";
                
        

    }
         
    
    /* Product_group_promotion */ {
        const std::vector<org::openapitools::server::model::ProductGroupPromotionUpdateItem>& value = m_Product_group_promotion;
        const std::string currentValuePath = _pathPrefix + ".productGroupPromotion";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::ProductGroupPromotionUpdateItem& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".productGroupPromotion") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool ProductGroupPromotionUpdateRequest::operator==(const ProductGroupPromotionUpdateRequest& rhs) const
{
    return
    
    
    (getAdGroupId() == rhs.getAdGroupId())
     &&
    
    (getProductGroupPromotion() == rhs.getProductGroupPromotion())
    
    
    ;
}

bool ProductGroupPromotionUpdateRequest::operator!=(const ProductGroupPromotionUpdateRequest& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ProductGroupPromotionUpdateRequest& o)
{
    j = nlohmann::json();
    j["ad_group_id"] = o.m_Ad_group_id;
    j["product_group_promotion"] = o.m_Product_group_promotion;
    
}

void from_json(const nlohmann::json& j, ProductGroupPromotionUpdateRequest& o)
{
    j.at("ad_group_id").get_to(o.m_Ad_group_id);
    j.at("product_group_promotion").get_to(o.m_Product_group_promotion);
    
}

std::string ProductGroupPromotionUpdateRequest::getAdGroupId() const
{
    return m_Ad_group_id;
}
void ProductGroupPromotionUpdateRequest::setAdGroupId(std::string const& value)
{
    m_Ad_group_id = value;
}
std::vector<org::openapitools::server::model::ProductGroupPromotionUpdateItem> ProductGroupPromotionUpdateRequest::getProductGroupPromotion() const
{
    return m_Product_group_promotion;
}
void ProductGroupPromotionUpdateRequest::setProductGroupPromotion(std::vector<org::openapitools::server::model::ProductGroupPromotionUpdateItem> const& value)
{
    m_Product_group_promotion = value;
}


} // namespace org::openapitools::server::model

