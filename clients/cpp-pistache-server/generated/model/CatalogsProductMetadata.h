/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * CatalogsProductMetadata.h
 *
 * Product metadata entity
 */

#ifndef CatalogsProductMetadata_H_
#define CatalogsProductMetadata_H_


#include "NonNullableCatalogsCurrency.h"
#include <string>
#include "NonNullableProductAvailabilityType.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Product metadata entity
/// </summary>
class  CatalogsProductMetadata
{
public:
    CatalogsProductMetadata();
    virtual ~CatalogsProductMetadata() = default;


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

    bool operator==(const CatalogsProductMetadata& rhs) const;
    bool operator!=(const CatalogsProductMetadata& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsProductMetadata members

    /// <summary>
    /// The user-created unique ID that represents the product.
    /// </summary>
    std::string getItemId() const;
    void setItemId(std::string const& value);
    /// <summary>
    /// The parent ID of the product.
    /// </summary>
    std::string getItemGroupId() const;
    void setItemGroupId(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::NonNullableProductAvailabilityType getAvailability() const;
    void setAvailability(org::openapitools::server::model::NonNullableProductAvailabilityType const& value);
    /// <summary>
    /// The price of the product.
    /// </summary>
    double getPrice() const;
    void setPrice(double const value);
    /// <summary>
    /// The discounted price of the product.
    /// </summary>
    double getSalePrice() const;
    void setSalePrice(double const value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::NonNullableCatalogsCurrency getCurrency() const;
    void setCurrency(org::openapitools::server::model::NonNullableCatalogsCurrency const& value);

    friend void to_json(nlohmann::json& j, const CatalogsProductMetadata& o);
    friend void from_json(const nlohmann::json& j, CatalogsProductMetadata& o);
protected:
    std::string m_Item_id;

    std::string m_Item_group_id;

    org::openapitools::server::model::NonNullableProductAvailabilityType m_Availability;

    double m_Price;

    double m_Sale_price;

    org::openapitools::server::model::NonNullableCatalogsCurrency m_Currency;

    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsProductMetadata_H_ */
