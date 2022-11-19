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



#include "CppRestOpenAPIClient/model/CustomerListUpdateRequest.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CustomerListUpdateRequest::CustomerListUpdateRequest()
{
    m_Records = utility::conversions::to_string_t("");
    m_RecordsIsSet = false;
    m_Operation_type = utility::conversions::to_string_t("");
    m_Operation_typeIsSet = false;
    m_ExceptionsIsSet = false;
}

CustomerListUpdateRequest::~CustomerListUpdateRequest()
{
}

void CustomerListUpdateRequest::validate()
{
    // TODO: implement validation
}

web::json::value CustomerListUpdateRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_RecordsIsSet)
    {
        val[utility::conversions::to_string_t(U("records"))] = ModelBase::toJson(m_Records);
    }
    if(m_Operation_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("operation_type"))] = ModelBase::toJson(m_Operation_type);
    }
    if(m_ExceptionsIsSet)
    {
        val[utility::conversions::to_string_t(U("exceptions"))] = ModelBase::toJson(m_Exceptions);
    }

    return val;
}

bool CustomerListUpdateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("records"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("records")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRecords;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRecords);
            setRecords(refVal_setRecords);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("operation_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("operation_type")));
        if(!fieldValue.is_null())
        {
            UserListOperationType refVal_setOperationType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOperationType);
            setOperationType(refVal_setOperationType);
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

void CustomerListUpdateRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_RecordsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("records")), m_Records));
    }
    if(m_Operation_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("operation_type")), m_Operation_type));
    }
    if(m_ExceptionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("exceptions")), m_Exceptions));
    }
}

bool CustomerListUpdateRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("records"))))
    {
        utility::string_t refVal_setRecords;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("records"))), refVal_setRecords );
        setRecords(refVal_setRecords);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("operation_type"))))
    {
        UserListOperationType refVal_setOperationType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("operation_type"))), refVal_setOperationType );
        setOperationType(refVal_setOperationType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("exceptions"))))
    {
        std::shared_ptr<Exception> refVal_setExceptions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("exceptions"))), refVal_setExceptions );
        setExceptions(refVal_setExceptions);
    }
    return ok;
}

utility::string_t CustomerListUpdateRequest::getRecords() const
{
    return m_Records;
}

void CustomerListUpdateRequest::setRecords(const utility::string_t& value)
{
    m_Records = value;
    m_RecordsIsSet = true;
}

bool CustomerListUpdateRequest::recordsIsSet() const
{
    return m_RecordsIsSet;
}

void CustomerListUpdateRequest::unsetRecords()
{
    m_RecordsIsSet = false;
}
UserListOperationType CustomerListUpdateRequest::getOperationType() const
{
    return m_Operation_type;
}

void CustomerListUpdateRequest::setOperationType(const UserListOperationType& value)
{
    m_Operation_type = value;
    m_Operation_typeIsSet = true;
}

bool CustomerListUpdateRequest::operationTypeIsSet() const
{
    return m_Operation_typeIsSet;
}

void CustomerListUpdateRequest::unsetOperation_type()
{
    m_Operation_typeIsSet = false;
}
std::shared_ptr<Exception> CustomerListUpdateRequest::getExceptions() const
{
    return m_Exceptions;
}

void CustomerListUpdateRequest::setExceptions(const std::shared_ptr<Exception>& value)
{
    m_Exceptions = value;
    m_ExceptionsIsSet = true;
}

bool CustomerListUpdateRequest::exceptionsIsSet() const
{
    return m_ExceptionsIsSet;
}

void CustomerListUpdateRequest::unsetExceptions()
{
    m_ExceptionsIsSet = false;
}
}
}
}
}


