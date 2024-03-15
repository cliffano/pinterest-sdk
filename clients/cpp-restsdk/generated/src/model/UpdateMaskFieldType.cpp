/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/UpdateMaskFieldType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

UpdateMaskFieldType::eUpdateMaskFieldType toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("ad_link")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_AD_LINK;
    if (val == utility::conversions::to_string_t(U("adult")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_ADULT;
    if (val == utility::conversions::to_string_t(U("age_group")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_AGE_GROUP;
    if (val == utility::conversions::to_string_t(U("availability")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_AVAILABILITY;
    if (val == utility::conversions::to_string_t(U("average_review_rating")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_AVERAGE_REVIEW_RATING;
    if (val == utility::conversions::to_string_t(U("brand")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_BRAND;
    if (val == utility::conversions::to_string_t(U("checkout_enabled")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_CHECKOUT_ENABLED;
    if (val == utility::conversions::to_string_t(U("color")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_COLOR;
    if (val == utility::conversions::to_string_t(U("condition")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_CONDITION;
    if (val == utility::conversions::to_string_t(U("custom_label_0")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_CUSTOM_LABEL_0;
    if (val == utility::conversions::to_string_t(U("custom_label_1")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_CUSTOM_LABEL_1;
    if (val == utility::conversions::to_string_t(U("custom_label_2")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_CUSTOM_LABEL_2;
    if (val == utility::conversions::to_string_t(U("custom_label_3")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_CUSTOM_LABEL_3;
    if (val == utility::conversions::to_string_t(U("custom_label_4")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_CUSTOM_LABEL_4;
    if (val == utility::conversions::to_string_t(U("description")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_DESCRIPTION;
    if (val == utility::conversions::to_string_t(U("free_shipping_label")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_FREE_SHIPPING_LABEL;
    if (val == utility::conversions::to_string_t(U("free_shipping_limit")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_FREE_SHIPPING_LIMIT;
    if (val == utility::conversions::to_string_t(U("gender")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_GENDER;
    if (val == utility::conversions::to_string_t(U("google_product_category")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_GOOGLE_PRODUCT_CATEGORY;
    if (val == utility::conversions::to_string_t(U("gtin")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_GTIN;
    if (val == utility::conversions::to_string_t(U("item_group_id")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_ITEM_GROUP_ID;
    if (val == utility::conversions::to_string_t(U("last_updated_time")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_LAST_UPDATED_TIME;
    if (val == utility::conversions::to_string_t(U("link")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_LINK;
    if (val == utility::conversions::to_string_t(U("material")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_MATERIAL;
    if (val == utility::conversions::to_string_t(U("min_ad_price")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_MIN_AD_PRICE;
    if (val == utility::conversions::to_string_t(U("mpn")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_MPN;
    if (val == utility::conversions::to_string_t(U("number_of_ratings")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_NUMBER_OF_RATINGS;
    if (val == utility::conversions::to_string_t(U("number_of_reviews")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_NUMBER_OF_REVIEWS;
    if (val == utility::conversions::to_string_t(U("pattern")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_PATTERN;
    if (val == utility::conversions::to_string_t(U("price")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_PRICE;
    if (val == utility::conversions::to_string_t(U("product_type")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_PRODUCT_TYPE;
    if (val == utility::conversions::to_string_t(U("sale_price")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SALE_PRICE;
    if (val == utility::conversions::to_string_t(U("shipping")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SHIPPING;
    if (val == utility::conversions::to_string_t(U("shipping_height")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SHIPPING_HEIGHT;
    if (val == utility::conversions::to_string_t(U("shipping_weight")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SHIPPING_WEIGHT;
    if (val == utility::conversions::to_string_t(U("shipping_width")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SHIPPING_WIDTH;
    if (val == utility::conversions::to_string_t(U("size")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SIZE;
    if (val == utility::conversions::to_string_t(U("size_system")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SIZE_SYSTEM;
    if (val == utility::conversions::to_string_t(U("size_type")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SIZE_TYPE;
    if (val == utility::conversions::to_string_t(U("tax")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_TAX;
    if (val == utility::conversions::to_string_t(U("title")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_TITLE;
    if (val == utility::conversions::to_string_t(U("variant_names")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_VARIANT_NAMES;
    if (val == utility::conversions::to_string_t(U("variant_values")))
        return UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_VARIANT_VALUES;
    return {};
}

EnumUnderlyingType fromEnum(UpdateMaskFieldType::eUpdateMaskFieldType e)
{
    switch (e)
    {
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_AD_LINK:
        return U("ad_link");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_ADULT:
        return U("adult");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_AGE_GROUP:
        return U("age_group");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_AVAILABILITY:
        return U("availability");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_AVERAGE_REVIEW_RATING:
        return U("average_review_rating");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_BRAND:
        return U("brand");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_CHECKOUT_ENABLED:
        return U("checkout_enabled");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_COLOR:
        return U("color");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_CONDITION:
        return U("condition");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_CUSTOM_LABEL_0:
        return U("custom_label_0");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_CUSTOM_LABEL_1:
        return U("custom_label_1");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_CUSTOM_LABEL_2:
        return U("custom_label_2");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_CUSTOM_LABEL_3:
        return U("custom_label_3");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_CUSTOM_LABEL_4:
        return U("custom_label_4");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_DESCRIPTION:
        return U("description");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_FREE_SHIPPING_LABEL:
        return U("free_shipping_label");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_FREE_SHIPPING_LIMIT:
        return U("free_shipping_limit");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_GENDER:
        return U("gender");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_GOOGLE_PRODUCT_CATEGORY:
        return U("google_product_category");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_GTIN:
        return U("gtin");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_ITEM_GROUP_ID:
        return U("item_group_id");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_LAST_UPDATED_TIME:
        return U("last_updated_time");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_LINK:
        return U("link");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_MATERIAL:
        return U("material");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_MIN_AD_PRICE:
        return U("min_ad_price");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_MPN:
        return U("mpn");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_NUMBER_OF_RATINGS:
        return U("number_of_ratings");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_NUMBER_OF_REVIEWS:
        return U("number_of_reviews");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_PATTERN:
        return U("pattern");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_PRICE:
        return U("price");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_PRODUCT_TYPE:
        return U("product_type");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SALE_PRICE:
        return U("sale_price");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SHIPPING:
        return U("shipping");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SHIPPING_HEIGHT:
        return U("shipping_height");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SHIPPING_WEIGHT:
        return U("shipping_weight");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SHIPPING_WIDTH:
        return U("shipping_width");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SIZE:
        return U("size");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SIZE_SYSTEM:
        return U("size_system");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_SIZE_TYPE:
        return U("size_type");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_TAX:
        return U("tax");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_TITLE:
        return U("title");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_VARIANT_NAMES:
        return U("variant_names");
    case UpdateMaskFieldType::eUpdateMaskFieldType::UpdateMaskFieldType_VARIANT_VALUES:
        return U("variant_values");
    default:
        break;
    }
    return {};
}
}

UpdateMaskFieldType::UpdateMaskFieldType()
{
}

UpdateMaskFieldType::~UpdateMaskFieldType()
{
}

void UpdateMaskFieldType::validate()
{
    // TODO: implement validation
}

web::json::value UpdateMaskFieldType::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool UpdateMaskFieldType::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void UpdateMaskFieldType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool UpdateMaskFieldType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

UpdateMaskFieldType::eUpdateMaskFieldType UpdateMaskFieldType::getValue() const
{
   return m_value;
}

void UpdateMaskFieldType::setValue(UpdateMaskFieldType::eUpdateMaskFieldType const value)
{
   m_value = value;
}


}
}
}
}


