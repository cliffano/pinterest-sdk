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
 * BulkDownloadRequest_campaign_filter.h
 *
 * 
 */

#ifndef BulkDownloadRequest_campaign_filter_H_
#define BulkDownloadRequest_campaign_filter_H_


#include "CampaignSummaryStatus.h"
#include "ObjectiveType.h"
#include <string>
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  BulkDownloadRequest_campaign_filter
{
public:
    BulkDownloadRequest_campaign_filter();
    virtual ~BulkDownloadRequest_campaign_filter() = default;


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

    bool operator==(const BulkDownloadRequest_campaign_filter& rhs) const;
    bool operator!=(const BulkDownloadRequest_campaign_filter& rhs) const;

    /////////////////////////////////////////////
    /// BulkDownloadRequest_campaign_filter members

    /// <summary>
    /// Unix UTC timestamp.
    /// </summary>
    std::string getStartTime() const;
    void setStartTime(std::string const& value);
    bool startTimeIsSet() const;
    void unsetStart_time();
    /// <summary>
    /// Unix UTC timestamp.
    /// </summary>
    std::string getEndTime() const;
    void setEndTime(std::string const& value);
    bool endTimeIsSet() const;
    void unsetEnd_time();
    /// <summary>
    /// Campaign name
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    std::vector<org::openapitools::server::model::CampaignSummaryStatus> getCampaignStatus() const;
    void setCampaignStatus(std::vector<org::openapitools::server::model::CampaignSummaryStatus> const& value);
    bool campaignStatusIsSet() const;
    void unsetCampaign_status();
    /// <summary>
    /// 
    /// </summary>
    std::vector<org::openapitools::server::model::ObjectiveType> getObjectiveType() const;
    void setObjectiveType(std::vector<org::openapitools::server::model::ObjectiveType> const& value);
    bool objectiveTypeIsSet() const;
    void unsetObjective_type();

    friend  void to_json(nlohmann::json& j, const BulkDownloadRequest_campaign_filter& o);
    friend  void from_json(const nlohmann::json& j, BulkDownloadRequest_campaign_filter& o);
protected:
    std::string m_Start_time;
    bool m_Start_timeIsSet;
    std::string m_End_time;
    bool m_End_timeIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    std::vector<org::openapitools::server::model::CampaignSummaryStatus> m_Campaign_status;
    bool m_Campaign_statusIsSet;
    std::vector<org::openapitools::server::model::ObjectiveType> m_Objective_type;
    bool m_Objective_typeIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* BulkDownloadRequest_campaign_filter_H_ */
