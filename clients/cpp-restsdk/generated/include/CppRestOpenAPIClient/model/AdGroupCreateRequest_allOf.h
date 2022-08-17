/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * AdGroupCreateRequest_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AdGroupCreateRequest_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AdGroupCreateRequest_allOf_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/TargetingSpec.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class TargetingSpec;

/// <summary>
/// 
/// </summary>
class  AdGroupCreateRequest_allOf
    : public ModelBase
{
public:
    AdGroupCreateRequest_allOf();
    virtual ~AdGroupCreateRequest_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AdGroupCreateRequest_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<TargetingSpec> getTargetingSpec() const;
    bool targetingSpecIsSet() const;
    void unsetTargeting_spec();

    void setTargetingSpec(const std::shared_ptr<TargetingSpec>& value);


protected:
    std::shared_ptr<TargetingSpec> m_Targeting_spec;
    bool m_Targeting_specIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AdGroupCreateRequest_allOf_H_ */