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


#include "NonNullableProductAvailabilityType.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

NonNullableProductAvailabilityType::NonNullableProductAvailabilityType()
{
    
}

void NonNullableProductAvailabilityType::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool NonNullableProductAvailabilityType::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool NonNullableProductAvailabilityType::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "NonNullableProductAvailabilityType" : pathPrefix;

    
    if (m_value == NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool NonNullableProductAvailabilityType::operator==(const NonNullableProductAvailabilityType& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool NonNullableProductAvailabilityType::operator!=(const NonNullableProductAvailabilityType& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NonNullableProductAvailabilityType& o)
{
    j = nlohmann::json::object();
    
    switch (o.getValue())
    {
        case NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType::IN_STOCK:
            j = "IN_STOCK";
            break;
        case NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType::OUT_OF_STOCK:
            j = "OUT_OF_STOCK";
            break;
        case NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType::PREORDER:
            j = "PREORDER";
            break;
    }
}

void from_json(const nlohmann::json& j, NonNullableProductAvailabilityType& o)
{
    
    auto s = j.get<std::string>();
    if (s == "IN_STOCK") {
     o.setValue(NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType::IN_STOCK);
    } 
    else if (s == "OUT_OF_STOCK") {
     o.setValue(NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType::OUT_OF_STOCK);
    } 
    else if (s == "PREORDER") {
     o.setValue(NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType::PREORDER);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType";
     throw std::invalid_argument(ss.str());
    } 

}

NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType NonNullableProductAvailabilityType::getValue() const
{
    return m_value;
}
void NonNullableProductAvailabilityType::setValue(NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

