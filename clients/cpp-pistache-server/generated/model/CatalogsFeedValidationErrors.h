/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * CatalogsFeedValidationErrors.h
 *
 * 
 */

#ifndef CatalogsFeedValidationErrors_H_
#define CatalogsFeedValidationErrors_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  CatalogsFeedValidationErrors
{
public:
    CatalogsFeedValidationErrors();
    virtual ~CatalogsFeedValidationErrors() = default;


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

    bool operator==(const CatalogsFeedValidationErrors& rhs) const;
    bool operator!=(const CatalogsFeedValidationErrors& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsFeedValidationErrors members

    /// <summary>
    /// 
    /// </summary>
    int32_t getFetchError() const;
    void setFetchError(int32_t const value);
    bool fetchErrorIsSet() const;
    void unsetFetch_error();
    /// <summary>
    /// 
    /// </summary>
    int32_t getFetchInactiveFeedError() const;
    void setFetchInactiveFeedError(int32_t const value);
    bool fetchInactiveFeedErrorIsSet() const;
    void unsetFetch_inactive_feed_error();
    /// <summary>
    /// 
    /// </summary>
    int32_t getEncodingError() const;
    void setEncodingError(int32_t const value);
    bool encodingErrorIsSet() const;
    void unsetEncoding_error();
    /// <summary>
    /// 
    /// </summary>
    int32_t getDelimiterError() const;
    void setDelimiterError(int32_t const value);
    bool delimiterErrorIsSet() const;
    void unsetDelimiter_error();
    /// <summary>
    /// 
    /// </summary>
    int32_t getRequiredColumnsMissing() const;
    void setRequiredColumnsMissing(int32_t const value);
    bool requiredColumnsMissingIsSet() const;
    void unsetRequired_columns_missing();
    /// <summary>
    /// 
    /// </summary>
    int32_t getImageLinkInvalid() const;
    void setImageLinkInvalid(int32_t const value);
    bool imageLinkInvalidIsSet() const;
    void unsetImage_link_invalid();
    /// <summary>
    /// 
    /// </summary>
    int32_t getItemidMissing() const;
    void setItemidMissing(int32_t const value);
    bool itemidMissingIsSet() const;
    void unsetItemid_missing();
    /// <summary>
    /// 
    /// </summary>
    int32_t getTitleMissing() const;
    void setTitleMissing(int32_t const value);
    bool titleMissingIsSet() const;
    void unsetTitle_missing();
    /// <summary>
    /// 
    /// </summary>
    int32_t getDescriptionMissing() const;
    void setDescriptionMissing(int32_t const value);
    bool descriptionMissingIsSet() const;
    void unsetDescription_missing();
    /// <summary>
    /// 
    /// </summary>
    int32_t getProductCategoryInvalid() const;
    void setProductCategoryInvalid(int32_t const value);
    bool productCategoryInvalidIsSet() const;
    void unsetProduct_category_invalid();
    /// <summary>
    /// 
    /// </summary>
    int32_t getProductLinkMissing() const;
    void setProductLinkMissing(int32_t const value);
    bool productLinkMissingIsSet() const;
    void unsetProduct_link_missing();
    /// <summary>
    /// 
    /// </summary>
    int32_t getImageLinkMissing() const;
    void setImageLinkMissing(int32_t const value);
    bool imageLinkMissingIsSet() const;
    void unsetImage_link_missing();
    /// <summary>
    /// 
    /// </summary>
    int32_t getAvailabilityInvalid() const;
    void setAvailabilityInvalid(int32_t const value);
    bool availabilityInvalidIsSet() const;
    void unsetAvailability_invalid();
    /// <summary>
    /// 
    /// </summary>
    int32_t getProductPriceInvalid() const;
    void setProductPriceInvalid(int32_t const value);
    bool productPriceInvalidIsSet() const;
    void unsetProduct_price_invalid();
    /// <summary>
    /// 
    /// </summary>
    int32_t getLinkFormatInvalid() const;
    void setLinkFormatInvalid(int32_t const value);
    bool linkFormatInvalidIsSet() const;
    void unsetLink_format_invalid();
    /// <summary>
    /// 
    /// </summary>
    int32_t getParseLineError() const;
    void setParseLineError(int32_t const value);
    bool parseLineErrorIsSet() const;
    void unsetParse_line_error();
    /// <summary>
    /// 
    /// </summary>
    int32_t getAdwordsFormatInvalid() const;
    void setAdwordsFormatInvalid(int32_t const value);
    bool adwordsFormatInvalidIsSet() const;
    void unsetAdwords_format_invalid();
    /// <summary>
    /// 
    /// </summary>
    int32_t getProductCategoryMissing() const;
    void setProductCategoryMissing(int32_t const value);
    bool productCategoryMissingIsSet() const;
    void unsetProduct_category_missing();
    /// <summary>
    /// 
    /// </summary>
    int32_t getInternalServiceError() const;
    void setInternalServiceError(int32_t const value);
    bool internalServiceErrorIsSet() const;
    void unsetInternal_service_error();
    /// <summary>
    /// 
    /// </summary>
    int32_t getNoVerifiedDomain() const;
    void setNoVerifiedDomain(int32_t const value);
    bool noVerifiedDomainIsSet() const;
    void unsetNo_verified_domain();
    /// <summary>
    /// 
    /// </summary>
    int32_t getAdultInvalid() const;
    void setAdultInvalid(int32_t const value);
    bool adultInvalidIsSet() const;
    void unsetAdult_invalid();
    /// <summary>
    /// 
    /// </summary>
    int32_t getInvalidDomain() const;
    void setInvalidDomain(int32_t const value);
    bool invalidDomainIsSet() const;
    void unsetInvalid_domain();
    /// <summary>
    /// 
    /// </summary>
    int32_t getFeedLengthTooLong() const;
    void setFeedLengthTooLong(int32_t const value);
    bool feedLengthTooLongIsSet() const;
    void unsetFeed_length_too_long();
    /// <summary>
    /// 
    /// </summary>
    int32_t getLinkLengthTooLong() const;
    void setLinkLengthTooLong(int32_t const value);
    bool linkLengthTooLongIsSet() const;
    void unsetLink_length_too_long();
    /// <summary>
    /// 
    /// </summary>
    int32_t getMalformedXml() const;
    void setMalformedXml(int32_t const value);
    bool malformedXmlIsSet() const;
    void unsetMalformed_xml();
    /// <summary>
    /// 
    /// </summary>
    int32_t getRedirectInvalid() const;
    void setRedirectInvalid(int32_t const value);
    bool redirectInvalidIsSet() const;
    void unsetRedirect_invalid();
    /// <summary>
    /// 
    /// </summary>
    int32_t getPriceMissing() const;
    void setPriceMissing(int32_t const value);
    bool priceMissingIsSet() const;
    void unsetPrice_missing();
    /// <summary>
    /// 
    /// </summary>
    int32_t getFeedTooSmall() const;
    void setFeedTooSmall(int32_t const value);
    bool feedTooSmallIsSet() const;
    void unsetFeed_too_small();
    /// <summary>
    /// 
    /// </summary>
    int32_t getConditionInvalid() const;
    void setConditionInvalid(int32_t const value);
    bool conditionInvalidIsSet() const;
    void unsetCondition_invalid();
    /// <summary>
    /// 
    /// </summary>
    int32_t getShopifyNoProducts() const;
    void setShopifyNoProducts(int32_t const value);
    bool shopifyNoProductsIsSet() const;
    void unsetShopify_no_products();
    /// <summary>
    /// 
    /// </summary>
    int32_t getMaxItemsPerItemGroupExceeded() const;
    void setMaxItemsPerItemGroupExceeded(int32_t const value);
    bool maxItemsPerItemGroupExceededIsSet() const;
    void unsetMax_items_per_item_group_exceeded();
    /// <summary>
    /// 
    /// </summary>
    int32_t getItemMainImageDownloadFailure() const;
    void setItemMainImageDownloadFailure(int32_t const value);
    bool itemMainImageDownloadFailureIsSet() const;
    void unsetItem_main_image_download_failure();
    /// <summary>
    /// 
    /// </summary>
    int32_t getPinjoinContentUnsafe() const;
    void setPinjoinContentUnsafe(int32_t const value);
    bool pinjoinContentUnsafeIsSet() const;
    void unsetPinjoin_content_unsafe();
    /// <summary>
    /// 
    /// </summary>
    int32_t getBlocklistedImageSignature() const;
    void setBlocklistedImageSignature(int32_t const value);
    bool blocklistedImageSignatureIsSet() const;
    void unsetBlocklisted_image_signature();

    friend void to_json(nlohmann::json& j, const CatalogsFeedValidationErrors& o);
    friend void from_json(const nlohmann::json& j, CatalogsFeedValidationErrors& o);
protected:
    int32_t m_Fetch_error;
    bool m_Fetch_errorIsSet;
    int32_t m_Fetch_inactive_feed_error;
    bool m_Fetch_inactive_feed_errorIsSet;
    int32_t m_Encoding_error;
    bool m_Encoding_errorIsSet;
    int32_t m_Delimiter_error;
    bool m_Delimiter_errorIsSet;
    int32_t m_Required_columns_missing;
    bool m_Required_columns_missingIsSet;
    int32_t m_Image_link_invalid;
    bool m_Image_link_invalidIsSet;
    int32_t m_Itemid_missing;
    bool m_Itemid_missingIsSet;
    int32_t m_Title_missing;
    bool m_Title_missingIsSet;
    int32_t m_Description_missing;
    bool m_Description_missingIsSet;
    int32_t m_Product_category_invalid;
    bool m_Product_category_invalidIsSet;
    int32_t m_Product_link_missing;
    bool m_Product_link_missingIsSet;
    int32_t m_Image_link_missing;
    bool m_Image_link_missingIsSet;
    int32_t m_Availability_invalid;
    bool m_Availability_invalidIsSet;
    int32_t m_Product_price_invalid;
    bool m_Product_price_invalidIsSet;
    int32_t m_Link_format_invalid;
    bool m_Link_format_invalidIsSet;
    int32_t m_Parse_line_error;
    bool m_Parse_line_errorIsSet;
    int32_t m_Adwords_format_invalid;
    bool m_Adwords_format_invalidIsSet;
    int32_t m_Product_category_missing;
    bool m_Product_category_missingIsSet;
    int32_t m_Internal_service_error;
    bool m_Internal_service_errorIsSet;
    int32_t m_No_verified_domain;
    bool m_No_verified_domainIsSet;
    int32_t m_Adult_invalid;
    bool m_Adult_invalidIsSet;
    int32_t m_Invalid_domain;
    bool m_Invalid_domainIsSet;
    int32_t m_Feed_length_too_long;
    bool m_Feed_length_too_longIsSet;
    int32_t m_Link_length_too_long;
    bool m_Link_length_too_longIsSet;
    int32_t m_Malformed_xml;
    bool m_Malformed_xmlIsSet;
    int32_t m_Redirect_invalid;
    bool m_Redirect_invalidIsSet;
    int32_t m_Price_missing;
    bool m_Price_missingIsSet;
    int32_t m_Feed_too_small;
    bool m_Feed_too_smallIsSet;
    int32_t m_Condition_invalid;
    bool m_Condition_invalidIsSet;
    int32_t m_Shopify_no_products;
    bool m_Shopify_no_productsIsSet;
    int32_t m_Max_items_per_item_group_exceeded;
    bool m_Max_items_per_item_group_exceededIsSet;
    int32_t m_Item_main_image_download_failure;
    bool m_Item_main_image_download_failureIsSet;
    int32_t m_Pinjoin_content_unsafe;
    bool m_Pinjoin_content_unsafeIsSet;
    int32_t m_Blocklisted_image_signature;
    bool m_Blocklisted_image_signatureIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsFeedValidationErrors_H_ */
