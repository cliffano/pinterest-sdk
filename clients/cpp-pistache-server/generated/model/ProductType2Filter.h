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
 * ProductType2Filter.h
 *
 * 
 */

#ifndef ProductType2Filter_H_
#define ProductType2Filter_H_


#include "CatalogsProductGroupMultipleStringListCriteria.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  ProductType2Filter
{
public:
    ProductType2Filter();
    virtual ~ProductType2Filter() = default;


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

    bool operator==(const ProductType2Filter& rhs) const;
    bool operator!=(const ProductType2Filter& rhs) const;

    /////////////////////////////////////////////
    /// ProductType2Filter members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria getPRODUCTTYPE2() const;
    void setPRODUCTTYPE2(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value);

    friend  void to_json(nlohmann::json& j, const ProductType2Filter& o);
    friend  void from_json(const nlohmann::json& j, ProductType2Filter& o);
protected:
    org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria m_PRODUCT_TYPE_2;

    
};

} // namespace org::openapitools::server::model

#endif /* ProductType2Filter_H_ */
