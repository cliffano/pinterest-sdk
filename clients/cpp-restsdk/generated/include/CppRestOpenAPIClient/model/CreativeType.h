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
 * CreativeType.h
 *
 * Ad creative type enum
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CreativeType_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CreativeType_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  CreativeType
    : public ModelBase
{
public:
    CreativeType();
    virtual ~CreativeType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eCreativeType
    {
        CreativeType_REGULAR,
        CreativeType_VIDEO,
        CreativeType_SHOPPING,
        CreativeType_CAROUSEL,
        CreativeType_MAX_VIDEO,
        CreativeType_SHOP_THE_PIN,
        CreativeType_IDEA,
    };

    eCreativeType getValue() const;
    void setValue(eCreativeType const value);

    protected:
        eCreativeType m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CreativeType_H_ */