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


#include "ItemGroupIdFilter.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

ItemGroupIdFilter::ItemGroupIdFilter()
{
    
}

void ItemGroupIdFilter::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ItemGroupIdFilter::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ItemGroupIdFilter::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ItemGroupIdFilter" : pathPrefix;

        
    return success;
}

bool ItemGroupIdFilter::operator==(const ItemGroupIdFilter& rhs) const
{
    return
    
    
    (getITEMGROUPID() == rhs.getITEMGROUPID())
    
    
    ;
}

bool ItemGroupIdFilter::operator!=(const ItemGroupIdFilter& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ItemGroupIdFilter& o)
{
    j = nlohmann::json();
    j["ITEM_GROUP_ID"] = o.m_ITEM_GROUP_ID;
    
}

void from_json(const nlohmann::json& j, ItemGroupIdFilter& o)
{
    j.at("ITEM_GROUP_ID").get_to(o.m_ITEM_GROUP_ID);
    
}

org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria ItemGroupIdFilter::getITEMGROUPID() const
{
    return m_ITEM_GROUP_ID;
}
void ItemGroupIdFilter::setITEMGROUPID(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_ITEM_GROUP_ID = value;
}


} // namespace org::openapitools::server::model

