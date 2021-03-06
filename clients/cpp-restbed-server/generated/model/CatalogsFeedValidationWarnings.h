/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CatalogsFeedValidationWarnings.h
 *
 * 
 */

#ifndef CatalogsFeedValidationWarnings_H_
#define CatalogsFeedValidationWarnings_H_



#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  CatalogsFeedValidationWarnings 
{
public:
    CatalogsFeedValidationWarnings() = default;
    explicit CatalogsFeedValidationWarnings(boost::property_tree::ptree const& pt);
    virtual ~CatalogsFeedValidationWarnings() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// CatalogsFeedValidationWarnings members

    /// <summary>
    /// 
    /// </summary>
    int32_t getTitleLengthTooLong() const;
    void setTitleLengthTooLong(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getDescriptionLengthTooLong() const;
    void setDescriptionLengthTooLong(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getGenderInvalid() const;
    void setGenderInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getAgeGroupInvalid() const;
    void setAgeGroupInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getSizeTypeInvalid() const;
    void setSizeTypeInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getLinkFormatWarning() const;
    void setLinkFormatWarning(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getDuplicateProducts() const;
    void setDuplicateProducts(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getDuplicateLinks() const;
    void setDuplicateLinks(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getSalesPriceInvalid() const;
    void setSalesPriceInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getProductCategoryDepthWarning() const;
    void setProductCategoryDepthWarning(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getAdwordsSameAsLink() const;
    void setAdwordsSameAsLink(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getDuplicateHeaders() const;
    void setDuplicateHeaders(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getFetchSameSignature() const;
    void setFetchSameSignature(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getAdwordsFormatWarning() const;
    void setAdwordsFormatWarning(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getAdditionalImageLinkWarning() const;
    void setAdditionalImageLinkWarning(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getImageLinkWarning() const;
    void setImageLinkWarning(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getShippingInvalid() const;
    void setShippingInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTaxInvalid() const;
    void setTaxInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getShippingWeightInvalid() const;
    void setShippingWeightInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getExpirationDateInvalid() const;
    void setExpirationDateInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getAvailabilityDateInvalid() const;
    void setAvailabilityDateInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getSaleDateInvalid() const;
    void setSaleDateInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getWeightUnitInvalid() const;
    void setWeightUnitInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getIsBundleInvalid() const;
    void setIsBundleInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getUpdatedTimeInvalid() const;
    void setUpdatedTimeInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getCustomLabelLengthTooLong() const;
    void setCustomLabelLengthTooLong(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getProductTypeLengthTooLong() const;
    void setProductTypeLengthTooLong(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTooManyAdditionalImageLinks() const;
    void setTooManyAdditionalImageLinks(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getMultipackInvalid() const;
    void setMultipackInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getIndexedProductCountLargeDelta() const;
    void setIndexedProductCountLargeDelta(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getItemAdditionalImageDownloadFailure() const;
    void setItemAdditionalImageDownloadFailure(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getOptionalProductCategoryMissing() const;
    void setOptionalProductCategoryMissing(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getOptionalProductCategoryInvalid() const;
    void setOptionalProductCategoryInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getOptionalConditionMissing() const;
    void setOptionalConditionMissing(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getOptionalConditionInvalid() const;
    void setOptionalConditionInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getIosDeepLinkInvalid() const;
    void setIosDeepLinkInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getAndroidDeepLinkInvalid() const;
    void setAndroidDeepLinkInvalid(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getAvailabilityNormalized() const;
    void setAvailabilityNormalized(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getConditionNormalized() const;
    void setConditionNormalized(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getGenderNormalized() const;
    void setGenderNormalized(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getSizeTypeNormalized() const;
    void setSizeTypeNormalized(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getAgeGroupNormalized() const;
    void setAgeGroupNormalized(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getUtmSourceAutoCorrected() const;
    void setUtmSourceAutoCorrected(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getCountryDoesNotMapToCurrency() const;
    void setCountryDoesNotMapToCurrency(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getMinAdPriceInvalid() const;
    void setMinAdPriceInvalid(int32_t value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    int32_t m_Title_length_too_long = 0;
    int32_t m_Description_length_too_long = 0;
    int32_t m_Gender_invalid = 0;
    int32_t m_Age_group_invalid = 0;
    int32_t m_Size_type_invalid = 0;
    int32_t m_Link_format_warning = 0;
    int32_t m_Duplicate_products = 0;
    int32_t m_Duplicate_links = 0;
    int32_t m_Sales_price_invalid = 0;
    int32_t m_Product_category_depth_warning = 0;
    int32_t m_Adwords_same_as_link = 0;
    int32_t m_Duplicate_headers = 0;
    int32_t m_Fetch_same_signature = 0;
    int32_t m_Adwords_format_warning = 0;
    int32_t m_Additional_image_link_warning = 0;
    int32_t m_Image_link_warning = 0;
    int32_t m_Shipping_invalid = 0;
    int32_t m_Tax_invalid = 0;
    int32_t m_Shipping_weight_invalid = 0;
    int32_t m_Expiration_date_invalid = 0;
    int32_t m_Availability_date_invalid = 0;
    int32_t m_Sale_date_invalid = 0;
    int32_t m_Weight_unit_invalid = 0;
    int32_t m_Is_bundle_invalid = 0;
    int32_t m_Updated_time_invalid = 0;
    int32_t m_Custom_label_length_too_long = 0;
    int32_t m_Product_type_length_too_long = 0;
    int32_t m_Too_many_additional_image_links = 0;
    int32_t m_Multipack_invalid = 0;
    int32_t m_Indexed_product_count_large_delta = 0;
    int32_t m_Item_additional_image_download_failure = 0;
    int32_t m_Optional_product_category_missing = 0;
    int32_t m_Optional_product_category_invalid = 0;
    int32_t m_Optional_condition_missing = 0;
    int32_t m_Optional_condition_invalid = 0;
    int32_t m_Ios_deep_link_invalid = 0;
    int32_t m_Android_deep_link_invalid = 0;
    int32_t m_Availability_normalized = 0;
    int32_t m_Condition_normalized = 0;
    int32_t m_Gender_normalized = 0;
    int32_t m_Size_type_normalized = 0;
    int32_t m_Age_group_normalized = 0;
    int32_t m_Utm_source_auto_corrected = 0;
    int32_t m_Country_does_not_map_to_currency = 0;
    int32_t m_Min_ad_price_invalid = 0;
};

std::vector<CatalogsFeedValidationWarnings> createCatalogsFeedValidationWarningsVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* CatalogsFeedValidationWarnings_H_ */
