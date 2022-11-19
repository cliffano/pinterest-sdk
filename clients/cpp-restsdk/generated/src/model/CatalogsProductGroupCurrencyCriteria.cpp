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



#include "CppRestOpenAPIClient/model/CatalogsProductGroupCurrencyCriteria.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsProductGroupCurrencyCriteria::CatalogsProductGroupCurrencyCriteria()
{
    m_ValuesIsSet = false;
    m_Negated = NegatedEnum.FALSE;
    m_NegatedIsSet = false;
}

CatalogsProductGroupCurrencyCriteria::~CatalogsProductGroupCurrencyCriteria()
{
}

void CatalogsProductGroupCurrencyCriteria::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsProductGroupCurrencyCriteria::toJson() const
{

    web::json::value val = web::json::value::object();
    
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

bool CatalogsProductGroupCurrencyCriteria::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("values"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("values")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<NonNullableCatalogsCurrency> refVal_setValues;
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

void CatalogsProductGroupCurrencyCriteria::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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

bool CatalogsProductGroupCurrencyCriteria::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("values"))))
    {
        std::shared_ptr<NonNullableCatalogsCurrency> refVal_setValues;
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

std::shared_ptr<NonNullableCatalogsCurrency> CatalogsProductGroupCurrencyCriteria::getValues() const
{
    return m_Values;
}

void CatalogsProductGroupCurrencyCriteria::setValues(const std::shared_ptr<NonNullableCatalogsCurrency>& value)
{
    m_Values = value;
    m_ValuesIsSet = true;
}

bool CatalogsProductGroupCurrencyCriteria::valuesIsSet() const
{
    return m_ValuesIsSet;
}

void CatalogsProductGroupCurrencyCriteria::unsetValues()
{
    m_ValuesIsSet = false;
}
bool CatalogsProductGroupCurrencyCriteria::isNegated() const
{
    return m_Negated;
}

void CatalogsProductGroupCurrencyCriteria::setNegated(bool value)
{
    m_Negated = value;
    m_NegatedIsSet = true;
}

bool CatalogsProductGroupCurrencyCriteria::negatedIsSet() const
{
    return m_NegatedIsSet;
}

void CatalogsProductGroupCurrencyCriteria::unsetNegated()
{
    m_NegatedIsSet = false;
}
}
}
}
}


