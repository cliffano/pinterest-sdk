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
 * OAICatalogsItemValidationIssue.h
 *
 * 
 */

#ifndef OAICatalogsItemValidationIssue_H
#define OAICatalogsItemValidationIssue_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsItemValidationIssue : public OAIEnum {
public:
    OAICatalogsItemValidationIssue();
    OAICatalogsItemValidationIssue(QString json);
    ~OAICatalogsItemValidationIssue() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAICatalogsItemValidationIssue {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG, 
        ADDITIONAL_IMAGE_LINK_WARNING, 
        ADULT_INVALID, 
        ADWORDS_FORMAT_INVALID, 
        ADWORDS_FORMAT_WARNING, 
        ADWORDS_SAME_AS_LINK, 
        AGE_GROUP_INVALID, 
        AGE_GROUP_NORMALIZED, 
        ANDROID_DEEP_LINK_INVALID, 
        AVAILABILITY_DATE_INVALID, 
        AVAILABILITY_INVALID, 
        AVAILABILITY_NORMALIZED, 
        BLOCKLISTED_IMAGE_SIGNATURE, 
        CONDITION_NORMALIZED, 
        COUNTRY_DOES_NOT_MAP_TO_CURRENCY, 
        CUSTOM_LABEL_LENGTH_TOO_LONG, 
        DESCRIPTION_LENGTH_TOO_LONG, 
        DESCRIPTION_MISSING, 
        DUPLICATE_PRODUCTS, 
        EXPIRATION_DATE_INVALID, 
        GENDER_INVALID, 
        GENDER_NORMALIZED, 
        IMAGE_LINK_INVALID, 
        IMAGE_LINK_LENGTH_TOO_LONG, 
        IMAGE_LINK_MISSING, 
        IMAGE_LINK_WARNING, 
        INVALID_DOMAIN, 
        IOS_DEEP_LINK_INVALID, 
        IS_BUNDLE_INVALID, 
        ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE, 
        ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE, 
        ITEMID_MISSING, 
        LINK_FORMAT_INVALID, 
        LINK_FORMAT_WARNING, 
        LINK_LENGTH_TOO_LONG, 
        MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED, 
        MIN_AD_PRICE_INVALID, 
        MULTIPACK_INVALID, 
        OPTIONAL_CONDITION_INVALID, 
        OPTIONAL_CONDITION_MISSING, 
        OPTIONAL_PRODUCT_CATEGORY_INVALID, 
        OPTIONAL_PRODUCT_CATEGORY_MISSING, 
        PARSE_LINE_ERROR, 
        PINJOIN_CONTENT_UNSAFE, 
        PRICE_MISSING, 
        PRODUCT_CATEGORY_DEPTH_WARNING, 
        PRODUCT_LINK_MISSING, 
        PRODUCT_PRICE_INVALID, 
        PRODUCT_TYPE_LENGTH_TOO_LONG, 
        SALE_DATE_INVALID, 
        SALES_PRICE_INVALID, 
        SHIPPING_INVALID, 
        SHIPPING_WEIGHT_INVALID, 
        SIZE_TYPE_INVALID, 
        SIZE_TYPE_NORMALIZED, 
        TAX_INVALID, 
        TITLE_LENGTH_TOO_LONG, 
        TITLE_MISSING, 
        TOO_MANY_ADDITIONAL_IMAGE_LINKS, 
        UTM_SOURCE_AUTO_CORRECTED, 
        WEIGHT_UNIT_INVALID
    };
    OAICatalogsItemValidationIssue::eOAICatalogsItemValidationIssue getValue() const;
    void setValue(const OAICatalogsItemValidationIssue::eOAICatalogsItemValidationIssue& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAICatalogsItemValidationIssue m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsItemValidationIssue)

#endif // OAICatalogsItemValidationIssue_H
