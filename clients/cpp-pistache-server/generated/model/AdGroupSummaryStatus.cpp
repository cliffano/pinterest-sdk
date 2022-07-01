/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "AdGroupSummaryStatus.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

AdGroupSummaryStatus::AdGroupSummaryStatus()
{
    
}

void AdGroupSummaryStatus::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdGroupSummaryStatus::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdGroupSummaryStatus::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdGroupSummaryStatus" : pathPrefix;

    
    if (m_value == AdGroupSummaryStatus::eAdGroupSummaryStatus::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool AdGroupSummaryStatus::operator==(const AdGroupSummaryStatus& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool AdGroupSummaryStatus::operator!=(const AdGroupSummaryStatus& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdGroupSummaryStatus& o)
{
    j = nlohmann::json();
    
    switch (o.getValue())
    {
        case AdGroupSummaryStatus::eAdGroupSummaryStatus::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case AdGroupSummaryStatus::eAdGroupSummaryStatus::RUNNING:
            j = "RUNNING";
            break;
        case AdGroupSummaryStatus::eAdGroupSummaryStatus::PAUSED:
            j = "PAUSED";
            break;
        case AdGroupSummaryStatus::eAdGroupSummaryStatus::NOT_STARTED:
            j = "NOT_STARTED";
            break;
        case AdGroupSummaryStatus::eAdGroupSummaryStatus::COMPLETED:
            j = "COMPLETED";
            break;
        case AdGroupSummaryStatus::eAdGroupSummaryStatus::ADVERTISER_DISABLED:
            j = "ADVERTISER_DISABLED";
            break;
        case AdGroupSummaryStatus::eAdGroupSummaryStatus::ARCHIVED:
            j = "ARCHIVED";
            break;
    }
}

void from_json(const nlohmann::json& j, AdGroupSummaryStatus& o)
{
    
    auto s = j.get<std::string>();
    if (s == "RUNNING") {
     o.setValue(AdGroupSummaryStatus::eAdGroupSummaryStatus::RUNNING);
    } 
    else if (s == "PAUSED") {
     o.setValue(AdGroupSummaryStatus::eAdGroupSummaryStatus::PAUSED);
    } 
    else if (s == "NOT_STARTED") {
     o.setValue(AdGroupSummaryStatus::eAdGroupSummaryStatus::NOT_STARTED);
    } 
    else if (s == "COMPLETED") {
     o.setValue(AdGroupSummaryStatus::eAdGroupSummaryStatus::COMPLETED);
    } 
    else if (s == "ADVERTISER_DISABLED") {
     o.setValue(AdGroupSummaryStatus::eAdGroupSummaryStatus::ADVERTISER_DISABLED);
    } 
    else if (s == "ARCHIVED") {
     o.setValue(AdGroupSummaryStatus::eAdGroupSummaryStatus::ARCHIVED);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " AdGroupSummaryStatus::eAdGroupSummaryStatus";
     throw std::invalid_argument(ss.str());
    } 

}

AdGroupSummaryStatus::eAdGroupSummaryStatus AdGroupSummaryStatus::getValue() const
{
    return m_value;
}
void AdGroupSummaryStatus::setValue(AdGroupSummaryStatus::eAdGroupSummaryStatus value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

