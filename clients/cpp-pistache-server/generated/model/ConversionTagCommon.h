/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ConversionTagCommon.h
 *
 * 
 */

#ifndef ConversionTagCommon_H_
#define ConversionTagCommon_H_


#include "ConversionTagConfigs.h"
#include "EnhancedMatchStatusType.h"
#include "EntityStatus.h"
#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  ConversionTagCommon
{
public:
    ConversionTagCommon();
    virtual ~ConversionTagCommon() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const ConversionTagCommon& rhs) const;
    bool operator!=(const ConversionTagCommon& rhs) const;

    /////////////////////////////////////////////
    /// ConversionTagCommon members

    /// <summary>
    /// Ad account ID.
    /// </summary>
    std::string getAdAccountId() const;
    void setAdAccountId(std::string const& value);
    bool adAccountIdIsSet() const;
    void unsetAd_account_id();
    /// <summary>
    /// Tag code snippet.
    /// </summary>
    std::string getCodeSnippet() const;
    void setCodeSnippet(std::string const& value);
    bool codeSnippetIsSet() const;
    void unsetCode_snippet();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::EnhancedMatchStatusType getEnhancedMatchStatus() const;
    void setEnhancedMatchStatus(org::openapitools::server::model::EnhancedMatchStatusType const& value);
    bool enhancedMatchStatusIsSet() const;
    void unsetEnhanced_match_status();
    /// <summary>
    /// Tag ID.
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// Time for the last event fired.
    /// </summary>
    double getLastFiredTimeMs() const;
    void setLastFiredTimeMs(double const value);
    bool lastFiredTimeMsIsSet() const;
    void unsetLast_fired_time_ms();
    /// <summary>
    /// Conversion tag name.
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::EntityStatus getStatus() const;
    void setStatus(org::openapitools::server::model::EntityStatus const& value);
    bool statusIsSet() const;
    void unsetStatus();
    /// <summary>
    /// Version number.
    /// </summary>
    std::string getVersion() const;
    void setVersion(std::string const& value);
    bool versionIsSet() const;
    void unsetVersion();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::ConversionTagConfigs getConfigs() const;
    void setConfigs(org::openapitools::server::model::ConversionTagConfigs const& value);
    bool configsIsSet() const;
    void unsetConfigs();

    friend  void to_json(nlohmann::json& j, const ConversionTagCommon& o);
    friend  void from_json(const nlohmann::json& j, ConversionTagCommon& o);
protected:
    std::string m_Ad_account_id;
    bool m_Ad_account_idIsSet;
    std::string m_Code_snippet;
    bool m_Code_snippetIsSet;
    org::openapitools::server::model::EnhancedMatchStatusType m_Enhanced_match_status;
    bool m_Enhanced_match_statusIsSet;
    std::string m_Id;
    bool m_IdIsSet;
    double m_Last_fired_time_ms;
    bool m_Last_fired_time_msIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    org::openapitools::server::model::EntityStatus m_Status;
    bool m_StatusIsSet;
    std::string m_Version;
    bool m_VersionIsSet;
    org::openapitools::server::model::ConversionTagConfigs m_Configs;
    bool m_ConfigsIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* ConversionTagCommon_H_ */
