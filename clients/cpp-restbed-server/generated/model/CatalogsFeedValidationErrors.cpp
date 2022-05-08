/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CatalogsFeedValidationErrors.h"

#include <string>
#include <vector>
#include <sstream>
#include <stdexcept>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

CatalogsFeedValidationErrors::CatalogsFeedValidationErrors(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string CatalogsFeedValidationErrors::toJsonString(bool prettyJson /* = false */)
{
    return toJsonString_internal(prettyJson);
}

void CatalogsFeedValidationErrors::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree CatalogsFeedValidationErrors::toPropertyTree()
{
    return toPropertyTree_internal();
}

void CatalogsFeedValidationErrors::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string CatalogsFeedValidationErrors::toJsonString_internal(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void CatalogsFeedValidationErrors::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree CatalogsFeedValidationErrors::toPropertyTree_internal()
{
	ptree pt;
	ptree tmp_node;
	pt.put("fetch_error", m_Fetch_error);
	pt.put("fetch_inactive_feed_error", m_Fetch_inactive_feed_error);
	pt.put("encoding_error", m_Encoding_error);
	pt.put("delimiter_error", m_Delimiter_error);
	pt.put("required_columns_missing", m_Required_columns_missing);
	pt.put("image_link_invalid", m_Image_link_invalid);
	pt.put("itemid_missing", m_Itemid_missing);
	pt.put("title_missing", m_Title_missing);
	pt.put("description_missing", m_Description_missing);
	pt.put("product_category_invalid", m_Product_category_invalid);
	pt.put("product_link_missing", m_Product_link_missing);
	pt.put("image_link_missing", m_Image_link_missing);
	pt.put("availability_invalid", m_Availability_invalid);
	pt.put("product_price_invalid", m_Product_price_invalid);
	pt.put("link_format_invalid", m_Link_format_invalid);
	pt.put("parse_line_error", m_Parse_line_error);
	pt.put("adwords_format_invalid", m_Adwords_format_invalid);
	pt.put("product_category_missing", m_Product_category_missing);
	pt.put("internal_service_error", m_Internal_service_error);
	pt.put("no_verified_domain", m_No_verified_domain);
	pt.put("adult_invalid", m_Adult_invalid);
	pt.put("invalid_domain", m_Invalid_domain);
	pt.put("feed_length_too_long", m_Feed_length_too_long);
	pt.put("link_length_too_long", m_Link_length_too_long);
	pt.put("malformed_xml", m_Malformed_xml);
	pt.put("redirect_invalid", m_Redirect_invalid);
	pt.put("price_missing", m_Price_missing);
	pt.put("feed_too_small", m_Feed_too_small);
	pt.put("condition_invalid", m_Condition_invalid);
	pt.put("shopify_no_products", m_Shopify_no_products);
	pt.put("max_items_per_item_group_exceeded", m_Max_items_per_item_group_exceeded);
	pt.put("item_main_image_download_failure", m_Item_main_image_download_failure);
	pt.put("pinjoin_content_unsafe", m_Pinjoin_content_unsafe);
	pt.put("blocklisted_image_signature", m_Blocklisted_image_signature);
	return pt;
}

void CatalogsFeedValidationErrors::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	m_Fetch_error = pt.get("fetch_error", 0);
	m_Fetch_inactive_feed_error = pt.get("fetch_inactive_feed_error", 0);
	m_Encoding_error = pt.get("encoding_error", 0);
	m_Delimiter_error = pt.get("delimiter_error", 0);
	m_Required_columns_missing = pt.get("required_columns_missing", 0);
	m_Image_link_invalid = pt.get("image_link_invalid", 0);
	m_Itemid_missing = pt.get("itemid_missing", 0);
	m_Title_missing = pt.get("title_missing", 0);
	m_Description_missing = pt.get("description_missing", 0);
	m_Product_category_invalid = pt.get("product_category_invalid", 0);
	m_Product_link_missing = pt.get("product_link_missing", 0);
	m_Image_link_missing = pt.get("image_link_missing", 0);
	m_Availability_invalid = pt.get("availability_invalid", 0);
	m_Product_price_invalid = pt.get("product_price_invalid", 0);
	m_Link_format_invalid = pt.get("link_format_invalid", 0);
	m_Parse_line_error = pt.get("parse_line_error", 0);
	m_Adwords_format_invalid = pt.get("adwords_format_invalid", 0);
	m_Product_category_missing = pt.get("product_category_missing", 0);
	m_Internal_service_error = pt.get("internal_service_error", 0);
	m_No_verified_domain = pt.get("no_verified_domain", 0);
	m_Adult_invalid = pt.get("adult_invalid", 0);
	m_Invalid_domain = pt.get("invalid_domain", 0);
	m_Feed_length_too_long = pt.get("feed_length_too_long", 0);
	m_Link_length_too_long = pt.get("link_length_too_long", 0);
	m_Malformed_xml = pt.get("malformed_xml", 0);
	m_Redirect_invalid = pt.get("redirect_invalid", 0);
	m_Price_missing = pt.get("price_missing", 0);
	m_Feed_too_small = pt.get("feed_too_small", 0);
	m_Condition_invalid = pt.get("condition_invalid", 0);
	m_Shopify_no_products = pt.get("shopify_no_products", 0);
	m_Max_items_per_item_group_exceeded = pt.get("max_items_per_item_group_exceeded", 0);
	m_Item_main_image_download_failure = pt.get("item_main_image_download_failure", 0);
	m_Pinjoin_content_unsafe = pt.get("pinjoin_content_unsafe", 0);
	m_Blocklisted_image_signature = pt.get("blocklisted_image_signature", 0);
}

int32_t CatalogsFeedValidationErrors::getFetchError() const
{
    return m_Fetch_error;
}

void CatalogsFeedValidationErrors::setFetchError(int32_t value)
{
	m_Fetch_error = value;
}
int32_t CatalogsFeedValidationErrors::getFetchInactiveFeedError() const
{
    return m_Fetch_inactive_feed_error;
}

void CatalogsFeedValidationErrors::setFetchInactiveFeedError(int32_t value)
{
	m_Fetch_inactive_feed_error = value;
}
int32_t CatalogsFeedValidationErrors::getEncodingError() const
{
    return m_Encoding_error;
}

void CatalogsFeedValidationErrors::setEncodingError(int32_t value)
{
	m_Encoding_error = value;
}
int32_t CatalogsFeedValidationErrors::getDelimiterError() const
{
    return m_Delimiter_error;
}

void CatalogsFeedValidationErrors::setDelimiterError(int32_t value)
{
	m_Delimiter_error = value;
}
int32_t CatalogsFeedValidationErrors::getRequiredColumnsMissing() const
{
    return m_Required_columns_missing;
}

void CatalogsFeedValidationErrors::setRequiredColumnsMissing(int32_t value)
{
	m_Required_columns_missing = value;
}
int32_t CatalogsFeedValidationErrors::getImageLinkInvalid() const
{
    return m_Image_link_invalid;
}

void CatalogsFeedValidationErrors::setImageLinkInvalid(int32_t value)
{
	m_Image_link_invalid = value;
}
int32_t CatalogsFeedValidationErrors::getItemidMissing() const
{
    return m_Itemid_missing;
}

void CatalogsFeedValidationErrors::setItemidMissing(int32_t value)
{
	m_Itemid_missing = value;
}
int32_t CatalogsFeedValidationErrors::getTitleMissing() const
{
    return m_Title_missing;
}

void CatalogsFeedValidationErrors::setTitleMissing(int32_t value)
{
	m_Title_missing = value;
}
int32_t CatalogsFeedValidationErrors::getDescriptionMissing() const
{
    return m_Description_missing;
}

void CatalogsFeedValidationErrors::setDescriptionMissing(int32_t value)
{
	m_Description_missing = value;
}
int32_t CatalogsFeedValidationErrors::getProductCategoryInvalid() const
{
    return m_Product_category_invalid;
}

void CatalogsFeedValidationErrors::setProductCategoryInvalid(int32_t value)
{
	m_Product_category_invalid = value;
}
int32_t CatalogsFeedValidationErrors::getProductLinkMissing() const
{
    return m_Product_link_missing;
}

void CatalogsFeedValidationErrors::setProductLinkMissing(int32_t value)
{
	m_Product_link_missing = value;
}
int32_t CatalogsFeedValidationErrors::getImageLinkMissing() const
{
    return m_Image_link_missing;
}

void CatalogsFeedValidationErrors::setImageLinkMissing(int32_t value)
{
	m_Image_link_missing = value;
}
int32_t CatalogsFeedValidationErrors::getAvailabilityInvalid() const
{
    return m_Availability_invalid;
}

void CatalogsFeedValidationErrors::setAvailabilityInvalid(int32_t value)
{
	m_Availability_invalid = value;
}
int32_t CatalogsFeedValidationErrors::getProductPriceInvalid() const
{
    return m_Product_price_invalid;
}

void CatalogsFeedValidationErrors::setProductPriceInvalid(int32_t value)
{
	m_Product_price_invalid = value;
}
int32_t CatalogsFeedValidationErrors::getLinkFormatInvalid() const
{
    return m_Link_format_invalid;
}

void CatalogsFeedValidationErrors::setLinkFormatInvalid(int32_t value)
{
	m_Link_format_invalid = value;
}
int32_t CatalogsFeedValidationErrors::getParseLineError() const
{
    return m_Parse_line_error;
}

void CatalogsFeedValidationErrors::setParseLineError(int32_t value)
{
	m_Parse_line_error = value;
}
int32_t CatalogsFeedValidationErrors::getAdwordsFormatInvalid() const
{
    return m_Adwords_format_invalid;
}

void CatalogsFeedValidationErrors::setAdwordsFormatInvalid(int32_t value)
{
	m_Adwords_format_invalid = value;
}
int32_t CatalogsFeedValidationErrors::getProductCategoryMissing() const
{
    return m_Product_category_missing;
}

void CatalogsFeedValidationErrors::setProductCategoryMissing(int32_t value)
{
	m_Product_category_missing = value;
}
int32_t CatalogsFeedValidationErrors::getInternalServiceError() const
{
    return m_Internal_service_error;
}

void CatalogsFeedValidationErrors::setInternalServiceError(int32_t value)
{
	m_Internal_service_error = value;
}
int32_t CatalogsFeedValidationErrors::getNoVerifiedDomain() const
{
    return m_No_verified_domain;
}

void CatalogsFeedValidationErrors::setNoVerifiedDomain(int32_t value)
{
	m_No_verified_domain = value;
}
int32_t CatalogsFeedValidationErrors::getAdultInvalid() const
{
    return m_Adult_invalid;
}

void CatalogsFeedValidationErrors::setAdultInvalid(int32_t value)
{
	m_Adult_invalid = value;
}
int32_t CatalogsFeedValidationErrors::getInvalidDomain() const
{
    return m_Invalid_domain;
}

void CatalogsFeedValidationErrors::setInvalidDomain(int32_t value)
{
	m_Invalid_domain = value;
}
int32_t CatalogsFeedValidationErrors::getFeedLengthTooLong() const
{
    return m_Feed_length_too_long;
}

void CatalogsFeedValidationErrors::setFeedLengthTooLong(int32_t value)
{
	m_Feed_length_too_long = value;
}
int32_t CatalogsFeedValidationErrors::getLinkLengthTooLong() const
{
    return m_Link_length_too_long;
}

void CatalogsFeedValidationErrors::setLinkLengthTooLong(int32_t value)
{
	m_Link_length_too_long = value;
}
int32_t CatalogsFeedValidationErrors::getMalformedXml() const
{
    return m_Malformed_xml;
}

void CatalogsFeedValidationErrors::setMalformedXml(int32_t value)
{
	m_Malformed_xml = value;
}
int32_t CatalogsFeedValidationErrors::getRedirectInvalid() const
{
    return m_Redirect_invalid;
}

void CatalogsFeedValidationErrors::setRedirectInvalid(int32_t value)
{
	m_Redirect_invalid = value;
}
int32_t CatalogsFeedValidationErrors::getPriceMissing() const
{
    return m_Price_missing;
}

void CatalogsFeedValidationErrors::setPriceMissing(int32_t value)
{
	m_Price_missing = value;
}
int32_t CatalogsFeedValidationErrors::getFeedTooSmall() const
{
    return m_Feed_too_small;
}

void CatalogsFeedValidationErrors::setFeedTooSmall(int32_t value)
{
	m_Feed_too_small = value;
}
int32_t CatalogsFeedValidationErrors::getConditionInvalid() const
{
    return m_Condition_invalid;
}

void CatalogsFeedValidationErrors::setConditionInvalid(int32_t value)
{
	m_Condition_invalid = value;
}
int32_t CatalogsFeedValidationErrors::getShopifyNoProducts() const
{
    return m_Shopify_no_products;
}

void CatalogsFeedValidationErrors::setShopifyNoProducts(int32_t value)
{
	m_Shopify_no_products = value;
}
int32_t CatalogsFeedValidationErrors::getMaxItemsPerItemGroupExceeded() const
{
    return m_Max_items_per_item_group_exceeded;
}

void CatalogsFeedValidationErrors::setMaxItemsPerItemGroupExceeded(int32_t value)
{
	m_Max_items_per_item_group_exceeded = value;
}
int32_t CatalogsFeedValidationErrors::getItemMainImageDownloadFailure() const
{
    return m_Item_main_image_download_failure;
}

void CatalogsFeedValidationErrors::setItemMainImageDownloadFailure(int32_t value)
{
	m_Item_main_image_download_failure = value;
}
int32_t CatalogsFeedValidationErrors::getPinjoinContentUnsafe() const
{
    return m_Pinjoin_content_unsafe;
}

void CatalogsFeedValidationErrors::setPinjoinContentUnsafe(int32_t value)
{
	m_Pinjoin_content_unsafe = value;
}
int32_t CatalogsFeedValidationErrors::getBlocklistedImageSignature() const
{
    return m_Blocklisted_image_signature;
}

void CatalogsFeedValidationErrors::setBlocklistedImageSignature(int32_t value)
{
	m_Blocklisted_image_signature = value;
}

std::vector<CatalogsFeedValidationErrors> createCatalogsFeedValidationErrorsVectorFromJsonString(const std::string& json)
{
    std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    auto vec = std::vector<CatalogsFeedValidationErrors>();
    for (const auto& child: pt) {
        vec.emplace_back(CatalogsFeedValidationErrors(child.second));
    }

    return vec;
}

}
}
}
}

