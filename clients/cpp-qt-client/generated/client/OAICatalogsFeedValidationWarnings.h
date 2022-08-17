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
 * OAICatalogsFeedValidationWarnings.h
 *
 * 
 */

#ifndef OAICatalogsFeedValidationWarnings_H
#define OAICatalogsFeedValidationWarnings_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsFeedValidationWarnings : public OAIObject {
public:
    OAICatalogsFeedValidationWarnings();
    OAICatalogsFeedValidationWarnings(QString json);
    ~OAICatalogsFeedValidationWarnings() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getTitleLengthTooLong() const;
    void setTitleLengthTooLong(const qint32 &title_length_too_long);
    bool is_title_length_too_long_Set() const;
    bool is_title_length_too_long_Valid() const;

    qint32 getDescriptionLengthTooLong() const;
    void setDescriptionLengthTooLong(const qint32 &description_length_too_long);
    bool is_description_length_too_long_Set() const;
    bool is_description_length_too_long_Valid() const;

    qint32 getGenderInvalid() const;
    void setGenderInvalid(const qint32 &gender_invalid);
    bool is_gender_invalid_Set() const;
    bool is_gender_invalid_Valid() const;

    qint32 getAgeGroupInvalid() const;
    void setAgeGroupInvalid(const qint32 &age_group_invalid);
    bool is_age_group_invalid_Set() const;
    bool is_age_group_invalid_Valid() const;

    qint32 getSizeTypeInvalid() const;
    void setSizeTypeInvalid(const qint32 &size_type_invalid);
    bool is_size_type_invalid_Set() const;
    bool is_size_type_invalid_Valid() const;

    qint32 getLinkFormatWarning() const;
    void setLinkFormatWarning(const qint32 &link_format_warning);
    bool is_link_format_warning_Set() const;
    bool is_link_format_warning_Valid() const;

    qint32 getDuplicateProducts() const;
    void setDuplicateProducts(const qint32 &duplicate_products);
    bool is_duplicate_products_Set() const;
    bool is_duplicate_products_Valid() const;

    qint32 getSalesPriceInvalid() const;
    void setSalesPriceInvalid(const qint32 &sales_price_invalid);
    bool is_sales_price_invalid_Set() const;
    bool is_sales_price_invalid_Valid() const;

    qint32 getProductCategoryDepthWarning() const;
    void setProductCategoryDepthWarning(const qint32 &product_category_depth_warning);
    bool is_product_category_depth_warning_Set() const;
    bool is_product_category_depth_warning_Valid() const;

    qint32 getAdwordsSameAsLink() const;
    void setAdwordsSameAsLink(const qint32 &adwords_same_as_link);
    bool is_adwords_same_as_link_Set() const;
    bool is_adwords_same_as_link_Valid() const;

    qint32 getDuplicateHeaders() const;
    void setDuplicateHeaders(const qint32 &duplicate_headers);
    bool is_duplicate_headers_Set() const;
    bool is_duplicate_headers_Valid() const;

    qint32 getFetchSameSignature() const;
    void setFetchSameSignature(const qint32 &fetch_same_signature);
    bool is_fetch_same_signature_Set() const;
    bool is_fetch_same_signature_Valid() const;

    qint32 getAdwordsFormatWarning() const;
    void setAdwordsFormatWarning(const qint32 &adwords_format_warning);
    bool is_adwords_format_warning_Set() const;
    bool is_adwords_format_warning_Valid() const;

    qint32 getAdditionalImageLinkLengthTooLong() const;
    void setAdditionalImageLinkLengthTooLong(const qint32 &additional_image_link_length_too_long);
    bool is_additional_image_link_length_too_long_Set() const;
    bool is_additional_image_link_length_too_long_Valid() const;

    qint32 getAdditionalImageLinkWarning() const;
    void setAdditionalImageLinkWarning(const qint32 &additional_image_link_warning);
    bool is_additional_image_link_warning_Set() const;
    bool is_additional_image_link_warning_Valid() const;

    qint32 getImageLinkWarning() const;
    void setImageLinkWarning(const qint32 &image_link_warning);
    bool is_image_link_warning_Set() const;
    bool is_image_link_warning_Valid() const;

    qint32 getShippingInvalid() const;
    void setShippingInvalid(const qint32 &shipping_invalid);
    bool is_shipping_invalid_Set() const;
    bool is_shipping_invalid_Valid() const;

    qint32 getTaxInvalid() const;
    void setTaxInvalid(const qint32 &tax_invalid);
    bool is_tax_invalid_Set() const;
    bool is_tax_invalid_Valid() const;

    qint32 getShippingWeightInvalid() const;
    void setShippingWeightInvalid(const qint32 &shipping_weight_invalid);
    bool is_shipping_weight_invalid_Set() const;
    bool is_shipping_weight_invalid_Valid() const;

    qint32 getExpirationDateInvalid() const;
    void setExpirationDateInvalid(const qint32 &expiration_date_invalid);
    bool is_expiration_date_invalid_Set() const;
    bool is_expiration_date_invalid_Valid() const;

    qint32 getAvailabilityDateInvalid() const;
    void setAvailabilityDateInvalid(const qint32 &availability_date_invalid);
    bool is_availability_date_invalid_Set() const;
    bool is_availability_date_invalid_Valid() const;

    qint32 getSaleDateInvalid() const;
    void setSaleDateInvalid(const qint32 &sale_date_invalid);
    bool is_sale_date_invalid_Set() const;
    bool is_sale_date_invalid_Valid() const;

    qint32 getWeightUnitInvalid() const;
    void setWeightUnitInvalid(const qint32 &weight_unit_invalid);
    bool is_weight_unit_invalid_Set() const;
    bool is_weight_unit_invalid_Valid() const;

    qint32 getIsBundleInvalid() const;
    void setIsBundleInvalid(const qint32 &is_bundle_invalid);
    bool is_is_bundle_invalid_Set() const;
    bool is_is_bundle_invalid_Valid() const;

    qint32 getUpdatedTimeInvalid() const;
    void setUpdatedTimeInvalid(const qint32 &updated_time_invalid);
    bool is_updated_time_invalid_Set() const;
    bool is_updated_time_invalid_Valid() const;

    qint32 getCustomLabelLengthTooLong() const;
    void setCustomLabelLengthTooLong(const qint32 &custom_label_length_too_long);
    bool is_custom_label_length_too_long_Set() const;
    bool is_custom_label_length_too_long_Valid() const;

    qint32 getProductTypeLengthTooLong() const;
    void setProductTypeLengthTooLong(const qint32 &product_type_length_too_long);
    bool is_product_type_length_too_long_Set() const;
    bool is_product_type_length_too_long_Valid() const;

    qint32 getTooManyAdditionalImageLinks() const;
    void setTooManyAdditionalImageLinks(const qint32 &too_many_additional_image_links);
    bool is_too_many_additional_image_links_Set() const;
    bool is_too_many_additional_image_links_Valid() const;

    qint32 getMultipackInvalid() const;
    void setMultipackInvalid(const qint32 &multipack_invalid);
    bool is_multipack_invalid_Set() const;
    bool is_multipack_invalid_Valid() const;

    qint32 getIndexedProductCountLargeDelta() const;
    void setIndexedProductCountLargeDelta(const qint32 &indexed_product_count_large_delta);
    bool is_indexed_product_count_large_delta_Set() const;
    bool is_indexed_product_count_large_delta_Valid() const;

    qint32 getItemAdditionalImageDownloadFailure() const;
    void setItemAdditionalImageDownloadFailure(const qint32 &item_additional_image_download_failure);
    bool is_item_additional_image_download_failure_Set() const;
    bool is_item_additional_image_download_failure_Valid() const;

    qint32 getOptionalProductCategoryMissing() const;
    void setOptionalProductCategoryMissing(const qint32 &optional_product_category_missing);
    bool is_optional_product_category_missing_Set() const;
    bool is_optional_product_category_missing_Valid() const;

    qint32 getOptionalProductCategoryInvalid() const;
    void setOptionalProductCategoryInvalid(const qint32 &optional_product_category_invalid);
    bool is_optional_product_category_invalid_Set() const;
    bool is_optional_product_category_invalid_Valid() const;

    qint32 getOptionalConditionMissing() const;
    void setOptionalConditionMissing(const qint32 &optional_condition_missing);
    bool is_optional_condition_missing_Set() const;
    bool is_optional_condition_missing_Valid() const;

    qint32 getOptionalConditionInvalid() const;
    void setOptionalConditionInvalid(const qint32 &optional_condition_invalid);
    bool is_optional_condition_invalid_Set() const;
    bool is_optional_condition_invalid_Valid() const;

    qint32 getIosDeepLinkInvalid() const;
    void setIosDeepLinkInvalid(const qint32 &ios_deep_link_invalid);
    bool is_ios_deep_link_invalid_Set() const;
    bool is_ios_deep_link_invalid_Valid() const;

    qint32 getAndroidDeepLinkInvalid() const;
    void setAndroidDeepLinkInvalid(const qint32 &android_deep_link_invalid);
    bool is_android_deep_link_invalid_Set() const;
    bool is_android_deep_link_invalid_Valid() const;

    qint32 getAvailabilityNormalized() const;
    void setAvailabilityNormalized(const qint32 &availability_normalized);
    bool is_availability_normalized_Set() const;
    bool is_availability_normalized_Valid() const;

    qint32 getConditionNormalized() const;
    void setConditionNormalized(const qint32 &condition_normalized);
    bool is_condition_normalized_Set() const;
    bool is_condition_normalized_Valid() const;

    qint32 getGenderNormalized() const;
    void setGenderNormalized(const qint32 &gender_normalized);
    bool is_gender_normalized_Set() const;
    bool is_gender_normalized_Valid() const;

    qint32 getSizeTypeNormalized() const;
    void setSizeTypeNormalized(const qint32 &size_type_normalized);
    bool is_size_type_normalized_Set() const;
    bool is_size_type_normalized_Valid() const;

    qint32 getAgeGroupNormalized() const;
    void setAgeGroupNormalized(const qint32 &age_group_normalized);
    bool is_age_group_normalized_Set() const;
    bool is_age_group_normalized_Valid() const;

    qint32 getUtmSourceAutoCorrected() const;
    void setUtmSourceAutoCorrected(const qint32 &utm_source_auto_corrected);
    bool is_utm_source_auto_corrected_Set() const;
    bool is_utm_source_auto_corrected_Valid() const;

    qint32 getCountryDoesNotMapToCurrency() const;
    void setCountryDoesNotMapToCurrency(const qint32 &country_does_not_map_to_currency);
    bool is_country_does_not_map_to_currency_Set() const;
    bool is_country_does_not_map_to_currency_Valid() const;

    qint32 getMinAdPriceInvalid() const;
    void setMinAdPriceInvalid(const qint32 &min_ad_price_invalid);
    bool is_min_ad_price_invalid_Set() const;
    bool is_min_ad_price_invalid_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 title_length_too_long;
    bool m_title_length_too_long_isSet;
    bool m_title_length_too_long_isValid;

    qint32 description_length_too_long;
    bool m_description_length_too_long_isSet;
    bool m_description_length_too_long_isValid;

    qint32 gender_invalid;
    bool m_gender_invalid_isSet;
    bool m_gender_invalid_isValid;

    qint32 age_group_invalid;
    bool m_age_group_invalid_isSet;
    bool m_age_group_invalid_isValid;

    qint32 size_type_invalid;
    bool m_size_type_invalid_isSet;
    bool m_size_type_invalid_isValid;

    qint32 link_format_warning;
    bool m_link_format_warning_isSet;
    bool m_link_format_warning_isValid;

    qint32 duplicate_products;
    bool m_duplicate_products_isSet;
    bool m_duplicate_products_isValid;

    qint32 sales_price_invalid;
    bool m_sales_price_invalid_isSet;
    bool m_sales_price_invalid_isValid;

    qint32 product_category_depth_warning;
    bool m_product_category_depth_warning_isSet;
    bool m_product_category_depth_warning_isValid;

    qint32 adwords_same_as_link;
    bool m_adwords_same_as_link_isSet;
    bool m_adwords_same_as_link_isValid;

    qint32 duplicate_headers;
    bool m_duplicate_headers_isSet;
    bool m_duplicate_headers_isValid;

    qint32 fetch_same_signature;
    bool m_fetch_same_signature_isSet;
    bool m_fetch_same_signature_isValid;

    qint32 adwords_format_warning;
    bool m_adwords_format_warning_isSet;
    bool m_adwords_format_warning_isValid;

    qint32 additional_image_link_length_too_long;
    bool m_additional_image_link_length_too_long_isSet;
    bool m_additional_image_link_length_too_long_isValid;

    qint32 additional_image_link_warning;
    bool m_additional_image_link_warning_isSet;
    bool m_additional_image_link_warning_isValid;

    qint32 image_link_warning;
    bool m_image_link_warning_isSet;
    bool m_image_link_warning_isValid;

    qint32 shipping_invalid;
    bool m_shipping_invalid_isSet;
    bool m_shipping_invalid_isValid;

    qint32 tax_invalid;
    bool m_tax_invalid_isSet;
    bool m_tax_invalid_isValid;

    qint32 shipping_weight_invalid;
    bool m_shipping_weight_invalid_isSet;
    bool m_shipping_weight_invalid_isValid;

    qint32 expiration_date_invalid;
    bool m_expiration_date_invalid_isSet;
    bool m_expiration_date_invalid_isValid;

    qint32 availability_date_invalid;
    bool m_availability_date_invalid_isSet;
    bool m_availability_date_invalid_isValid;

    qint32 sale_date_invalid;
    bool m_sale_date_invalid_isSet;
    bool m_sale_date_invalid_isValid;

    qint32 weight_unit_invalid;
    bool m_weight_unit_invalid_isSet;
    bool m_weight_unit_invalid_isValid;

    qint32 is_bundle_invalid;
    bool m_is_bundle_invalid_isSet;
    bool m_is_bundle_invalid_isValid;

    qint32 updated_time_invalid;
    bool m_updated_time_invalid_isSet;
    bool m_updated_time_invalid_isValid;

    qint32 custom_label_length_too_long;
    bool m_custom_label_length_too_long_isSet;
    bool m_custom_label_length_too_long_isValid;

    qint32 product_type_length_too_long;
    bool m_product_type_length_too_long_isSet;
    bool m_product_type_length_too_long_isValid;

    qint32 too_many_additional_image_links;
    bool m_too_many_additional_image_links_isSet;
    bool m_too_many_additional_image_links_isValid;

    qint32 multipack_invalid;
    bool m_multipack_invalid_isSet;
    bool m_multipack_invalid_isValid;

    qint32 indexed_product_count_large_delta;
    bool m_indexed_product_count_large_delta_isSet;
    bool m_indexed_product_count_large_delta_isValid;

    qint32 item_additional_image_download_failure;
    bool m_item_additional_image_download_failure_isSet;
    bool m_item_additional_image_download_failure_isValid;

    qint32 optional_product_category_missing;
    bool m_optional_product_category_missing_isSet;
    bool m_optional_product_category_missing_isValid;

    qint32 optional_product_category_invalid;
    bool m_optional_product_category_invalid_isSet;
    bool m_optional_product_category_invalid_isValid;

    qint32 optional_condition_missing;
    bool m_optional_condition_missing_isSet;
    bool m_optional_condition_missing_isValid;

    qint32 optional_condition_invalid;
    bool m_optional_condition_invalid_isSet;
    bool m_optional_condition_invalid_isValid;

    qint32 ios_deep_link_invalid;
    bool m_ios_deep_link_invalid_isSet;
    bool m_ios_deep_link_invalid_isValid;

    qint32 android_deep_link_invalid;
    bool m_android_deep_link_invalid_isSet;
    bool m_android_deep_link_invalid_isValid;

    qint32 availability_normalized;
    bool m_availability_normalized_isSet;
    bool m_availability_normalized_isValid;

    qint32 condition_normalized;
    bool m_condition_normalized_isSet;
    bool m_condition_normalized_isValid;

    qint32 gender_normalized;
    bool m_gender_normalized_isSet;
    bool m_gender_normalized_isValid;

    qint32 size_type_normalized;
    bool m_size_type_normalized_isSet;
    bool m_size_type_normalized_isValid;

    qint32 age_group_normalized;
    bool m_age_group_normalized_isSet;
    bool m_age_group_normalized_isValid;

    qint32 utm_source_auto_corrected;
    bool m_utm_source_auto_corrected_isSet;
    bool m_utm_source_auto_corrected_isValid;

    qint32 country_does_not_map_to_currency;
    bool m_country_does_not_map_to_currency_isSet;
    bool m_country_does_not_map_to_currency_isValid;

    qint32 min_ad_price_invalid;
    bool m_min_ad_price_invalid_isSet;
    bool m_min_ad_price_invalid_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsFeedValidationWarnings)

#endif // OAICatalogsFeedValidationWarnings_H
