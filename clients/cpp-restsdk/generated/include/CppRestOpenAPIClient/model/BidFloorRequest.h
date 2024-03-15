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

/*
 * BidFloorRequest.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BidFloorRequest_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BidFloorRequest_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/BidFloorSpec.h"
#include <vector>
#include "CppRestOpenAPIClient/model/TargetingSpec.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class BidFloorSpec;
class TargetingSpec;

/// <summary>
/// 
/// </summary>
class  BidFloorRequest
    : public ModelBase
{
public:
    BidFloorRequest();
    virtual ~BidFloorRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BidFloorRequest members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BidFloorSpec>>& getBidFloorSpecs();
    bool bidFloorSpecsIsSet() const;
    void unsetBid_floor_specs();

    void setBidFloorSpecs(const std::vector<std::shared_ptr<BidFloorSpec>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<TargetingSpec> getTargetingSpec() const;
    bool targetingSpecIsSet() const;
    void unsetTargeting_spec();

    void setTargetingSpec(const std::shared_ptr<TargetingSpec>& value);


protected:
    std::vector<std::shared_ptr<BidFloorSpec>> m_Bid_floor_specs;
    bool m_Bid_floor_specsIsSet;
    std::shared_ptr<TargetingSpec> m_Targeting_spec;
    bool m_Targeting_specIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BidFloorRequest_H_ */
