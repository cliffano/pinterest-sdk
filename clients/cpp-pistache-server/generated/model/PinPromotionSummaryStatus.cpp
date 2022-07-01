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


#include "PinPromotionSummaryStatus.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

PinPromotionSummaryStatus::PinPromotionSummaryStatus()
{
    
}

void PinPromotionSummaryStatus::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool PinPromotionSummaryStatus::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool PinPromotionSummaryStatus::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "PinPromotionSummaryStatus" : pathPrefix;

    
    if (m_value == PinPromotionSummaryStatus::ePinPromotionSummaryStatus::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool PinPromotionSummaryStatus::operator==(const PinPromotionSummaryStatus& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool PinPromotionSummaryStatus::operator!=(const PinPromotionSummaryStatus& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PinPromotionSummaryStatus& o)
{
    j = nlohmann::json();
    
    switch (o.getValue())
    {
        case PinPromotionSummaryStatus::ePinPromotionSummaryStatus::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case PinPromotionSummaryStatus::ePinPromotionSummaryStatus::APPROVED:
            j = "APPROVED";
            break;
        case PinPromotionSummaryStatus::ePinPromotionSummaryStatus::PAUSED:
            j = "PAUSED";
            break;
        case PinPromotionSummaryStatus::ePinPromotionSummaryStatus::PENDING:
            j = "PENDING";
            break;
        case PinPromotionSummaryStatus::ePinPromotionSummaryStatus::REJECTED:
            j = "REJECTED";
            break;
        case PinPromotionSummaryStatus::ePinPromotionSummaryStatus::ADVERTISER_DISABLED:
            j = "ADVERTISER_DISABLED";
            break;
        case PinPromotionSummaryStatus::ePinPromotionSummaryStatus::ARCHIVED:
            j = "ARCHIVED";
            break;
    }
}

void from_json(const nlohmann::json& j, PinPromotionSummaryStatus& o)
{
    
    auto s = j.get<std::string>();
    if (s == "APPROVED") {
     o.setValue(PinPromotionSummaryStatus::ePinPromotionSummaryStatus::APPROVED);
    } 
    else if (s == "PAUSED") {
     o.setValue(PinPromotionSummaryStatus::ePinPromotionSummaryStatus::PAUSED);
    } 
    else if (s == "PENDING") {
     o.setValue(PinPromotionSummaryStatus::ePinPromotionSummaryStatus::PENDING);
    } 
    else if (s == "REJECTED") {
     o.setValue(PinPromotionSummaryStatus::ePinPromotionSummaryStatus::REJECTED);
    } 
    else if (s == "ADVERTISER_DISABLED") {
     o.setValue(PinPromotionSummaryStatus::ePinPromotionSummaryStatus::ADVERTISER_DISABLED);
    } 
    else if (s == "ARCHIVED") {
     o.setValue(PinPromotionSummaryStatus::ePinPromotionSummaryStatus::ARCHIVED);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " PinPromotionSummaryStatus::ePinPromotionSummaryStatus";
     throw std::invalid_argument(ss.str());
    } 

}

PinPromotionSummaryStatus::ePinPromotionSummaryStatus PinPromotionSummaryStatus::getValue() const
{
    return m_value;
}
void PinPromotionSummaryStatus::setValue(PinPromotionSummaryStatus::ePinPromotionSummaryStatus value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

