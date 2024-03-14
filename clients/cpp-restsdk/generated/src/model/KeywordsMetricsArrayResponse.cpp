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



#include "CppRestOpenAPIClient/model/KeywordsMetricsArrayResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



KeywordsMetricsArrayResponse::KeywordsMetricsArrayResponse()
{
    m_DataIsSet = false;
}

KeywordsMetricsArrayResponse::~KeywordsMetricsArrayResponse()
{
}

void KeywordsMetricsArrayResponse::validate()
{
    // TODO: implement validation
}

web::json::value KeywordsMetricsArrayResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t(U("data"))] = ModelBase::toJson(m_Data);
    }

    return val;
}

bool KeywordsMetricsArrayResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("data"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("data")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<KeywordMetricsResponse>> refVal_setData;
            ok &= ModelBase::fromJson(fieldValue, refVal_setData);
            setData(refVal_setData);
        }
    }
    return ok;
}

void KeywordsMetricsArrayResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("data")), m_Data));
    }
}

bool KeywordsMetricsArrayResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("data"))))
    {
        std::vector<std::shared_ptr<KeywordMetricsResponse>> refVal_setData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("data"))), refVal_setData );
        setData(refVal_setData);
    }
    return ok;
}

std::vector<std::shared_ptr<KeywordMetricsResponse>>& KeywordsMetricsArrayResponse::getData()
{
    return m_Data;
}

void KeywordsMetricsArrayResponse::setData(const std::vector<std::shared_ptr<KeywordMetricsResponse>>& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool KeywordsMetricsArrayResponse::dataIsSet() const
{
    return m_DataIsSet;
}

void KeywordsMetricsArrayResponse::unsetData()
{
    m_DataIsSet = false;
}
}
}
}
}

