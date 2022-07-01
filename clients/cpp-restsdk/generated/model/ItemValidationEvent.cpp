/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ItemValidationEvent.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ItemValidationEvent::ItemValidationEvent()
{
    m_Attribute = utility::conversions::to_string_t("");
    m_AttributeIsSet = false;
    m_Code = 0;
    m_CodeIsSet = false;
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
}

ItemValidationEvent::~ItemValidationEvent()
{
}

void ItemValidationEvent::validate()
{
    // TODO: implement validation
}

web::json::value ItemValidationEvent::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AttributeIsSet)
    {
        val[utility::conversions::to_string_t(U("attribute"))] = ModelBase::toJson(m_Attribute);
    }
    if(m_CodeIsSet)
    {
        val[utility::conversions::to_string_t(U("code"))] = ModelBase::toJson(m_Code);
    }
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t(U("message"))] = ModelBase::toJson(m_Message);
    }

    return val;
}

bool ItemValidationEvent::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("attribute"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("attribute")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_attribute;
            ok &= ModelBase::fromJson(fieldValue, refVal_attribute);
            setAttribute(refVal_attribute);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("code"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("code")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_code;
            ok &= ModelBase::fromJson(fieldValue, refVal_code);
            setCode(refVal_code);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("message"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("message")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_message;
            ok &= ModelBase::fromJson(fieldValue, refVal_message);
            setMessage(refVal_message);
        }
    }
    return ok;
}

void ItemValidationEvent::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_AttributeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("attribute")), m_Attribute));
    }
    if(m_CodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("code")), m_Code));
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("message")), m_Message));
    }
}

bool ItemValidationEvent::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("attribute"))))
    {
        utility::string_t refVal_attribute;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("attribute"))), refVal_attribute );
        setAttribute(refVal_attribute);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("code"))))
    {
        int32_t refVal_code;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("code"))), refVal_code );
        setCode(refVal_code);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("message"))))
    {
        utility::string_t refVal_message;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("message"))), refVal_message );
        setMessage(refVal_message);
    }
    return ok;
}

utility::string_t ItemValidationEvent::getAttribute() const
{
    return m_Attribute;
}

void ItemValidationEvent::setAttribute(const utility::string_t& value)
{
    m_Attribute = value;
    m_AttributeIsSet = true;
}

bool ItemValidationEvent::attributeIsSet() const
{
    return m_AttributeIsSet;
}

void ItemValidationEvent::unsetAttribute()
{
    m_AttributeIsSet = false;
}
int32_t ItemValidationEvent::getCode() const
{
    return m_Code;
}

void ItemValidationEvent::setCode(int32_t value)
{
    m_Code = value;
    m_CodeIsSet = true;
}

bool ItemValidationEvent::codeIsSet() const
{
    return m_CodeIsSet;
}

void ItemValidationEvent::unsetCode()
{
    m_CodeIsSet = false;
}
utility::string_t ItemValidationEvent::getMessage() const
{
    return m_Message;
}

void ItemValidationEvent::setMessage(const utility::string_t& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}

bool ItemValidationEvent::messageIsSet() const
{
    return m_MessageIsSet;
}

void ItemValidationEvent::unsetMessage()
{
    m_MessageIsSet = false;
}
}
}
}
}


