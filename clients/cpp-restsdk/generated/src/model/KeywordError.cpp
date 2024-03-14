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



#include "CppRestOpenAPIClient/model/KeywordError.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



KeywordError::KeywordError()
{
    m_DataIsSet = false;
    m_Error_messagesIsSet = false;
}

KeywordError::~KeywordError()
{
}

void KeywordError::validate()
{
    // TODO: implement validation
}

web::json::value KeywordError::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t(U("data"))] = ModelBase::toJson(m_Data);
    }
    if(m_Error_messagesIsSet)
    {
        val[utility::conversions::to_string_t(U("error_messages"))] = ModelBase::toJson(m_Error_messages);
    }

    return val;
}

bool KeywordError::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("data"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("data")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Keyword> refVal_setData;
            ok &= ModelBase::fromJson(fieldValue, refVal_setData);
            setData(refVal_setData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("error_messages"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("error_messages")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setErrorMessages;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrorMessages);
            setErrorMessages(refVal_setErrorMessages);
        }
    }
    return ok;
}

void KeywordError::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Error_messagesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("error_messages")), m_Error_messages));
    }
}

bool KeywordError::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("data"))))
    {
        std::shared_ptr<Keyword> refVal_setData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("data"))), refVal_setData );
        setData(refVal_setData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("error_messages"))))
    {
        std::vector<utility::string_t> refVal_setErrorMessages;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("error_messages"))), refVal_setErrorMessages );
        setErrorMessages(refVal_setErrorMessages);
    }
    return ok;
}

std::shared_ptr<Keyword> KeywordError::getData() const
{
    return m_Data;
}

void KeywordError::setData(const std::shared_ptr<Keyword>& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool KeywordError::dataIsSet() const
{
    return m_DataIsSet;
}

void KeywordError::unsetData()
{
    m_DataIsSet = false;
}
std::vector<utility::string_t>& KeywordError::getErrorMessages()
{
    return m_Error_messages;
}

void KeywordError::setErrorMessages(const std::vector<utility::string_t>& value)
{
    m_Error_messages = value;
    m_Error_messagesIsSet = true;
}

bool KeywordError::errorMessagesIsSet() const
{
    return m_Error_messagesIsSet;
}

void KeywordError::unsetError_messages()
{
    m_Error_messagesIsSet = false;
}
}
}
}
}


