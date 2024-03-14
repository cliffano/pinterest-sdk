/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * TargetingTypeFilter.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_TargetingTypeFilter_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_TargetingTypeFilter_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/AdsAnalyticsTargetingType.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  TargetingTypeFilter
    : public ModelBase
{
public:
    TargetingTypeFilter();
    virtual ~TargetingTypeFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TargetingTypeFilter members

    /// <summary>
    /// List of targeting types
    /// </summary>
    std::vector<std::shared_ptr<AdsAnalyticsTargetingType>>& getTargetingTypes();
    bool targetingTypesIsSet() const;
    void unsetTargeting_types();

    void setTargetingTypes(const std::vector<std::shared_ptr<AdsAnalyticsTargetingType>>& value);


protected:
    std::vector<std::shared_ptr<AdsAnalyticsTargetingType>> m_Targeting_types;
    bool m_Targeting_typesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_TargetingTypeFilter_H_ */
