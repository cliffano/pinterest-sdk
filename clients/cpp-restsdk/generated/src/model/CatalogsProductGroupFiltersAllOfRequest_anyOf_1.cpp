/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/CatalogsProductGroupFiltersAllOfRequest_anyOf_1.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsProductGroupFiltersAllOfRequest_anyOf_1::CatalogsProductGroupFiltersAllOfRequest_anyOf_1()
{
    m_All_ofIsSet = false;
}

CatalogsProductGroupFiltersAllOfRequest_anyOf_1::~CatalogsProductGroupFiltersAllOfRequest_anyOf_1()
{
}

void CatalogsProductGroupFiltersAllOfRequest_anyOf_1::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsProductGroupFiltersAllOfRequest_anyOf_1::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_All_ofIsSet)
    {
        val[utility::conversions::to_string_t(U("all_of"))] = ModelBase::toJson(m_All_of);
    }

    return val;
}

bool CatalogsProductGroupFiltersAllOfRequest_anyOf_1::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

void CatalogsProductGroupFiltersAllOfRequest_anyOf_1::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_All_ofIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("all_of")), m_All_of));
    }
}

bool CatalogsProductGroupFiltersAllOfRequest_anyOf_1::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("all_of"))))
    {
        std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>> refVal_setAllOf;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("all_of"))), refVal_setAllOf );
        setAllOf(refVal_setAllOf);
    }
    return ok;
}

std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>>& CatalogsProductGroupFiltersAllOfRequest_anyOf_1::getAllOf()
{
    return m_All_of;
}

void CatalogsProductGroupFiltersAllOfRequest_anyOf_1::setAllOf(const std::vector<std::shared_ptr<CatalogsProductGroupFilterKeys>>& value)
{
    m_All_of = value;
    m_All_ofIsSet = true;
}

bool CatalogsProductGroupFiltersAllOfRequest_anyOf_1::allOfIsSet() const
{
    return m_All_ofIsSet;
}

void CatalogsProductGroupFiltersAllOfRequest_anyOf_1::unsetAll_of()
{
    m_All_ofIsSet = false;
}
}
}
}
}


