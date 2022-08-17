/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/TargetingTypeFilter.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



TargetingTypeFilter::TargetingTypeFilter()
{
    m_Targeting_typesIsSet = false;
}

TargetingTypeFilter::~TargetingTypeFilter()
{
}

void TargetingTypeFilter::validate()
{
    // TODO: implement validation
}

web::json::value TargetingTypeFilter::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Targeting_typesIsSet)
    {
        val[utility::conversions::to_string_t(U("targeting_types"))] = ModelBase::toJson(m_Targeting_types);
    }

    return val;
}

bool TargetingTypeFilter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("targeting_types"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("targeting_types")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<AdsAnalyticsTargetingType>> refVal_setTargetingTypes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTargetingTypes);
            setTargetingTypes(refVal_setTargetingTypes);
        }
    }
    return ok;
}

void TargetingTypeFilter::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Targeting_typesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("targeting_types")), m_Targeting_types));
    }
}

bool TargetingTypeFilter::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("targeting_types"))))
    {
        std::vector<std::shared_ptr<AdsAnalyticsTargetingType>> refVal_setTargetingTypes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("targeting_types"))), refVal_setTargetingTypes );
        setTargetingTypes(refVal_setTargetingTypes);
    }
    return ok;
}

std::vector<std::shared_ptr<AdsAnalyticsTargetingType>>& TargetingTypeFilter::getTargetingTypes()
{
    return m_Targeting_types;
}

void TargetingTypeFilter::setTargetingTypes(const std::vector<std::shared_ptr<AdsAnalyticsTargetingType>>& value)
{
    m_Targeting_types = value;
    m_Targeting_typesIsSet = true;
}

bool TargetingTypeFilter::targetingTypesIsSet() const
{
    return m_Targeting_typesIsSet;
}

void TargetingTypeFilter::unsetTargeting_types()
{
    m_Targeting_typesIsSet = false;
}
}
}
}
}


