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


#include "Currency.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

Currency::Currency()
{
    
}

void Currency::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Currency::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Currency::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Currency" : pathPrefix;

    
    if (m_value == Currency::eCurrency::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool Currency::operator==(const Currency& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool Currency::operator!=(const Currency& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Currency& o)
{
    j = nlohmann::json::object();
    
    switch (o.getValue())
    {
        case Currency::eCurrency::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case Currency::eCurrency::UNK:
            j = "UNK";
            break;
        case Currency::eCurrency::USD:
            j = "USD";
            break;
        case Currency::eCurrency::GBP:
            j = "GBP";
            break;
        case Currency::eCurrency::CAD:
            j = "CAD";
            break;
        case Currency::eCurrency::EUR:
            j = "EUR";
            break;
        case Currency::eCurrency::AUD:
            j = "AUD";
            break;
        case Currency::eCurrency::NZD:
            j = "NZD";
            break;
        case Currency::eCurrency::SEK:
            j = "SEK";
            break;
        case Currency::eCurrency::ILS:
            j = "ILS";
            break;
        case Currency::eCurrency::CHF:
            j = "CHF";
            break;
        case Currency::eCurrency::HKD:
            j = "HKD";
            break;
        case Currency::eCurrency::JPY:
            j = "JPY";
            break;
        case Currency::eCurrency::SGD:
            j = "SGD";
            break;
        case Currency::eCurrency::KRW:
            j = "KRW";
            break;
        case Currency::eCurrency::NOK:
            j = "NOK";
            break;
        case Currency::eCurrency::DKK:
            j = "DKK";
            break;
        case Currency::eCurrency::PLN:
            j = "PLN";
            break;
        case Currency::eCurrency::RON:
            j = "RON";
            break;
        case Currency::eCurrency::HUF:
            j = "HUF";
            break;
        case Currency::eCurrency::CZK:
            j = "CZK";
            break;
        case Currency::eCurrency::BRL:
            j = "BRL";
            break;
        case Currency::eCurrency::MXN:
            j = "MXN";
            break;
        case Currency::eCurrency::ARS:
            j = "ARS";
            break;
        case Currency::eCurrency::CLP:
            j = "CLP";
            break;
        case Currency::eCurrency::COP:
            j = "COP";
            break;
    }
}

void from_json(const nlohmann::json& j, Currency& o)
{
    
    auto s = j.get<std::string>();
    if (s == "UNK") {
     o.setValue(Currency::eCurrency::UNK);
    } 
    else if (s == "USD") {
     o.setValue(Currency::eCurrency::USD);
    } 
    else if (s == "GBP") {
     o.setValue(Currency::eCurrency::GBP);
    } 
    else if (s == "CAD") {
     o.setValue(Currency::eCurrency::CAD);
    } 
    else if (s == "EUR") {
     o.setValue(Currency::eCurrency::EUR);
    } 
    else if (s == "AUD") {
     o.setValue(Currency::eCurrency::AUD);
    } 
    else if (s == "NZD") {
     o.setValue(Currency::eCurrency::NZD);
    } 
    else if (s == "SEK") {
     o.setValue(Currency::eCurrency::SEK);
    } 
    else if (s == "ILS") {
     o.setValue(Currency::eCurrency::ILS);
    } 
    else if (s == "CHF") {
     o.setValue(Currency::eCurrency::CHF);
    } 
    else if (s == "HKD") {
     o.setValue(Currency::eCurrency::HKD);
    } 
    else if (s == "JPY") {
     o.setValue(Currency::eCurrency::JPY);
    } 
    else if (s == "SGD") {
     o.setValue(Currency::eCurrency::SGD);
    } 
    else if (s == "KRW") {
     o.setValue(Currency::eCurrency::KRW);
    } 
    else if (s == "NOK") {
     o.setValue(Currency::eCurrency::NOK);
    } 
    else if (s == "DKK") {
     o.setValue(Currency::eCurrency::DKK);
    } 
    else if (s == "PLN") {
     o.setValue(Currency::eCurrency::PLN);
    } 
    else if (s == "RON") {
     o.setValue(Currency::eCurrency::RON);
    } 
    else if (s == "HUF") {
     o.setValue(Currency::eCurrency::HUF);
    } 
    else if (s == "CZK") {
     o.setValue(Currency::eCurrency::CZK);
    } 
    else if (s == "BRL") {
     o.setValue(Currency::eCurrency::BRL);
    } 
    else if (s == "MXN") {
     o.setValue(Currency::eCurrency::MXN);
    } 
    else if (s == "ARS") {
     o.setValue(Currency::eCurrency::ARS);
    } 
    else if (s == "CLP") {
     o.setValue(Currency::eCurrency::CLP);
    } 
    else if (s == "COP") {
     o.setValue(Currency::eCurrency::COP);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " Currency::eCurrency";
     throw std::invalid_argument(ss.str());
    } 

}

Currency::eCurrency Currency::getValue() const
{
    return m_value;
}
void Currency::setValue(Currency::eCurrency value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

