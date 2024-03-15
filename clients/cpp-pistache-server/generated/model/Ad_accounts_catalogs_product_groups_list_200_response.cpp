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


#include "Ad_accounts_catalogs_product_groups_list_200_response.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Ad_accounts_catalogs_product_groups_list_200_response::Ad_accounts_catalogs_product_groups_list_200_response()
{
    m_Bookmark = "";
    m_BookmarkIsSet = false;
    
}

void Ad_accounts_catalogs_product_groups_list_200_response::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Ad_accounts_catalogs_product_groups_list_200_response::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Ad_accounts_catalogs_product_groups_list_200_response::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Ad_accounts_catalogs_product_groups_list_200_response" : pathPrefix;

         
    
    /* Items */ {
        const std::vector<org::openapitools::server::model::CatalogProductGroup>& value = m_Items;
        const std::string currentValuePath = _pathPrefix + ".items";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::CatalogProductGroup& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".items") && success;
 
                i++;
            }
        }

    }
        
    return success;
}

bool Ad_accounts_catalogs_product_groups_list_200_response::operator==(const Ad_accounts_catalogs_product_groups_list_200_response& rhs) const
{
    return
    
    
    (getItems() == rhs.getItems())
     &&
    
    
    ((!bookmarkIsSet() && !rhs.bookmarkIsSet()) || (bookmarkIsSet() && rhs.bookmarkIsSet() && getBookmark() == rhs.getBookmark()))
    
    ;
}

bool Ad_accounts_catalogs_product_groups_list_200_response::operator!=(const Ad_accounts_catalogs_product_groups_list_200_response& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Ad_accounts_catalogs_product_groups_list_200_response& o)
{
    j = nlohmann::json::object();
    j["items"] = o.m_Items;
    if(o.bookmarkIsSet())
        j["bookmark"] = o.m_Bookmark;
    
}

void from_json(const nlohmann::json& j, Ad_accounts_catalogs_product_groups_list_200_response& o)
{
    j.at("items").get_to(o.m_Items);
    if(j.find("bookmark") != j.end())
    {
        j.at("bookmark").get_to(o.m_Bookmark);
        o.m_BookmarkIsSet = true;
    } 
    
}

std::vector<org::openapitools::server::model::CatalogProductGroup> Ad_accounts_catalogs_product_groups_list_200_response::getItems() const
{
    return m_Items;
}
void Ad_accounts_catalogs_product_groups_list_200_response::setItems(std::vector<org::openapitools::server::model::CatalogProductGroup> const& value)
{
    m_Items = value;
}
std::string Ad_accounts_catalogs_product_groups_list_200_response::getBookmark() const
{
    return m_Bookmark;
}
void Ad_accounts_catalogs_product_groups_list_200_response::setBookmark(std::string const& value)
{
    m_Bookmark = value;
    m_BookmarkIsSet = true;
}
bool Ad_accounts_catalogs_product_groups_list_200_response::bookmarkIsSet() const
{
    return m_BookmarkIsSet;
}
void Ad_accounts_catalogs_product_groups_list_200_response::unsetBookmark()
{
    m_BookmarkIsSet = false;
}


} // namespace org::openapitools::server::model

