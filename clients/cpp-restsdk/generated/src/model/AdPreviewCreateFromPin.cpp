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



#include "CppRestOpenAPIClient/model/AdPreviewCreateFromPin.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



AdPreviewCreateFromPin::AdPreviewCreateFromPin()
{
    m_Pin_id = utility::conversions::to_string_t("");
    m_Pin_idIsSet = false;
}

AdPreviewCreateFromPin::~AdPreviewCreateFromPin()
{
}

void AdPreviewCreateFromPin::validate()
{
    // TODO: implement validation
}

web::json::value AdPreviewCreateFromPin::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Pin_idIsSet)
    {
        val[utility::conversions::to_string_t(U("pin_id"))] = ModelBase::toJson(m_Pin_id);
    }

    return val;
}

bool AdPreviewCreateFromPin::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("pin_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pin_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPinId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPinId);
            setPinId(refVal_setPinId);
        }
    }
    return ok;
}

void AdPreviewCreateFromPin::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Pin_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pin_id")), m_Pin_id));
    }
}

bool AdPreviewCreateFromPin::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("pin_id"))))
    {
        utility::string_t refVal_setPinId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pin_id"))), refVal_setPinId );
        setPinId(refVal_setPinId);
    }
    return ok;
}

utility::string_t AdPreviewCreateFromPin::getPinId() const
{
    return m_Pin_id;
}

void AdPreviewCreateFromPin::setPinId(const utility::string_t& value)
{
    m_Pin_id = value;
    m_Pin_idIsSet = true;
}

bool AdPreviewCreateFromPin::pinIdIsSet() const
{
    return m_Pin_idIsSet;
}

void AdPreviewCreateFromPin::unsetPin_id()
{
    m_Pin_idIsSet = false;
}
}
}
}
}


