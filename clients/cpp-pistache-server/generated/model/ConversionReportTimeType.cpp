/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "ConversionReportTimeType.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

ConversionReportTimeType::ConversionReportTimeType()
{
    
}

void ConversionReportTimeType::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ConversionReportTimeType::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ConversionReportTimeType::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ConversionReportTimeType" : pathPrefix;

    
    if (m_value == ConversionReportTimeType::eConversionReportTimeType::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool ConversionReportTimeType::operator==(const ConversionReportTimeType& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool ConversionReportTimeType::operator!=(const ConversionReportTimeType& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ConversionReportTimeType& o)
{
    j = nlohmann::json();
    
    switch (o.getValue())
    {
        case ConversionReportTimeType::eConversionReportTimeType::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case ConversionReportTimeType::eConversionReportTimeType::AD_ACTION:
            j = "TIME_OF_AD_ACTION";
            break;
        case ConversionReportTimeType::eConversionReportTimeType::CONVERSION:
            j = "TIME_OF_CONVERSION";
            break;
    }
}

void from_json(const nlohmann::json& j, ConversionReportTimeType& o)
{
    
    auto s = j.get<std::string>();
    if (s == "TIME_OF_AD_ACTION") {
     o.setValue(ConversionReportTimeType::eConversionReportTimeType::AD_ACTION);
    } 
    else if (s == "TIME_OF_CONVERSION") {
     o.setValue(ConversionReportTimeType::eConversionReportTimeType::CONVERSION);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " ConversionReportTimeType::eConversionReportTimeType";
     throw std::invalid_argument(ss.str());
    } 

}

ConversionReportTimeType::eConversionReportTimeType ConversionReportTimeType::getValue() const
{
    return m_value;
}
void ConversionReportTimeType::setValue(ConversionReportTimeType::eConversionReportTimeType value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

