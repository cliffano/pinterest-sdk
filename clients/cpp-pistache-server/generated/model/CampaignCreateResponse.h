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
 * CampaignCreateResponse.h
 *
 * 
 */

#ifndef CampaignCreateResponse_H_
#define CampaignCreateResponse_H_


#include "CampaignCreateResponseItem.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  CampaignCreateResponse
{
public:
    CampaignCreateResponse();
    virtual ~CampaignCreateResponse() = default;


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

    bool operator==(const CampaignCreateResponse& rhs) const;
    bool operator!=(const CampaignCreateResponse& rhs) const;

    /////////////////////////////////////////////
    /// CampaignCreateResponse members

    /// <summary>
    /// 
    /// </summary>
    std::vector<org::openapitools::server::model::CampaignCreateResponseItem> getItems() const;
    void setItems(std::vector<org::openapitools::server::model::CampaignCreateResponseItem> const& value);
    bool itemsIsSet() const;
    void unsetItems();

    friend  void to_json(nlohmann::json& j, const CampaignCreateResponse& o);
    friend  void from_json(const nlohmann::json& j, CampaignCreateResponse& o);
protected:
    std::vector<org::openapitools::server::model::CampaignCreateResponseItem> m_Items;
    bool m_ItemsIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* CampaignCreateResponse_H_ */
