/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * GoogleProductCategory6Filter.h
 *
 * 
 */

#ifndef GoogleProductCategory6Filter_H_
#define GoogleProductCategory6Filter_H_


#include "CatalogsProductGroupMultipleStringListCriteria.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  GoogleProductCategory6Filter
{
public:
    GoogleProductCategory6Filter();
    virtual ~GoogleProductCategory6Filter() = default;


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

    bool operator==(const GoogleProductCategory6Filter& rhs) const;
    bool operator!=(const GoogleProductCategory6Filter& rhs) const;

    /////////////////////////////////////////////
    /// GoogleProductCategory6Filter members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria getGOOGLEPRODUCTCATEGORY6() const;
    void setGOOGLEPRODUCTCATEGORY6(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value);

    friend  void to_json(nlohmann::json& j, const GoogleProductCategory6Filter& o);
    friend  void from_json(const nlohmann::json& j, GoogleProductCategory6Filter& o);
protected:
    org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria m_GOOGLE_PRODUCT_CATEGORY_6;

    
};

} // namespace org::openapitools::server::model

#endif /* GoogleProductCategory6Filter_H_ */