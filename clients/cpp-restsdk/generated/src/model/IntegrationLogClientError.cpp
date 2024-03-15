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



#include "CppRestOpenAPIClient/model/IntegrationLogClientError.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



IntegrationLogClientError::IntegrationLogClientError()
{
    m_Cause = utility::conversions::to_string_t("");
    m_CauseIsSet = false;
    m_Column_number = 0;
    m_Column_numberIsSet = false;
    m_File_name = utility::conversions::to_string_t("");
    m_File_nameIsSet = false;
    m_Line_number = 0;
    m_Line_numberIsSet = false;
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
    m_Message_detail = utility::conversions::to_string_t("");
    m_Message_detailIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_number = 0;
    m_numberIsSet = false;
    m_Stack_trace = utility::conversions::to_string_t("");
    m_Stack_traceIsSet = false;
}

IntegrationLogClientError::~IntegrationLogClientError()
{
}

void IntegrationLogClientError::validate()
{
    // TODO: implement validation
}

web::json::value IntegrationLogClientError::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CauseIsSet)
    {
        val[utility::conversions::to_string_t(U("cause"))] = ModelBase::toJson(m_Cause);
    }
    if(m_Column_numberIsSet)
    {
        val[utility::conversions::to_string_t(U("column_number"))] = ModelBase::toJson(m_Column_number);
    }
    if(m_File_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("file_name"))] = ModelBase::toJson(m_File_name);
    }
    if(m_Line_numberIsSet)
    {
        val[utility::conversions::to_string_t(U("line_number"))] = ModelBase::toJson(m_Line_number);
    }
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t(U("message"))] = ModelBase::toJson(m_Message);
    }
    if(m_Message_detailIsSet)
    {
        val[utility::conversions::to_string_t(U("message_detail"))] = ModelBase::toJson(m_Message_detail);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_numberIsSet)
    {
        val[utility::conversions::to_string_t(U("number"))] = ModelBase::toJson(m_number);
    }
    if(m_Stack_traceIsSet)
    {
        val[utility::conversions::to_string_t(U("stack_trace"))] = ModelBase::toJson(m_Stack_trace);
    }

    return val;
}

bool IntegrationLogClientError::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("cause"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cause")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCause;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCause);
            setCause(refVal_setCause);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("column_number"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("column_number")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setColumnNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setColumnNumber);
            setColumnNumber(refVal_setColumnNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("file_name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("file_name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFileName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFileName);
            setFileName(refVal_setFileName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("line_number"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("line_number")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setLineNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLineNumber);
            setLineNumber(refVal_setLineNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("message"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("message")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMessage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMessage);
            setMessage(refVal_setMessage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("message_detail"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("message_detail")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMessageDetail;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMessageDetail);
            setMessageDetail(refVal_setMessageDetail);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("number"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("number")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNumber);
            setNumber(refVal_setNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("stack_trace"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("stack_trace")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setStackTrace;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStackTrace);
            setStackTrace(refVal_setStackTrace);
        }
    }
    return ok;
}

void IntegrationLogClientError::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_CauseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cause")), m_Cause));
    }
    if(m_Column_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("column_number")), m_Column_number));
    }
    if(m_File_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("file_name")), m_File_name));
    }
    if(m_Line_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("line_number")), m_Line_number));
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("message")), m_Message));
    }
    if(m_Message_detailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("message_detail")), m_Message_detail));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("number")), m_number));
    }
    if(m_Stack_traceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("stack_trace")), m_Stack_trace));
    }
}

bool IntegrationLogClientError::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("cause"))))
    {
        utility::string_t refVal_setCause;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cause"))), refVal_setCause );
        setCause(refVal_setCause);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("column_number"))))
    {
        int32_t refVal_setColumnNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("column_number"))), refVal_setColumnNumber );
        setColumnNumber(refVal_setColumnNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("file_name"))))
    {
        utility::string_t refVal_setFileName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("file_name"))), refVal_setFileName );
        setFileName(refVal_setFileName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("line_number"))))
    {
        int32_t refVal_setLineNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("line_number"))), refVal_setLineNumber );
        setLineNumber(refVal_setLineNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("message"))))
    {
        utility::string_t refVal_setMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("message"))), refVal_setMessage );
        setMessage(refVal_setMessage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("message_detail"))))
    {
        utility::string_t refVal_setMessageDetail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("message_detail"))), refVal_setMessageDetail );
        setMessageDetail(refVal_setMessageDetail);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("number"))))
    {
        int32_t refVal_setNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("number"))), refVal_setNumber );
        setNumber(refVal_setNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("stack_trace"))))
    {
        utility::string_t refVal_setStackTrace;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("stack_trace"))), refVal_setStackTrace );
        setStackTrace(refVal_setStackTrace);
    }
    return ok;
}

utility::string_t IntegrationLogClientError::getCause() const
{
    return m_Cause;
}

void IntegrationLogClientError::setCause(const utility::string_t& value)
{
    m_Cause = value;
    m_CauseIsSet = true;
}

bool IntegrationLogClientError::causeIsSet() const
{
    return m_CauseIsSet;
}

void IntegrationLogClientError::unsetCause()
{
    m_CauseIsSet = false;
}
int32_t IntegrationLogClientError::getColumnNumber() const
{
    return m_Column_number;
}

void IntegrationLogClientError::setColumnNumber(int32_t value)
{
    m_Column_number = value;
    m_Column_numberIsSet = true;
}

bool IntegrationLogClientError::columnNumberIsSet() const
{
    return m_Column_numberIsSet;
}

void IntegrationLogClientError::unsetColumn_number()
{
    m_Column_numberIsSet = false;
}
utility::string_t IntegrationLogClientError::getFileName() const
{
    return m_File_name;
}

void IntegrationLogClientError::setFileName(const utility::string_t& value)
{
    m_File_name = value;
    m_File_nameIsSet = true;
}

bool IntegrationLogClientError::fileNameIsSet() const
{
    return m_File_nameIsSet;
}

void IntegrationLogClientError::unsetFile_name()
{
    m_File_nameIsSet = false;
}
int32_t IntegrationLogClientError::getLineNumber() const
{
    return m_Line_number;
}

void IntegrationLogClientError::setLineNumber(int32_t value)
{
    m_Line_number = value;
    m_Line_numberIsSet = true;
}

bool IntegrationLogClientError::lineNumberIsSet() const
{
    return m_Line_numberIsSet;
}

void IntegrationLogClientError::unsetLine_number()
{
    m_Line_numberIsSet = false;
}
utility::string_t IntegrationLogClientError::getMessage() const
{
    return m_Message;
}

void IntegrationLogClientError::setMessage(const utility::string_t& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}

bool IntegrationLogClientError::messageIsSet() const
{
    return m_MessageIsSet;
}

void IntegrationLogClientError::unsetMessage()
{
    m_MessageIsSet = false;
}
utility::string_t IntegrationLogClientError::getMessageDetail() const
{
    return m_Message_detail;
}

void IntegrationLogClientError::setMessageDetail(const utility::string_t& value)
{
    m_Message_detail = value;
    m_Message_detailIsSet = true;
}

bool IntegrationLogClientError::messageDetailIsSet() const
{
    return m_Message_detailIsSet;
}

void IntegrationLogClientError::unsetMessage_detail()
{
    m_Message_detailIsSet = false;
}
utility::string_t IntegrationLogClientError::getName() const
{
    return m_Name;
}

void IntegrationLogClientError::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool IntegrationLogClientError::nameIsSet() const
{
    return m_NameIsSet;
}

void IntegrationLogClientError::unsetName()
{
    m_NameIsSet = false;
}
int32_t IntegrationLogClientError::getNumber() const
{
    return m_number;
}

void IntegrationLogClientError::setNumber(int32_t value)
{
    m_number = value;
    m_numberIsSet = true;
}

bool IntegrationLogClientError::numberIsSet() const
{
    return m_numberIsSet;
}

void IntegrationLogClientError::unsetnumber()
{
    m_numberIsSet = false;
}
utility::string_t IntegrationLogClientError::getStackTrace() const
{
    return m_Stack_trace;
}

void IntegrationLogClientError::setStackTrace(const utility::string_t& value)
{
    m_Stack_trace = value;
    m_Stack_traceIsSet = true;
}

bool IntegrationLogClientError::stackTraceIsSet() const
{
    return m_Stack_traceIsSet;
}

void IntegrationLogClientError::unsetStack_trace()
{
    m_Stack_traceIsSet = false;
}
}
}
}
}


