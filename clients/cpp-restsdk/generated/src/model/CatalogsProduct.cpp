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



#include "CppRestOpenAPIClient/model/CatalogsProduct.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsProduct::CatalogsProduct()
{
    m_MetadataIsSet = false;
    m_PinIsSet = false;
}

CatalogsProduct::~CatalogsProduct()
{
}

void CatalogsProduct::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsProduct::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MetadataIsSet)
    {
        val[utility::conversions::to_string_t(U("metadata"))] = ModelBase::toJson(m_Metadata);
    }
    if(m_PinIsSet)
    {
        val[utility::conversions::to_string_t(U("pin"))] = ModelBase::toJson(m_Pin);
    }

    return val;
}

bool CatalogsProduct::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("metadata"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("metadata")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsProductMetadata> refVal_setMetadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMetadata);
            setMetadata(refVal_setMetadata);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pin"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pin")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Pin> refVal_setPin;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPin);
            setPin(refVal_setPin);
        }
    }
    return ok;
}

void CatalogsProduct::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_MetadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("metadata")), m_Metadata));
    }
    if(m_PinIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pin")), m_Pin));
    }
}

bool CatalogsProduct::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("metadata"))))
    {
        std::shared_ptr<CatalogsProductMetadata> refVal_setMetadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("metadata"))), refVal_setMetadata );
        setMetadata(refVal_setMetadata);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pin"))))
    {
        std::shared_ptr<Pin> refVal_setPin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pin"))), refVal_setPin );
        setPin(refVal_setPin);
    }
    return ok;
}

std::shared_ptr<CatalogsProductMetadata> CatalogsProduct::getMetadata() const
{
    return m_Metadata;
}

void CatalogsProduct::setMetadata(const std::shared_ptr<CatalogsProductMetadata>& value)
{
    m_Metadata = value;
    m_MetadataIsSet = true;
}

bool CatalogsProduct::metadataIsSet() const
{
    return m_MetadataIsSet;
}

void CatalogsProduct::unsetMetadata()
{
    m_MetadataIsSet = false;
}
std::shared_ptr<Pin> CatalogsProduct::getPin() const
{
    return m_Pin;
}

void CatalogsProduct::setPin(const std::shared_ptr<Pin>& value)
{
    m_Pin = value;
    m_PinIsSet = true;
}

bool CatalogsProduct::pinIsSet() const
{
    return m_PinIsSet;
}

void CatalogsProduct::unsetPin()
{
    m_PinIsSet = false;
}
}
}
}
}


