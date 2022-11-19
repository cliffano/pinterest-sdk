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


#include "TargetingSpec_1.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

TargetingSpec_1::TargetingSpec_1()
{
    m_AGE_BUCKETIsSet = false;
    m_APPTYPEIsSet = false;
    m_AUDIENCE_EXCLUDEIsSet = false;
    m_AUDIENCE_INCLUDEIsSet = false;
    m_GENDERIsSet = false;
    m_GEOIsSet = false;
    m_INTERESTIsSet = false;
    m_LOCALEIsSet = false;
    m_LOCATIONIsSet = false;
    m_SHOPPING_RETARGETINGIsSet = false;
    m_TARGETING_STRATEGYIsSet = false;
    
}

void TargetingSpec_1::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool TargetingSpec_1::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool TargetingSpec_1::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "TargetingSpec_1" : pathPrefix;

         
    if (aGEBUCKETIsSet())
    {
        const std::vector<std::string>& value = m_AGE_BUCKET;
        const std::string currentValuePath = _pathPrefix + ".aGEBUCKET";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    if (aPPTYPEIsSet())
    {
        const std::vector<std::string>& value = m_APPTYPE;
        const std::string currentValuePath = _pathPrefix + ".aPPTYPE";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    if (aUDIENCEEXCLUDEIsSet())
    {
        const std::vector<std::string>& value = m_AUDIENCE_EXCLUDE;
        const std::string currentValuePath = _pathPrefix + ".aUDIENCEEXCLUDE";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    if (aUDIENCEINCLUDEIsSet())
    {
        const std::vector<std::string>& value = m_AUDIENCE_INCLUDE;
        const std::string currentValuePath = _pathPrefix + ".aUDIENCEINCLUDE";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    if (gENDERIsSet())
    {
        const std::vector<std::string>& value = m_GENDER;
        const std::string currentValuePath = _pathPrefix + ".gENDER";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    if (gEOIsSet())
    {
        const std::vector<std::string>& value = m_GEO;
        const std::string currentValuePath = _pathPrefix + ".gEO";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    if (iNTERESTIsSet())
    {
        const std::vector<std::string>& value = m_INTEREST;
        const std::string currentValuePath = _pathPrefix + ".iNTEREST";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    if (lOCALEIsSet())
    {
        const std::vector<std::string>& value = m_LOCALE;
        const std::string currentValuePath = _pathPrefix + ".lOCALE";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    if (lOCATIONIsSet())
    {
        const std::vector<std::string>& value = m_LOCATION;
        const std::string currentValuePath = _pathPrefix + ".lOCATION";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    if (sHOPPINGRETARGETINGIsSet())
    {
        const std::vector<org::openapitools::server::model::TargetingSpec_SHOPPING_RETARGETING>& value = m_SHOPPING_RETARGETING;
        const std::string currentValuePath = _pathPrefix + ".sHOPPINGRETARGETING";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::TargetingSpec_SHOPPING_RETARGETING& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".sHOPPINGRETARGETING") && success;
 
                i++;
            }
        }

    }
         
    if (tARGETINGSTRATEGYIsSet())
    {
        const std::vector<std::string>& value = m_TARGETING_STRATEGY;
        const std::string currentValuePath = _pathPrefix + ".tARGETINGSTRATEGY";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
    
    return success;
}

bool TargetingSpec_1::operator==(const TargetingSpec_1& rhs) const
{
    return
    
    
    
    ((!aGEBUCKETIsSet() && !rhs.aGEBUCKETIsSet()) || (aGEBUCKETIsSet() && rhs.aGEBUCKETIsSet() && getAGEBUCKET() == rhs.getAGEBUCKET())) &&
    
    
    ((!aPPTYPEIsSet() && !rhs.aPPTYPEIsSet()) || (aPPTYPEIsSet() && rhs.aPPTYPEIsSet() && getAPPTYPE() == rhs.getAPPTYPE())) &&
    
    
    ((!aUDIENCEEXCLUDEIsSet() && !rhs.aUDIENCEEXCLUDEIsSet()) || (aUDIENCEEXCLUDEIsSet() && rhs.aUDIENCEEXCLUDEIsSet() && getAUDIENCEEXCLUDE() == rhs.getAUDIENCEEXCLUDE())) &&
    
    
    ((!aUDIENCEINCLUDEIsSet() && !rhs.aUDIENCEINCLUDEIsSet()) || (aUDIENCEINCLUDEIsSet() && rhs.aUDIENCEINCLUDEIsSet() && getAUDIENCEINCLUDE() == rhs.getAUDIENCEINCLUDE())) &&
    
    
    ((!gENDERIsSet() && !rhs.gENDERIsSet()) || (gENDERIsSet() && rhs.gENDERIsSet() && getGENDER() == rhs.getGENDER())) &&
    
    
    ((!gEOIsSet() && !rhs.gEOIsSet()) || (gEOIsSet() && rhs.gEOIsSet() && getGEO() == rhs.getGEO())) &&
    
    
    ((!iNTERESTIsSet() && !rhs.iNTERESTIsSet()) || (iNTERESTIsSet() && rhs.iNTERESTIsSet() && getINTEREST() == rhs.getINTEREST())) &&
    
    
    ((!lOCALEIsSet() && !rhs.lOCALEIsSet()) || (lOCALEIsSet() && rhs.lOCALEIsSet() && getLOCALE() == rhs.getLOCALE())) &&
    
    
    ((!lOCATIONIsSet() && !rhs.lOCATIONIsSet()) || (lOCATIONIsSet() && rhs.lOCATIONIsSet() && getLOCATION() == rhs.getLOCATION())) &&
    
    
    ((!sHOPPINGRETARGETINGIsSet() && !rhs.sHOPPINGRETARGETINGIsSet()) || (sHOPPINGRETARGETINGIsSet() && rhs.sHOPPINGRETARGETINGIsSet() && getSHOPPINGRETARGETING() == rhs.getSHOPPINGRETARGETING())) &&
    
    
    ((!tARGETINGSTRATEGYIsSet() && !rhs.tARGETINGSTRATEGYIsSet()) || (tARGETINGSTRATEGYIsSet() && rhs.tARGETINGSTRATEGYIsSet() && getTARGETINGSTRATEGY() == rhs.getTARGETINGSTRATEGY()))
    
    ;
}

bool TargetingSpec_1::operator!=(const TargetingSpec_1& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const TargetingSpec_1& o)
{
    j = nlohmann::json();
    if(o.aGEBUCKETIsSet() || !o.m_AGE_BUCKET.empty())
        j["AGE_BUCKET"] = o.m_AGE_BUCKET;
    if(o.aPPTYPEIsSet() || !o.m_APPTYPE.empty())
        j["APPTYPE"] = o.m_APPTYPE;
    if(o.aUDIENCEEXCLUDEIsSet() || !o.m_AUDIENCE_EXCLUDE.empty())
        j["AUDIENCE_EXCLUDE"] = o.m_AUDIENCE_EXCLUDE;
    if(o.aUDIENCEINCLUDEIsSet() || !o.m_AUDIENCE_INCLUDE.empty())
        j["AUDIENCE_INCLUDE"] = o.m_AUDIENCE_INCLUDE;
    if(o.gENDERIsSet() || !o.m_GENDER.empty())
        j["GENDER"] = o.m_GENDER;
    if(o.gEOIsSet() || !o.m_GEO.empty())
        j["GEO"] = o.m_GEO;
    if(o.iNTERESTIsSet() || !o.m_INTEREST.empty())
        j["INTEREST"] = o.m_INTEREST;
    if(o.lOCALEIsSet() || !o.m_LOCALE.empty())
        j["LOCALE"] = o.m_LOCALE;
    if(o.lOCATIONIsSet() || !o.m_LOCATION.empty())
        j["LOCATION"] = o.m_LOCATION;
    if(o.sHOPPINGRETARGETINGIsSet() || !o.m_SHOPPING_RETARGETING.empty())
        j["SHOPPING_RETARGETING"] = o.m_SHOPPING_RETARGETING;
    if(o.tARGETINGSTRATEGYIsSet() || !o.m_TARGETING_STRATEGY.empty())
        j["TARGETING_STRATEGY"] = o.m_TARGETING_STRATEGY;
    
}

void from_json(const nlohmann::json& j, TargetingSpec_1& o)
{
    if(j.find("AGE_BUCKET") != j.end())
    {
        j.at("AGE_BUCKET").get_to(o.m_AGE_BUCKET);
        o.m_AGE_BUCKETIsSet = true;
    } 
    if(j.find("APPTYPE") != j.end())
    {
        j.at("APPTYPE").get_to(o.m_APPTYPE);
        o.m_APPTYPEIsSet = true;
    } 
    if(j.find("AUDIENCE_EXCLUDE") != j.end())
    {
        j.at("AUDIENCE_EXCLUDE").get_to(o.m_AUDIENCE_EXCLUDE);
        o.m_AUDIENCE_EXCLUDEIsSet = true;
    } 
    if(j.find("AUDIENCE_INCLUDE") != j.end())
    {
        j.at("AUDIENCE_INCLUDE").get_to(o.m_AUDIENCE_INCLUDE);
        o.m_AUDIENCE_INCLUDEIsSet = true;
    } 
    if(j.find("GENDER") != j.end())
    {
        j.at("GENDER").get_to(o.m_GENDER);
        o.m_GENDERIsSet = true;
    } 
    if(j.find("GEO") != j.end())
    {
        j.at("GEO").get_to(o.m_GEO);
        o.m_GEOIsSet = true;
    } 
    if(j.find("INTEREST") != j.end())
    {
        j.at("INTEREST").get_to(o.m_INTEREST);
        o.m_INTERESTIsSet = true;
    } 
    if(j.find("LOCALE") != j.end())
    {
        j.at("LOCALE").get_to(o.m_LOCALE);
        o.m_LOCALEIsSet = true;
    } 
    if(j.find("LOCATION") != j.end())
    {
        j.at("LOCATION").get_to(o.m_LOCATION);
        o.m_LOCATIONIsSet = true;
    } 
    if(j.find("SHOPPING_RETARGETING") != j.end())
    {
        j.at("SHOPPING_RETARGETING").get_to(o.m_SHOPPING_RETARGETING);
        o.m_SHOPPING_RETARGETINGIsSet = true;
    } 
    if(j.find("TARGETING_STRATEGY") != j.end())
    {
        j.at("TARGETING_STRATEGY").get_to(o.m_TARGETING_STRATEGY);
        o.m_TARGETING_STRATEGYIsSet = true;
    } 
    
}

std::vector<std::string> TargetingSpec_1::getAGEBUCKET() const
{
    return m_AGE_BUCKET;
}
void TargetingSpec_1::setAGEBUCKET(std::vector<std::string> const& value)
{
    m_AGE_BUCKET = value;
    m_AGE_BUCKETIsSet = true;
}
bool TargetingSpec_1::aGEBUCKETIsSet() const
{
    return m_AGE_BUCKETIsSet;
}
void TargetingSpec_1::unsetAGE_BUCKET()
{
    m_AGE_BUCKETIsSet = false;
}
std::vector<std::string> TargetingSpec_1::getAPPTYPE() const
{
    return m_APPTYPE;
}
void TargetingSpec_1::setAPPTYPE(std::vector<std::string> const& value)
{
    m_APPTYPE = value;
    m_APPTYPEIsSet = true;
}
bool TargetingSpec_1::aPPTYPEIsSet() const
{
    return m_APPTYPEIsSet;
}
void TargetingSpec_1::unsetAPPTYPE()
{
    m_APPTYPEIsSet = false;
}
std::vector<std::string> TargetingSpec_1::getAUDIENCEEXCLUDE() const
{
    return m_AUDIENCE_EXCLUDE;
}
void TargetingSpec_1::setAUDIENCEEXCLUDE(std::vector<std::string> const& value)
{
    m_AUDIENCE_EXCLUDE = value;
    m_AUDIENCE_EXCLUDEIsSet = true;
}
bool TargetingSpec_1::aUDIENCEEXCLUDEIsSet() const
{
    return m_AUDIENCE_EXCLUDEIsSet;
}
void TargetingSpec_1::unsetAUDIENCE_EXCLUDE()
{
    m_AUDIENCE_EXCLUDEIsSet = false;
}
std::vector<std::string> TargetingSpec_1::getAUDIENCEINCLUDE() const
{
    return m_AUDIENCE_INCLUDE;
}
void TargetingSpec_1::setAUDIENCEINCLUDE(std::vector<std::string> const& value)
{
    m_AUDIENCE_INCLUDE = value;
    m_AUDIENCE_INCLUDEIsSet = true;
}
bool TargetingSpec_1::aUDIENCEINCLUDEIsSet() const
{
    return m_AUDIENCE_INCLUDEIsSet;
}
void TargetingSpec_1::unsetAUDIENCE_INCLUDE()
{
    m_AUDIENCE_INCLUDEIsSet = false;
}
std::vector<std::string> TargetingSpec_1::getGENDER() const
{
    return m_GENDER;
}
void TargetingSpec_1::setGENDER(std::vector<std::string> const& value)
{
    m_GENDER = value;
    m_GENDERIsSet = true;
}
bool TargetingSpec_1::gENDERIsSet() const
{
    return m_GENDERIsSet;
}
void TargetingSpec_1::unsetGENDER()
{
    m_GENDERIsSet = false;
}
std::vector<std::string> TargetingSpec_1::getGEO() const
{
    return m_GEO;
}
void TargetingSpec_1::setGEO(std::vector<std::string> const& value)
{
    m_GEO = value;
    m_GEOIsSet = true;
}
bool TargetingSpec_1::gEOIsSet() const
{
    return m_GEOIsSet;
}
void TargetingSpec_1::unsetGEO()
{
    m_GEOIsSet = false;
}
std::vector<std::string> TargetingSpec_1::getINTEREST() const
{
    return m_INTEREST;
}
void TargetingSpec_1::setINTEREST(std::vector<std::string> const& value)
{
    m_INTEREST = value;
    m_INTERESTIsSet = true;
}
bool TargetingSpec_1::iNTERESTIsSet() const
{
    return m_INTERESTIsSet;
}
void TargetingSpec_1::unsetINTEREST()
{
    m_INTERESTIsSet = false;
}
std::vector<std::string> TargetingSpec_1::getLOCALE() const
{
    return m_LOCALE;
}
void TargetingSpec_1::setLOCALE(std::vector<std::string> const& value)
{
    m_LOCALE = value;
    m_LOCALEIsSet = true;
}
bool TargetingSpec_1::lOCALEIsSet() const
{
    return m_LOCALEIsSet;
}
void TargetingSpec_1::unsetLOCALE()
{
    m_LOCALEIsSet = false;
}
std::vector<std::string> TargetingSpec_1::getLOCATION() const
{
    return m_LOCATION;
}
void TargetingSpec_1::setLOCATION(std::vector<std::string> const& value)
{
    m_LOCATION = value;
    m_LOCATIONIsSet = true;
}
bool TargetingSpec_1::lOCATIONIsSet() const
{
    return m_LOCATIONIsSet;
}
void TargetingSpec_1::unsetLOCATION()
{
    m_LOCATIONIsSet = false;
}
std::vector<org::openapitools::server::model::TargetingSpec_SHOPPING_RETARGETING> TargetingSpec_1::getSHOPPINGRETARGETING() const
{
    return m_SHOPPING_RETARGETING;
}
void TargetingSpec_1::setSHOPPINGRETARGETING(std::vector<org::openapitools::server::model::TargetingSpec_SHOPPING_RETARGETING> const& value)
{
    m_SHOPPING_RETARGETING = value;
    m_SHOPPING_RETARGETINGIsSet = true;
}
bool TargetingSpec_1::sHOPPINGRETARGETINGIsSet() const
{
    return m_SHOPPING_RETARGETINGIsSet;
}
void TargetingSpec_1::unsetSHOPPING_RETARGETING()
{
    m_SHOPPING_RETARGETINGIsSet = false;
}
std::vector<std::string> TargetingSpec_1::getTARGETINGSTRATEGY() const
{
    return m_TARGETING_STRATEGY;
}
void TargetingSpec_1::setTARGETINGSTRATEGY(std::vector<std::string> const& value)
{
    m_TARGETING_STRATEGY = value;
    m_TARGETING_STRATEGYIsSet = true;
}
bool TargetingSpec_1::tARGETINGSTRATEGYIsSet() const
{
    return m_TARGETING_STRATEGYIsSet;
}
void TargetingSpec_1::unsetTARGETING_STRATEGY()
{
    m_TARGETING_STRATEGYIsSet = false;
}


} // namespace org::openapitools::server::model

