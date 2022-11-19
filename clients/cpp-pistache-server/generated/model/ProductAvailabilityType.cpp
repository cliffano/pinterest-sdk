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


#include "ProductAvailabilityType.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

ProductAvailabilityType::ProductAvailabilityType()
{
    
}

void ProductAvailabilityType::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ProductAvailabilityType::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ProductAvailabilityType::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ProductAvailabilityType" : pathPrefix;

    
    if (m_value == ProductAvailabilityType::eProductAvailabilityType::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool ProductAvailabilityType::operator==(const ProductAvailabilityType& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool ProductAvailabilityType::operator!=(const ProductAvailabilityType& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ProductAvailabilityType& o)
{
    j = nlohmann::json();
    
    switch (o.getValue())
    {
        case ProductAvailabilityType::eProductAvailabilityType::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case ProductAvailabilityType::eProductAvailabilityType::IN_STOCK:
            j = "IN_STOCK";
            break;
        case ProductAvailabilityType::eProductAvailabilityType::OUT_OF_STOCK:
            j = "OUT_OF_STOCK";
            break;
        case ProductAvailabilityType::eProductAvailabilityType::PREORDER:
            j = "PREORDER";
            break;
        case ProductAvailabilityType::eProductAvailabilityType::NULL:
            j = "null";
            break;
    }
}

void from_json(const nlohmann::json& j, ProductAvailabilityType& o)
{
    
    auto s = j.get<std::string>();
    if (s == "IN_STOCK") {
     o.setValue(ProductAvailabilityType::eProductAvailabilityType::IN_STOCK);
    } 
    else if (s == "OUT_OF_STOCK") {
     o.setValue(ProductAvailabilityType::eProductAvailabilityType::OUT_OF_STOCK);
    } 
    else if (s == "PREORDER") {
     o.setValue(ProductAvailabilityType::eProductAvailabilityType::PREORDER);
    } 
    else if (s == "null") {
     o.setValue(ProductAvailabilityType::eProductAvailabilityType::NULL);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " ProductAvailabilityType::eProductAvailabilityType";
     throw std::invalid_argument(ss.str());
    } 

}

ProductAvailabilityType::eProductAvailabilityType ProductAvailabilityType::getValue() const
{
    return m_value;
}
void ProductAvailabilityType::setValue(ProductAvailabilityType::eProductAvailabilityType value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

