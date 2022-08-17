/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "AdsAnalyticsFilterColumn.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

AdsAnalyticsFilterColumn::AdsAnalyticsFilterColumn()
{
    
}

void AdsAnalyticsFilterColumn::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdsAnalyticsFilterColumn::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdsAnalyticsFilterColumn::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdsAnalyticsFilterColumn" : pathPrefix;

    
    if (m_value == AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool AdsAnalyticsFilterColumn::operator==(const AdsAnalyticsFilterColumn& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool AdsAnalyticsFilterColumn::operator!=(const AdsAnalyticsFilterColumn& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdsAnalyticsFilterColumn& o)
{
    j = nlohmann::json();
    
    switch (o.getValue())
    {
        case AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn::SPEND_IN_DOLLAR:
            j = "SPEND_IN_DOLLAR";
            break;
        case AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn::TOTAL_IMPRESSION:
            j = "TOTAL_IMPRESSION";
            break;
    }
}

void from_json(const nlohmann::json& j, AdsAnalyticsFilterColumn& o)
{
    
    auto s = j.get<std::string>();
    if (s == "SPEND_IN_DOLLAR") {
     o.setValue(AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn::SPEND_IN_DOLLAR);
    } 
    else if (s == "TOTAL_IMPRESSION") {
     o.setValue(AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn::TOTAL_IMPRESSION);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn";
     throw std::invalid_argument(ss.str());
    } 

}

AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn AdsAnalyticsFilterColumn::getValue() const
{
    return m_value;
}
void AdsAnalyticsFilterColumn::setValue(AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

