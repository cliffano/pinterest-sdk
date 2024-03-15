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



#include "CppRestOpenAPIClient/model/AdsAnalyticsResponse_inner.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



AdsAnalyticsResponse_inner::AdsAnalyticsResponse_inner()
{
    m_AD_ID = utility::conversions::to_string_t("");
    m_AD_IDIsSet = false;
    m_DATEIsSet = false;
}

AdsAnalyticsResponse_inner::~AdsAnalyticsResponse_inner()
{
}

void AdsAnalyticsResponse_inner::validate()
{
    // TODO: implement validation
}

web::json::value AdsAnalyticsResponse_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AD_IDIsSet)
    {
        val[utility::conversions::to_string_t(U("AD_ID"))] = ModelBase::toJson(m_AD_ID);
    }
    if(m_DATEIsSet)
    {
        val[utility::conversions::to_string_t(U("DATE"))] = ModelBase::toJson(m_DATE);
    }

    return val;
}

bool AdsAnalyticsResponse_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("AD_ID"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("AD_ID")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setADID;
            ok &= ModelBase::fromJson(fieldValue, refVal_setADID);
            setADID(refVal_setADID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("DATE"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("DATE")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setDATE;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDATE);
            setDATE(refVal_setDATE);
        }
    }
    return ok;
}

void AdsAnalyticsResponse_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_AD_IDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("AD_ID")), m_AD_ID));
    }
    if(m_DATEIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("DATE")), m_DATE));
    }
}

bool AdsAnalyticsResponse_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("AD_ID"))))
    {
        utility::string_t refVal_setADID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("AD_ID"))), refVal_setADID );
        setADID(refVal_setADID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("DATE"))))
    {
        utility::datetime refVal_setDATE;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("DATE"))), refVal_setDATE );
        setDATE(refVal_setDATE);
    }
    return ok;
}

utility::string_t AdsAnalyticsResponse_inner::getADID() const
{
    return m_AD_ID;
}

void AdsAnalyticsResponse_inner::setADID(const utility::string_t& value)
{
    m_AD_ID = value;
    m_AD_IDIsSet = true;
}

bool AdsAnalyticsResponse_inner::aDIDIsSet() const
{
    return m_AD_IDIsSet;
}

void AdsAnalyticsResponse_inner::unsetAD_ID()
{
    m_AD_IDIsSet = false;
}
utility::datetime AdsAnalyticsResponse_inner::getDATE() const
{
    return m_DATE;
}

void AdsAnalyticsResponse_inner::setDATE(const utility::datetime& value)
{
    m_DATE = value;
    m_DATEIsSet = true;
}

bool AdsAnalyticsResponse_inner::dATEIsSet() const
{
    return m_DATEIsSet;
}

void AdsAnalyticsResponse_inner::unsetDATE()
{
    m_DATEIsSet = false;
}
}
}
}
}


