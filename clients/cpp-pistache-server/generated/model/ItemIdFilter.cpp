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


#include "ItemIdFilter.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

ItemIdFilter::ItemIdFilter()
{
    
}

void ItemIdFilter::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ItemIdFilter::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ItemIdFilter::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ItemIdFilter" : pathPrefix;

        
    return success;
}

bool ItemIdFilter::operator==(const ItemIdFilter& rhs) const
{
    return
    
    
    (getITEMID() == rhs.getITEMID())
    
    
    ;
}

bool ItemIdFilter::operator!=(const ItemIdFilter& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ItemIdFilter& o)
{
    j = nlohmann::json();
    j["ITEM_ID"] = o.m_ITEM_ID;
    
}

void from_json(const nlohmann::json& j, ItemIdFilter& o)
{
    j.at("ITEM_ID").get_to(o.m_ITEM_ID);
    
}

org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria ItemIdFilter::getITEMID() const
{
    return m_ITEM_ID;
}
void ItemIdFilter::setITEMID(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_ITEM_ID = value;
}


} // namespace org::openapitools::server::model

