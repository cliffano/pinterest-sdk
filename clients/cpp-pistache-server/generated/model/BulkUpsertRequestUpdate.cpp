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


#include "BulkUpsertRequestUpdate.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

BulkUpsertRequestUpdate::BulkUpsertRequestUpdate()
{
    m_CampaignsIsSet = false;
    m_Ad_groupsIsSet = false;
    m_AdsIsSet = false;
    m_Product_groupsIsSet = false;
    m_KeywordsIsSet = false;
    
}

void BulkUpsertRequestUpdate::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool BulkUpsertRequestUpdate::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool BulkUpsertRequestUpdate::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "BulkUpsertRequestUpdate" : pathPrefix;

         
    if (campaignsIsSet())
    {
        const std::vector<org::openapitools::server::model::CampaignUpdateRequest>& value = m_Campaigns;
        const std::string currentValuePath = _pathPrefix + ".campaigns";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::CampaignUpdateRequest& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".campaigns") && success;
 
                i++;
            }
        }

    }
         
    if (adGroupsIsSet())
    {
        const std::vector<org::openapitools::server::model::AdGroupUpdateRequest>& value = m_Ad_groups;
        const std::string currentValuePath = _pathPrefix + ".adGroups";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::AdGroupUpdateRequest& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".adGroups") && success;
 
                i++;
            }
        }

    }
         
    if (adsIsSet())
    {
        const std::vector<org::openapitools::server::model::AdUpdateRequest>& value = m_Ads;
        const std::string currentValuePath = _pathPrefix + ".ads";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::AdUpdateRequest& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".ads") && success;
 
                i++;
            }
        }

    }
         
    if (productGroupsIsSet())
    {
        const std::vector<org::openapitools::server::model::ProductGroupPromotionUpdateRequest>& value = m_Product_groups;
        const std::string currentValuePath = _pathPrefix + ".productGroups";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::ProductGroupPromotionUpdateRequest& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".productGroups") && success;
 
                i++;
            }
        }

    }
         
    if (keywordsIsSet())
    {
        const std::vector<org::openapitools::server::model::KeywordUpdate>& value = m_Keywords;
        const std::string currentValuePath = _pathPrefix + ".keywords";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::KeywordUpdate& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".keywords") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool BulkUpsertRequestUpdate::operator==(const BulkUpsertRequestUpdate& rhs) const
{
    return
    
    
    
    ((!campaignsIsSet() && !rhs.campaignsIsSet()) || (campaignsIsSet() && rhs.campaignsIsSet() && getCampaigns() == rhs.getCampaigns())) &&
    
    
    ((!adGroupsIsSet() && !rhs.adGroupsIsSet()) || (adGroupsIsSet() && rhs.adGroupsIsSet() && getAdGroups() == rhs.getAdGroups())) &&
    
    
    ((!adsIsSet() && !rhs.adsIsSet()) || (adsIsSet() && rhs.adsIsSet() && getAds() == rhs.getAds())) &&
    
    
    ((!productGroupsIsSet() && !rhs.productGroupsIsSet()) || (productGroupsIsSet() && rhs.productGroupsIsSet() && getProductGroups() == rhs.getProductGroups())) &&
    
    
    ((!keywordsIsSet() && !rhs.keywordsIsSet()) || (keywordsIsSet() && rhs.keywordsIsSet() && getKeywords() == rhs.getKeywords()))
    
    ;
}

bool BulkUpsertRequestUpdate::operator!=(const BulkUpsertRequestUpdate& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const BulkUpsertRequestUpdate& o)
{
    j = nlohmann::json::object();
    if(o.campaignsIsSet() || !o.m_Campaigns.empty())
        j["campaigns"] = o.m_Campaigns;
    if(o.adGroupsIsSet() || !o.m_Ad_groups.empty())
        j["ad_groups"] = o.m_Ad_groups;
    if(o.adsIsSet() || !o.m_Ads.empty())
        j["ads"] = o.m_Ads;
    if(o.productGroupsIsSet() || !o.m_Product_groups.empty())
        j["product_groups"] = o.m_Product_groups;
    if(o.keywordsIsSet() || !o.m_Keywords.empty())
        j["keywords"] = o.m_Keywords;
    
}

void from_json(const nlohmann::json& j, BulkUpsertRequestUpdate& o)
{
    if(j.find("campaigns") != j.end())
    {
        j.at("campaigns").get_to(o.m_Campaigns);
        o.m_CampaignsIsSet = true;
    } 
    if(j.find("ad_groups") != j.end())
    {
        j.at("ad_groups").get_to(o.m_Ad_groups);
        o.m_Ad_groupsIsSet = true;
    } 
    if(j.find("ads") != j.end())
    {
        j.at("ads").get_to(o.m_Ads);
        o.m_AdsIsSet = true;
    } 
    if(j.find("product_groups") != j.end())
    {
        j.at("product_groups").get_to(o.m_Product_groups);
        o.m_Product_groupsIsSet = true;
    } 
    if(j.find("keywords") != j.end())
    {
        j.at("keywords").get_to(o.m_Keywords);
        o.m_KeywordsIsSet = true;
    } 
    
}

std::vector<org::openapitools::server::model::CampaignUpdateRequest> BulkUpsertRequestUpdate::getCampaigns() const
{
    return m_Campaigns;
}
void BulkUpsertRequestUpdate::setCampaigns(std::vector<org::openapitools::server::model::CampaignUpdateRequest> const& value)
{
    m_Campaigns = value;
    m_CampaignsIsSet = true;
}
bool BulkUpsertRequestUpdate::campaignsIsSet() const
{
    return m_CampaignsIsSet;
}
void BulkUpsertRequestUpdate::unsetCampaigns()
{
    m_CampaignsIsSet = false;
}
std::vector<org::openapitools::server::model::AdGroupUpdateRequest> BulkUpsertRequestUpdate::getAdGroups() const
{
    return m_Ad_groups;
}
void BulkUpsertRequestUpdate::setAdGroups(std::vector<org::openapitools::server::model::AdGroupUpdateRequest> const& value)
{
    m_Ad_groups = value;
    m_Ad_groupsIsSet = true;
}
bool BulkUpsertRequestUpdate::adGroupsIsSet() const
{
    return m_Ad_groupsIsSet;
}
void BulkUpsertRequestUpdate::unsetAd_groups()
{
    m_Ad_groupsIsSet = false;
}
std::vector<org::openapitools::server::model::AdUpdateRequest> BulkUpsertRequestUpdate::getAds() const
{
    return m_Ads;
}
void BulkUpsertRequestUpdate::setAds(std::vector<org::openapitools::server::model::AdUpdateRequest> const& value)
{
    m_Ads = value;
    m_AdsIsSet = true;
}
bool BulkUpsertRequestUpdate::adsIsSet() const
{
    return m_AdsIsSet;
}
void BulkUpsertRequestUpdate::unsetAds()
{
    m_AdsIsSet = false;
}
std::vector<org::openapitools::server::model::ProductGroupPromotionUpdateRequest> BulkUpsertRequestUpdate::getProductGroups() const
{
    return m_Product_groups;
}
void BulkUpsertRequestUpdate::setProductGroups(std::vector<org::openapitools::server::model::ProductGroupPromotionUpdateRequest> const& value)
{
    m_Product_groups = value;
    m_Product_groupsIsSet = true;
}
bool BulkUpsertRequestUpdate::productGroupsIsSet() const
{
    return m_Product_groupsIsSet;
}
void BulkUpsertRequestUpdate::unsetProduct_groups()
{
    m_Product_groupsIsSet = false;
}
std::vector<org::openapitools::server::model::KeywordUpdate> BulkUpsertRequestUpdate::getKeywords() const
{
    return m_Keywords;
}
void BulkUpsertRequestUpdate::setKeywords(std::vector<org::openapitools::server::model::KeywordUpdate> const& value)
{
    m_Keywords = value;
    m_KeywordsIsSet = true;
}
bool BulkUpsertRequestUpdate::keywordsIsSet() const
{
    return m_KeywordsIsSet;
}
void BulkUpsertRequestUpdate::unsetKeywords()
{
    m_KeywordsIsSet = false;
}


} // namespace org::openapitools::server::model
