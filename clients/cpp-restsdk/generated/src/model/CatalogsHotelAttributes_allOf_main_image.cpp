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



#include "CppRestOpenAPIClient/model/CatalogsHotelAttributes_allOf_main_image.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsHotelAttributes_allOf_main_image::CatalogsHotelAttributes_allOf_main_image()
{
    m_Link = utility::conversions::to_string_t("");
    m_LinkIsSet = false;
    m_TagIsSet = false;
}

CatalogsHotelAttributes_allOf_main_image::~CatalogsHotelAttributes_allOf_main_image()
{
}

void CatalogsHotelAttributes_allOf_main_image::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsHotelAttributes_allOf_main_image::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_LinkIsSet)
    {
        val[utility::conversions::to_string_t(U("link"))] = ModelBase::toJson(m_Link);
    }
    if(m_TagIsSet)
    {
        val[utility::conversions::to_string_t(U("tag"))] = ModelBase::toJson(m_Tag);
    }

    return val;
}

bool CatalogsHotelAttributes_allOf_main_image::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("link"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("link")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setLink;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLink);
            setLink(refVal_setLink);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tag"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tag")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setTag;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTag);
            setTag(refVal_setTag);
        }
    }
    return ok;
}

void CatalogsHotelAttributes_allOf_main_image::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_LinkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("link")), m_Link));
    }
    if(m_TagIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tag")), m_Tag));
    }
}

bool CatalogsHotelAttributes_allOf_main_image::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("link"))))
    {
        utility::string_t refVal_setLink;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("link"))), refVal_setLink );
        setLink(refVal_setLink);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tag"))))
    {
        std::vector<utility::string_t> refVal_setTag;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tag"))), refVal_setTag );
        setTag(refVal_setTag);
    }
    return ok;
}

utility::string_t CatalogsHotelAttributes_allOf_main_image::getLink() const
{
    return m_Link;
}

void CatalogsHotelAttributes_allOf_main_image::setLink(const utility::string_t& value)
{
    m_Link = value;
    m_LinkIsSet = true;
}

bool CatalogsHotelAttributes_allOf_main_image::linkIsSet() const
{
    return m_LinkIsSet;
}

void CatalogsHotelAttributes_allOf_main_image::unsetLink()
{
    m_LinkIsSet = false;
}
std::vector<utility::string_t>& CatalogsHotelAttributes_allOf_main_image::getTag()
{
    return m_Tag;
}

void CatalogsHotelAttributes_allOf_main_image::setTag(const std::vector<utility::string_t>& value)
{
    m_Tag = value;
    m_TagIsSet = true;
}

bool CatalogsHotelAttributes_allOf_main_image::tagIsSet() const
{
    return m_TagIsSet;
}

void CatalogsHotelAttributes_allOf_main_image::unsetTag()
{
    m_TagIsSet = false;
}
}
}
}
}


