/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/AdPreviewURLResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



AdPreviewURLResponse::AdPreviewURLResponse()
{
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
}

AdPreviewURLResponse::~AdPreviewURLResponse()
{
}

void AdPreviewURLResponse::validate()
{
    // TODO: implement validation
}

web::json::value AdPreviewURLResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t(U("url"))] = ModelBase::toJson(m_Url);
    }

    return val;
}

bool AdPreviewURLResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUrl);
            setUrl(refVal_setUrl);
        }
    }
    return ok;
}

void AdPreviewURLResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("url")), m_Url));
    }
}

bool AdPreviewURLResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("url"))))
    {
        utility::string_t refVal_setUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("url"))), refVal_setUrl );
        setUrl(refVal_setUrl);
    }
    return ok;
}

utility::string_t AdPreviewURLResponse::getUrl() const
{
    return m_Url;
}

void AdPreviewURLResponse::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool AdPreviewURLResponse::urlIsSet() const
{
    return m_UrlIsSet;
}

void AdPreviewURLResponse::unsetUrl()
{
    m_UrlIsSet = false;
}
}
}
}
}

