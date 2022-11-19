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



#include "CppRestOpenAPIClient/model/KeywordsResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



KeywordsResponse::KeywordsResponse()
{
    m_ErrorsIsSet = false;
    m_KeywordsIsSet = false;
}

KeywordsResponse::~KeywordsResponse()
{
}

void KeywordsResponse::validate()
{
    // TODO: implement validation
}

web::json::value KeywordsResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }
    if(m_KeywordsIsSet)
    {
        val[utility::conversions::to_string_t(U("keywords"))] = ModelBase::toJson(m_Keywords);
    }

    return val;
}

bool KeywordsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("errors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errors")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<KeywordError>> refVal_setErrors;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrors);
            setErrors(refVal_setErrors);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("keywords"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("keywords")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Keyword>> refVal_setKeywords;
            ok &= ModelBase::fromJson(fieldValue, refVal_setKeywords);
            setKeywords(refVal_setKeywords);
        }
    }
    return ok;
}

void KeywordsResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ErrorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errors")), m_Errors));
    }
    if(m_KeywordsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("keywords")), m_Keywords));
    }
}

bool KeywordsResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("errors"))))
    {
        std::vector<std::shared_ptr<KeywordError>> refVal_setErrors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errors"))), refVal_setErrors );
        setErrors(refVal_setErrors);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("keywords"))))
    {
        std::vector<std::shared_ptr<Keyword>> refVal_setKeywords;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("keywords"))), refVal_setKeywords );
        setKeywords(refVal_setKeywords);
    }
    return ok;
}

std::vector<std::shared_ptr<KeywordError>>& KeywordsResponse::getErrors()
{
    return m_Errors;
}

void KeywordsResponse::setErrors(const std::vector<std::shared_ptr<KeywordError>>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool KeywordsResponse::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void KeywordsResponse::unsetErrors()
{
    m_ErrorsIsSet = false;
}
std::vector<std::shared_ptr<Keyword>>& KeywordsResponse::getKeywords()
{
    return m_Keywords;
}

void KeywordsResponse::setKeywords(const std::vector<std::shared_ptr<Keyword>>& value)
{
    m_Keywords = value;
    m_KeywordsIsSet = true;
}

bool KeywordsResponse::keywordsIsSet() const
{
    return m_KeywordsIsSet;
}

void KeywordsResponse::unsetKeywords()
{
    m_KeywordsIsSet = false;
}
}
}
}
}


