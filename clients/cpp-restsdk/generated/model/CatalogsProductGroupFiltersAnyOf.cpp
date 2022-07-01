/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CatalogsProductGroupFiltersAnyOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




CatalogsProductGroupFiltersAnyOf::CatalogsProductGroupFiltersAnyOf()
{
    m_Any_ofIsSet = false;
}

CatalogsProductGroupFiltersAnyOf::~CatalogsProductGroupFiltersAnyOf()
{
}

void CatalogsProductGroupFiltersAnyOf::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsProductGroupFiltersAnyOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Any_ofIsSet)
    {
        val[utility::conversions::to_string_t(U("any_of"))] = ModelBase::toJson(m_Any_of);
    }

    return val;
}

bool CatalogsProductGroupFiltersAnyOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("any_of"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("any_of")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>> refVal_any_of;
            ok &= ModelBase::fromJson(fieldValue, refVal_any_of);
            setAnyOf(refVal_any_of);
        }
    }
    return ok;
}

void CatalogsProductGroupFiltersAnyOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Any_ofIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("any_of")), m_Any_of));
    }
}

bool CatalogsProductGroupFiltersAnyOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("any_of"))))
    {
        std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>> refVal_any_of;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("any_of"))), refVal_any_of );
        setAnyOf(refVal_any_of);
    }
    return ok;
}

std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>>& CatalogsProductGroupFiltersAnyOf::getAnyOf()
{
    return m_Any_of;
}

void CatalogsProductGroupFiltersAnyOf::setAnyOf(const std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>>& value)
{
    m_Any_of = value;
    m_Any_ofIsSet = true;
}

bool CatalogsProductGroupFiltersAnyOf::anyOfIsSet() const
{
    return m_Any_ofIsSet;
}

void CatalogsProductGroupFiltersAnyOf::unsetAny_of()
{
    m_Any_ofIsSet = false;
}
}
}
}
}


