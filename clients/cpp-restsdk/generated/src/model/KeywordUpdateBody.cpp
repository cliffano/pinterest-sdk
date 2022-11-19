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



#include "CppRestOpenAPIClient/model/KeywordUpdateBody.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



KeywordUpdateBody::KeywordUpdateBody()
{
    m_KeywordsIsSet = false;
}

KeywordUpdateBody::~KeywordUpdateBody()
{
}

void KeywordUpdateBody::validate()
{
    // TODO: implement validation
}

web::json::value KeywordUpdateBody::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_KeywordsIsSet)
    {
        val[utility::conversions::to_string_t(U("keywords"))] = ModelBase::toJson(m_Keywords);
    }

    return val;
}

bool KeywordUpdateBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("keywords"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("keywords")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<KeywordUpdate>> refVal_setKeywords;
            ok &= ModelBase::fromJson(fieldValue, refVal_setKeywords);
            setKeywords(refVal_setKeywords);
        }
    }
    return ok;
}

void KeywordUpdateBody::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_KeywordsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("keywords")), m_Keywords));
    }
}

bool KeywordUpdateBody::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("keywords"))))
    {
        std::vector<std::shared_ptr<KeywordUpdate>> refVal_setKeywords;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("keywords"))), refVal_setKeywords );
        setKeywords(refVal_setKeywords);
    }
    return ok;
}

std::vector<std::shared_ptr<KeywordUpdate>>& KeywordUpdateBody::getKeywords()
{
    return m_Keywords;
}

void KeywordUpdateBody::setKeywords(const std::vector<std::shared_ptr<KeywordUpdate>>& value)
{
    m_Keywords = value;
    m_KeywordsIsSet = true;
}

bool KeywordUpdateBody::keywordsIsSet() const
{
    return m_KeywordsIsSet;
}

void KeywordUpdateBody::unsetKeywords()
{
    m_KeywordsIsSet = false;
}
}
}
}
}


