/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICatalogsFeedValidationErrors.h
 *
 * 
 */

#ifndef OAICatalogsFeedValidationErrors_H
#define OAICatalogsFeedValidationErrors_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsFeedValidationErrors : public OAIObject {
public:
    OAICatalogsFeedValidationErrors();
    OAICatalogsFeedValidationErrors(QString json);
    ~OAICatalogsFeedValidationErrors() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFetchError() const;
    void setFetchError(const qint32 &fetch_error);
    bool is_fetch_error_Set() const;
    bool is_fetch_error_Valid() const;

    qint32 getFetchInactiveFeedError() const;
    void setFetchInactiveFeedError(const qint32 &fetch_inactive_feed_error);
    bool is_fetch_inactive_feed_error_Set() const;
    bool is_fetch_inactive_feed_error_Valid() const;

    qint32 getEncodingError() const;
    void setEncodingError(const qint32 &encoding_error);
    bool is_encoding_error_Set() const;
    bool is_encoding_error_Valid() const;

    qint32 getDelimiterError() const;
    void setDelimiterError(const qint32 &delimiter_error);
    bool is_delimiter_error_Set() const;
    bool is_delimiter_error_Valid() const;

    qint32 getRequiredColumnsMissing() const;
    void setRequiredColumnsMissing(const qint32 &required_columns_missing);
    bool is_required_columns_missing_Set() const;
    bool is_required_columns_missing_Valid() const;

    qint32 getImageLinkInvalid() const;
    void setImageLinkInvalid(const qint32 &image_link_invalid);
    bool is_image_link_invalid_Set() const;
    bool is_image_link_invalid_Valid() const;

    qint32 getItemidMissing() const;
    void setItemidMissing(const qint32 &itemid_missing);
    bool is_itemid_missing_Set() const;
    bool is_itemid_missing_Valid() const;

    qint32 getTitleMissing() const;
    void setTitleMissing(const qint32 &title_missing);
    bool is_title_missing_Set() const;
    bool is_title_missing_Valid() const;

    qint32 getDescriptionMissing() const;
    void setDescriptionMissing(const qint32 &description_missing);
    bool is_description_missing_Set() const;
    bool is_description_missing_Valid() const;

    qint32 getProductLinkMissing() const;
    void setProductLinkMissing(const qint32 &product_link_missing);
    bool is_product_link_missing_Set() const;
    bool is_product_link_missing_Valid() const;

    qint32 getImageLinkMissing() const;
    void setImageLinkMissing(const qint32 &image_link_missing);
    bool is_image_link_missing_Set() const;
    bool is_image_link_missing_Valid() const;

    qint32 getAvailabilityInvalid() const;
    void setAvailabilityInvalid(const qint32 &availability_invalid);
    bool is_availability_invalid_Set() const;
    bool is_availability_invalid_Valid() const;

    qint32 getProductPriceInvalid() const;
    void setProductPriceInvalid(const qint32 &product_price_invalid);
    bool is_product_price_invalid_Set() const;
    bool is_product_price_invalid_Valid() const;

    qint32 getLinkFormatInvalid() const;
    void setLinkFormatInvalid(const qint32 &link_format_invalid);
    bool is_link_format_invalid_Set() const;
    bool is_link_format_invalid_Valid() const;

    qint32 getParseLineError() const;
    void setParseLineError(const qint32 &parse_line_error);
    bool is_parse_line_error_Set() const;
    bool is_parse_line_error_Valid() const;

    qint32 getAdwordsFormatInvalid() const;
    void setAdwordsFormatInvalid(const qint32 &adwords_format_invalid);
    bool is_adwords_format_invalid_Set() const;
    bool is_adwords_format_invalid_Valid() const;

    qint32 getInternalServiceError() const;
    void setInternalServiceError(const qint32 &internal_service_error);
    bool is_internal_service_error_Set() const;
    bool is_internal_service_error_Valid() const;

    qint32 getNoVerifiedDomain() const;
    void setNoVerifiedDomain(const qint32 &no_verified_domain);
    bool is_no_verified_domain_Set() const;
    bool is_no_verified_domain_Valid() const;

    qint32 getAdultInvalid() const;
    void setAdultInvalid(const qint32 &adult_invalid);
    bool is_adult_invalid_Set() const;
    bool is_adult_invalid_Valid() const;

    qint32 getImageLinkLengthTooLong() const;
    void setImageLinkLengthTooLong(const qint32 &image_link_length_too_long);
    bool is_image_link_length_too_long_Set() const;
    bool is_image_link_length_too_long_Valid() const;

    qint32 getInvalidDomain() const;
    void setInvalidDomain(const qint32 &invalid_domain);
    bool is_invalid_domain_Set() const;
    bool is_invalid_domain_Valid() const;

    qint32 getFeedLengthTooLong() const;
    void setFeedLengthTooLong(const qint32 &feed_length_too_long);
    bool is_feed_length_too_long_Set() const;
    bool is_feed_length_too_long_Valid() const;

    qint32 getLinkLengthTooLong() const;
    void setLinkLengthTooLong(const qint32 &link_length_too_long);
    bool is_link_length_too_long_Set() const;
    bool is_link_length_too_long_Valid() const;

    qint32 getMalformedXml() const;
    void setMalformedXml(const qint32 &malformed_xml);
    bool is_malformed_xml_Set() const;
    bool is_malformed_xml_Valid() const;

    qint32 getPriceMissing() const;
    void setPriceMissing(const qint32 &price_missing);
    bool is_price_missing_Set() const;
    bool is_price_missing_Valid() const;

    qint32 getFeedTooSmall() const;
    void setFeedTooSmall(const qint32 &feed_too_small);
    bool is_feed_too_small_Set() const;
    bool is_feed_too_small_Valid() const;

    qint32 getMaxItemsPerItemGroupExceeded() const;
    void setMaxItemsPerItemGroupExceeded(const qint32 &max_items_per_item_group_exceeded);
    bool is_max_items_per_item_group_exceeded_Set() const;
    bool is_max_items_per_item_group_exceeded_Valid() const;

    qint32 getItemMainImageDownloadFailure() const;
    void setItemMainImageDownloadFailure(const qint32 &item_main_image_download_failure);
    bool is_item_main_image_download_failure_Set() const;
    bool is_item_main_image_download_failure_Valid() const;

    qint32 getPinjoinContentUnsafe() const;
    void setPinjoinContentUnsafe(const qint32 &pinjoin_content_unsafe);
    bool is_pinjoin_content_unsafe_Set() const;
    bool is_pinjoin_content_unsafe_Valid() const;

    qint32 getBlocklistedImageSignature() const;
    void setBlocklistedImageSignature(const qint32 &blocklisted_image_signature);
    bool is_blocklisted_image_signature_Set() const;
    bool is_blocklisted_image_signature_Valid() const;

    qint32 getListPriceInvalid() const;
    void setListPriceInvalid(const qint32 &list_price_invalid);
    bool is_list_price_invalid_Set() const;
    bool is_list_price_invalid_Valid() const;

    qint32 getPriceCannotBeDetermined() const;
    void setPriceCannotBeDetermined(const qint32 &price_cannot_be_determined);
    bool is_price_cannot_be_determined_Set() const;
    bool is_price_cannot_be_determined_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fetch_error;
    bool m_fetch_error_isSet;
    bool m_fetch_error_isValid;

    qint32 fetch_inactive_feed_error;
    bool m_fetch_inactive_feed_error_isSet;
    bool m_fetch_inactive_feed_error_isValid;

    qint32 encoding_error;
    bool m_encoding_error_isSet;
    bool m_encoding_error_isValid;

    qint32 delimiter_error;
    bool m_delimiter_error_isSet;
    bool m_delimiter_error_isValid;

    qint32 required_columns_missing;
    bool m_required_columns_missing_isSet;
    bool m_required_columns_missing_isValid;

    qint32 image_link_invalid;
    bool m_image_link_invalid_isSet;
    bool m_image_link_invalid_isValid;

    qint32 itemid_missing;
    bool m_itemid_missing_isSet;
    bool m_itemid_missing_isValid;

    qint32 title_missing;
    bool m_title_missing_isSet;
    bool m_title_missing_isValid;

    qint32 description_missing;
    bool m_description_missing_isSet;
    bool m_description_missing_isValid;

    qint32 product_link_missing;
    bool m_product_link_missing_isSet;
    bool m_product_link_missing_isValid;

    qint32 image_link_missing;
    bool m_image_link_missing_isSet;
    bool m_image_link_missing_isValid;

    qint32 availability_invalid;
    bool m_availability_invalid_isSet;
    bool m_availability_invalid_isValid;

    qint32 product_price_invalid;
    bool m_product_price_invalid_isSet;
    bool m_product_price_invalid_isValid;

    qint32 link_format_invalid;
    bool m_link_format_invalid_isSet;
    bool m_link_format_invalid_isValid;

    qint32 parse_line_error;
    bool m_parse_line_error_isSet;
    bool m_parse_line_error_isValid;

    qint32 adwords_format_invalid;
    bool m_adwords_format_invalid_isSet;
    bool m_adwords_format_invalid_isValid;

    qint32 internal_service_error;
    bool m_internal_service_error_isSet;
    bool m_internal_service_error_isValid;

    qint32 no_verified_domain;
    bool m_no_verified_domain_isSet;
    bool m_no_verified_domain_isValid;

    qint32 adult_invalid;
    bool m_adult_invalid_isSet;
    bool m_adult_invalid_isValid;

    qint32 image_link_length_too_long;
    bool m_image_link_length_too_long_isSet;
    bool m_image_link_length_too_long_isValid;

    qint32 invalid_domain;
    bool m_invalid_domain_isSet;
    bool m_invalid_domain_isValid;

    qint32 feed_length_too_long;
    bool m_feed_length_too_long_isSet;
    bool m_feed_length_too_long_isValid;

    qint32 link_length_too_long;
    bool m_link_length_too_long_isSet;
    bool m_link_length_too_long_isValid;

    qint32 malformed_xml;
    bool m_malformed_xml_isSet;
    bool m_malformed_xml_isValid;

    qint32 price_missing;
    bool m_price_missing_isSet;
    bool m_price_missing_isValid;

    qint32 feed_too_small;
    bool m_feed_too_small_isSet;
    bool m_feed_too_small_isValid;

    qint32 max_items_per_item_group_exceeded;
    bool m_max_items_per_item_group_exceeded_isSet;
    bool m_max_items_per_item_group_exceeded_isValid;

    qint32 item_main_image_download_failure;
    bool m_item_main_image_download_failure_isSet;
    bool m_item_main_image_download_failure_isValid;

    qint32 pinjoin_content_unsafe;
    bool m_pinjoin_content_unsafe_isSet;
    bool m_pinjoin_content_unsafe_isValid;

    qint32 blocklisted_image_signature;
    bool m_blocklisted_image_signature_isSet;
    bool m_blocklisted_image_signature_isValid;

    qint32 list_price_invalid;
    bool m_list_price_invalid_isSet;
    bool m_list_price_invalid_isValid;

    qint32 price_cannot_be_determined;
    bool m_price_cannot_be_determined_isSet;
    bool m_price_cannot_be_determined_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsFeedValidationErrors)

#endif // OAICatalogsFeedValidationErrors_H
