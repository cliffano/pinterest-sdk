/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ActionType.h
 *
 * Ad group billable event type.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ActionType_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ActionType_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  ActionType
    : public ModelBase
{
public:
    ActionType();
    virtual ~ActionType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eActionType
    {
        ActionType_CLICKTHROUGH,
        ActionType_IMPRESSION,
        ActionType_VIDEO_V_50_MRC,
        ActionType_BILLABLE_ENGAGEMENT,
    };

    eActionType getValue() const;
    void setValue(eActionType const value);

    protected:
        eActionType m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ActionType_H_ */
