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
package org.openapitools.server.models


/**
 * 
 * @param FETCH_ERROR Pinterest couldn't download your feed.
 * @param FETCH_INACTIVE_FEED_ERROR Your feed wasn't ingested because it hasn’t changed in the previous 90 days.
 * @param ENCODING_ERROR Your feed includes data with an unsupported encoding format.
 * @param DELIMITER_ERROR Your feed includes data with formatting errors.
 * @param REQUIRED_COLUMNS_MISSING Your feed is missing some required column headers.
 * @param DUPLICATE_PRODUCTS Some products are duplicated.
 * @param IMAGE_LINK_INVALID Some image links are formatted incorrectly.
 * @param ITEMID_MISSING Some items are missing an item id in their product metadata, those items will not be published.
 * @param TITLE_MISSING Some items are missing a title in their product metadata, those items will not be published.
 * @param DESCRIPTION_MISSING Some items are missing a description in their product metadata, those items will not be published.
 * @param PRODUCT_LINK_MISSING Some items are missing a link URL in their product metadata, those items will not be published.
 * @param IMAGE_LINK_MISSING Some items are missing an image link URL in their product metadata, those items will not be published.
 * @param AVAILABILITY_INVALID Some items are missing an availability value in their product metadata, those items will not be published.
 * @param PRODUCT_PRICE_INVALID Some items have price formatting errors in their product metadata, those items will not be published.
 * @param LINK_FORMAT_INVALID Some link values are formatted incorrectly.
 * @param PARSE_LINE_ERROR Your feed contains formatting errors for some items.
 * @param ADWORDS_FORMAT_INVALID Some adwords links contain too many characters.
 * @param INTERNAL_SERVICE_ERROR We experienced a technical difficulty and were unable to ingest your feed. The next ingestion will happen in 24 hours.
 * @param NO_VERIFIED_DOMAIN Your merchant domain needs to be claimed.
 * @param ADULT_INVALID Some items have invalid adult values.
 * @param IMAGE_LINK_LENGTH_TOO_LONG Some items have image_link URLs that contain too many characters, so those items will not be published.
 * @param INVALID_DOMAIN Some of your product link values don't match the verified domain associated with this account.
 * @param FEED_LENGTH_TOO_LONG Your feed contains too many items, some items will not be published.
 * @param LINK_LENGTH_TOO_LONG Some product links contain too many characters, those items will not be published.
 * @param MALFORMED_XML Your feed couldn't be validated because the xml file is formatted incorrectly.
 * @param PRICE_MISSING Some products are missing a price, those items will not be published.
 * @param FEED_TOO_SMALL Your feed couldn't be validated because the file doesn't contain the minimum number of lines required.
 * @param MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED Some items exceed the maximum number of items per item group, those items will not be published.
 * @param ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE Some items' main images can't be found.
 * @param PINJOIN_CONTENT_UNSAFE Some items were not published because they don't meet Pinterest's Merchant Guidelines.
 * @param BLOCKLISTED_IMAGE_SIGNATURE Some items were not published because they don't meet Pinterest's Merchant Guidelines.
 * @param LIST_PRICE_INVALID Some items have list price formatting errors in their product metadata, those items will not be published.
 * @param PRICE_CANNOT_BE_DETERMINED Some items were not published because price cannot be determined. The price, list price, and sale price are all different, so those items will not be published.
 */
data class CatalogsFeedValidationErrors(
    /* Pinterest couldn't download your feed. */
    val FETCH_ERROR: kotlin.Int? = null,
    /* Your feed wasn't ingested because it hasn’t changed in the previous 90 days. */
    val FETCH_INACTIVE_FEED_ERROR: kotlin.Int? = null,
    /* Your feed includes data with an unsupported encoding format. */
    val ENCODING_ERROR: kotlin.Int? = null,
    /* Your feed includes data with formatting errors. */
    val DELIMITER_ERROR: kotlin.Int? = null,
    /* Your feed is missing some required column headers. */
    val REQUIRED_COLUMNS_MISSING: kotlin.Int? = null,
    /* Some products are duplicated. */
    val DUPLICATE_PRODUCTS: kotlin.Int? = null,
    /* Some image links are formatted incorrectly. */
    val IMAGE_LINK_INVALID: kotlin.Int? = null,
    /* Some items are missing an item id in their product metadata, those items will not be published. */
    val ITEMID_MISSING: kotlin.Int? = null,
    /* Some items are missing a title in their product metadata, those items will not be published. */
    val TITLE_MISSING: kotlin.Int? = null,
    /* Some items are missing a description in their product metadata, those items will not be published. */
    val DESCRIPTION_MISSING: kotlin.Int? = null,
    /* Some items are missing a link URL in their product metadata, those items will not be published. */
    val PRODUCT_LINK_MISSING: kotlin.Int? = null,
    /* Some items are missing an image link URL in their product metadata, those items will not be published. */
    val IMAGE_LINK_MISSING: kotlin.Int? = null,
    /* Some items are missing an availability value in their product metadata, those items will not be published. */
    val AVAILABILITY_INVALID: kotlin.Int? = null,
    /* Some items have price formatting errors in their product metadata, those items will not be published. */
    val PRODUCT_PRICE_INVALID: kotlin.Int? = null,
    /* Some link values are formatted incorrectly. */
    val LINK_FORMAT_INVALID: kotlin.Int? = null,
    /* Your feed contains formatting errors for some items. */
    val PARSE_LINE_ERROR: kotlin.Int? = null,
    /* Some adwords links contain too many characters. */
    val ADWORDS_FORMAT_INVALID: kotlin.Int? = null,
    /* We experienced a technical difficulty and were unable to ingest your feed. The next ingestion will happen in 24 hours. */
    val INTERNAL_SERVICE_ERROR: kotlin.Int? = null,
    /* Your merchant domain needs to be claimed. */
    val NO_VERIFIED_DOMAIN: kotlin.Int? = null,
    /* Some items have invalid adult values. */
    val ADULT_INVALID: kotlin.Int? = null,
    /* Some items have image_link URLs that contain too many characters, so those items will not be published. */
    val IMAGE_LINK_LENGTH_TOO_LONG: kotlin.Int? = null,
    /* Some of your product link values don't match the verified domain associated with this account. */
    val INVALID_DOMAIN: kotlin.Int? = null,
    /* Your feed contains too many items, some items will not be published. */
    val FEED_LENGTH_TOO_LONG: kotlin.Int? = null,
    /* Some product links contain too many characters, those items will not be published. */
    val LINK_LENGTH_TOO_LONG: kotlin.Int? = null,
    /* Your feed couldn't be validated because the xml file is formatted incorrectly. */
    val MALFORMED_XML: kotlin.Int? = null,
    /* Some products are missing a price, those items will not be published. */
    val PRICE_MISSING: kotlin.Int? = null,
    /* Your feed couldn't be validated because the file doesn't contain the minimum number of lines required. */
    val FEED_TOO_SMALL: kotlin.Int? = null,
    /* Some items exceed the maximum number of items per item group, those items will not be published. */
    val MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED: kotlin.Int? = null,
    /* Some items' main images can't be found. */
    val ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE: kotlin.Int? = null,
    /* Some items were not published because they don't meet Pinterest's Merchant Guidelines. */
    val PINJOIN_CONTENT_UNSAFE: kotlin.Int? = null,
    /* Some items were not published because they don't meet Pinterest's Merchant Guidelines. */
    val BLOCKLISTED_IMAGE_SIGNATURE: kotlin.Int? = null,
    /* Some items have list price formatting errors in their product metadata, those items will not be published. */
    val LIST_PRICE_INVALID: kotlin.Int? = null,
    /* Some items were not published because price cannot be determined. The price, list price, and sale price are all different, so those items will not be published. */
    val PRICE_CANNOT_BE_DETERMINED: kotlin.Int? = null
) 
