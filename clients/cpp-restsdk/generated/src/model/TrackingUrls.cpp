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



#include "CppRestOpenAPIClient/model/TrackingUrls.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



TrackingUrls::TrackingUrls()
{
    m_ImpressionIsSet = false;
    m_ClickIsSet = false;
    m_EngagementIsSet = false;
    m_Buyable_buttonIsSet = false;
    m_Audience_verificationIsSet = false;
}

TrackingUrls::~TrackingUrls()
{
}

void TrackingUrls::validate()
{
    // TODO: implement validation
}

web::json::value TrackingUrls::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ImpressionIsSet)
    {
        val[utility::conversions::to_string_t(U("impression"))] = ModelBase::toJson(m_Impression);
    }
    if(m_ClickIsSet)
    {
        val[utility::conversions::to_string_t(U("click"))] = ModelBase::toJson(m_Click);
    }
    if(m_EngagementIsSet)
    {
        val[utility::conversions::to_string_t(U("engagement"))] = ModelBase::toJson(m_Engagement);
    }
    if(m_Buyable_buttonIsSet)
    {
        val[utility::conversions::to_string_t(U("buyable_button"))] = ModelBase::toJson(m_Buyable_button);
    }
    if(m_Audience_verificationIsSet)
    {
        val[utility::conversions::to_string_t(U("audience_verification"))] = ModelBase::toJson(m_Audience_verification);
    }

    return val;
}

bool TrackingUrls::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("impression"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("impression")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setImpression;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImpression);
            setImpression(refVal_setImpression);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("click"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("click")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setClick;
            ok &= ModelBase::fromJson(fieldValue, refVal_setClick);
            setClick(refVal_setClick);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("engagement"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("engagement")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setEngagement;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEngagement);
            setEngagement(refVal_setEngagement);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("buyable_button"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("buyable_button")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setBuyableButton;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBuyableButton);
            setBuyableButton(refVal_setBuyableButton);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("audience_verification"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("audience_verification")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setAudienceVerification;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAudienceVerification);
            setAudienceVerification(refVal_setAudienceVerification);
        }
    }
    return ok;
}

void TrackingUrls::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ImpressionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("impression")), m_Impression));
    }
    if(m_ClickIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("click")), m_Click));
    }
    if(m_EngagementIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("engagement")), m_Engagement));
    }
    if(m_Buyable_buttonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("buyable_button")), m_Buyable_button));
    }
    if(m_Audience_verificationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("audience_verification")), m_Audience_verification));
    }
}

bool TrackingUrls::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("impression"))))
    {
        std::vector<utility::string_t> refVal_setImpression;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("impression"))), refVal_setImpression );
        setImpression(refVal_setImpression);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("click"))))
    {
        std::vector<utility::string_t> refVal_setClick;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("click"))), refVal_setClick );
        setClick(refVal_setClick);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("engagement"))))
    {
        std::vector<utility::string_t> refVal_setEngagement;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("engagement"))), refVal_setEngagement );
        setEngagement(refVal_setEngagement);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("buyable_button"))))
    {
        std::vector<utility::string_t> refVal_setBuyableButton;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("buyable_button"))), refVal_setBuyableButton );
        setBuyableButton(refVal_setBuyableButton);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("audience_verification"))))
    {
        std::vector<utility::string_t> refVal_setAudienceVerification;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("audience_verification"))), refVal_setAudienceVerification );
        setAudienceVerification(refVal_setAudienceVerification);
    }
    return ok;
}

std::vector<utility::string_t>& TrackingUrls::getImpression()
{
    return m_Impression;
}

void TrackingUrls::setImpression(const std::vector<utility::string_t>& value)
{
    m_Impression = value;
    m_ImpressionIsSet = true;
}

bool TrackingUrls::impressionIsSet() const
{
    return m_ImpressionIsSet;
}

void TrackingUrls::unsetImpression()
{
    m_ImpressionIsSet = false;
}
std::vector<utility::string_t>& TrackingUrls::getClick()
{
    return m_Click;
}

void TrackingUrls::setClick(const std::vector<utility::string_t>& value)
{
    m_Click = value;
    m_ClickIsSet = true;
}

bool TrackingUrls::clickIsSet() const
{
    return m_ClickIsSet;
}

void TrackingUrls::unsetClick()
{
    m_ClickIsSet = false;
}
std::vector<utility::string_t>& TrackingUrls::getEngagement()
{
    return m_Engagement;
}

void TrackingUrls::setEngagement(const std::vector<utility::string_t>& value)
{
    m_Engagement = value;
    m_EngagementIsSet = true;
}

bool TrackingUrls::engagementIsSet() const
{
    return m_EngagementIsSet;
}

void TrackingUrls::unsetEngagement()
{
    m_EngagementIsSet = false;
}
std::vector<utility::string_t>& TrackingUrls::getBuyableButton()
{
    return m_Buyable_button;
}

void TrackingUrls::setBuyableButton(const std::vector<utility::string_t>& value)
{
    m_Buyable_button = value;
    m_Buyable_buttonIsSet = true;
}

bool TrackingUrls::buyableButtonIsSet() const
{
    return m_Buyable_buttonIsSet;
}

void TrackingUrls::unsetBuyable_button()
{
    m_Buyable_buttonIsSet = false;
}
std::vector<utility::string_t>& TrackingUrls::getAudienceVerification()
{
    return m_Audience_verification;
}

void TrackingUrls::setAudienceVerification(const std::vector<utility::string_t>& value)
{
    m_Audience_verification = value;
    m_Audience_verificationIsSet = true;
}

bool TrackingUrls::audienceVerificationIsSet() const
{
    return m_Audience_verificationIsSet;
}

void TrackingUrls::unsetAudience_verification()
{
    m_Audience_verificationIsSet = false;
}
}
}
}
}


