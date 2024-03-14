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


#include "CatalogsFormat.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

CatalogsFormat::CatalogsFormat()
{
    
}

void CatalogsFormat::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsFormat::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsFormat::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsFormat" : pathPrefix;

    
    if (m_value == CatalogsFormat::eCatalogsFormat::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool CatalogsFormat::operator==(const CatalogsFormat& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool CatalogsFormat::operator!=(const CatalogsFormat& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsFormat& o)
{
    j = nlohmann::json::object();
    
    switch (o.getValue())
    {
        case CatalogsFormat::eCatalogsFormat::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case CatalogsFormat::eCatalogsFormat::TSV:
            j = "TSV";
            break;
        case CatalogsFormat::eCatalogsFormat::CSV:
            j = "CSV";
            break;
        case CatalogsFormat::eCatalogsFormat::XML:
            j = "XML";
            break;
    }
}

void from_json(const nlohmann::json& j, CatalogsFormat& o)
{
    
    auto s = j.get<std::string>();
    if (s == "TSV") {
     o.setValue(CatalogsFormat::eCatalogsFormat::TSV);
    } 
    else if (s == "CSV") {
     o.setValue(CatalogsFormat::eCatalogsFormat::CSV);
    } 
    else if (s == "XML") {
     o.setValue(CatalogsFormat::eCatalogsFormat::XML);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " CatalogsFormat::eCatalogsFormat";
     throw std::invalid_argument(ss.str());
    } 

}

CatalogsFormat::eCatalogsFormat CatalogsFormat::getValue() const
{
    return m_value;
}
void CatalogsFormat::setValue(CatalogsFormat::eCatalogsFormat value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model
