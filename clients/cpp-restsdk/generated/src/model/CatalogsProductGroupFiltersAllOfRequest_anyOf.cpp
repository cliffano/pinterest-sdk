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



#include "CppRestOpenAPIClient/model/CatalogsProductGroupFiltersAllOfRequest_anyOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsProductGroupFiltersAllOfRequest_anyOf::CatalogsProductGroupFiltersAllOfRequest_anyOf()
{
    m_Any_ofIsSet = false;
}

CatalogsProductGroupFiltersAllOfRequest_anyOf::~CatalogsProductGroupFiltersAllOfRequest_anyOf()
{
}

void CatalogsProductGroupFiltersAllOfRequest_anyOf::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsProductGroupFiltersAllOfRequest_anyOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Any_ofIsSet)
    {
        val[utility::conversions::to_string_t(U("any_of"))] = ModelBase::toJson(m_Any_of);
    }

    return val;
}

bool CatalogsProductGroupFiltersAllOfRequest_anyOf::fromJson(const web::json::value& val)
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
    return ok;
}

void CatalogsProductGroupFiltersAllOfRequest_anyOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

bool CatalogsProductGroupFiltersAllOfRequest_anyOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    return ok;
}

std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>>& CatalogsProductGroupFiltersAllOfRequest_anyOf::getAnyOf()
{
    return m_Any_of;
}

void CatalogsProductGroupFiltersAllOfRequest_anyOf::setAnyOf(const std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>>& value)
{
    m_Any_of = value;
    m_Any_ofIsSet = true;
}

bool CatalogsProductGroupFiltersAllOfRequest_anyOf::anyOfIsSet() const
{
    return m_Any_ofIsSet;
}

void CatalogsProductGroupFiltersAllOfRequest_anyOf::unsetAny_of()
{
    m_Any_ofIsSet = false;
}
}
}
}
}

