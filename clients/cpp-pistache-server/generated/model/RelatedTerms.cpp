/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "RelatedTerms.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

RelatedTerms::RelatedTerms()
{
    m_Id = "";
    m_IdIsSet = false;
    m_Related_term_count = 0;
    m_Related_term_countIsSet = false;
    m_Related_terms_listIsSet = false;
    
}

void RelatedTerms::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool RelatedTerms::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool RelatedTerms::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "RelatedTerms" : pathPrefix;

                 
    if (relatedTermsListIsSet())
    {
        const std::vector<org::openapitools::server::model::RelatedTerms_related_terms_list_inner>& value = m_Related_terms_list;
        const std::string currentValuePath = _pathPrefix + ".relatedTermsList";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::RelatedTerms_related_terms_list_inner& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".relatedTermsList") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool RelatedTerms::operator==(const RelatedTerms& rhs) const
{
    return
    
    
    
    ((!idIsSet() && !rhs.idIsSet()) || (idIsSet() && rhs.idIsSet() && getId() == rhs.getId())) &&
    
    
    ((!relatedTermCountIsSet() && !rhs.relatedTermCountIsSet()) || (relatedTermCountIsSet() && rhs.relatedTermCountIsSet() && getRelatedTermCount() == rhs.getRelatedTermCount())) &&
    
    
    ((!relatedTermsListIsSet() && !rhs.relatedTermsListIsSet()) || (relatedTermsListIsSet() && rhs.relatedTermsListIsSet() && getRelatedTermsList() == rhs.getRelatedTermsList()))
    
    ;
}

bool RelatedTerms::operator!=(const RelatedTerms& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const RelatedTerms& o)
{
    j = nlohmann::json();
    if(o.idIsSet())
        j["id"] = o.m_Id;
    if(o.relatedTermCountIsSet())
        j["related_term_count"] = o.m_Related_term_count;
    if(o.relatedTermsListIsSet() || !o.m_Related_terms_list.empty())
        j["related_terms_list"] = o.m_Related_terms_list;
    
}

void from_json(const nlohmann::json& j, RelatedTerms& o)
{
    if(j.find("id") != j.end())
    {
        j.at("id").get_to(o.m_Id);
        o.m_IdIsSet = true;
    } 
    if(j.find("related_term_count") != j.end())
    {
        j.at("related_term_count").get_to(o.m_Related_term_count);
        o.m_Related_term_countIsSet = true;
    } 
    if(j.find("related_terms_list") != j.end())
    {
        j.at("related_terms_list").get_to(o.m_Related_terms_list);
        o.m_Related_terms_listIsSet = true;
    } 
    
}

std::string RelatedTerms::getId() const
{
    return m_Id;
}
void RelatedTerms::setId(std::string const& value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool RelatedTerms::idIsSet() const
{
    return m_IdIsSet;
}
void RelatedTerms::unsetId()
{
    m_IdIsSet = false;
}
int32_t RelatedTerms::getRelatedTermCount() const
{
    return m_Related_term_count;
}
void RelatedTerms::setRelatedTermCount(int32_t const value)
{
    m_Related_term_count = value;
    m_Related_term_countIsSet = true;
}
bool RelatedTerms::relatedTermCountIsSet() const
{
    return m_Related_term_countIsSet;
}
void RelatedTerms::unsetRelated_term_count()
{
    m_Related_term_countIsSet = false;
}
std::vector<org::openapitools::server::model::RelatedTerms_related_terms_list_inner> RelatedTerms::getRelatedTermsList() const
{
    return m_Related_terms_list;
}
void RelatedTerms::setRelatedTermsList(std::vector<org::openapitools::server::model::RelatedTerms_related_terms_list_inner> const& value)
{
    m_Related_terms_list = value;
    m_Related_terms_listIsSet = true;
}
bool RelatedTerms::relatedTermsListIsSet() const
{
    return m_Related_terms_listIsSet;
}
void RelatedTerms::unsetRelated_terms_list()
{
    m_Related_terms_listIsSet = false;
}


} // namespace org::openapitools::server::model

