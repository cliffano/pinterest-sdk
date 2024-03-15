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
 * ConversionEventResponse.h
 *
 * 
 */

#ifndef ConversionEventResponse_H_
#define ConversionEventResponse_H_


#include "ConversionTagType.h"
#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  ConversionEventResponse
{
public:
    ConversionEventResponse();
    virtual ~ConversionEventResponse() = default;


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

    bool operator==(const ConversionEventResponse& rhs) const;
    bool operator!=(const ConversionEventResponse& rhs) const;

    /////////////////////////////////////////////
    /// ConversionEventResponse members

    /// <summary>
    /// 
    /// </summary>
    ConversionTagType getConversionEvent() const;
    void setConversionEvent(ConversionTagType const& value);
    bool conversionEventIsSet() const;
    void unsetConversion_event();
    /// <summary>
    /// Id of the tag.
    /// </summary>
    std::string getConversionTagId() const;
    void setConversionTagId(std::string const& value);
    bool conversionTagIdIsSet() const;
    void unsetConversion_tag_id();
    /// <summary>
    /// Id of the ad account.
    /// </summary>
    std::string getAdAccountId() const;
    void setAdAccountId(std::string const& value);
    bool adAccountIdIsSet() const;
    void unsetAd_account_id();
    /// <summary>
    /// Creation date in epoch format.
    /// </summary>
    int32_t getCreatedTime() const;
    void setCreatedTime(int32_t const value);
    bool createdTimeIsSet() const;
    void unsetCreated_time();

    friend  void to_json(nlohmann::json& j, const ConversionEventResponse& o);
    friend  void from_json(const nlohmann::json& j, ConversionEventResponse& o);
protected:
    ConversionTagType m_Conversion_event;
    bool m_Conversion_eventIsSet;
    std::string m_Conversion_tag_id;
    bool m_Conversion_tag_idIsSet;
    std::string m_Ad_account_id;
    bool m_Ad_account_idIsSet;
    int32_t m_Created_time;
    bool m_Created_timeIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* ConversionEventResponse_H_ */
