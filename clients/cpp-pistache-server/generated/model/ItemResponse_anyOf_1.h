/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ItemResponse_anyOf_1.h
 *
 * 
 */

#ifndef ItemResponse_anyOf_1_H_
#define ItemResponse_anyOf_1_H_


#include "ItemValidationEvent.h"
#include "CatalogsHotelItemErrorResponse.h"
#include <string>
#include "CatalogsRetailItemErrorResponse.h"
#include <vector>
#include "CatalogsType.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  ItemResponse_anyOf_1
{
public:
    ItemResponse_anyOf_1();
    virtual ~ItemResponse_anyOf_1() = default;


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

    bool operator==(const ItemResponse_anyOf_1& rhs) const;
    bool operator!=(const ItemResponse_anyOf_1& rhs) const;

    /////////////////////////////////////////////
    /// ItemResponse_anyOf_1 members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsType getCatalogType() const;
    void setCatalogType(org::openapitools::server::model::CatalogsType const& value);
    /// <summary>
    /// The catalog item id in the merchant namespace
    /// </summary>
    std::string getItemId() const;
    void setItemId(std::string const& value);
    bool itemIdIsSet() const;
    void unsetItem_id();
    /// <summary>
    /// Array with the errors for the item id requested
    /// </summary>
    std::vector<org::openapitools::server::model::ItemValidationEvent> getErrors() const;
    void setErrors(std::vector<org::openapitools::server::model::ItemValidationEvent> const& value);
    bool errorsIsSet() const;
    void unsetErrors();
    /// <summary>
    /// The catalog hotel id in the merchant namespace
    /// </summary>
    std::string getHotelId() const;
    void setHotelId(std::string const& value);
    bool hotelIdIsSet() const;
    void unsetHotel_id();

    friend  void to_json(nlohmann::json& j, const ItemResponse_anyOf_1& o);
    friend  void from_json(const nlohmann::json& j, ItemResponse_anyOf_1& o);
protected:
    org::openapitools::server::model::CatalogsType m_Catalog_type;

    std::string m_Item_id;
    bool m_Item_idIsSet;
    std::vector<org::openapitools::server::model::ItemValidationEvent> m_Errors;
    bool m_ErrorsIsSet;
    std::string m_Hotel_id;
    bool m_Hotel_idIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* ItemResponse_anyOf_1_H_ */
