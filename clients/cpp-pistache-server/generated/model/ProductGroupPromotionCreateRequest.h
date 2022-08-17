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
 * ProductGroupPromotionCreateRequest.h
 *
 * 
 */

#ifndef ProductGroupPromotionCreateRequest_H_
#define ProductGroupPromotionCreateRequest_H_


#include <string>
#include "Items.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  ProductGroupPromotionCreateRequest
{
public:
    ProductGroupPromotionCreateRequest();
    virtual ~ProductGroupPromotionCreateRequest() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const ProductGroupPromotionCreateRequest& rhs) const;
    bool operator!=(const ProductGroupPromotionCreateRequest& rhs) const;

    /////////////////////////////////////////////
    /// ProductGroupPromotionCreateRequest members

    /// <summary>
    /// ID of the Ad Group the Product Group Promotion belongs to.
    /// </summary>
    std::string getAdGroupId() const;
    void setAdGroupId(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<org::openapitools::server::model::Items> getProductGroupPromotion() const;
    void setProductGroupPromotion(std::vector<org::openapitools::server::model::Items> const& value);

    friend void to_json(nlohmann::json& j, const ProductGroupPromotionCreateRequest& o);
    friend void from_json(const nlohmann::json& j, ProductGroupPromotionCreateRequest& o);
protected:
    std::string m_Ad_group_id;

    std::vector<org::openapitools::server::model::Items> m_Product_group_promotion;

    
};

} // namespace org::openapitools::server::model

#endif /* ProductGroupPromotionCreateRequest_H_ */
