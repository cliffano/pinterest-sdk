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
 * ProductGroupPromotionUpdateItem.h
 *
 * 
 */

#ifndef ProductGroupPromotionUpdateItem_H_
#define ProductGroupPromotionUpdateItem_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  ProductGroupPromotionUpdateItem
{
public:
    ProductGroupPromotionUpdateItem();
    virtual ~ProductGroupPromotionUpdateItem() = default;


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

    bool operator==(const ProductGroupPromotionUpdateItem& rhs) const;
    bool operator!=(const ProductGroupPromotionUpdateItem& rhs) const;

    /////////////////////////////////////////////
    /// ProductGroupPromotionUpdateItem members

    /// <summary>
    /// ID of the product group.
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
    bool idIsSet() const;
    void unsetId();

    friend void to_json(nlohmann::json& j, const ProductGroupPromotionUpdateItem& o);
    friend void from_json(const nlohmann::json& j, ProductGroupPromotionUpdateItem& o);
protected:
    std::string m_Id;
    bool m_IdIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* ProductGroupPromotionUpdateItem_H_ */
