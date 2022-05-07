/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ItemGroupIdFilter.h
 *
 * 
 */

#ifndef ItemGroupIdFilter_H_
#define ItemGroupIdFilter_H_


#include "CatalogsProductGroupMultipleStringCriteria.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  ItemGroupIdFilter
{
public:
    ItemGroupIdFilter();
    virtual ~ItemGroupIdFilter() = default;


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

    bool operator==(const ItemGroupIdFilter& rhs) const;
    bool operator!=(const ItemGroupIdFilter& rhs) const;

    /////////////////////////////////////////////
    /// ItemGroupIdFilter members

    /// <summary>
    /// 
    /// </summary>
    CatalogsProductGroupMultipleStringCriteria getITEMGROUPID() const;
    void setITEMGROUPID(CatalogsProductGroupMultipleStringCriteria const& value);

    friend void to_json(nlohmann::json& j, const ItemGroupIdFilter& o);
    friend void from_json(const nlohmann::json& j, ItemGroupIdFilter& o);
protected:
    CatalogsProductGroupMultipleStringCriteria m_ITEM_GROUP_ID;

    
};

} // namespace org::openapitools::server::model

#endif /* ItemGroupIdFilter_H_ */
