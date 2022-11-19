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



#include "CppRestOpenAPIClient/model/Pin_media.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Pin_media::Pin_media()
{
}

Pin_media::~Pin_media()
{
}

void Pin_media::validate()
{
    // TODO: implement validation
}

web::json::value Pin_media::toJson() const
{

    web::json::value val = web::json::value::object();
    

    return val;
}

bool Pin_media::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}

void Pin_media::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

bool Pin_media::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

}
}
}
}


