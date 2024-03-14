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
 * NullableCatalogsItemFieldType.h
 *
 * Product item fields
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_NullableCatalogsItemFieldType_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_NullableCatalogsItemFieldType_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  NullableCatalogsItemFieldType
    : public ModelBase
{
public:
    NullableCatalogsItemFieldType();
    virtual ~NullableCatalogsItemFieldType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eNullableCatalogsItemFieldType
    {
        NullableCatalogsItemFieldType_ITEM_ID,
        NullableCatalogsItemFieldType_ITEM_GROUP_ID,
        NullableCatalogsItemFieldType_TITLE,
        NullableCatalogsItemFieldType_DESCRIPTION,
        NullableCatalogsItemFieldType_ITEM_LINK,
        NullableCatalogsItemFieldType_ORGANIC_LINK,
        NullableCatalogsItemFieldType_IMAGE_LINK,
        NullableCatalogsItemFieldType_ADWORDS_REDIRECT_LINK,
        NullableCatalogsItemFieldType_AD_LINK,
        NullableCatalogsItemFieldType_SIZE,
        NullableCatalogsItemFieldType_GOOGLE_PRODUCT_CATEGORY,
        NullableCatalogsItemFieldType_PRODUCT_CATEGORY,
        NullableCatalogsItemFieldType_CONDITION,
        NullableCatalogsItemFieldType_AVAILABILITY,
        NullableCatalogsItemFieldType_GENDER,
        NullableCatalogsItemFieldType_AGE_GROUP,
        NullableCatalogsItemFieldType_SIZE_TYPE,
        NullableCatalogsItemFieldType_SIZE_SYSTEM,
        NullableCatalogsItemFieldType_ADULT,
        NullableCatalogsItemFieldType_SHIPPING,
        NullableCatalogsItemFieldType_SHIPPING_WEIGHT,
        NullableCatalogsItemFieldType_TAX,
        NullableCatalogsItemFieldType_MULTIPACK,
        NullableCatalogsItemFieldType_ADDITIONAL_IMAGE_LINK,
        NullableCatalogsItemFieldType_PRICE,
        NullableCatalogsItemFieldType_SALE_PRICE,
        NullableCatalogsItemFieldType_IS_BUNDLE,
        NullableCatalogsItemFieldType_EXPIRATION_DATE,
        NullableCatalogsItemFieldType_SALE_PRICE_EFFECTIVE_DATE,
        NullableCatalogsItemFieldType_AVAILABILITY_DATE,
        NullableCatalogsItemFieldType_WEIGHT_UNIT,
        NullableCatalogsItemFieldType_PRODUCT_TYPE,
        NullableCatalogsItemFieldType_CUSTOM_LABEL_0,
        NullableCatalogsItemFieldType_CUSTOM_LABEL_1,
        NullableCatalogsItemFieldType_CUSTOM_LABEL_2,
        NullableCatalogsItemFieldType_CUSTOM_LABEL_3,
        NullableCatalogsItemFieldType_CUSTOM_LABEL_4,
        NullableCatalogsItemFieldType_MATERIAL,
        NullableCatalogsItemFieldType_PATTERN,
        NullableCatalogsItemFieldType_COLOR,
        NullableCatalogsItemFieldType_BRAND,
        NullableCatalogsItemFieldType_GTIN,
        NullableCatalogsItemFieldType_MPN,
        NullableCatalogsItemFieldType_IOS_DEEP_LINK,
        NullableCatalogsItemFieldType_ANDROID_DEEP_LINK,
        NullableCatalogsItemFieldType_FREE_SHIPPING_LABEL,
        NullableCatalogsItemFieldType_FREE_SHIPPING_LIMIT,
        NullableCatalogsItemFieldType_AVG_REVIEW_RATING,
        NullableCatalogsItemFieldType_NUM_RATINGS,
        NullableCatalogsItemFieldType_NUM_REVIEWS,
        NullableCatalogsItemFieldType_ALT_TEXT,
        NullableCatalogsItemFieldType_VARIANT_NAMES,
        NullableCatalogsItemFieldType_VARIANT_VALUES,
        NullableCatalogsItemFieldType_MIN_AD_PRICE,
        NullableCatalogsItemFieldType_SHIPPING_WIDTH,
        NullableCatalogsItemFieldType_SHIPPING_HEIGHT,
        NullableCatalogsItemFieldType_r_NULL,
    };

    eNullableCatalogsItemFieldType getValue() const;
    void setValue(eNullableCatalogsItemFieldType const value);

    protected:
        eNullableCatalogsItemFieldType m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_NullableCatalogsItemFieldType_H_ */
