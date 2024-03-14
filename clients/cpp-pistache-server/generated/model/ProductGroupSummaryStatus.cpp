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


#include "ProductGroupSummaryStatus.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

ProductGroupSummaryStatus::ProductGroupSummaryStatus()
{
    
}

void ProductGroupSummaryStatus::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ProductGroupSummaryStatus::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ProductGroupSummaryStatus::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ProductGroupSummaryStatus" : pathPrefix;

    
    if (m_value == ProductGroupSummaryStatus::eProductGroupSummaryStatus::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool ProductGroupSummaryStatus::operator==(const ProductGroupSummaryStatus& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool ProductGroupSummaryStatus::operator!=(const ProductGroupSummaryStatus& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ProductGroupSummaryStatus& o)
{
    j = nlohmann::json::object();
    
    switch (o.getValue())
    {
        case ProductGroupSummaryStatus::eProductGroupSummaryStatus::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case ProductGroupSummaryStatus::eProductGroupSummaryStatus::RUNNING:
            j = "RUNNING";
            break;
        case ProductGroupSummaryStatus::eProductGroupSummaryStatus::PAUSED:
            j = "PAUSED";
            break;
        case ProductGroupSummaryStatus::eProductGroupSummaryStatus::EXCLUDED:
            j = "EXCLUDED";
            break;
        case ProductGroupSummaryStatus::eProductGroupSummaryStatus::ARCHIVED:
            j = "ARCHIVED";
            break;
    }
}

void from_json(const nlohmann::json& j, ProductGroupSummaryStatus& o)
{
    
    auto s = j.get<std::string>();
    if (s == "RUNNING") {
     o.setValue(ProductGroupSummaryStatus::eProductGroupSummaryStatus::RUNNING);
    } 
    else if (s == "PAUSED") {
     o.setValue(ProductGroupSummaryStatus::eProductGroupSummaryStatus::PAUSED);
    } 
    else if (s == "EXCLUDED") {
     o.setValue(ProductGroupSummaryStatus::eProductGroupSummaryStatus::EXCLUDED);
    } 
    else if (s == "ARCHIVED") {
     o.setValue(ProductGroupSummaryStatus::eProductGroupSummaryStatus::ARCHIVED);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " ProductGroupSummaryStatus::eProductGroupSummaryStatus";
     throw std::invalid_argument(ss.str());
    } 

}

ProductGroupSummaryStatus::eProductGroupSummaryStatus ProductGroupSummaryStatus::getValue() const
{
    return m_value;
}
void ProductGroupSummaryStatus::setValue(ProductGroupSummaryStatus::eProductGroupSummaryStatus value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

