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



#include "CppRestOpenAPIClient/model/ConversionTagResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



ConversionTagResponse::ConversionTagResponse()
{
    m_Ad_account_id = utility::conversions::to_string_t("");
    m_Ad_account_idIsSet = false;
    m_Code_snippet = utility::conversions::to_string_t("");
    m_Code_snippetIsSet = false;
    m_Enhanced_match_statusIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Last_fired_time_ms = 0.0;
    m_Last_fired_time_msIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_StatusIsSet = false;
    m_Version = utility::conversions::to_string_t("");
    m_VersionIsSet = false;
    m_ConfigsIsSet = false;
}

ConversionTagResponse::~ConversionTagResponse()
{
}

void ConversionTagResponse::validate()
{
    // TODO: implement validation
}

web::json::value ConversionTagResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Ad_account_idIsSet)
    {
        val[utility::conversions::to_string_t(U("ad_account_id"))] = ModelBase::toJson(m_Ad_account_id);
    }
    if(m_Code_snippetIsSet)
    {
        val[utility::conversions::to_string_t(U("code_snippet"))] = ModelBase::toJson(m_Code_snippet);
    }
    if(m_Enhanced_match_statusIsSet)
    {
        val[utility::conversions::to_string_t(U("enhanced_match_status"))] = ModelBase::toJson(m_Enhanced_match_status);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_Last_fired_time_msIsSet)
    {
        val[utility::conversions::to_string_t(U("last_fired_time_ms"))] = ModelBase::toJson(m_Last_fired_time_ms);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_VersionIsSet)
    {
        val[utility::conversions::to_string_t(U("version"))] = ModelBase::toJson(m_Version);
    }
    if(m_ConfigsIsSet)
    {
        val[utility::conversions::to_string_t(U("configs"))] = ModelBase::toJson(m_Configs);
    }

    return val;
}

bool ConversionTagResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("ad_account_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ad_account_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAdAccountId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAdAccountId);
            setAdAccountId(refVal_setAdAccountId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("code_snippet"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("code_snippet")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCodeSnippet;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCodeSnippet);
            setCodeSnippet(refVal_setCodeSnippet);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("enhanced_match_status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("enhanced_match_status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<EnhancedMatchStatusType> refVal_setEnhancedMatchStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEnhancedMatchStatus);
            setEnhancedMatchStatus(refVal_setEnhancedMatchStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("last_fired_time_ms"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("last_fired_time_ms")));
        if(!fieldValue.is_null())
        {
            double refVal_setLastFiredTimeMs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLastFiredTimeMs);
            setLastFiredTimeMs(refVal_setLastFiredTimeMs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<EntityStatus> refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("version"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("version")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setVersion;
            ok &= ModelBase::fromJson(fieldValue, refVal_setVersion);
            setVersion(refVal_setVersion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("configs"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("configs")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ConversionTagConfigs> refVal_setConfigs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setConfigs);
            setConfigs(refVal_setConfigs);
        }
    }
    return ok;
}

void ConversionTagResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Ad_account_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ad_account_id")), m_Ad_account_id));
    }
    if(m_Code_snippetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("code_snippet")), m_Code_snippet));
    }
    if(m_Enhanced_match_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("enhanced_match_status")), m_Enhanced_match_status));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_Last_fired_time_msIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("last_fired_time_ms")), m_Last_fired_time_ms));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_VersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("version")), m_Version));
    }
    if(m_ConfigsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("configs")), m_Configs));
    }
}

bool ConversionTagResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("ad_account_id"))))
    {
        utility::string_t refVal_setAdAccountId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ad_account_id"))), refVal_setAdAccountId );
        setAdAccountId(refVal_setAdAccountId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("code_snippet"))))
    {
        utility::string_t refVal_setCodeSnippet;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("code_snippet"))), refVal_setCodeSnippet );
        setCodeSnippet(refVal_setCodeSnippet);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("enhanced_match_status"))))
    {
        std::shared_ptr<EnhancedMatchStatusType> refVal_setEnhancedMatchStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("enhanced_match_status"))), refVal_setEnhancedMatchStatus );
        setEnhancedMatchStatus(refVal_setEnhancedMatchStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("last_fired_time_ms"))))
    {
        double refVal_setLastFiredTimeMs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("last_fired_time_ms"))), refVal_setLastFiredTimeMs );
        setLastFiredTimeMs(refVal_setLastFiredTimeMs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        std::shared_ptr<EntityStatus> refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("version"))))
    {
        utility::string_t refVal_setVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("version"))), refVal_setVersion );
        setVersion(refVal_setVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("configs"))))
    {
        std::shared_ptr<ConversionTagConfigs> refVal_setConfigs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("configs"))), refVal_setConfigs );
        setConfigs(refVal_setConfigs);
    }
    return ok;
}

utility::string_t ConversionTagResponse::getAdAccountId() const
{
    return m_Ad_account_id;
}

void ConversionTagResponse::setAdAccountId(const utility::string_t& value)
{
    m_Ad_account_id = value;
    m_Ad_account_idIsSet = true;
}

bool ConversionTagResponse::adAccountIdIsSet() const
{
    return m_Ad_account_idIsSet;
}

void ConversionTagResponse::unsetAd_account_id()
{
    m_Ad_account_idIsSet = false;
}
utility::string_t ConversionTagResponse::getCodeSnippet() const
{
    return m_Code_snippet;
}

void ConversionTagResponse::setCodeSnippet(const utility::string_t& value)
{
    m_Code_snippet = value;
    m_Code_snippetIsSet = true;
}

bool ConversionTagResponse::codeSnippetIsSet() const
{
    return m_Code_snippetIsSet;
}

void ConversionTagResponse::unsetCode_snippet()
{
    m_Code_snippetIsSet = false;
}
std::shared_ptr<EnhancedMatchStatusType> ConversionTagResponse::getEnhancedMatchStatus() const
{
    return m_Enhanced_match_status;
}

void ConversionTagResponse::setEnhancedMatchStatus(const std::shared_ptr<EnhancedMatchStatusType>& value)
{
    m_Enhanced_match_status = value;
    m_Enhanced_match_statusIsSet = true;
}

bool ConversionTagResponse::enhancedMatchStatusIsSet() const
{
    return m_Enhanced_match_statusIsSet;
}

void ConversionTagResponse::unsetEnhanced_match_status()
{
    m_Enhanced_match_statusIsSet = false;
}
utility::string_t ConversionTagResponse::getId() const
{
    return m_Id;
}

void ConversionTagResponse::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool ConversionTagResponse::idIsSet() const
{
    return m_IdIsSet;
}

void ConversionTagResponse::unsetId()
{
    m_IdIsSet = false;
}
double ConversionTagResponse::getLastFiredTimeMs() const
{
    return m_Last_fired_time_ms;
}

void ConversionTagResponse::setLastFiredTimeMs(double value)
{
    m_Last_fired_time_ms = value;
    m_Last_fired_time_msIsSet = true;
}

bool ConversionTagResponse::lastFiredTimeMsIsSet() const
{
    return m_Last_fired_time_msIsSet;
}

void ConversionTagResponse::unsetLast_fired_time_ms()
{
    m_Last_fired_time_msIsSet = false;
}
utility::string_t ConversionTagResponse::getName() const
{
    return m_Name;
}

void ConversionTagResponse::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool ConversionTagResponse::nameIsSet() const
{
    return m_NameIsSet;
}

void ConversionTagResponse::unsetName()
{
    m_NameIsSet = false;
}
std::shared_ptr<EntityStatus> ConversionTagResponse::getStatus() const
{
    return m_Status;
}

void ConversionTagResponse::setStatus(const std::shared_ptr<EntityStatus>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool ConversionTagResponse::statusIsSet() const
{
    return m_StatusIsSet;
}

void ConversionTagResponse::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t ConversionTagResponse::getVersion() const
{
    return m_Version;
}

void ConversionTagResponse::setVersion(const utility::string_t& value)
{
    m_Version = value;
    m_VersionIsSet = true;
}

bool ConversionTagResponse::versionIsSet() const
{
    return m_VersionIsSet;
}

void ConversionTagResponse::unsetVersion()
{
    m_VersionIsSet = false;
}
std::shared_ptr<ConversionTagConfigs> ConversionTagResponse::getConfigs() const
{
    return m_Configs;
}

void ConversionTagResponse::setConfigs(const std::shared_ptr<ConversionTagConfigs>& value)
{
    m_Configs = value;
    m_ConfigsIsSet = true;
}

bool ConversionTagResponse::configsIsSet() const
{
    return m_ConfigsIsSet;
}

void ConversionTagResponse::unsetConfigs()
{
    m_ConfigsIsSet = false;
}
}
}
}
}


