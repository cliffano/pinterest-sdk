/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CatalogsFeedProductCounts.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




CatalogsFeedProductCounts::CatalogsFeedProductCounts()
{
    m_Original = 0;
    m_OriginalIsSet = false;
}

CatalogsFeedProductCounts::~CatalogsFeedProductCounts()
{
}

void CatalogsFeedProductCounts::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsFeedProductCounts::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_OriginalIsSet)
    {
        val[utility::conversions::to_string_t(U("original"))] = ModelBase::toJson(m_Original);
    }

    return val;
}

bool CatalogsFeedProductCounts::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("original"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("original")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_original;
            ok &= ModelBase::fromJson(fieldValue, refVal_original);
            setOriginal(refVal_original);
        }
    }
    return ok;
}

void CatalogsFeedProductCounts::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_OriginalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("original")), m_Original));
    }
}

bool CatalogsFeedProductCounts::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("original"))))
    {
        int32_t refVal_original;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("original"))), refVal_original );
        setOriginal(refVal_original);
    }
    return ok;
}

int32_t CatalogsFeedProductCounts::getOriginal() const
{
    return m_Original;
}

void CatalogsFeedProductCounts::setOriginal(int32_t value)
{
    m_Original = value;
    m_OriginalIsSet = true;
}

bool CatalogsFeedProductCounts::originalIsSet() const
{
    return m_OriginalIsSet;
}

void CatalogsFeedProductCounts::unsetOriginal()
{
    m_OriginalIsSet = false;
}
}
}
}
}

