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



#include "CppRestOpenAPIClient/model/AdArrayResponseElement.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



AdArrayResponseElement::AdArrayResponseElement()
{
    m_DataIsSet = false;
    m_ExceptionsIsSet = false;
}

AdArrayResponseElement::~AdArrayResponseElement()
{
}

void AdArrayResponseElement::validate()
{
    // TODO: implement validation
}

web::json::value AdArrayResponseElement::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t(U("data"))] = ModelBase::toJson(m_Data);
    }
    if(m_ExceptionsIsSet)
    {
        val[utility::conversions::to_string_t(U("exceptions"))] = ModelBase::toJson(m_Exceptions);
    }

    return val;
}

bool AdArrayResponseElement::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("data"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("data")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<AdResponse> refVal_setData;
            ok &= ModelBase::fromJson(fieldValue, refVal_setData);
            setData(refVal_setData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("exceptions"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("exceptions")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Exception> refVal_setExceptions;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExceptions);
            setExceptions(refVal_setExceptions);
        }
    }
    return ok;
}

void AdArrayResponseElement::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("data")), m_Data));
    }
    if(m_ExceptionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("exceptions")), m_Exceptions));
    }
}

bool AdArrayResponseElement::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("data"))))
    {
        std::shared_ptr<AdResponse> refVal_setData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("data"))), refVal_setData );
        setData(refVal_setData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("exceptions"))))
    {
        std::shared_ptr<Exception> refVal_setExceptions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("exceptions"))), refVal_setExceptions );
        setExceptions(refVal_setExceptions);
    }
    return ok;
}

std::shared_ptr<AdResponse> AdArrayResponseElement::getData() const
{
    return m_Data;
}

void AdArrayResponseElement::setData(const std::shared_ptr<AdResponse>& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool AdArrayResponseElement::dataIsSet() const
{
    return m_DataIsSet;
}

void AdArrayResponseElement::unsetData()
{
    m_DataIsSet = false;
}
std::shared_ptr<Exception> AdArrayResponseElement::getExceptions() const
{
    return m_Exceptions;
}

void AdArrayResponseElement::setExceptions(const std::shared_ptr<Exception>& value)
{
    m_Exceptions = value;
    m_ExceptionsIsSet = true;
}

bool AdArrayResponseElement::exceptionsIsSet() const
{
    return m_ExceptionsIsSet;
}

void AdArrayResponseElement::unsetExceptions()
{
    m_ExceptionsIsSet = false;
}
}
}
}
}

