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



#include "CppRestOpenAPIClient/model/LinkedBusiness.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



LinkedBusiness::LinkedBusiness()
{
    m_Username = utility::conversions::to_string_t("");
    m_UsernameIsSet = false;
    m_Image_small_url = utility::conversions::to_string_t("");
    m_Image_small_urlIsSet = false;
    m_Image_medium_url = utility::conversions::to_string_t("");
    m_Image_medium_urlIsSet = false;
    m_Image_large_url = utility::conversions::to_string_t("");
    m_Image_large_urlIsSet = false;
    m_Image_xlarge_url = utility::conversions::to_string_t("");
    m_Image_xlarge_urlIsSet = false;
}

LinkedBusiness::~LinkedBusiness()
{
}

void LinkedBusiness::validate()
{
    // TODO: implement validation
}

web::json::value LinkedBusiness::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UsernameIsSet)
    {
        val[utility::conversions::to_string_t(U("username"))] = ModelBase::toJson(m_Username);
    }
    if(m_Image_small_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("image_small_url"))] = ModelBase::toJson(m_Image_small_url);
    }
    if(m_Image_medium_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("image_medium_url"))] = ModelBase::toJson(m_Image_medium_url);
    }
    if(m_Image_large_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("image_large_url"))] = ModelBase::toJson(m_Image_large_url);
    }
    if(m_Image_xlarge_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("image_xlarge_url"))] = ModelBase::toJson(m_Image_xlarge_url);
    }

    return val;
}

bool LinkedBusiness::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("username"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("username")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUsername;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUsername);
            setUsername(refVal_setUsername);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("image_small_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("image_small_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setImageSmallUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImageSmallUrl);
            setImageSmallUrl(refVal_setImageSmallUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("image_medium_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("image_medium_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setImageMediumUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImageMediumUrl);
            setImageMediumUrl(refVal_setImageMediumUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("image_large_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("image_large_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setImageLargeUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImageLargeUrl);
            setImageLargeUrl(refVal_setImageLargeUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("image_xlarge_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("image_xlarge_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setImageXlargeUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImageXlargeUrl);
            setImageXlargeUrl(refVal_setImageXlargeUrl);
        }
    }
    return ok;
}

void LinkedBusiness::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_UsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("username")), m_Username));
    }
    if(m_Image_small_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("image_small_url")), m_Image_small_url));
    }
    if(m_Image_medium_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("image_medium_url")), m_Image_medium_url));
    }
    if(m_Image_large_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("image_large_url")), m_Image_large_url));
    }
    if(m_Image_xlarge_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("image_xlarge_url")), m_Image_xlarge_url));
    }
}

bool LinkedBusiness::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("username"))))
    {
        utility::string_t refVal_setUsername;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("username"))), refVal_setUsername );
        setUsername(refVal_setUsername);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("image_small_url"))))
    {
        utility::string_t refVal_setImageSmallUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("image_small_url"))), refVal_setImageSmallUrl );
        setImageSmallUrl(refVal_setImageSmallUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("image_medium_url"))))
    {
        utility::string_t refVal_setImageMediumUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("image_medium_url"))), refVal_setImageMediumUrl );
        setImageMediumUrl(refVal_setImageMediumUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("image_large_url"))))
    {
        utility::string_t refVal_setImageLargeUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("image_large_url"))), refVal_setImageLargeUrl );
        setImageLargeUrl(refVal_setImageLargeUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("image_xlarge_url"))))
    {
        utility::string_t refVal_setImageXlargeUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("image_xlarge_url"))), refVal_setImageXlargeUrl );
        setImageXlargeUrl(refVal_setImageXlargeUrl);
    }
    return ok;
}

utility::string_t LinkedBusiness::getUsername() const
{
    return m_Username;
}

void LinkedBusiness::setUsername(const utility::string_t& value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}

bool LinkedBusiness::usernameIsSet() const
{
    return m_UsernameIsSet;
}

void LinkedBusiness::unsetUsername()
{
    m_UsernameIsSet = false;
}
utility::string_t LinkedBusiness::getImageSmallUrl() const
{
    return m_Image_small_url;
}

void LinkedBusiness::setImageSmallUrl(const utility::string_t& value)
{
    m_Image_small_url = value;
    m_Image_small_urlIsSet = true;
}

bool LinkedBusiness::imageSmallUrlIsSet() const
{
    return m_Image_small_urlIsSet;
}

void LinkedBusiness::unsetImage_small_url()
{
    m_Image_small_urlIsSet = false;
}
utility::string_t LinkedBusiness::getImageMediumUrl() const
{
    return m_Image_medium_url;
}

void LinkedBusiness::setImageMediumUrl(const utility::string_t& value)
{
    m_Image_medium_url = value;
    m_Image_medium_urlIsSet = true;
}

bool LinkedBusiness::imageMediumUrlIsSet() const
{
    return m_Image_medium_urlIsSet;
}

void LinkedBusiness::unsetImage_medium_url()
{
    m_Image_medium_urlIsSet = false;
}
utility::string_t LinkedBusiness::getImageLargeUrl() const
{
    return m_Image_large_url;
}

void LinkedBusiness::setImageLargeUrl(const utility::string_t& value)
{
    m_Image_large_url = value;
    m_Image_large_urlIsSet = true;
}

bool LinkedBusiness::imageLargeUrlIsSet() const
{
    return m_Image_large_urlIsSet;
}

void LinkedBusiness::unsetImage_large_url()
{
    m_Image_large_urlIsSet = false;
}
utility::string_t LinkedBusiness::getImageXlargeUrl() const
{
    return m_Image_xlarge_url;
}

void LinkedBusiness::setImageXlargeUrl(const utility::string_t& value)
{
    m_Image_xlarge_url = value;
    m_Image_xlarge_urlIsSet = true;
}

bool LinkedBusiness::imageXlargeUrlIsSet() const
{
    return m_Image_xlarge_urlIsSet;
}

void LinkedBusiness::unsetImage_xlarge_url()
{
    m_Image_xlarge_urlIsSet = false;
}
}
}
}
}


