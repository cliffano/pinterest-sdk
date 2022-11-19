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
 * BidFloorRequest.h
 *
 * 
 */

#ifndef BidFloorRequest_H_
#define BidFloorRequest_H_


#include "TargetingSpec_1.h"
#include "BidFloorSpec.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  BidFloorRequest
{
public:
    BidFloorRequest();
    virtual ~BidFloorRequest() = default;


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

    bool operator==(const BidFloorRequest& rhs) const;
    bool operator!=(const BidFloorRequest& rhs) const;

    /////////////////////////////////////////////
    /// BidFloorRequest members

    /// <summary>
    /// 
    /// </summary>
    std::vector<org::openapitools::server::model::BidFloorSpec> getBidFloorSpecs() const;
    void setBidFloorSpecs(std::vector<org::openapitools::server::model::BidFloorSpec> const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::TargetingSpec_1 getTargetingSpec() const;
    void setTargetingSpec(org::openapitools::server::model::TargetingSpec_1 const& value);
    bool targetingSpecIsSet() const;
    void unsetTargeting_spec();

    friend void to_json(nlohmann::json& j, const BidFloorRequest& o);
    friend void from_json(const nlohmann::json& j, BidFloorRequest& o);
protected:
    std::vector<org::openapitools::server::model::BidFloorSpec> m_Bid_floor_specs;

    org::openapitools::server::model::TargetingSpec_1 m_Targeting_spec;
    bool m_Targeting_specIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* BidFloorRequest_H_ */
