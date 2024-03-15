/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/CustomLabel1Filter.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CustomLabel1Filter::CustomLabel1Filter()
{
    m_CUSTOM_LABEL_1IsSet = false;
}

CustomLabel1Filter::~CustomLabel1Filter()
{
}

void CustomLabel1Filter::validate()
{
    // TODO: implement validation
}

web::json::value CustomLabel1Filter::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CUSTOM_LABEL_1IsSet)
    {
        val[utility::conversions::to_string_t(U("CUSTOM_LABEL_1"))] = ModelBase::toJson(m_CUSTOM_LABEL_1);
    }

    return val;
}

bool CustomLabel1Filter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("CUSTOM_LABEL_1"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("CUSTOM_LABEL_1")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> refVal_setCUSTOMLABEL1;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCUSTOMLABEL1);
            setCUSTOMLABEL1(refVal_setCUSTOMLABEL1);
        }
    }
    return ok;
}

void CustomLabel1Filter::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_CUSTOM_LABEL_1IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("CUSTOM_LABEL_1")), m_CUSTOM_LABEL_1));
    }
}

bool CustomLabel1Filter::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("CUSTOM_LABEL_1"))))
    {
        std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> refVal_setCUSTOMLABEL1;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("CUSTOM_LABEL_1"))), refVal_setCUSTOMLABEL1 );
        setCUSTOMLABEL1(refVal_setCUSTOMLABEL1);
    }
    return ok;
}

std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> CustomLabel1Filter::getCUSTOMLABEL1() const
{
    return m_CUSTOM_LABEL_1;
}

void CustomLabel1Filter::setCUSTOMLABEL1(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value)
{
    m_CUSTOM_LABEL_1 = value;
    m_CUSTOM_LABEL_1IsSet = true;
}

bool CustomLabel1Filter::cUSTOMLABEL1IsSet() const
{
    return m_CUSTOM_LABEL_1IsSet;
}

void CustomLabel1Filter::unsetCUSTOM_LABEL_1()
{
    m_CUSTOM_LABEL_1IsSet = false;
}
}
}
}
}


