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


#include "NullableCurrency.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

NullableCurrency::NullableCurrency()
{
    
}

void NullableCurrency::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool NullableCurrency::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool NullableCurrency::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "NullableCurrency" : pathPrefix;

    
    if (m_value == NullableCurrency::eNullableCurrency::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool NullableCurrency::operator==(const NullableCurrency& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool NullableCurrency::operator!=(const NullableCurrency& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NullableCurrency& o)
{
    j = nlohmann::json();
    
    switch (o.getValue())
    {
        case NullableCurrency::eNullableCurrency::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case NullableCurrency::eNullableCurrency::AED:
            j = "AED";
            break;
        case NullableCurrency::eNullableCurrency::AFN:
            j = "AFN";
            break;
        case NullableCurrency::eNullableCurrency::ALL:
            j = "ALL";
            break;
        case NullableCurrency::eNullableCurrency::AMD:
            j = "AMD";
            break;
        case NullableCurrency::eNullableCurrency::ANG:
            j = "ANG";
            break;
        case NullableCurrency::eNullableCurrency::AOA:
            j = "AOA";
            break;
        case NullableCurrency::eNullableCurrency::ARS:
            j = "ARS";
            break;
        case NullableCurrency::eNullableCurrency::AUD:
            j = "AUD";
            break;
        case NullableCurrency::eNullableCurrency::AWG:
            j = "AWG";
            break;
        case NullableCurrency::eNullableCurrency::AZN:
            j = "AZN";
            break;
        case NullableCurrency::eNullableCurrency::BAM:
            j = "BAM";
            break;
        case NullableCurrency::eNullableCurrency::BBD:
            j = "BBD";
            break;
        case NullableCurrency::eNullableCurrency::BDT:
            j = "BDT";
            break;
        case NullableCurrency::eNullableCurrency::BGN:
            j = "BGN";
            break;
        case NullableCurrency::eNullableCurrency::BHD:
            j = "BHD";
            break;
        case NullableCurrency::eNullableCurrency::BIF:
            j = "BIF";
            break;
        case NullableCurrency::eNullableCurrency::BMD:
            j = "BMD";
            break;
        case NullableCurrency::eNullableCurrency::BND:
            j = "BND";
            break;
        case NullableCurrency::eNullableCurrency::BOB:
            j = "BOB";
            break;
        case NullableCurrency::eNullableCurrency::BRL:
            j = "BRL";
            break;
        case NullableCurrency::eNullableCurrency::BSD:
            j = "BSD";
            break;
        case NullableCurrency::eNullableCurrency::BTN:
            j = "BTN";
            break;
        case NullableCurrency::eNullableCurrency::BWP:
            j = "BWP";
            break;
        case NullableCurrency::eNullableCurrency::BYN:
            j = "BYN";
            break;
        case NullableCurrency::eNullableCurrency::BYR:
            j = "BYR";
            break;
        case NullableCurrency::eNullableCurrency::BZD:
            j = "BZD";
            break;
        case NullableCurrency::eNullableCurrency::CAD:
            j = "CAD";
            break;
        case NullableCurrency::eNullableCurrency::CDF:
            j = "CDF";
            break;
        case NullableCurrency::eNullableCurrency::CHF:
            j = "CHF";
            break;
        case NullableCurrency::eNullableCurrency::CLP:
            j = "CLP";
            break;
        case NullableCurrency::eNullableCurrency::CNY:
            j = "CNY";
            break;
        case NullableCurrency::eNullableCurrency::COP:
            j = "COP";
            break;
        case NullableCurrency::eNullableCurrency::CRC:
            j = "CRC";
            break;
        case NullableCurrency::eNullableCurrency::CUC:
            j = "CUC";
            break;
        case NullableCurrency::eNullableCurrency::CUP:
            j = "CUP";
            break;
        case NullableCurrency::eNullableCurrency::CVE:
            j = "CVE";
            break;
        case NullableCurrency::eNullableCurrency::CZK:
            j = "CZK";
            break;
        case NullableCurrency::eNullableCurrency::DJF:
            j = "DJF";
            break;
        case NullableCurrency::eNullableCurrency::DKK:
            j = "DKK";
            break;
        case NullableCurrency::eNullableCurrency::DOP:
            j = "DOP";
            break;
        case NullableCurrency::eNullableCurrency::DZD:
            j = "DZD";
            break;
        case NullableCurrency::eNullableCurrency::EGP:
            j = "EGP";
            break;
        case NullableCurrency::eNullableCurrency::ERN:
            j = "ERN";
            break;
        case NullableCurrency::eNullableCurrency::ETB:
            j = "ETB";
            break;
        case NullableCurrency::eNullableCurrency::EUR:
            j = "EUR";
            break;
        case NullableCurrency::eNullableCurrency::FJD:
            j = "FJD";
            break;
        case NullableCurrency::eNullableCurrency::FKP:
            j = "FKP";
            break;
        case NullableCurrency::eNullableCurrency::GBP:
            j = "GBP";
            break;
        case NullableCurrency::eNullableCurrency::GEL:
            j = "GEL";
            break;
        case NullableCurrency::eNullableCurrency::GGP:
            j = "GGP";
            break;
        case NullableCurrency::eNullableCurrency::GHS:
            j = "GHS";
            break;
        case NullableCurrency::eNullableCurrency::GIP:
            j = "GIP";
            break;
        case NullableCurrency::eNullableCurrency::GMD:
            j = "GMD";
            break;
        case NullableCurrency::eNullableCurrency::GNF:
            j = "GNF";
            break;
        case NullableCurrency::eNullableCurrency::GTQ:
            j = "GTQ";
            break;
        case NullableCurrency::eNullableCurrency::GYD:
            j = "GYD";
            break;
        case NullableCurrency::eNullableCurrency::HKD:
            j = "HKD";
            break;
        case NullableCurrency::eNullableCurrency::HNL:
            j = "HNL";
            break;
        case NullableCurrency::eNullableCurrency::HRK:
            j = "HRK";
            break;
        case NullableCurrency::eNullableCurrency::HTG:
            j = "HTG";
            break;
        case NullableCurrency::eNullableCurrency::HUF:
            j = "HUF";
            break;
        case NullableCurrency::eNullableCurrency::IDR:
            j = "IDR";
            break;
        case NullableCurrency::eNullableCurrency::ILS:
            j = "ILS";
            break;
        case NullableCurrency::eNullableCurrency::IMP:
            j = "IMP";
            break;
        case NullableCurrency::eNullableCurrency::INR:
            j = "INR";
            break;
        case NullableCurrency::eNullableCurrency::IQD:
            j = "IQD";
            break;
        case NullableCurrency::eNullableCurrency::IRR:
            j = "IRR";
            break;
        case NullableCurrency::eNullableCurrency::ISK:
            j = "ISK";
            break;
        case NullableCurrency::eNullableCurrency::JEP:
            j = "JEP";
            break;
        case NullableCurrency::eNullableCurrency::JMD:
            j = "JMD";
            break;
        case NullableCurrency::eNullableCurrency::JOD:
            j = "JOD";
            break;
        case NullableCurrency::eNullableCurrency::JPY:
            j = "JPY";
            break;
        case NullableCurrency::eNullableCurrency::KES:
            j = "KES";
            break;
        case NullableCurrency::eNullableCurrency::KGS:
            j = "KGS";
            break;
        case NullableCurrency::eNullableCurrency::KHR:
            j = "KHR";
            break;
        case NullableCurrency::eNullableCurrency::KMF:
            j = "KMF";
            break;
        case NullableCurrency::eNullableCurrency::KPW:
            j = "KPW";
            break;
        case NullableCurrency::eNullableCurrency::KRW:
            j = "KRW";
            break;
        case NullableCurrency::eNullableCurrency::KWD:
            j = "KWD";
            break;
        case NullableCurrency::eNullableCurrency::KYD:
            j = "KYD";
            break;
        case NullableCurrency::eNullableCurrency::KZT:
            j = "KZT";
            break;
        case NullableCurrency::eNullableCurrency::LAK:
            j = "LAK";
            break;
        case NullableCurrency::eNullableCurrency::LBP:
            j = "LBP";
            break;
        case NullableCurrency::eNullableCurrency::LKR:
            j = "LKR";
            break;
        case NullableCurrency::eNullableCurrency::LRD:
            j = "LRD";
            break;
        case NullableCurrency::eNullableCurrency::LSL:
            j = "LSL";
            break;
        case NullableCurrency::eNullableCurrency::LYD:
            j = "LYD";
            break;
        case NullableCurrency::eNullableCurrency::MAD:
            j = "MAD";
            break;
        case NullableCurrency::eNullableCurrency::MDL:
            j = "MDL";
            break;
        case NullableCurrency::eNullableCurrency::MGA:
            j = "MGA";
            break;
        case NullableCurrency::eNullableCurrency::MKD:
            j = "MKD";
            break;
        case NullableCurrency::eNullableCurrency::MMK:
            j = "MMK";
            break;
        case NullableCurrency::eNullableCurrency::MNT:
            j = "MNT";
            break;
        case NullableCurrency::eNullableCurrency::MOP:
            j = "MOP";
            break;
        case NullableCurrency::eNullableCurrency::MRO:
            j = "MRO";
            break;
        case NullableCurrency::eNullableCurrency::MUR:
            j = "MUR";
            break;
        case NullableCurrency::eNullableCurrency::MVR:
            j = "MVR";
            break;
        case NullableCurrency::eNullableCurrency::MWK:
            j = "MWK";
            break;
        case NullableCurrency::eNullableCurrency::MXN:
            j = "MXN";
            break;
        case NullableCurrency::eNullableCurrency::MYR:
            j = "MYR";
            break;
        case NullableCurrency::eNullableCurrency::MZN:
            j = "MZN";
            break;
        case NullableCurrency::eNullableCurrency::NAD:
            j = "NAD";
            break;
        case NullableCurrency::eNullableCurrency::NGN:
            j = "NGN";
            break;
        case NullableCurrency::eNullableCurrency::NIO:
            j = "NIO";
            break;
        case NullableCurrency::eNullableCurrency::NOK:
            j = "NOK";
            break;
        case NullableCurrency::eNullableCurrency::NPR:
            j = "NPR";
            break;
        case NullableCurrency::eNullableCurrency::NZD:
            j = "NZD";
            break;
        case NullableCurrency::eNullableCurrency::OMR:
            j = "OMR";
            break;
        case NullableCurrency::eNullableCurrency::PAB:
            j = "PAB";
            break;
        case NullableCurrency::eNullableCurrency::PEN:
            j = "PEN";
            break;
        case NullableCurrency::eNullableCurrency::PGK:
            j = "PGK";
            break;
        case NullableCurrency::eNullableCurrency::PHP:
            j = "PHP";
            break;
        case NullableCurrency::eNullableCurrency::PKR:
            j = "PKR";
            break;
        case NullableCurrency::eNullableCurrency::PLN:
            j = "PLN";
            break;
        case NullableCurrency::eNullableCurrency::PYG:
            j = "PYG";
            break;
        case NullableCurrency::eNullableCurrency::QAR:
            j = "QAR";
            break;
        case NullableCurrency::eNullableCurrency::RON:
            j = "RON";
            break;
        case NullableCurrency::eNullableCurrency::RSD:
            j = "RSD";
            break;
        case NullableCurrency::eNullableCurrency::RUB:
            j = "RUB";
            break;
        case NullableCurrency::eNullableCurrency::RWF:
            j = "RWF";
            break;
        case NullableCurrency::eNullableCurrency::SAR:
            j = "SAR";
            break;
        case NullableCurrency::eNullableCurrency::SBD:
            j = "SBD";
            break;
        case NullableCurrency::eNullableCurrency::SCR:
            j = "SCR";
            break;
        case NullableCurrency::eNullableCurrency::SDG:
            j = "SDG";
            break;
        case NullableCurrency::eNullableCurrency::SEK:
            j = "SEK";
            break;
        case NullableCurrency::eNullableCurrency::SGD:
            j = "SGD";
            break;
        case NullableCurrency::eNullableCurrency::SHP:
            j = "SHP";
            break;
        case NullableCurrency::eNullableCurrency::SLL:
            j = "SLL";
            break;
        case NullableCurrency::eNullableCurrency::SOS:
            j = "SOS";
            break;
        case NullableCurrency::eNullableCurrency::SPL:
            j = "SPL";
            break;
        case NullableCurrency::eNullableCurrency::SRD:
            j = "SRD";
            break;
        case NullableCurrency::eNullableCurrency::STD:
            j = "STD";
            break;
        case NullableCurrency::eNullableCurrency::SVC:
            j = "SVC";
            break;
        case NullableCurrency::eNullableCurrency::SYP:
            j = "SYP";
            break;
        case NullableCurrency::eNullableCurrency::SZL:
            j = "SZL";
            break;
        case NullableCurrency::eNullableCurrency::THB:
            j = "THB";
            break;
        case NullableCurrency::eNullableCurrency::TJS:
            j = "TJS";
            break;
        case NullableCurrency::eNullableCurrency::TMT:
            j = "TMT";
            break;
        case NullableCurrency::eNullableCurrency::TND:
            j = "TND";
            break;
        case NullableCurrency::eNullableCurrency::TOP:
            j = "TOP";
            break;
        case NullableCurrency::eNullableCurrency::TRY:
            j = "TRY";
            break;
        case NullableCurrency::eNullableCurrency::TTD:
            j = "TTD";
            break;
        case NullableCurrency::eNullableCurrency::TVD:
            j = "TVD";
            break;
        case NullableCurrency::eNullableCurrency::TWD:
            j = "TWD";
            break;
        case NullableCurrency::eNullableCurrency::TZS:
            j = "TZS";
            break;
        case NullableCurrency::eNullableCurrency::UAH:
            j = "UAH";
            break;
        case NullableCurrency::eNullableCurrency::UGX:
            j = "UGX";
            break;
        case NullableCurrency::eNullableCurrency::USD:
            j = "USD";
            break;
        case NullableCurrency::eNullableCurrency::UYU:
            j = "UYU";
            break;
        case NullableCurrency::eNullableCurrency::UZS:
            j = "UZS";
            break;
        case NullableCurrency::eNullableCurrency::VEF:
            j = "VEF";
            break;
        case NullableCurrency::eNullableCurrency::VND:
            j = "VND";
            break;
        case NullableCurrency::eNullableCurrency::VUV:
            j = "VUV";
            break;
        case NullableCurrency::eNullableCurrency::WST:
            j = "WST";
            break;
        case NullableCurrency::eNullableCurrency::XAF:
            j = "XAF";
            break;
        case NullableCurrency::eNullableCurrency::XCD:
            j = "XCD";
            break;
        case NullableCurrency::eNullableCurrency::XDR:
            j = "XDR";
            break;
        case NullableCurrency::eNullableCurrency::XOF:
            j = "XOF";
            break;
        case NullableCurrency::eNullableCurrency::XPF:
            j = "XPF";
            break;
        case NullableCurrency::eNullableCurrency::YER:
            j = "YER";
            break;
        case NullableCurrency::eNullableCurrency::ZAR:
            j = "ZAR";
            break;
        case NullableCurrency::eNullableCurrency::ZMW:
            j = "ZMW";
            break;
        case NullableCurrency::eNullableCurrency::ZWD:
            j = "ZWD";
            break;
        case NullableCurrency::eNullableCurrency::NULL:
            j = "null";
            break;
    }
}

void from_json(const nlohmann::json& j, NullableCurrency& o)
{
    
    auto s = j.get<std::string>();
    if (s == "AED") {
     o.setValue(NullableCurrency::eNullableCurrency::AED);
    } 
    else if (s == "AFN") {
     o.setValue(NullableCurrency::eNullableCurrency::AFN);
    } 
    else if (s == "ALL") {
     o.setValue(NullableCurrency::eNullableCurrency::ALL);
    } 
    else if (s == "AMD") {
     o.setValue(NullableCurrency::eNullableCurrency::AMD);
    } 
    else if (s == "ANG") {
     o.setValue(NullableCurrency::eNullableCurrency::ANG);
    } 
    else if (s == "AOA") {
     o.setValue(NullableCurrency::eNullableCurrency::AOA);
    } 
    else if (s == "ARS") {
     o.setValue(NullableCurrency::eNullableCurrency::ARS);
    } 
    else if (s == "AUD") {
     o.setValue(NullableCurrency::eNullableCurrency::AUD);
    } 
    else if (s == "AWG") {
     o.setValue(NullableCurrency::eNullableCurrency::AWG);
    } 
    else if (s == "AZN") {
     o.setValue(NullableCurrency::eNullableCurrency::AZN);
    } 
    else if (s == "BAM") {
     o.setValue(NullableCurrency::eNullableCurrency::BAM);
    } 
    else if (s == "BBD") {
     o.setValue(NullableCurrency::eNullableCurrency::BBD);
    } 
    else if (s == "BDT") {
     o.setValue(NullableCurrency::eNullableCurrency::BDT);
    } 
    else if (s == "BGN") {
     o.setValue(NullableCurrency::eNullableCurrency::BGN);
    } 
    else if (s == "BHD") {
     o.setValue(NullableCurrency::eNullableCurrency::BHD);
    } 
    else if (s == "BIF") {
     o.setValue(NullableCurrency::eNullableCurrency::BIF);
    } 
    else if (s == "BMD") {
     o.setValue(NullableCurrency::eNullableCurrency::BMD);
    } 
    else if (s == "BND") {
     o.setValue(NullableCurrency::eNullableCurrency::BND);
    } 
    else if (s == "BOB") {
     o.setValue(NullableCurrency::eNullableCurrency::BOB);
    } 
    else if (s == "BRL") {
     o.setValue(NullableCurrency::eNullableCurrency::BRL);
    } 
    else if (s == "BSD") {
     o.setValue(NullableCurrency::eNullableCurrency::BSD);
    } 
    else if (s == "BTN") {
     o.setValue(NullableCurrency::eNullableCurrency::BTN);
    } 
    else if (s == "BWP") {
     o.setValue(NullableCurrency::eNullableCurrency::BWP);
    } 
    else if (s == "BYN") {
     o.setValue(NullableCurrency::eNullableCurrency::BYN);
    } 
    else if (s == "BYR") {
     o.setValue(NullableCurrency::eNullableCurrency::BYR);
    } 
    else if (s == "BZD") {
     o.setValue(NullableCurrency::eNullableCurrency::BZD);
    } 
    else if (s == "CAD") {
     o.setValue(NullableCurrency::eNullableCurrency::CAD);
    } 
    else if (s == "CDF") {
     o.setValue(NullableCurrency::eNullableCurrency::CDF);
    } 
    else if (s == "CHF") {
     o.setValue(NullableCurrency::eNullableCurrency::CHF);
    } 
    else if (s == "CLP") {
     o.setValue(NullableCurrency::eNullableCurrency::CLP);
    } 
    else if (s == "CNY") {
     o.setValue(NullableCurrency::eNullableCurrency::CNY);
    } 
    else if (s == "COP") {
     o.setValue(NullableCurrency::eNullableCurrency::COP);
    } 
    else if (s == "CRC") {
     o.setValue(NullableCurrency::eNullableCurrency::CRC);
    } 
    else if (s == "CUC") {
     o.setValue(NullableCurrency::eNullableCurrency::CUC);
    } 
    else if (s == "CUP") {
     o.setValue(NullableCurrency::eNullableCurrency::CUP);
    } 
    else if (s == "CVE") {
     o.setValue(NullableCurrency::eNullableCurrency::CVE);
    } 
    else if (s == "CZK") {
     o.setValue(NullableCurrency::eNullableCurrency::CZK);
    } 
    else if (s == "DJF") {
     o.setValue(NullableCurrency::eNullableCurrency::DJF);
    } 
    else if (s == "DKK") {
     o.setValue(NullableCurrency::eNullableCurrency::DKK);
    } 
    else if (s == "DOP") {
     o.setValue(NullableCurrency::eNullableCurrency::DOP);
    } 
    else if (s == "DZD") {
     o.setValue(NullableCurrency::eNullableCurrency::DZD);
    } 
    else if (s == "EGP") {
     o.setValue(NullableCurrency::eNullableCurrency::EGP);
    } 
    else if (s == "ERN") {
     o.setValue(NullableCurrency::eNullableCurrency::ERN);
    } 
    else if (s == "ETB") {
     o.setValue(NullableCurrency::eNullableCurrency::ETB);
    } 
    else if (s == "EUR") {
     o.setValue(NullableCurrency::eNullableCurrency::EUR);
    } 
    else if (s == "FJD") {
     o.setValue(NullableCurrency::eNullableCurrency::FJD);
    } 
    else if (s == "FKP") {
     o.setValue(NullableCurrency::eNullableCurrency::FKP);
    } 
    else if (s == "GBP") {
     o.setValue(NullableCurrency::eNullableCurrency::GBP);
    } 
    else if (s == "GEL") {
     o.setValue(NullableCurrency::eNullableCurrency::GEL);
    } 
    else if (s == "GGP") {
     o.setValue(NullableCurrency::eNullableCurrency::GGP);
    } 
    else if (s == "GHS") {
     o.setValue(NullableCurrency::eNullableCurrency::GHS);
    } 
    else if (s == "GIP") {
     o.setValue(NullableCurrency::eNullableCurrency::GIP);
    } 
    else if (s == "GMD") {
     o.setValue(NullableCurrency::eNullableCurrency::GMD);
    } 
    else if (s == "GNF") {
     o.setValue(NullableCurrency::eNullableCurrency::GNF);
    } 
    else if (s == "GTQ") {
     o.setValue(NullableCurrency::eNullableCurrency::GTQ);
    } 
    else if (s == "GYD") {
     o.setValue(NullableCurrency::eNullableCurrency::GYD);
    } 
    else if (s == "HKD") {
     o.setValue(NullableCurrency::eNullableCurrency::HKD);
    } 
    else if (s == "HNL") {
     o.setValue(NullableCurrency::eNullableCurrency::HNL);
    } 
    else if (s == "HRK") {
     o.setValue(NullableCurrency::eNullableCurrency::HRK);
    } 
    else if (s == "HTG") {
     o.setValue(NullableCurrency::eNullableCurrency::HTG);
    } 
    else if (s == "HUF") {
     o.setValue(NullableCurrency::eNullableCurrency::HUF);
    } 
    else if (s == "IDR") {
     o.setValue(NullableCurrency::eNullableCurrency::IDR);
    } 
    else if (s == "ILS") {
     o.setValue(NullableCurrency::eNullableCurrency::ILS);
    } 
    else if (s == "IMP") {
     o.setValue(NullableCurrency::eNullableCurrency::IMP);
    } 
    else if (s == "INR") {
     o.setValue(NullableCurrency::eNullableCurrency::INR);
    } 
    else if (s == "IQD") {
     o.setValue(NullableCurrency::eNullableCurrency::IQD);
    } 
    else if (s == "IRR") {
     o.setValue(NullableCurrency::eNullableCurrency::IRR);
    } 
    else if (s == "ISK") {
     o.setValue(NullableCurrency::eNullableCurrency::ISK);
    } 
    else if (s == "JEP") {
     o.setValue(NullableCurrency::eNullableCurrency::JEP);
    } 
    else if (s == "JMD") {
     o.setValue(NullableCurrency::eNullableCurrency::JMD);
    } 
    else if (s == "JOD") {
     o.setValue(NullableCurrency::eNullableCurrency::JOD);
    } 
    else if (s == "JPY") {
     o.setValue(NullableCurrency::eNullableCurrency::JPY);
    } 
    else if (s == "KES") {
     o.setValue(NullableCurrency::eNullableCurrency::KES);
    } 
    else if (s == "KGS") {
     o.setValue(NullableCurrency::eNullableCurrency::KGS);
    } 
    else if (s == "KHR") {
     o.setValue(NullableCurrency::eNullableCurrency::KHR);
    } 
    else if (s == "KMF") {
     o.setValue(NullableCurrency::eNullableCurrency::KMF);
    } 
    else if (s == "KPW") {
     o.setValue(NullableCurrency::eNullableCurrency::KPW);
    } 
    else if (s == "KRW") {
     o.setValue(NullableCurrency::eNullableCurrency::KRW);
    } 
    else if (s == "KWD") {
     o.setValue(NullableCurrency::eNullableCurrency::KWD);
    } 
    else if (s == "KYD") {
     o.setValue(NullableCurrency::eNullableCurrency::KYD);
    } 
    else if (s == "KZT") {
     o.setValue(NullableCurrency::eNullableCurrency::KZT);
    } 
    else if (s == "LAK") {
     o.setValue(NullableCurrency::eNullableCurrency::LAK);
    } 
    else if (s == "LBP") {
     o.setValue(NullableCurrency::eNullableCurrency::LBP);
    } 
    else if (s == "LKR") {
     o.setValue(NullableCurrency::eNullableCurrency::LKR);
    } 
    else if (s == "LRD") {
     o.setValue(NullableCurrency::eNullableCurrency::LRD);
    } 
    else if (s == "LSL") {
     o.setValue(NullableCurrency::eNullableCurrency::LSL);
    } 
    else if (s == "LYD") {
     o.setValue(NullableCurrency::eNullableCurrency::LYD);
    } 
    else if (s == "MAD") {
     o.setValue(NullableCurrency::eNullableCurrency::MAD);
    } 
    else if (s == "MDL") {
     o.setValue(NullableCurrency::eNullableCurrency::MDL);
    } 
    else if (s == "MGA") {
     o.setValue(NullableCurrency::eNullableCurrency::MGA);
    } 
    else if (s == "MKD") {
     o.setValue(NullableCurrency::eNullableCurrency::MKD);
    } 
    else if (s == "MMK") {
     o.setValue(NullableCurrency::eNullableCurrency::MMK);
    } 
    else if (s == "MNT") {
     o.setValue(NullableCurrency::eNullableCurrency::MNT);
    } 
    else if (s == "MOP") {
     o.setValue(NullableCurrency::eNullableCurrency::MOP);
    } 
    else if (s == "MRO") {
     o.setValue(NullableCurrency::eNullableCurrency::MRO);
    } 
    else if (s == "MUR") {
     o.setValue(NullableCurrency::eNullableCurrency::MUR);
    } 
    else if (s == "MVR") {
     o.setValue(NullableCurrency::eNullableCurrency::MVR);
    } 
    else if (s == "MWK") {
     o.setValue(NullableCurrency::eNullableCurrency::MWK);
    } 
    else if (s == "MXN") {
     o.setValue(NullableCurrency::eNullableCurrency::MXN);
    } 
    else if (s == "MYR") {
     o.setValue(NullableCurrency::eNullableCurrency::MYR);
    } 
    else if (s == "MZN") {
     o.setValue(NullableCurrency::eNullableCurrency::MZN);
    } 
    else if (s == "NAD") {
     o.setValue(NullableCurrency::eNullableCurrency::NAD);
    } 
    else if (s == "NGN") {
     o.setValue(NullableCurrency::eNullableCurrency::NGN);
    } 
    else if (s == "NIO") {
     o.setValue(NullableCurrency::eNullableCurrency::NIO);
    } 
    else if (s == "NOK") {
     o.setValue(NullableCurrency::eNullableCurrency::NOK);
    } 
    else if (s == "NPR") {
     o.setValue(NullableCurrency::eNullableCurrency::NPR);
    } 
    else if (s == "NZD") {
     o.setValue(NullableCurrency::eNullableCurrency::NZD);
    } 
    else if (s == "OMR") {
     o.setValue(NullableCurrency::eNullableCurrency::OMR);
    } 
    else if (s == "PAB") {
     o.setValue(NullableCurrency::eNullableCurrency::PAB);
    } 
    else if (s == "PEN") {
     o.setValue(NullableCurrency::eNullableCurrency::PEN);
    } 
    else if (s == "PGK") {
     o.setValue(NullableCurrency::eNullableCurrency::PGK);
    } 
    else if (s == "PHP") {
     o.setValue(NullableCurrency::eNullableCurrency::PHP);
    } 
    else if (s == "PKR") {
     o.setValue(NullableCurrency::eNullableCurrency::PKR);
    } 
    else if (s == "PLN") {
     o.setValue(NullableCurrency::eNullableCurrency::PLN);
    } 
    else if (s == "PYG") {
     o.setValue(NullableCurrency::eNullableCurrency::PYG);
    } 
    else if (s == "QAR") {
     o.setValue(NullableCurrency::eNullableCurrency::QAR);
    } 
    else if (s == "RON") {
     o.setValue(NullableCurrency::eNullableCurrency::RON);
    } 
    else if (s == "RSD") {
     o.setValue(NullableCurrency::eNullableCurrency::RSD);
    } 
    else if (s == "RUB") {
     o.setValue(NullableCurrency::eNullableCurrency::RUB);
    } 
    else if (s == "RWF") {
     o.setValue(NullableCurrency::eNullableCurrency::RWF);
    } 
    else if (s == "SAR") {
     o.setValue(NullableCurrency::eNullableCurrency::SAR);
    } 
    else if (s == "SBD") {
     o.setValue(NullableCurrency::eNullableCurrency::SBD);
    } 
    else if (s == "SCR") {
     o.setValue(NullableCurrency::eNullableCurrency::SCR);
    } 
    else if (s == "SDG") {
     o.setValue(NullableCurrency::eNullableCurrency::SDG);
    } 
    else if (s == "SEK") {
     o.setValue(NullableCurrency::eNullableCurrency::SEK);
    } 
    else if (s == "SGD") {
     o.setValue(NullableCurrency::eNullableCurrency::SGD);
    } 
    else if (s == "SHP") {
     o.setValue(NullableCurrency::eNullableCurrency::SHP);
    } 
    else if (s == "SLL") {
     o.setValue(NullableCurrency::eNullableCurrency::SLL);
    } 
    else if (s == "SOS") {
     o.setValue(NullableCurrency::eNullableCurrency::SOS);
    } 
    else if (s == "SPL") {
     o.setValue(NullableCurrency::eNullableCurrency::SPL);
    } 
    else if (s == "SRD") {
     o.setValue(NullableCurrency::eNullableCurrency::SRD);
    } 
    else if (s == "STD") {
     o.setValue(NullableCurrency::eNullableCurrency::STD);
    } 
    else if (s == "SVC") {
     o.setValue(NullableCurrency::eNullableCurrency::SVC);
    } 
    else if (s == "SYP") {
     o.setValue(NullableCurrency::eNullableCurrency::SYP);
    } 
    else if (s == "SZL") {
     o.setValue(NullableCurrency::eNullableCurrency::SZL);
    } 
    else if (s == "THB") {
     o.setValue(NullableCurrency::eNullableCurrency::THB);
    } 
    else if (s == "TJS") {
     o.setValue(NullableCurrency::eNullableCurrency::TJS);
    } 
    else if (s == "TMT") {
     o.setValue(NullableCurrency::eNullableCurrency::TMT);
    } 
    else if (s == "TND") {
     o.setValue(NullableCurrency::eNullableCurrency::TND);
    } 
    else if (s == "TOP") {
     o.setValue(NullableCurrency::eNullableCurrency::TOP);
    } 
    else if (s == "TRY") {
     o.setValue(NullableCurrency::eNullableCurrency::TRY);
    } 
    else if (s == "TTD") {
     o.setValue(NullableCurrency::eNullableCurrency::TTD);
    } 
    else if (s == "TVD") {
     o.setValue(NullableCurrency::eNullableCurrency::TVD);
    } 
    else if (s == "TWD") {
     o.setValue(NullableCurrency::eNullableCurrency::TWD);
    } 
    else if (s == "TZS") {
     o.setValue(NullableCurrency::eNullableCurrency::TZS);
    } 
    else if (s == "UAH") {
     o.setValue(NullableCurrency::eNullableCurrency::UAH);
    } 
    else if (s == "UGX") {
     o.setValue(NullableCurrency::eNullableCurrency::UGX);
    } 
    else if (s == "USD") {
     o.setValue(NullableCurrency::eNullableCurrency::USD);
    } 
    else if (s == "UYU") {
     o.setValue(NullableCurrency::eNullableCurrency::UYU);
    } 
    else if (s == "UZS") {
     o.setValue(NullableCurrency::eNullableCurrency::UZS);
    } 
    else if (s == "VEF") {
     o.setValue(NullableCurrency::eNullableCurrency::VEF);
    } 
    else if (s == "VND") {
     o.setValue(NullableCurrency::eNullableCurrency::VND);
    } 
    else if (s == "VUV") {
     o.setValue(NullableCurrency::eNullableCurrency::VUV);
    } 
    else if (s == "WST") {
     o.setValue(NullableCurrency::eNullableCurrency::WST);
    } 
    else if (s == "XAF") {
     o.setValue(NullableCurrency::eNullableCurrency::XAF);
    } 
    else if (s == "XCD") {
     o.setValue(NullableCurrency::eNullableCurrency::XCD);
    } 
    else if (s == "XDR") {
     o.setValue(NullableCurrency::eNullableCurrency::XDR);
    } 
    else if (s == "XOF") {
     o.setValue(NullableCurrency::eNullableCurrency::XOF);
    } 
    else if (s == "XPF") {
     o.setValue(NullableCurrency::eNullableCurrency::XPF);
    } 
    else if (s == "YER") {
     o.setValue(NullableCurrency::eNullableCurrency::YER);
    } 
    else if (s == "ZAR") {
     o.setValue(NullableCurrency::eNullableCurrency::ZAR);
    } 
    else if (s == "ZMW") {
     o.setValue(NullableCurrency::eNullableCurrency::ZMW);
    } 
    else if (s == "ZWD") {
     o.setValue(NullableCurrency::eNullableCurrency::ZWD);
    } 
    else if (s == "null") {
     o.setValue(NullableCurrency::eNullableCurrency::NULL);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " NullableCurrency::eNullableCurrency";
     throw std::invalid_argument(ss.str());
    } 

}

NullableCurrency::eNullableCurrency NullableCurrency::getValue() const
{
    return m_value;
}
void NullableCurrency::setValue(NullableCurrency::eNullableCurrency value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

