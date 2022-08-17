/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * NullableCatalogsItemFieldType.h
 *
 * Product item fields
 */

#ifndef NullableCatalogsItemFieldType_H_
#define NullableCatalogsItemFieldType_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Product item fields
/// </summary>
class  NullableCatalogsItemFieldType
{
public:
    NullableCatalogsItemFieldType();
    virtual ~NullableCatalogsItemFieldType() = default;

    enum class eNullableCatalogsItemFieldType {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    ITEM_ID, 
    ITEM_GROUP_ID, 
    TITLE, 
    DESCRIPTION, 
    ITEM_LINK, 
    ORGANIC_LINK, 
    IMAGE_LINK, 
    ADWORDS_REDIRECT_LINK, 
    AD_LINK, 
    SIZE, 
    GOOGLE_PRODUCT_CATEGORY, 
    PRODUCT_CATEGORY, 
    CONDITION, 
    AVAILABILITY, 
    GENDER, 
    AGE_GROUP, 
    SIZE_TYPE, 
    SIZE_SYSTEM, 
    ADULT, 
    SHIPPING, 
    SHIPPING_WEIGHT, 
    TAX, 
    MULTIPACK, 
    ADDITIONAL_IMAGE_LINK, 
    PRICE, 
    SALE_PRICE, 
    IS_BUNDLE, 
    EXPIRATION_DATE, 
    SALE_PRICE_EFFECTIVE_DATE, 
    AVAILABILITY_DATE, 
    WEIGHT_UNIT, 
    PRODUCT_TYPE, 
    CUSTOM_LABEL_0, 
    CUSTOM_LABEL_1, 
    CUSTOM_LABEL_2, 
    CUSTOM_LABEL_3, 
    CUSTOM_LABEL_4, 
    MATERIAL, 
    PATTERN, 
    COLOR, 
    BRAND, 
    GTIN, 
    MPN, 
    IOS_DEEP_LINK, 
    ANDROID_DEEP_LINK, 
    FREE_SHIPPING_LABEL, 
    FREE_SHIPPING_LIMIT, 
    AVG_REVIEW_RATING, 
    NUM_RATINGS, 
    NUM_REVIEWS, 
    ALT_TEXT, 
    VARIANT_NAMES, 
    VARIANT_VALUES, 
    MIN_AD_PRICE, 
    SHIPPING_WIDTH, 
    SHIPPING_HEIGHT, 
    NULL
    };

    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const NullableCatalogsItemFieldType& rhs) const;
    bool operator!=(const NullableCatalogsItemFieldType& rhs) const;

    /////////////////////////////////////////////
    /// NullableCatalogsItemFieldType members

    NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType getValue() const;
    void setValue(NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType value);
    
    friend void to_json(nlohmann::json& j, const NullableCatalogsItemFieldType& o);
    friend void from_json(const nlohmann::json& j, NullableCatalogsItemFieldType& o);
protected:
    NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType m_value = NullableCatalogsItemFieldType::eNullableCatalogsItemFieldType::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* NullableCatalogsItemFieldType_H_ */
