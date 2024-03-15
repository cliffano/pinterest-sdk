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


#include "CatalogsLocale.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

CatalogsLocale::CatalogsLocale()
{
    
}

void CatalogsLocale::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsLocale::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsLocale::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsLocale" : pathPrefix;

    
    if (m_value == CatalogsLocale::eCatalogsLocale::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool CatalogsLocale::operator==(const CatalogsLocale& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool CatalogsLocale::operator!=(const CatalogsLocale& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsLocale& o)
{
    j = nlohmann::json::object();
    
    switch (o.getValue())
    {
        case CatalogsLocale::eCatalogsLocale::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case CatalogsLocale::eCatalogsLocale::AF_ZA:
            j = "af-ZA";
            break;
        case CatalogsLocale::eCatalogsLocale::AR_SA:
            j = "ar-SA";
            break;
        case CatalogsLocale::eCatalogsLocale::BG_BG:
            j = "bg-BG";
            break;
        case CatalogsLocale::eCatalogsLocale::BN_IN:
            j = "bn-IN";
            break;
        case CatalogsLocale::eCatalogsLocale::CS_CZ:
            j = "cs-CZ";
            break;
        case CatalogsLocale::eCatalogsLocale::DA_DK:
            j = "da-DK";
            break;
        case CatalogsLocale::eCatalogsLocale::DE:
            j = "de";
            break;
        case CatalogsLocale::eCatalogsLocale::EL_GR:
            j = "el-GR";
            break;
        case CatalogsLocale::eCatalogsLocale::EN_AU:
            j = "en-AU";
            break;
        case CatalogsLocale::eCatalogsLocale::EN_CA:
            j = "en-CA";
            break;
        case CatalogsLocale::eCatalogsLocale::EN_GB:
            j = "en-GB";
            break;
        case CatalogsLocale::eCatalogsLocale::EN_IN:
            j = "en-IN";
            break;
        case CatalogsLocale::eCatalogsLocale::EN_US:
            j = "en-US";
            break;
        case CatalogsLocale::eCatalogsLocale::ES_419:
            j = "es-419";
            break;
        case CatalogsLocale::eCatalogsLocale::ES_AR:
            j = "es-AR";
            break;
        case CatalogsLocale::eCatalogsLocale::ES_ES:
            j = "es-ES";
            break;
        case CatalogsLocale::eCatalogsLocale::ES_MX:
            j = "es-MX";
            break;
        case CatalogsLocale::eCatalogsLocale::FI_FI:
            j = "fi-FI";
            break;
        case CatalogsLocale::eCatalogsLocale::FR:
            j = "fr";
            break;
        case CatalogsLocale::eCatalogsLocale::FR_CA:
            j = "fr-CA";
            break;
        case CatalogsLocale::eCatalogsLocale::HE_IL:
            j = "he-IL";
            break;
        case CatalogsLocale::eCatalogsLocale::HI_IN:
            j = "hi-IN";
            break;
        case CatalogsLocale::eCatalogsLocale::HR_HR:
            j = "hr-HR";
            break;
        case CatalogsLocale::eCatalogsLocale::HU_HU:
            j = "hu-HU";
            break;
        case CatalogsLocale::eCatalogsLocale::ID_ID:
            j = "id-ID";
            break;
        case CatalogsLocale::eCatalogsLocale::IT:
            j = "it";
            break;
        case CatalogsLocale::eCatalogsLocale::JA:
            j = "ja";
            break;
        case CatalogsLocale::eCatalogsLocale::KO_KR:
            j = "ko-KR";
            break;
        case CatalogsLocale::eCatalogsLocale::MS_MY:
            j = "ms-MY";
            break;
        case CatalogsLocale::eCatalogsLocale::NB_NO:
            j = "nb-NO";
            break;
        case CatalogsLocale::eCatalogsLocale::NL:
            j = "nl";
            break;
        case CatalogsLocale::eCatalogsLocale::PL_PL:
            j = "pl-PL";
            break;
        case CatalogsLocale::eCatalogsLocale::PT_BR:
            j = "pt-BR";
            break;
        case CatalogsLocale::eCatalogsLocale::PT_PT:
            j = "pt-PT";
            break;
        case CatalogsLocale::eCatalogsLocale::RO_RO:
            j = "ro-RO";
            break;
        case CatalogsLocale::eCatalogsLocale::RU_RU:
            j = "ru-RU";
            break;
        case CatalogsLocale::eCatalogsLocale::SK_SK:
            j = "sk-SK";
            break;
        case CatalogsLocale::eCatalogsLocale::SV_SE:
            j = "sv-SE";
            break;
        case CatalogsLocale::eCatalogsLocale::TE_IN:
            j = "te-IN";
            break;
        case CatalogsLocale::eCatalogsLocale::TH_TH:
            j = "th-TH";
            break;
        case CatalogsLocale::eCatalogsLocale::TL_PH:
            j = "tl-PH";
            break;
        case CatalogsLocale::eCatalogsLocale::TR:
            j = "tr";
            break;
        case CatalogsLocale::eCatalogsLocale::UK_UA:
            j = "uk-UA";
            break;
        case CatalogsLocale::eCatalogsLocale::VI_VN:
            j = "vi-VN";
            break;
        case CatalogsLocale::eCatalogsLocale::ZH_CN:
            j = "zh-CN";
            break;
        case CatalogsLocale::eCatalogsLocale::ZH_TW:
            j = "zh-TW";
            break;
    }
}

void from_json(const nlohmann::json& j, CatalogsLocale& o)
{
    
    auto s = j.get<std::string>();
    if (s == "af-ZA") {
     o.setValue(CatalogsLocale::eCatalogsLocale::AF_ZA);
    } 
    else if (s == "ar-SA") {
     o.setValue(CatalogsLocale::eCatalogsLocale::AR_SA);
    } 
    else if (s == "bg-BG") {
     o.setValue(CatalogsLocale::eCatalogsLocale::BG_BG);
    } 
    else if (s == "bn-IN") {
     o.setValue(CatalogsLocale::eCatalogsLocale::BN_IN);
    } 
    else if (s == "cs-CZ") {
     o.setValue(CatalogsLocale::eCatalogsLocale::CS_CZ);
    } 
    else if (s == "da-DK") {
     o.setValue(CatalogsLocale::eCatalogsLocale::DA_DK);
    } 
    else if (s == "de") {
     o.setValue(CatalogsLocale::eCatalogsLocale::DE);
    } 
    else if (s == "el-GR") {
     o.setValue(CatalogsLocale::eCatalogsLocale::EL_GR);
    } 
    else if (s == "en-AU") {
     o.setValue(CatalogsLocale::eCatalogsLocale::EN_AU);
    } 
    else if (s == "en-CA") {
     o.setValue(CatalogsLocale::eCatalogsLocale::EN_CA);
    } 
    else if (s == "en-GB") {
     o.setValue(CatalogsLocale::eCatalogsLocale::EN_GB);
    } 
    else if (s == "en-IN") {
     o.setValue(CatalogsLocale::eCatalogsLocale::EN_IN);
    } 
    else if (s == "en-US") {
     o.setValue(CatalogsLocale::eCatalogsLocale::EN_US);
    } 
    else if (s == "es-419") {
     o.setValue(CatalogsLocale::eCatalogsLocale::ES_419);
    } 
    else if (s == "es-AR") {
     o.setValue(CatalogsLocale::eCatalogsLocale::ES_AR);
    } 
    else if (s == "es-ES") {
     o.setValue(CatalogsLocale::eCatalogsLocale::ES_ES);
    } 
    else if (s == "es-MX") {
     o.setValue(CatalogsLocale::eCatalogsLocale::ES_MX);
    } 
    else if (s == "fi-FI") {
     o.setValue(CatalogsLocale::eCatalogsLocale::FI_FI);
    } 
    else if (s == "fr") {
     o.setValue(CatalogsLocale::eCatalogsLocale::FR);
    } 
    else if (s == "fr-CA") {
     o.setValue(CatalogsLocale::eCatalogsLocale::FR_CA);
    } 
    else if (s == "he-IL") {
     o.setValue(CatalogsLocale::eCatalogsLocale::HE_IL);
    } 
    else if (s == "hi-IN") {
     o.setValue(CatalogsLocale::eCatalogsLocale::HI_IN);
    } 
    else if (s == "hr-HR") {
     o.setValue(CatalogsLocale::eCatalogsLocale::HR_HR);
    } 
    else if (s == "hu-HU") {
     o.setValue(CatalogsLocale::eCatalogsLocale::HU_HU);
    } 
    else if (s == "id-ID") {
     o.setValue(CatalogsLocale::eCatalogsLocale::ID_ID);
    } 
    else if (s == "it") {
     o.setValue(CatalogsLocale::eCatalogsLocale::IT);
    } 
    else if (s == "ja") {
     o.setValue(CatalogsLocale::eCatalogsLocale::JA);
    } 
    else if (s == "ko-KR") {
     o.setValue(CatalogsLocale::eCatalogsLocale::KO_KR);
    } 
    else if (s == "ms-MY") {
     o.setValue(CatalogsLocale::eCatalogsLocale::MS_MY);
    } 
    else if (s == "nb-NO") {
     o.setValue(CatalogsLocale::eCatalogsLocale::NB_NO);
    } 
    else if (s == "nl") {
     o.setValue(CatalogsLocale::eCatalogsLocale::NL);
    } 
    else if (s == "pl-PL") {
     o.setValue(CatalogsLocale::eCatalogsLocale::PL_PL);
    } 
    else if (s == "pt-BR") {
     o.setValue(CatalogsLocale::eCatalogsLocale::PT_BR);
    } 
    else if (s == "pt-PT") {
     o.setValue(CatalogsLocale::eCatalogsLocale::PT_PT);
    } 
    else if (s == "ro-RO") {
     o.setValue(CatalogsLocale::eCatalogsLocale::RO_RO);
    } 
    else if (s == "ru-RU") {
     o.setValue(CatalogsLocale::eCatalogsLocale::RU_RU);
    } 
    else if (s == "sk-SK") {
     o.setValue(CatalogsLocale::eCatalogsLocale::SK_SK);
    } 
    else if (s == "sv-SE") {
     o.setValue(CatalogsLocale::eCatalogsLocale::SV_SE);
    } 
    else if (s == "te-IN") {
     o.setValue(CatalogsLocale::eCatalogsLocale::TE_IN);
    } 
    else if (s == "th-TH") {
     o.setValue(CatalogsLocale::eCatalogsLocale::TH_TH);
    } 
    else if (s == "tl-PH") {
     o.setValue(CatalogsLocale::eCatalogsLocale::TL_PH);
    } 
    else if (s == "tr") {
     o.setValue(CatalogsLocale::eCatalogsLocale::TR);
    } 
    else if (s == "uk-UA") {
     o.setValue(CatalogsLocale::eCatalogsLocale::UK_UA);
    } 
    else if (s == "vi-VN") {
     o.setValue(CatalogsLocale::eCatalogsLocale::VI_VN);
    } 
    else if (s == "zh-CN") {
     o.setValue(CatalogsLocale::eCatalogsLocale::ZH_CN);
    } 
    else if (s == "zh-TW") {
     o.setValue(CatalogsLocale::eCatalogsLocale::ZH_TW);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " CatalogsLocale::eCatalogsLocale";
     throw std::invalid_argument(ss.str());
    } 

}

CatalogsLocale::eCatalogsLocale CatalogsLocale::getValue() const
{
    return m_value;
}
void CatalogsLocale::setValue(CatalogsLocale::eCatalogsLocale value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

