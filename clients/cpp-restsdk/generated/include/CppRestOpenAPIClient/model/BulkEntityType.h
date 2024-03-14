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
 * BulkEntityType.h
 *
 * Refers ads entity type
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BulkEntityType_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BulkEntityType_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  BulkEntityType
    : public ModelBase
{
public:
    BulkEntityType();
    virtual ~BulkEntityType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eBulkEntityType
    {
        BulkEntityType_CAMPAIGN,
        BulkEntityType_AD_GROUP,
        BulkEntityType_PRODUCT_GROUP,
        BulkEntityType_AD,
        BulkEntityType_KEYWORD,
    };

    eBulkEntityType getValue() const;
    void setValue(eBulkEntityType const value);

    protected:
        eBulkEntityType m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BulkEntityType_H_ */
