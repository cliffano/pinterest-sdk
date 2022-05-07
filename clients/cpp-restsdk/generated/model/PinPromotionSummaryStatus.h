/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * PinPromotionSummaryStatus.h
 *
 * Summary status for pin promotions
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_PinPromotionSummaryStatus_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_PinPromotionSummaryStatus_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  PinPromotionSummaryStatus
    : public ModelBase
{
public:
    PinPromotionSummaryStatus();
    virtual ~PinPromotionSummaryStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class ePinPromotionSummaryStatus
    {
        PinPromotionSummaryStatus_APPROVED,
        PinPromotionSummaryStatus_PAUSED,
        PinPromotionSummaryStatus_PENDING,
        PinPromotionSummaryStatus_REJECTED,
        PinPromotionSummaryStatus_ADVERTISER_DISABLED,
        PinPromotionSummaryStatus_ARCHIVED,
    };

    ePinPromotionSummaryStatus getValue() const;
    void setValue(ePinPromotionSummaryStatus const value);

    protected:
        ePinPromotionSummaryStatus m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_PinPromotionSummaryStatus_H_ */
