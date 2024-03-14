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



#include "CppRestOpenAPIClient/model/PinMedia.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



PinMedia::PinMedia()
{
    m_Media_type = utility::conversions::to_string_t("");
    m_Media_typeIsSet = false;
}

PinMedia::~PinMedia()
{
}

void PinMedia::validate()
{
    // TODO: implement validation
}

web::json::value PinMedia::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Media_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("media_type"))] = ModelBase::toJson(m_Media_type);
    }

    return val;
}

bool PinMedia::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("media_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("media_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMediaType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMediaType);
            setMediaType(refVal_setMediaType);
        }
    }
    return ok;
}

void PinMedia::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Media_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("media_type")), m_Media_type));
    }
}

bool PinMedia::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("media_type"))))
    {
        utility::string_t refVal_setMediaType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("media_type"))), refVal_setMediaType );
        setMediaType(refVal_setMediaType);
    }
    return ok;
}

utility::string_t PinMedia::getMediaType() const
{
    return m_Media_type;
}

void PinMedia::setMediaType(const utility::string_t& value)
{
    m_Media_type = value;
    m_Media_typeIsSet = true;
}

bool PinMedia::mediaTypeIsSet() const
{
    return m_Media_typeIsSet;
}

void PinMedia::unsetMedia_type()
{
    m_Media_typeIsSet = false;
}
}
}
}
}


