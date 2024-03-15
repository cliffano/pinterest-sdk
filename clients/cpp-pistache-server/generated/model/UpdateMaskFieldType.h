/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * UpdateMaskFieldType.h
 *
 * The field types supported by the update mask
 */

#ifndef UpdateMaskFieldType_H_
#define UpdateMaskFieldType_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// The field types supported by the update mask
/// </summary>
class  UpdateMaskFieldType
{
public:
    UpdateMaskFieldType();
    virtual ~UpdateMaskFieldType() = default;

    enum class eUpdateMaskFieldType {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    AD_LINK, 
    ADULT, 
    AGE_GROUP, 
    AVAILABILITY, 
    AVERAGE_REVIEW_RATING, 
    BRAND, 
    CHECKOUT_ENABLED, 
    COLOR, 
    CONDITION, 
    CUSTOM_LABEL_0, 
    CUSTOM_LABEL_1, 
    CUSTOM_LABEL_2, 
    CUSTOM_LABEL_3, 
    CUSTOM_LABEL_4, 
    DESCRIPTION, 
    FREE_SHIPPING_LABEL, 
    FREE_SHIPPING_LIMIT, 
    GENDER, 
    GOOGLE_PRODUCT_CATEGORY, 
    GTIN, 
    ITEM_GROUP_ID, 
    LAST_UPDATED_TIME, 
    LINK, 
    MATERIAL, 
    MIN_AD_PRICE, 
    MPN, 
    NUMBER_OF_RATINGS, 
    NUMBER_OF_REVIEWS, 
    PATTERN, 
    PRICE, 
    PRODUCT_TYPE, 
    SALE_PRICE, 
    SHIPPING, 
    SHIPPING_HEIGHT, 
    SHIPPING_WEIGHT, 
    SHIPPING_WIDTH, 
    SIZE, 
    SIZE_SYSTEM, 
    SIZE_TYPE, 
    TAX, 
    TITLE, 
    VARIANT_NAMES, 
    VARIANT_VALUES
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

    bool operator==(const UpdateMaskFieldType& rhs) const;
    bool operator!=(const UpdateMaskFieldType& rhs) const;

    /////////////////////////////////////////////
    /// UpdateMaskFieldType members

    UpdateMaskFieldType::eUpdateMaskFieldType getValue() const;
    void setValue(UpdateMaskFieldType::eUpdateMaskFieldType value);
    
    friend  void to_json(nlohmann::json& j, const UpdateMaskFieldType& o);
    friend  void from_json(const nlohmann::json& j, UpdateMaskFieldType& o);
protected:
    UpdateMaskFieldType::eUpdateMaskFieldType m_value = UpdateMaskFieldType::eUpdateMaskFieldType::INVALID_VALUE_OPENAPI_GENERATED;
};

} // namespace org::openapitools::server::model

#endif /* UpdateMaskFieldType_H_ */
