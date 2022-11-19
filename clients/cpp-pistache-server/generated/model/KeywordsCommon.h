/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * KeywordsCommon.h
 *
 * 
 */

#ifndef KeywordsCommon_H_
#define KeywordsCommon_H_


#include <string>
#include "MatchTypeResponse.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  KeywordsCommon
{
public:
    KeywordsCommon();
    virtual ~KeywordsCommon() = default;


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

    bool operator==(const KeywordsCommon& rhs) const;
    bool operator!=(const KeywordsCommon& rhs) const;

    /////////////////////////////////////////////
    /// KeywordsCommon members

    /// <summary>
    /// Keyword custom bid in microcurrency - null if inherited from parent ad group.
    /// </summary>
    int32_t getBid() const;
    void setBid(int32_t const value);
    bool bidIsSet() const;
    void unsetBid();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::MatchTypeResponse getMatchType() const;
    void setMatchType(org::openapitools::server::model::MatchTypeResponse const& value);
    /// <summary>
    /// Keyword value (120 chars max).
    /// </summary>
    std::string getValue() const;
    void setValue(std::string const& value);

    friend void to_json(nlohmann::json& j, const KeywordsCommon& o);
    friend void from_json(const nlohmann::json& j, KeywordsCommon& o);
protected:
    int32_t m_Bid;
    bool m_BidIsSet;
    org::openapitools::server::model::MatchTypeResponse m_Match_type;

    std::string m_Value;

    
};

} // namespace org::openapitools::server::model

#endif /* KeywordsCommon_H_ */
