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


#include "ConversionTagType.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

ConversionTagType::ConversionTagType()
{
    
}

void ConversionTagType::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ConversionTagType::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ConversionTagType::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ConversionTagType" : pathPrefix;

    
    if (m_value == ConversionTagType::eConversionTagType::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool ConversionTagType::operator==(const ConversionTagType& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool ConversionTagType::operator!=(const ConversionTagType& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ConversionTagType& o)
{
    j = nlohmann::json::object();
    
    switch (o.getValue())
    {
        case ConversionTagType::eConversionTagType::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case ConversionTagType::eConversionTagType::PAGE_LOAD:
            j = "PAGE_LOAD";
            break;
        case ConversionTagType::eConversionTagType::UNKNOWN:
            j = "UNKNOWN";
            break;
        case ConversionTagType::eConversionTagType::INITIALIZED:
            j = "INITIALIZED";
            break;
        case ConversionTagType::eConversionTagType::PAGE_VISIT:
            j = "PAGE_VISIT";
            break;
        case ConversionTagType::eConversionTagType::SIGNUP:
            j = "SIGNUP";
            break;
        case ConversionTagType::eConversionTagType::CHECKOUT:
            j = "CHECKOUT";
            break;
        case ConversionTagType::eConversionTagType::CUSTOM:
            j = "CUSTOM";
            break;
        case ConversionTagType::eConversionTagType::VIEW_CATEGORY:
            j = "VIEW_CATEGORY";
            break;
        case ConversionTagType::eConversionTagType::SEARCH:
            j = "SEARCH";
            break;
        case ConversionTagType::eConversionTagType::ADD_TO_CART:
            j = "ADD_TO_CART";
            break;
        case ConversionTagType::eConversionTagType::WATCH_VIDEO:
            j = "WATCH_VIDEO";
            break;
        case ConversionTagType::eConversionTagType::LEAD:
            j = "LEAD";
            break;
        case ConversionTagType::eConversionTagType::APP_INSTALL:
            j = "APP_INSTALL";
            break;
        case ConversionTagType::eConversionTagType::WEB_SESSION:
            j = "WEB_SESSION";
            break;
        case ConversionTagType::eConversionTagType::EXTERNAL_MEASUREMENT:
            j = "EXTERNAL_MEASUREMENT";
            break;
    }
}

void from_json(const nlohmann::json& j, ConversionTagType& o)
{
    
    auto s = j.get<std::string>();
    if (s == "PAGE_LOAD") {
     o.setValue(ConversionTagType::eConversionTagType::PAGE_LOAD);
    } 
    else if (s == "UNKNOWN") {
     o.setValue(ConversionTagType::eConversionTagType::UNKNOWN);
    } 
    else if (s == "INITIALIZED") {
     o.setValue(ConversionTagType::eConversionTagType::INITIALIZED);
    } 
    else if (s == "PAGE_VISIT") {
     o.setValue(ConversionTagType::eConversionTagType::PAGE_VISIT);
    } 
    else if (s == "SIGNUP") {
     o.setValue(ConversionTagType::eConversionTagType::SIGNUP);
    } 
    else if (s == "CHECKOUT") {
     o.setValue(ConversionTagType::eConversionTagType::CHECKOUT);
    } 
    else if (s == "CUSTOM") {
     o.setValue(ConversionTagType::eConversionTagType::CUSTOM);
    } 
    else if (s == "VIEW_CATEGORY") {
     o.setValue(ConversionTagType::eConversionTagType::VIEW_CATEGORY);
    } 
    else if (s == "SEARCH") {
     o.setValue(ConversionTagType::eConversionTagType::SEARCH);
    } 
    else if (s == "ADD_TO_CART") {
     o.setValue(ConversionTagType::eConversionTagType::ADD_TO_CART);
    } 
    else if (s == "WATCH_VIDEO") {
     o.setValue(ConversionTagType::eConversionTagType::WATCH_VIDEO);
    } 
    else if (s == "LEAD") {
     o.setValue(ConversionTagType::eConversionTagType::LEAD);
    } 
    else if (s == "APP_INSTALL") {
     o.setValue(ConversionTagType::eConversionTagType::APP_INSTALL);
    } 
    else if (s == "WEB_SESSION") {
     o.setValue(ConversionTagType::eConversionTagType::WEB_SESSION);
    } 
    else if (s == "EXTERNAL_MEASUREMENT") {
     o.setValue(ConversionTagType::eConversionTagType::EXTERNAL_MEASUREMENT);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " ConversionTagType::eConversionTagType";
     throw std::invalid_argument(ss.str());
    } 

}

ConversionTagType::eConversionTagType ConversionTagType::getValue() const
{
    return m_value;
}
void ConversionTagType::setValue(ConversionTagType::eConversionTagType value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

