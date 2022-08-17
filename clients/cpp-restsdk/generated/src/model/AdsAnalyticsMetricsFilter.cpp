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



#include "CppRestOpenAPIClient/model/AdsAnalyticsMetricsFilter.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



AdsAnalyticsMetricsFilter::AdsAnalyticsMetricsFilter()
{
    m_FieldIsSet = false;
    m_r_operatorIsSet = false;
    m_ValuesIsSet = false;
}

AdsAnalyticsMetricsFilter::~AdsAnalyticsMetricsFilter()
{
}

void AdsAnalyticsMetricsFilter::validate()
{
    // TODO: implement validation
}

web::json::value AdsAnalyticsMetricsFilter::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FieldIsSet)
    {
        val[utility::conversions::to_string_t(U("field"))] = ModelBase::toJson(m_Field);
    }
    if(m_r_operatorIsSet)
    {
        val[utility::conversions::to_string_t(U("operator"))] = ModelBase::toJson(m_r_operator);
    }
    if(m_ValuesIsSet)
    {
        val[utility::conversions::to_string_t(U("values"))] = ModelBase::toJson(m_Values);
    }

    return val;
}

bool AdsAnalyticsMetricsFilter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("field"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("field")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<AdsAnalyticsFilterColumn> refVal_setField;
            ok &= ModelBase::fromJson(fieldValue, refVal_setField);
            setField(refVal_setField);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("operator"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("operator")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<AdsAnalyticsFilterOperator> refVal_setROperator;
            ok &= ModelBase::fromJson(fieldValue, refVal_setROperator);
            setROperator(refVal_setROperator);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("values"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("values")));
        if(!fieldValue.is_null())
        {
            std::vector<double> refVal_setValues;
            ok &= ModelBase::fromJson(fieldValue, refVal_setValues);
            setValues(refVal_setValues);
        }
    }
    return ok;
}

void AdsAnalyticsMetricsFilter::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_FieldIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("field")), m_Field));
    }
    if(m_r_operatorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("operator")), m_r_operator));
    }
    if(m_ValuesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("values")), m_Values));
    }
}

bool AdsAnalyticsMetricsFilter::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("field"))))
    {
        std::shared_ptr<AdsAnalyticsFilterColumn> refVal_setField;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("field"))), refVal_setField );
        setField(refVal_setField);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("operator"))))
    {
        std::shared_ptr<AdsAnalyticsFilterOperator> refVal_setROperator;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("operator"))), refVal_setROperator );
        setROperator(refVal_setROperator);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("values"))))
    {
        std::vector<double> refVal_setValues;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("values"))), refVal_setValues );
        setValues(refVal_setValues);
    }
    return ok;
}

std::shared_ptr<AdsAnalyticsFilterColumn> AdsAnalyticsMetricsFilter::getField() const
{
    return m_Field;
}

void AdsAnalyticsMetricsFilter::setField(const std::shared_ptr<AdsAnalyticsFilterColumn>& value)
{
    m_Field = value;
    m_FieldIsSet = true;
}

bool AdsAnalyticsMetricsFilter::fieldIsSet() const
{
    return m_FieldIsSet;
}

void AdsAnalyticsMetricsFilter::unsetField()
{
    m_FieldIsSet = false;
}
std::shared_ptr<AdsAnalyticsFilterOperator> AdsAnalyticsMetricsFilter::getROperator() const
{
    return m_r_operator;
}

void AdsAnalyticsMetricsFilter::setROperator(const std::shared_ptr<AdsAnalyticsFilterOperator>& value)
{
    m_r_operator = value;
    m_r_operatorIsSet = true;
}

bool AdsAnalyticsMetricsFilter::rOperatorIsSet() const
{
    return m_r_operatorIsSet;
}

void AdsAnalyticsMetricsFilter::unsetr_operator()
{
    m_r_operatorIsSet = false;
}
std::vector<double>& AdsAnalyticsMetricsFilter::getValues()
{
    return m_Values;
}

void AdsAnalyticsMetricsFilter::setValues(std::vector<double> value)
{
    m_Values = value;
    m_ValuesIsSet = true;
}

bool AdsAnalyticsMetricsFilter::valuesIsSet() const
{
    return m_ValuesIsSet;
}

void AdsAnalyticsMetricsFilter::unsetValues()
{
    m_ValuesIsSet = false;
}
}
}
}
}


