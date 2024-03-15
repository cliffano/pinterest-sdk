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


#include "CatalogsCreateRetailItem.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsCreateRetailItem::CatalogsCreateRetailItem()
{
    m_Item_id = "";
    m_Operation = "";
    
}

void CatalogsCreateRetailItem::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsCreateRetailItem::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsCreateRetailItem::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsCreateRetailItem" : pathPrefix;

                
    if (!m_Attributes.validate()) {
        msg << _pathPrefix << ": Attributes is invalid;";
        success = false;
    }
    return success;
}

bool CatalogsCreateRetailItem::operator==(const CatalogsCreateRetailItem& rhs) const
{
    return
    
    
    (getItemId() == rhs.getItemId())
     &&
    
    (getOperation() == rhs.getOperation())
     &&
    
    (getAttributes() == rhs.getAttributes())
    
    
    ;
}

bool CatalogsCreateRetailItem::operator!=(const CatalogsCreateRetailItem& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsCreateRetailItem& o)
{
    j = nlohmann::json::object();
    j["item_id"] = o.m_Item_id;
    j["operation"] = o.m_Operation;
    j["attributes"] = o.m_Attributes;
    
}

void from_json(const nlohmann::json& j, CatalogsCreateRetailItem& o)
{
    j.at("item_id").get_to(o.m_Item_id);
    j.at("operation").get_to(o.m_Operation);
    j.at("attributes").get_to(o.m_Attributes);
    
}

std::string CatalogsCreateRetailItem::getItemId() const
{
    return m_Item_id;
}
void CatalogsCreateRetailItem::setItemId(std::string const& value)
{
    m_Item_id = value;
}
std::string CatalogsCreateRetailItem::getOperation() const
{
    return m_Operation;
}
void CatalogsCreateRetailItem::setOperation(std::string const& value)
{
    m_Operation = value;
}
org::openapitools::server::model::ItemAttributes CatalogsCreateRetailItem::getAttributes() const
{
    return m_Attributes;
}
void CatalogsCreateRetailItem::setAttributes(org::openapitools::server::model::ItemAttributes const& value)
{
    m_Attributes = value;
}


} // namespace org::openapitools::server::model
