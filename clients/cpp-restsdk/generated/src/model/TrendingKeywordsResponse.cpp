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



#include "CppRestOpenAPIClient/model/TrendingKeywordsResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



TrendingKeywordsResponse::TrendingKeywordsResponse()
{
    m_TrendsIsSet = false;
}

TrendingKeywordsResponse::~TrendingKeywordsResponse()
{
}

void TrendingKeywordsResponse::validate()
{
    // TODO: implement validation
}

web::json::value TrendingKeywordsResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TrendsIsSet)
    {
        val[utility::conversions::to_string_t(U("trends"))] = ModelBase::toJson(m_Trends);
    }

    return val;
}

bool TrendingKeywordsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("trends"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("trends")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<TrendingKeywordsResponse_trends_inner>> refVal_setTrends;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTrends);
            setTrends(refVal_setTrends);
        }
    }
    return ok;
}

void TrendingKeywordsResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TrendsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("trends")), m_Trends));
    }
}

bool TrendingKeywordsResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("trends"))))
    {
        std::vector<std::shared_ptr<TrendingKeywordsResponse_trends_inner>> refVal_setTrends;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("trends"))), refVal_setTrends );
        setTrends(refVal_setTrends);
    }
    return ok;
}

std::vector<std::shared_ptr<TrendingKeywordsResponse_trends_inner>>& TrendingKeywordsResponse::getTrends()
{
    return m_Trends;
}

void TrendingKeywordsResponse::setTrends(const std::vector<std::shared_ptr<TrendingKeywordsResponse_trends_inner>>& value)
{
    m_Trends = value;
    m_TrendsIsSet = true;
}

bool TrendingKeywordsResponse::trendsIsSet() const
{
    return m_TrendsIsSet;
}

void TrendingKeywordsResponse::unsetTrends()
{
    m_TrendsIsSet = false;
}
}
}
}
}


