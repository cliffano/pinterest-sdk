/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/CatalogsProductGroupFilters.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsProductGroupFilters::CatalogsProductGroupFilters()
{
    m_Any_ofIsSet = false;
    m_All_ofIsSet = false;
}

CatalogsProductGroupFilters::~CatalogsProductGroupFilters()
{
}

void CatalogsProductGroupFilters::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsProductGroupFilters::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Any_ofIsSet)
    {
        val[utility::conversions::to_string_t(U("any_of"))] = ModelBase::toJson(m_Any_of);
    }
    if(m_All_ofIsSet)
    {
        val[utility::conversions::to_string_t(U("all_of"))] = ModelBase::toJson(m_All_of);
    }

    return val;
}

bool CatalogsProductGroupFilters::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("any_of"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("any_of")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>> refVal_setAnyOf;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAnyOf);
            setAnyOf(refVal_setAnyOf);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("all_of"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("all_of")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>> refVal_setAllOf;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAllOf);
            setAllOf(refVal_setAllOf);
        }
    }
    return ok;
}

void CatalogsProductGroupFilters::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_All_ofIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("all_of")), m_All_of));
    }
}

bool CatalogsProductGroupFilters::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("any_of"))))
    {
        std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>> refVal_setAnyOf;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("any_of"))), refVal_setAnyOf );
        setAnyOf(refVal_setAnyOf);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("all_of"))))
    {
        std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>> refVal_setAllOf;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("all_of"))), refVal_setAllOf );
        setAllOf(refVal_setAllOf);
    }
    return ok;
}

std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>>& CatalogsProductGroupFilters::getAnyOf()
{
    return m_Any_of;
}

void CatalogsProductGroupFilters::setAnyOf(const std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>>& value)
{
    m_Any_of = value;
    m_Any_ofIsSet = true;
}

bool CatalogsProductGroupFilters::anyOfIsSet() const
{
    return m_Any_ofIsSet;
}

void CatalogsProductGroupFilters::unsetAny_of()
{
    m_Any_ofIsSet = false;
}
std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>>& CatalogsProductGroupFilters::getAllOf()
{
    return m_All_of;
}

void CatalogsProductGroupFilters::setAllOf(const std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>>& value)
{
    m_All_of = value;
    m_All_ofIsSet = true;
}

bool CatalogsProductGroupFilters::allOfIsSet() const
{
    return m_All_ofIsSet;
}

void CatalogsProductGroupFilters::unsetAll_of()
{
    m_All_ofIsSet = false;
}
}
}
}
}


