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
 * PacingDeliveryType.h
 *
 * Ad group pacing delivery type
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_PacingDeliveryType_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_PacingDeliveryType_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  PacingDeliveryType
    : public ModelBase
{
public:
    PacingDeliveryType();
    virtual ~PacingDeliveryType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class ePacingDeliveryType
    {
        PacingDeliveryType_STANDARD,
        PacingDeliveryType_ACCELERATED,
    };

    ePacingDeliveryType getValue() const;
    void setValue(ePacingDeliveryType const value);

    protected:
        ePacingDeliveryType m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_PacingDeliveryType_H_ */
