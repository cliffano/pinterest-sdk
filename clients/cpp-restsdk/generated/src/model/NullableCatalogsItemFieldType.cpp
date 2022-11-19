/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/NullableCatalogsItemFieldType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("ITEM_ID")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ITEM_ID;
    if (val == utility::conversions::to_string_t(U("ITEM_GROUP_ID")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ITEM_GROUP_ID;
    if (val == utility::conversions::to_string_t(U("TITLE")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_TITLE;
    if (val == utility::conversions::to_string_t(U("DESCRIPTION")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_DESCRIPTION;
    if (val == utility::conversions::to_string_t(U("ITEM_LINK")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ITEM_LINK;
    if (val == utility::conversions::to_string_t(U("ORGANIC_LINK")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ORGANIC_LINK;
    if (val == utility::conversions::to_string_t(U("IMAGE_LINK")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_IMAGE_LINK;
    if (val == utility::conversions::to_string_t(U("ADWORDS_REDIRECT_LINK")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ADWORDS_REDIRECT_LINK;
    if (val == utility::conversions::to_string_t(U("AD_LINK")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_AD_LINK;
    if (val == utility::conversions::to_string_t(U("SIZE")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SIZE;
    if (val == utility::conversions::to_string_t(U("GOOGLE_PRODUCT_CATEGORY")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_GOOGLE_PRODUCT_CATEGORY;
    if (val == utility::conversions::to_string_t(U("PRODUCT_CATEGORY")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_PRODUCT_CATEGORY;
    if (val == utility::conversions::to_string_t(U("CONDITION")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_CONDITION;
    if (val == utility::conversions::to_string_t(U("AVAILABILITY")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_AVAILABILITY;
    if (val == utility::conversions::to_string_t(U("GENDER")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_GENDER;
    if (val == utility::conversions::to_string_t(U("AGE_GROUP")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_AGE_GROUP;
    if (val == utility::conversions::to_string_t(U("SIZE_TYPE")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SIZE_TYPE;
    if (val == utility::conversions::to_string_t(U("SIZE_SYSTEM")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SIZE_SYSTEM;
    if (val == utility::conversions::to_string_t(U("ADULT")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ADULT;
    if (val == utility::conversions::to_string_t(U("SHIPPING")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SHIPPING;
    if (val == utility::conversions::to_string_t(U("SHIPPING_WEIGHT")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SHIPPING_WEIGHT;
    if (val == utility::conversions::to_string_t(U("TAX")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_TAX;
    if (val == utility::conversions::to_string_t(U("MULTIPACK")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_MULTIPACK;
    if (val == utility::conversions::to_string_t(U("ADDITIONAL_IMAGE_LINK")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ADDITIONAL_IMAGE_LINK;
    if (val == utility::conversions::to_string_t(U("PRICE")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_PRICE;
    if (val == utility::conversions::to_string_t(U("SALE_PRICE")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SALE_PRICE;
    if (val == utility::conversions::to_string_t(U("IS_BUNDLE")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_IS_BUNDLE;
    if (val == utility::conversions::to_string_t(U("EXPIRATION_DATE")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_EXPIRATION_DATE;
    if (val == utility::conversions::to_string_t(U("SALE_PRICE_EFFECTIVE_DATE")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SALE_PRICE_EFFECTIVE_DATE;
    if (val == utility::conversions::to_string_t(U("AVAILABILITY_DATE")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_AVAILABILITY_DATE;
    if (val == utility::conversions::to_string_t(U("WEIGHT_UNIT")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_WEIGHT_UNIT;
    if (val == utility::conversions::to_string_t(U("PRODUCT_TYPE")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_PRODUCT_TYPE;
    if (val == utility::conversions::to_string_t(U("CUSTOM_LABEL_0")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_CUSTOM_LABEL_0;
    if (val == utility::conversions::to_string_t(U("CUSTOM_LABEL_1")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_CUSTOM_LABEL_1;
    if (val == utility::conversions::to_string_t(U("CUSTOM_LABEL_2")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_CUSTOM_LABEL_2;
    if (val == utility::conversions::to_string_t(U("CUSTOM_LABEL_3")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_CUSTOM_LABEL_3;
    if (val == utility::conversions::to_string_t(U("CUSTOM_LABEL_4")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_CUSTOM_LABEL_4;
    if (val == utility::conversions::to_string_t(U("MATERIAL")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_MATERIAL;
    if (val == utility::conversions::to_string_t(U("PATTERN")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_PATTERN;
    if (val == utility::conversions::to_string_t(U("COLOR")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_COLOR;
    if (val == utility::conversions::to_string_t(U("BRAND")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_BRAND;
    if (val == utility::conversions::to_string_t(U("GTIN")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_GTIN;
    if (val == utility::conversions::to_string_t(U("MPN")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_MPN;
    if (val == utility::conversions::to_string_t(U("IOS_DEEP_LINK")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_IOS_DEEP_LINK;
    if (val == utility::conversions::to_string_t(U("ANDROID_DEEP_LINK")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ANDROID_DEEP_LINK;
    if (val == utility::conversions::to_string_t(U("FREE_SHIPPING_LABEL")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_FREE_SHIPPING_LABEL;
    if (val == utility::conversions::to_string_t(U("FREE_SHIPPING_LIMIT")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_FREE_SHIPPING_LIMIT;
    if (val == utility::conversions::to_string_t(U("AVG_REVIEW_RATING")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_AVG_REVIEW_RATING;
    if (val == utility::conversions::to_string_t(U("NUM_RATINGS")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_NUM_RATINGS;
    if (val == utility::conversions::to_string_t(U("NUM_REVIEWS")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_NUM_REVIEWS;
    if (val == utility::conversions::to_string_t(U("ALT_TEXT")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ALT_TEXT;
    if (val == utility::conversions::to_string_t(U("VARIANT_NAMES")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_VARIANT_NAMES;
    if (val == utility::conversions::to_string_t(U("VARIANT_VALUES")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_VARIANT_VALUES;
    if (val == utility::conversions::to_string_t(U("MIN_AD_PRICE")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_MIN_AD_PRICE;
    if (val == utility::conversions::to_string_t(U("SHIPPING_WIDTH")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SHIPPING_WIDTH;
    if (val == utility::conversions::to_string_t(U("SHIPPING_HEIGHT")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SHIPPING_HEIGHT;
    if (val == utility::conversions::to_string_t(U("null")))
        return NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_NULL;
    return {};
}

EnumUnderlyingType fromEnum(NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType e)
{
    switch (e)
    {
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ITEM_ID:
        return U("ITEM_ID");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ITEM_GROUP_ID:
        return U("ITEM_GROUP_ID");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_TITLE:
        return U("TITLE");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_DESCRIPTION:
        return U("DESCRIPTION");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ITEM_LINK:
        return U("ITEM_LINK");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ORGANIC_LINK:
        return U("ORGANIC_LINK");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_IMAGE_LINK:
        return U("IMAGE_LINK");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ADWORDS_REDIRECT_LINK:
        return U("ADWORDS_REDIRECT_LINK");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_AD_LINK:
        return U("AD_LINK");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SIZE:
        return U("SIZE");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_GOOGLE_PRODUCT_CATEGORY:
        return U("GOOGLE_PRODUCT_CATEGORY");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_PRODUCT_CATEGORY:
        return U("PRODUCT_CATEGORY");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_CONDITION:
        return U("CONDITION");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_AVAILABILITY:
        return U("AVAILABILITY");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_GENDER:
        return U("GENDER");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_AGE_GROUP:
        return U("AGE_GROUP");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SIZE_TYPE:
        return U("SIZE_TYPE");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SIZE_SYSTEM:
        return U("SIZE_SYSTEM");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ADULT:
        return U("ADULT");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SHIPPING:
        return U("SHIPPING");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SHIPPING_WEIGHT:
        return U("SHIPPING_WEIGHT");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_TAX:
        return U("TAX");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_MULTIPACK:
        return U("MULTIPACK");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ADDITIONAL_IMAGE_LINK:
        return U("ADDITIONAL_IMAGE_LINK");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_PRICE:
        return U("PRICE");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SALE_PRICE:
        return U("SALE_PRICE");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_IS_BUNDLE:
        return U("IS_BUNDLE");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_EXPIRATION_DATE:
        return U("EXPIRATION_DATE");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SALE_PRICE_EFFECTIVE_DATE:
        return U("SALE_PRICE_EFFECTIVE_DATE");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_AVAILABILITY_DATE:
        return U("AVAILABILITY_DATE");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_WEIGHT_UNIT:
        return U("WEIGHT_UNIT");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_PRODUCT_TYPE:
        return U("PRODUCT_TYPE");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_CUSTOM_LABEL_0:
        return U("CUSTOM_LABEL_0");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_CUSTOM_LABEL_1:
        return U("CUSTOM_LABEL_1");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_CUSTOM_LABEL_2:
        return U("CUSTOM_LABEL_2");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_CUSTOM_LABEL_3:
        return U("CUSTOM_LABEL_3");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_CUSTOM_LABEL_4:
        return U("CUSTOM_LABEL_4");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_MATERIAL:
        return U("MATERIAL");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_PATTERN:
        return U("PATTERN");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_COLOR:
        return U("COLOR");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_BRAND:
        return U("BRAND");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_GTIN:
        return U("GTIN");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_MPN:
        return U("MPN");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_IOS_DEEP_LINK:
        return U("IOS_DEEP_LINK");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ANDROID_DEEP_LINK:
        return U("ANDROID_DEEP_LINK");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_FREE_SHIPPING_LABEL:
        return U("FREE_SHIPPING_LABEL");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_FREE_SHIPPING_LIMIT:
        return U("FREE_SHIPPING_LIMIT");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_AVG_REVIEW_RATING:
        return U("AVG_REVIEW_RATING");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_NUM_RATINGS:
        return U("NUM_RATINGS");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_NUM_REVIEWS:
        return U("NUM_REVIEWS");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_ALT_TEXT:
        return U("ALT_TEXT");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_VARIANT_NAMES:
        return U("VARIANT_NAMES");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_VARIANT_VALUES:
        return U("VARIANT_VALUES");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_MIN_AD_PRICE:
        return U("MIN_AD_PRICE");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SHIPPING_WIDTH:
        return U("SHIPPING_WIDTH");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_SHIPPING_HEIGHT:
        return U("SHIPPING_HEIGHT");
    case NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::NullableCatalogsItemFieldType_NULL:
        return U("null");
    default:
        break;
    }
    return {};
}
}

NullableCatalogsItemFieldType::NullableCatalogsItemFieldType()
{
}

NullableCatalogsItemFieldType::~NullableCatalogsItemFieldType()
{
}

void NullableCatalogsItemFieldType::validate()
{
    // TODO: implement validation
}

web::json::value NullableCatalogsItemFieldType::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool NullableCatalogsItemFieldType::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void NullableCatalogsItemFieldType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool NullableCatalogsItemFieldType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }
    {
        EnumUnderlyingType e;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), e);
        if (ok)
        {
            auto v = toEnum(e);
            setValue(v);
        }
    }
    return ok;
}

NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType NullableCatalogsItemFieldType::getValue() const
{
   return m_value;
}

void NullableCatalogsItemFieldType::setValue(NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType const value)
{
   m_value = value;
}


}
}
}
}


