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


#include "CreativeType.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

CreativeType::CreativeType()
{
    
}

void CreativeType::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CreativeType::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CreativeType::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CreativeType" : pathPrefix;

    
    if (m_value == CreativeType::eCreativeType::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool CreativeType::operator==(const CreativeType& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool CreativeType::operator!=(const CreativeType& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CreativeType& o)
{
    j = nlohmann::json::object();
    
    switch (o.getValue())
    {
        case CreativeType::eCreativeType::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case CreativeType::eCreativeType::REGULAR:
            j = "REGULAR";
            break;
        case CreativeType::eCreativeType::VIDEO:
            j = "VIDEO";
            break;
        case CreativeType::eCreativeType::SHOPPING:
            j = "SHOPPING";
            break;
        case CreativeType::eCreativeType::CAROUSEL:
            j = "CAROUSEL";
            break;
        case CreativeType::eCreativeType::MAX_VIDEO:
            j = "MAX_VIDEO";
            break;
        case CreativeType::eCreativeType::SHOP_THE_PIN:
            j = "SHOP_THE_PIN";
            break;
        case CreativeType::eCreativeType::IDEA:
            j = "IDEA";
            break;
    }
}

void from_json(const nlohmann::json& j, CreativeType& o)
{
    
    auto s = j.get<std::string>();
    if (s == "REGULAR") {
     o.setValue(CreativeType::eCreativeType::REGULAR);
    } 
    else if (s == "VIDEO") {
     o.setValue(CreativeType::eCreativeType::VIDEO);
    } 
    else if (s == "SHOPPING") {
     o.setValue(CreativeType::eCreativeType::SHOPPING);
    } 
    else if (s == "CAROUSEL") {
     o.setValue(CreativeType::eCreativeType::CAROUSEL);
    } 
    else if (s == "MAX_VIDEO") {
     o.setValue(CreativeType::eCreativeType::MAX_VIDEO);
    } 
    else if (s == "SHOP_THE_PIN") {
     o.setValue(CreativeType::eCreativeType::SHOP_THE_PIN);
    } 
    else if (s == "IDEA") {
     o.setValue(CreativeType::eCreativeType::IDEA);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " CreativeType::eCreativeType";
     throw std::invalid_argument(ss.str());
    } 

}

CreativeType::eCreativeType CreativeType::getValue() const
{
    return m_value;
}
void CreativeType::setValue(CreativeType::eCreativeType value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

