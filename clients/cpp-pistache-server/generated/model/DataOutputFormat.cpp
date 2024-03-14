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


#include "DataOutputFormat.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

DataOutputFormat::DataOutputFormat()
{
    
}

void DataOutputFormat::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool DataOutputFormat::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool DataOutputFormat::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "DataOutputFormat" : pathPrefix;

    
    if (m_value == DataOutputFormat::eDataOutputFormat::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool DataOutputFormat::operator==(const DataOutputFormat& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool DataOutputFormat::operator!=(const DataOutputFormat& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const DataOutputFormat& o)
{
    j = nlohmann::json::object();
    
    switch (o.getValue())
    {
        case DataOutputFormat::eDataOutputFormat::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case DataOutputFormat::eDataOutputFormat::JSON:
            j = "JSON";
            break;
        case DataOutputFormat::eDataOutputFormat::CSV:
            j = "CSV";
            break;
    }
}

void from_json(const nlohmann::json& j, DataOutputFormat& o)
{
    
    auto s = j.get<std::string>();
    if (s == "JSON") {
     o.setValue(DataOutputFormat::eDataOutputFormat::JSON);
    } 
    else if (s == "CSV") {
     o.setValue(DataOutputFormat::eDataOutputFormat::CSV);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " DataOutputFormat::eDataOutputFormat";
     throw std::invalid_argument(ss.str());
    } 

}

DataOutputFormat::eDataOutputFormat DataOutputFormat::getValue() const
{
    return m_value;
}
void DataOutputFormat::setValue(DataOutputFormat::eDataOutputFormat value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

