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



#include "CppRestOpenAPIClient/model/CatalogsProductGroupPricingCriteria.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsProductGroupPricingCriteria::CatalogsProductGroupPricingCriteria()
{
    m_Inclusion = false;
    m_InclusionIsSet = false;
    m_Values = 0.0;
    m_ValuesIsSet = false;
    m_Negated = false;
    m_NegatedIsSet = false;
}

CatalogsProductGroupPricingCriteria::~CatalogsProductGroupPricingCriteria()
{
}

void CatalogsProductGroupPricingCriteria::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsProductGroupPricingCriteria::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_InclusionIsSet)
    {
        val[utility::conversions::to_string_t(U("inclusion"))] = ModelBase::toJson(m_Inclusion);
    }
    if(m_ValuesIsSet)
    {
        val[utility::conversions::to_string_t(U("values"))] = ModelBase::toJson(m_Values);
    }
    if(m_NegatedIsSet)
    {
        val[utility::conversions::to_string_t(U("negated"))] = ModelBase::toJson(m_Negated);
    }

    return val;
}

bool CatalogsProductGroupPricingCriteria::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("inclusion"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("inclusion")));
        if(!fieldValue.is_null())
        {
            bool refVal_setInclusion;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInclusion);
            setInclusion(refVal_setInclusion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("values"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("values")));
        if(!fieldValue.is_null())
        {
            double refVal_setValues;
            ok &= ModelBase::fromJson(fieldValue, refVal_setValues);
            setValues(refVal_setValues);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("negated"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("negated")));
        if(!fieldValue.is_null())
        {
            bool refVal_setNegated;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNegated);
            setNegated(refVal_setNegated);
        }
    }
    return ok;
}

void CatalogsProductGroupPricingCriteria::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_InclusionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inclusion")), m_Inclusion));
    }
    if(m_ValuesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("values")), m_Values));
    }
    if(m_NegatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("negated")), m_Negated));
    }
}

bool CatalogsProductGroupPricingCriteria::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("inclusion"))))
    {
        bool refVal_setInclusion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inclusion"))), refVal_setInclusion );
        setInclusion(refVal_setInclusion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("values"))))
    {
        double refVal_setValues;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("values"))), refVal_setValues );
        setValues(refVal_setValues);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("negated"))))
    {
        bool refVal_setNegated;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("negated"))), refVal_setNegated );
        setNegated(refVal_setNegated);
    }
    return ok;
}

bool CatalogsProductGroupPricingCriteria::isInclusion() const
{
    return m_Inclusion;
}

void CatalogsProductGroupPricingCriteria::setInclusion(bool value)
{
    m_Inclusion = value;
    m_InclusionIsSet = true;
}

bool CatalogsProductGroupPricingCriteria::inclusionIsSet() const
{
    return m_InclusionIsSet;
}

void CatalogsProductGroupPricingCriteria::unsetInclusion()
{
    m_InclusionIsSet = false;
}
double CatalogsProductGroupPricingCriteria::getValues() const
{
    return m_Values;
}

void CatalogsProductGroupPricingCriteria::setValues(double value)
{
    m_Values = value;
    m_ValuesIsSet = true;
}

bool CatalogsProductGroupPricingCriteria::valuesIsSet() const
{
    return m_ValuesIsSet;
}

void CatalogsProductGroupPricingCriteria::unsetValues()
{
    m_ValuesIsSet = false;
}
bool CatalogsProductGroupPricingCriteria::isNegated() const
{
    return m_Negated;
}

void CatalogsProductGroupPricingCriteria::setNegated(bool value)
{
    m_Negated = value;
    m_NegatedIsSet = true;
}

bool CatalogsProductGroupPricingCriteria::negatedIsSet() const
{
    return m_NegatedIsSet;
}

void CatalogsProductGroupPricingCriteria::unsetNegated()
{
    m_NegatedIsSet = false;
}
}
}
}
}


