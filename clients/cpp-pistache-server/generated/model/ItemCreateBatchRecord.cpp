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


#include "ItemCreateBatchRecord.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

ItemCreateBatchRecord::ItemCreateBatchRecord()
{
    m_Item_id = "";
    m_Item_idIsSet = false;
    m_AttributesIsSet = false;
    
}

void ItemCreateBatchRecord::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ItemCreateBatchRecord::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ItemCreateBatchRecord::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ItemCreateBatchRecord" : pathPrefix;

            
    return success;
}

bool ItemCreateBatchRecord::operator==(const ItemCreateBatchRecord& rhs) const
{
    return
    
    
    
    ((!itemIdIsSet() && !rhs.itemIdIsSet()) || (itemIdIsSet() && rhs.itemIdIsSet() && getItemId() == rhs.getItemId())) &&
    
    
    ((!attributesIsSet() && !rhs.attributesIsSet()) || (attributesIsSet() && rhs.attributesIsSet() && getAttributes() == rhs.getAttributes()))
    
    ;
}

bool ItemCreateBatchRecord::operator!=(const ItemCreateBatchRecord& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ItemCreateBatchRecord& o)
{
    j = nlohmann::json::object();
    if(o.itemIdIsSet())
        j["item_id"] = o.m_Item_id;
    if(o.attributesIsSet())
        j["attributes"] = o.m_Attributes;
    
}

void from_json(const nlohmann::json& j, ItemCreateBatchRecord& o)
{
    if(j.find("item_id") != j.end())
    {
        j.at("item_id").get_to(o.m_Item_id);
        o.m_Item_idIsSet = true;
    } 
    if(j.find("attributes") != j.end())
    {
        j.at("attributes").get_to(o.m_Attributes);
        o.m_AttributesIsSet = true;
    } 
    
}

std::string ItemCreateBatchRecord::getItemId() const
{
    return m_Item_id;
}
void ItemCreateBatchRecord::setItemId(std::string const& value)
{
    m_Item_id = value;
    m_Item_idIsSet = true;
}
bool ItemCreateBatchRecord::itemIdIsSet() const
{
    return m_Item_idIsSet;
}
void ItemCreateBatchRecord::unsetItem_id()
{
    m_Item_idIsSet = false;
}
org::openapitools::server::model::ItemAttributes ItemCreateBatchRecord::getAttributes() const
{
    return m_Attributes;
}
void ItemCreateBatchRecord::setAttributes(org::openapitools::server::model::ItemAttributes const& value)
{
    m_Attributes = value;
    m_AttributesIsSet = true;
}
bool ItemCreateBatchRecord::attributesIsSet() const
{
    return m_AttributesIsSet;
}
void ItemCreateBatchRecord::unsetAttributes()
{
    m_AttributesIsSet = false;
}


} // namespace org::openapitools::server::model

