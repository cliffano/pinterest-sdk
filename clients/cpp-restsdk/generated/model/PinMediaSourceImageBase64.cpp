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



#include "PinMediaSourceImageBase64.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




PinMediaSourceImageBase64::PinMediaSourceImageBase64()
{
    m_Source_type = utility::conversions::to_string_t("");
    m_Source_typeIsSet = false;
    m_Content_type = utility::conversions::to_string_t("");
    m_Content_typeIsSet = false;
    m_Data = utility::conversions::to_string_t("");
    m_DataIsSet = false;
}

PinMediaSourceImageBase64::~PinMediaSourceImageBase64()
{
}

void PinMediaSourceImageBase64::validate()
{
    // TODO: implement validation
}

web::json::value PinMediaSourceImageBase64::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Source_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("source_type"))] = ModelBase::toJson(m_Source_type);
    }
    if(m_Content_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("content_type"))] = ModelBase::toJson(m_Content_type);
    }
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t(U("data"))] = ModelBase::toJson(m_Data);
    }

    return val;
}

bool PinMediaSourceImageBase64::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("source_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("source_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_source_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_source_type);
            setSourceType(refVal_source_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("content_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("content_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_content_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_content_type);
            setContentType(refVal_content_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("data"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("data")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_data;
            ok &= ModelBase::fromJson(fieldValue, refVal_data);
            setData(refVal_data);
        }
    }
    return ok;
}

void PinMediaSourceImageBase64::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Source_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("source_type")), m_Source_type));
    }
    if(m_Content_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("content_type")), m_Content_type));
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("data")), m_Data));
    }
}

bool PinMediaSourceImageBase64::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("source_type"))))
    {
        utility::string_t refVal_source_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("source_type"))), refVal_source_type );
        setSourceType(refVal_source_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("content_type"))))
    {
        utility::string_t refVal_content_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("content_type"))), refVal_content_type );
        setContentType(refVal_content_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("data"))))
    {
        utility::string_t refVal_data;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("data"))), refVal_data );
        setData(refVal_data);
    }
    return ok;
}

utility::string_t PinMediaSourceImageBase64::getSourceType() const
{
    return m_Source_type;
}

void PinMediaSourceImageBase64::setSourceType(const utility::string_t& value)
{
    m_Source_type = value;
    m_Source_typeIsSet = true;
}

bool PinMediaSourceImageBase64::sourceTypeIsSet() const
{
    return m_Source_typeIsSet;
}

void PinMediaSourceImageBase64::unsetSource_type()
{
    m_Source_typeIsSet = false;
}
utility::string_t PinMediaSourceImageBase64::getContentType() const
{
    return m_Content_type;
}

void PinMediaSourceImageBase64::setContentType(const utility::string_t& value)
{
    m_Content_type = value;
    m_Content_typeIsSet = true;
}

bool PinMediaSourceImageBase64::contentTypeIsSet() const
{
    return m_Content_typeIsSet;
}

void PinMediaSourceImageBase64::unsetContent_type()
{
    m_Content_typeIsSet = false;
}
utility::string_t PinMediaSourceImageBase64::getData() const
{
    return m_Data;
}

void PinMediaSourceImageBase64::setData(const utility::string_t& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool PinMediaSourceImageBase64::dataIsSet() const
{
    return m_DataIsSet;
}

void PinMediaSourceImageBase64::unsetData()
{
    m_DataIsSet = false;
}
}
}
}
}


