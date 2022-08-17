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


#include "Language.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

Language::Language()
{
    
}

void Language::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Language::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Language::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Language" : pathPrefix;

    
    if (m_value == Language::eLanguage::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool Language::operator==(const Language& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool Language::operator!=(const Language& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Language& o)
{
    j = nlohmann::json();
    
    switch (o.getValue())
    {
        case Language::eLanguage::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case Language::eLanguage::AM:
            j = "AM";
            break;
        case Language::eLanguage::AR:
            j = "AR";
            break;
        case Language::eLanguage::AZ:
            j = "AZ";
            break;
        case Language::eLanguage::BG:
            j = "BG";
            break;
        case Language::eLanguage::BN:
            j = "BN";
            break;
        case Language::eLanguage::BS:
            j = "BS";
            break;
        case Language::eLanguage::CA:
            j = "CA";
            break;
        case Language::eLanguage::CS:
            j = "CS";
            break;
        case Language::eLanguage::DA:
            j = "DA";
            break;
        case Language::eLanguage::DV:
            j = "DV";
            break;
        case Language::eLanguage::DZ:
            j = "DZ";
            break;
        case Language::eLanguage::DE:
            j = "DE";
            break;
        case Language::eLanguage::EL:
            j = "EL";
            break;
        case Language::eLanguage::EN:
            j = "EN";
            break;
        case Language::eLanguage::ES:
            j = "ES";
            break;
        case Language::eLanguage::ET:
            j = "ET";
            break;
        case Language::eLanguage::FA:
            j = "FA";
            break;
        case Language::eLanguage::FI:
            j = "FI";
            break;
        case Language::eLanguage::FR:
            j = "FR";
            break;
        case Language::eLanguage::HE:
            j = "HE";
            break;
        case Language::eLanguage::HI:
            j = "HI";
            break;
        case Language::eLanguage::HR:
            j = "HR";
            break;
        case Language::eLanguage::HU:
            j = "HU";
            break;
        case Language::eLanguage::HY:
            j = "HY";
            break;
        case Language::eLanguage::ID:
            j = "ID";
            break;
        case Language::eLanguage::IN:
            j = "IN";
            break;
        case Language::eLanguage::IS:
            j = "IS";
            break;
        case Language::eLanguage::IT:
            j = "IT";
            break;
        case Language::eLanguage::IW:
            j = "IW";
            break;
        case Language::eLanguage::JA:
            j = "JA";
            break;
        case Language::eLanguage::KA:
            j = "KA";
            break;
        case Language::eLanguage::KM:
            j = "KM";
            break;
        case Language::eLanguage::KO:
            j = "KO";
            break;
        case Language::eLanguage::LO:
            j = "LO";
            break;
        case Language::eLanguage::LT:
            j = "LT";
            break;
        case Language::eLanguage::LV:
            j = "LV";
            break;
        case Language::eLanguage::MK:
            j = "MK";
            break;
        case Language::eLanguage::MN:
            j = "MN";
            break;
        case Language::eLanguage::MS:
            j = "MS";
            break;
        case Language::eLanguage::MY:
            j = "MY";
            break;
        case Language::eLanguage::NB:
            j = "NB";
            break;
        case Language::eLanguage::NE:
            j = "NE";
            break;
        case Language::eLanguage::NL:
            j = "NL";
            break;
        case Language::eLanguage::NO:
            j = "NO";
            break;
        case Language::eLanguage::PL:
            j = "PL";
            break;
        case Language::eLanguage::PT:
            j = "PT";
            break;
        case Language::eLanguage::RO:
            j = "RO";
            break;
        case Language::eLanguage::RU:
            j = "RU";
            break;
        case Language::eLanguage::SK:
            j = "SK";
            break;
        case Language::eLanguage::SL:
            j = "SL";
            break;
        case Language::eLanguage::SQ:
            j = "SQ";
            break;
        case Language::eLanguage::SR:
            j = "SR";
            break;
        case Language::eLanguage::SV:
            j = "SV";
            break;
        case Language::eLanguage::TL:
            j = "TL";
            break;
        case Language::eLanguage::UK:
            j = "UK";
            break;
        case Language::eLanguage::VI:
            j = "VI";
            break;
        case Language::eLanguage::TE:
            j = "TE";
            break;
        case Language::eLanguage::TH:
            j = "TH";
            break;
        case Language::eLanguage::TR:
            j = "TR";
            break;
        case Language::eLanguage::XX:
            j = "XX";
            break;
        case Language::eLanguage::ZH:
            j = "ZH";
            break;
    }
}

void from_json(const nlohmann::json& j, Language& o)
{
    
    auto s = j.get<std::string>();
    if (s == "AM") {
     o.setValue(Language::eLanguage::AM);
    } 
    else if (s == "AR") {
     o.setValue(Language::eLanguage::AR);
    } 
    else if (s == "AZ") {
     o.setValue(Language::eLanguage::AZ);
    } 
    else if (s == "BG") {
     o.setValue(Language::eLanguage::BG);
    } 
    else if (s == "BN") {
     o.setValue(Language::eLanguage::BN);
    } 
    else if (s == "BS") {
     o.setValue(Language::eLanguage::BS);
    } 
    else if (s == "CA") {
     o.setValue(Language::eLanguage::CA);
    } 
    else if (s == "CS") {
     o.setValue(Language::eLanguage::CS);
    } 
    else if (s == "DA") {
     o.setValue(Language::eLanguage::DA);
    } 
    else if (s == "DV") {
     o.setValue(Language::eLanguage::DV);
    } 
    else if (s == "DZ") {
     o.setValue(Language::eLanguage::DZ);
    } 
    else if (s == "DE") {
     o.setValue(Language::eLanguage::DE);
    } 
    else if (s == "EL") {
     o.setValue(Language::eLanguage::EL);
    } 
    else if (s == "EN") {
     o.setValue(Language::eLanguage::EN);
    } 
    else if (s == "ES") {
     o.setValue(Language::eLanguage::ES);
    } 
    else if (s == "ET") {
     o.setValue(Language::eLanguage::ET);
    } 
    else if (s == "FA") {
     o.setValue(Language::eLanguage::FA);
    } 
    else if (s == "FI") {
     o.setValue(Language::eLanguage::FI);
    } 
    else if (s == "FR") {
     o.setValue(Language::eLanguage::FR);
    } 
    else if (s == "HE") {
     o.setValue(Language::eLanguage::HE);
    } 
    else if (s == "HI") {
     o.setValue(Language::eLanguage::HI);
    } 
    else if (s == "HR") {
     o.setValue(Language::eLanguage::HR);
    } 
    else if (s == "HU") {
     o.setValue(Language::eLanguage::HU);
    } 
    else if (s == "HY") {
     o.setValue(Language::eLanguage::HY);
    } 
    else if (s == "ID") {
     o.setValue(Language::eLanguage::ID);
    } 
    else if (s == "IN") {
     o.setValue(Language::eLanguage::IN);
    } 
    else if (s == "IS") {
     o.setValue(Language::eLanguage::IS);
    } 
    else if (s == "IT") {
     o.setValue(Language::eLanguage::IT);
    } 
    else if (s == "IW") {
     o.setValue(Language::eLanguage::IW);
    } 
    else if (s == "JA") {
     o.setValue(Language::eLanguage::JA);
    } 
    else if (s == "KA") {
     o.setValue(Language::eLanguage::KA);
    } 
    else if (s == "KM") {
     o.setValue(Language::eLanguage::KM);
    } 
    else if (s == "KO") {
     o.setValue(Language::eLanguage::KO);
    } 
    else if (s == "LO") {
     o.setValue(Language::eLanguage::LO);
    } 
    else if (s == "LT") {
     o.setValue(Language::eLanguage::LT);
    } 
    else if (s == "LV") {
     o.setValue(Language::eLanguage::LV);
    } 
    else if (s == "MK") {
     o.setValue(Language::eLanguage::MK);
    } 
    else if (s == "MN") {
     o.setValue(Language::eLanguage::MN);
    } 
    else if (s == "MS") {
     o.setValue(Language::eLanguage::MS);
    } 
    else if (s == "MY") {
     o.setValue(Language::eLanguage::MY);
    } 
    else if (s == "NB") {
     o.setValue(Language::eLanguage::NB);
    } 
    else if (s == "NE") {
     o.setValue(Language::eLanguage::NE);
    } 
    else if (s == "NL") {
     o.setValue(Language::eLanguage::NL);
    } 
    else if (s == "NO") {
     o.setValue(Language::eLanguage::NO);
    } 
    else if (s == "PL") {
     o.setValue(Language::eLanguage::PL);
    } 
    else if (s == "PT") {
     o.setValue(Language::eLanguage::PT);
    } 
    else if (s == "RO") {
     o.setValue(Language::eLanguage::RO);
    } 
    else if (s == "RU") {
     o.setValue(Language::eLanguage::RU);
    } 
    else if (s == "SK") {
     o.setValue(Language::eLanguage::SK);
    } 
    else if (s == "SL") {
     o.setValue(Language::eLanguage::SL);
    } 
    else if (s == "SQ") {
     o.setValue(Language::eLanguage::SQ);
    } 
    else if (s == "SR") {
     o.setValue(Language::eLanguage::SR);
    } 
    else if (s == "SV") {
     o.setValue(Language::eLanguage::SV);
    } 
    else if (s == "TL") {
     o.setValue(Language::eLanguage::TL);
    } 
    else if (s == "UK") {
     o.setValue(Language::eLanguage::UK);
    } 
    else if (s == "VI") {
     o.setValue(Language::eLanguage::VI);
    } 
    else if (s == "TE") {
     o.setValue(Language::eLanguage::TE);
    } 
    else if (s == "TH") {
     o.setValue(Language::eLanguage::TH);
    } 
    else if (s == "TR") {
     o.setValue(Language::eLanguage::TR);
    } 
    else if (s == "XX") {
     o.setValue(Language::eLanguage::XX);
    } 
    else if (s == "ZH") {
     o.setValue(Language::eLanguage::ZH);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " Language::eLanguage";
     throw std::invalid_argument(ss.str());
    } 

}

Language::eLanguage Language::getValue() const
{
    return m_value;
}
void Language::setValue(Language::eLanguage value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

