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


#include "ItemDeleteDiscontinuedBatchRecord.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

ItemDeleteDiscontinuedBatchRecord::ItemDeleteDiscontinuedBatchRecord()
{
    m_Item_id = "";
    m_Item_idIsSet = false;
    
}

void ItemDeleteDiscontinuedBatchRecord::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ItemDeleteDiscontinuedBatchRecord::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ItemDeleteDiscontinuedBatchRecord::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ItemDeleteDiscontinuedBatchRecord" : pathPrefix;

        
    return success;
}

bool ItemDeleteDiscontinuedBatchRecord::operator==(const ItemDeleteDiscontinuedBatchRecord& rhs) const
{
    return
    
    
    
    ((!itemIdIsSet() && !rhs.itemIdIsSet()) || (itemIdIsSet() && rhs.itemIdIsSet() && getItemId() == rhs.getItemId()))
    
    ;
}

bool ItemDeleteDiscontinuedBatchRecord::operator!=(const ItemDeleteDiscontinuedBatchRecord& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ItemDeleteDiscontinuedBatchRecord& o)
{
    j = nlohmann::json::object();
    if(o.itemIdIsSet())
        j["item_id"] = o.m_Item_id;
    
}

void from_json(const nlohmann::json& j, ItemDeleteDiscontinuedBatchRecord& o)
{
    if(j.find("item_id") != j.end())
    {
        j.at("item_id").get_to(o.m_Item_id);
        o.m_Item_idIsSet = true;
    } 
    
}

std::string ItemDeleteDiscontinuedBatchRecord::getItemId() const
{
    return m_Item_id;
}
void ItemDeleteDiscontinuedBatchRecord::setItemId(std::string const& value)
{
    m_Item_id = value;
    m_Item_idIsSet = true;
}
bool ItemDeleteDiscontinuedBatchRecord::itemIdIsSet() const
{
    return m_Item_idIsSet;
}
void ItemDeleteDiscontinuedBatchRecord::unsetItem_id()
{
    m_Item_idIsSet = false;
}


} // namespace org::openapitools::server::model

