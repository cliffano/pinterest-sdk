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



#include "CppRestOpenAPIClient/model/KeywordsCommon.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



KeywordsCommon::KeywordsCommon()
{
    m_Bid = 0;
    m_BidIsSet = false;
    m_Match_typeIsSet = false;
    m_Value = utility::conversions::to_string_t("");
    m_ValueIsSet = false;
}

KeywordsCommon::~KeywordsCommon()
{
}

void KeywordsCommon::validate()
{
    // TODO: implement validation
}

web::json::value KeywordsCommon::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BidIsSet)
    {
        val[utility::conversions::to_string_t(U("bid"))] = ModelBase::toJson(m_Bid);
    }
    if(m_Match_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("match_type"))] = ModelBase::toJson(m_Match_type);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t(U("value"))] = ModelBase::toJson(m_Value);
    }

    return val;
}

bool KeywordsCommon::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("bid"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bid")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setBid;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBid);
            setBid(refVal_setBid);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("match_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("match_type")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<MatchTypeResponse> refVal_setMatchType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMatchType);
            setMatchType(refVal_setMatchType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("value"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("value")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_setValue);
            setValue(refVal_setValue);
        }
    }
    return ok;
}

void KeywordsCommon::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_BidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bid")), m_Bid));
    }
    if(m_Match_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("match_type")), m_Match_type));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("value")), m_Value));
    }
}

bool KeywordsCommon::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("bid"))))
    {
        int32_t refVal_setBid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bid"))), refVal_setBid );
        setBid(refVal_setBid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("match_type"))))
    {
        std::shared_ptr<MatchTypeResponse> refVal_setMatchType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("match_type"))), refVal_setMatchType );
        setMatchType(refVal_setMatchType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("value"))))
    {
        utility::string_t refVal_setValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("value"))), refVal_setValue );
        setValue(refVal_setValue);
    }
    return ok;
}

int32_t KeywordsCommon::getBid() const
{
    return m_Bid;
}

void KeywordsCommon::setBid(int32_t value)
{
    m_Bid = value;
    m_BidIsSet = true;
}

bool KeywordsCommon::bidIsSet() const
{
    return m_BidIsSet;
}

void KeywordsCommon::unsetBid()
{
    m_BidIsSet = false;
}
std::shared_ptr<MatchTypeResponse> KeywordsCommon::getMatchType() const
{
    return m_Match_type;
}

void KeywordsCommon::setMatchType(const std::shared_ptr<MatchTypeResponse>& value)
{
    m_Match_type = value;
    m_Match_typeIsSet = true;
}

bool KeywordsCommon::matchTypeIsSet() const
{
    return m_Match_typeIsSet;
}

void KeywordsCommon::unsetMatch_type()
{
    m_Match_typeIsSet = false;
}
utility::string_t KeywordsCommon::getValue() const
{
    return m_Value;
}

void KeywordsCommon::setValue(const utility::string_t& value)
{
    m_Value = value;
    m_ValueIsSet = true;
}

bool KeywordsCommon::valueIsSet() const
{
    return m_ValueIsSet;
}

void KeywordsCommon::unsetValue()
{
    m_ValueIsSet = false;
}
}
}
}
}


