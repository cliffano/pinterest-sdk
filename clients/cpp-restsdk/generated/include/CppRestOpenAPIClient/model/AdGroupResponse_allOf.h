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
 * AdGroupResponse_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AdGroupResponse_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AdGroupResponse_allOf_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/AdGroupSummaryStatus.h"
#include "CppRestOpenAPIClient/model/AnyType.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  AdGroupResponse_allOf
    : public ModelBase
{
public:
    AdGroupResponse_allOf();
    virtual ~AdGroupResponse_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AdGroupResponse_allOf members

    /// <summary>
    /// Ad group ID.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// Advertiser ID.
    /// </summary>
    utility::string_t getAdAccountId() const;
    bool adAccountIdIsSet() const;
    void unsetAd_account_id();

    void setAdAccountId(const utility::string_t& value);

    /// <summary>
    /// Ad group creation time. Unix timestamp in seconds.
    /// </summary>
    int32_t getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetCreated_time();

    void setCreatedTime(int32_t value);

    /// <summary>
    /// Ad group last update time. Unix timestamp in seconds.
    /// </summary>
    int32_t getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetUpdated_time();

    void setUpdatedTime(int32_t value);

    /// <summary>
    /// Always \&quot;adgroup\&quot;.
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);

    /// <summary>
    /// oCPM learn mode
    /// </summary>
    utility::string_t getConversionLearningModeType() const;
    bool conversionLearningModeTypeIsSet() const;
    void unsetConversion_learning_mode_type();

    void setConversionLearningModeType(const utility::string_t& value);

    /// <summary>
    /// Ad group summary status.
    /// </summary>
    AdGroupSummaryStatus getSummaryStatus() const;
    bool summaryStatusIsSet() const;
    void unsetSummary_status();

    void setSummaryStatus(const AdGroupSummaryStatus& value);

    /// <summary>
    /// Feed Profile ID associated to the adgroup.
    /// </summary>
    utility::string_t getFeedProfileId() const;
    bool feedProfileIdIsSet() const;
    void unsetFeed_profile_id();

    void setFeedProfileId(const utility::string_t& value);

    /// <summary>
    /// [DCA] The Dynamic creative assets to use for DCA. Dynamic Creative Assembly (DCA) accepts basic creative assets of an ad (image, video, title, call to action, logo etc). Then it automatically generates optimized ad combinations based on these assets.
    /// </summary>
    std::shared_ptr<AnyType> getDcaAssets() const;
    bool dcaAssetsIsSet() const;
    void unsetDca_assets();

    void setDcaAssets(const std::shared_ptr<AnyType>& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Ad_account_id;
    bool m_Ad_account_idIsSet;
    int32_t m_Created_time;
    bool m_Created_timeIsSet;
    int32_t m_Updated_time;
    bool m_Updated_timeIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Conversion_learning_mode_type;
    bool m_Conversion_learning_mode_typeIsSet;
    AdGroupSummaryStatus m_Summary_status;
    bool m_Summary_statusIsSet;
    utility::string_t m_Feed_profile_id;
    bool m_Feed_profile_idIsSet;
    std::shared_ptr<AnyType> m_Dca_assets;
    bool m_Dca_assetsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AdGroupResponse_allOf_H_ */