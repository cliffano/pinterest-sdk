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
package org.openapitools.database.models

import org.ktorm.dsl.*
import org.ktorm.schema.*
import org.ktorm.database.Database
import .*


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
object CatalogsFeedValidationErrorss : BaseTable<CatalogsFeedValidationErrors>("CatalogsFeedValidationErrors") {
    val FETCH_ERROR = int("FETCH_ERROR") /* null */ /* Pinterest couldn't download your feed. */
    val FETCH_INACTIVE_FEED_ERROR = int("FETCH_INACTIVE_FEED_ERROR") /* null */ /* Your feed wasn't ingested because it hasn’t changed in the previous 90 days. */
    val ENCODING_ERROR = int("ENCODING_ERROR") /* null */ /* Your feed includes data with an unsupported encoding format. */
    val DELIMITER_ERROR = int("DELIMITER_ERROR") /* null */ /* Your feed includes data with formatting errors. */
    val REQUIRED_COLUMNS_MISSING = int("REQUIRED_COLUMNS_MISSING") /* null */ /* Your feed is missing some required column headers. */
    val DUPLICATE_PRODUCTS = int("DUPLICATE_PRODUCTS") /* null */ /* Some products are duplicated. */
    val IMAGE_LINK_INVALID = int("IMAGE_LINK_INVALID") /* null */ /* Some image links are formatted incorrectly. */
    val ITEMID_MISSING = int("ITEMID_MISSING") /* null */ /* Some items are missing an item id in their product metadata, those items will not be published. */
    val TITLE_MISSING = int("TITLE_MISSING") /* null */ /* Some items are missing a title in their product metadata, those items will not be published. */
    val DESCRIPTION_MISSING = int("DESCRIPTION_MISSING") /* null */ /* Some items are missing a description in their product metadata, those items will not be published. */
    val PRODUCT_LINK_MISSING = int("PRODUCT_LINK_MISSING") /* null */ /* Some items are missing a link URL in their product metadata, those items will not be published. */
    val IMAGE_LINK_MISSING = int("IMAGE_LINK_MISSING") /* null */ /* Some items are missing an image link URL in their product metadata, those items will not be published. */
    val AVAILABILITY_INVALID = int("AVAILABILITY_INVALID") /* null */ /* Some items are missing an availability value in their product metadata, those items will not be published. */
    val PRODUCT_PRICE_INVALID = int("PRODUCT_PRICE_INVALID") /* null */ /* Some items have price formatting errors in their product metadata, those items will not be published. */
    val LINK_FORMAT_INVALID = int("LINK_FORMAT_INVALID") /* null */ /* Some link values are formatted incorrectly. */
    val PARSE_LINE_ERROR = int("PARSE_LINE_ERROR") /* null */ /* Your feed contains formatting errors for some items. */
    val ADWORDS_FORMAT_INVALID = int("ADWORDS_FORMAT_INVALID") /* null */ /* Some adwords links contain too many characters. */
    val INTERNAL_SERVICE_ERROR = int("INTERNAL_SERVICE_ERROR") /* null */ /* We experienced a technical difficulty and were unable to ingest your feed. The next ingestion will happen in 24 hours. */
    val NO_VERIFIED_DOMAIN = int("NO_VERIFIED_DOMAIN") /* null */ /* Your merchant domain needs to be claimed. */
    val ADULT_INVALID = int("ADULT_INVALID") /* null */ /* Some items have invalid adult values. */
    val IMAGE_LINK_LENGTH_TOO_LONG = int("IMAGE_LINK_LENGTH_TOO_LONG") /* null */ /* Some items have image_link URLs that contain too many characters, so those items will not be published. */
    val INVALID_DOMAIN = int("INVALID_DOMAIN") /* null */ /* Some of your product link values don't match the verified domain associated with this account. */
    val FEED_LENGTH_TOO_LONG = int("FEED_LENGTH_TOO_LONG") /* null */ /* Your feed contains too many items, some items will not be published. */
    val LINK_LENGTH_TOO_LONG = int("LINK_LENGTH_TOO_LONG") /* null */ /* Some product links contain too many characters, those items will not be published. */
    val MALFORMED_XML = int("MALFORMED_XML") /* null */ /* Your feed couldn't be validated because the xml file is formatted incorrectly. */
    val PRICE_MISSING = int("PRICE_MISSING") /* null */ /* Some products are missing a price, those items will not be published. */
    val FEED_TOO_SMALL = int("FEED_TOO_SMALL") /* null */ /* Your feed couldn't be validated because the file doesn't contain the minimum number of lines required. */
    val MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED = int("MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED") /* null */ /* Some items exceed the maximum number of items per item group, those items will not be published. */
    val ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE = int("ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE") /* null */ /* Some items' main images can't be found. */
    val PINJOIN_CONTENT_UNSAFE = int("PINJOIN_CONTENT_UNSAFE") /* null */ /* Some items were not published because they don't meet Pinterest's Merchant Guidelines. */
    val BLOCKLISTED_IMAGE_SIGNATURE = int("BLOCKLISTED_IMAGE_SIGNATURE") /* null */ /* Some items were not published because they don't meet Pinterest's Merchant Guidelines. */
    val LIST_PRICE_INVALID = int("LIST_PRICE_INVALID") /* null */ /* Some items have list price formatting errors in their product metadata, those items will not be published. */
    val PRICE_CANNOT_BE_DETERMINED = int("PRICE_CANNOT_BE_DETERMINED") /* null */ /* Some items were not published because price cannot be determined. The price, list price, and sale price are all different, so those items will not be published. */

    /**
     * Create an entity of type CatalogsFeedValidationErrors from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsFeedValidationErrors(
        FETCH_ERROR = row[FETCH_ERROR]  /* kotlin.Int? */ /* Pinterest couldn't download your feed. */,
        FETCH_INACTIVE_FEED_ERROR = row[FETCH_INACTIVE_FEED_ERROR]  /* kotlin.Int? */ /* Your feed wasn't ingested because it hasn’t changed in the previous 90 days. */,
        ENCODING_ERROR = row[ENCODING_ERROR]  /* kotlin.Int? */ /* Your feed includes data with an unsupported encoding format. */,
        DELIMITER_ERROR = row[DELIMITER_ERROR]  /* kotlin.Int? */ /* Your feed includes data with formatting errors. */,
        REQUIRED_COLUMNS_MISSING = row[REQUIRED_COLUMNS_MISSING]  /* kotlin.Int? */ /* Your feed is missing some required column headers. */,
        DUPLICATE_PRODUCTS = row[DUPLICATE_PRODUCTS]  /* kotlin.Int? */ /* Some products are duplicated. */,
        IMAGE_LINK_INVALID = row[IMAGE_LINK_INVALID]  /* kotlin.Int? */ /* Some image links are formatted incorrectly. */,
        ITEMID_MISSING = row[ITEMID_MISSING]  /* kotlin.Int? */ /* Some items are missing an item id in their product metadata, those items will not be published. */,
        TITLE_MISSING = row[TITLE_MISSING]  /* kotlin.Int? */ /* Some items are missing a title in their product metadata, those items will not be published. */,
        DESCRIPTION_MISSING = row[DESCRIPTION_MISSING]  /* kotlin.Int? */ /* Some items are missing a description in their product metadata, those items will not be published. */,
        PRODUCT_LINK_MISSING = row[PRODUCT_LINK_MISSING]  /* kotlin.Int? */ /* Some items are missing a link URL in their product metadata, those items will not be published. */,
        IMAGE_LINK_MISSING = row[IMAGE_LINK_MISSING]  /* kotlin.Int? */ /* Some items are missing an image link URL in their product metadata, those items will not be published. */,
        AVAILABILITY_INVALID = row[AVAILABILITY_INVALID]  /* kotlin.Int? */ /* Some items are missing an availability value in their product metadata, those items will not be published. */,
        PRODUCT_PRICE_INVALID = row[PRODUCT_PRICE_INVALID]  /* kotlin.Int? */ /* Some items have price formatting errors in their product metadata, those items will not be published. */,
        LINK_FORMAT_INVALID = row[LINK_FORMAT_INVALID]  /* kotlin.Int? */ /* Some link values are formatted incorrectly. */,
        PARSE_LINE_ERROR = row[PARSE_LINE_ERROR]  /* kotlin.Int? */ /* Your feed contains formatting errors for some items. */,
        ADWORDS_FORMAT_INVALID = row[ADWORDS_FORMAT_INVALID]  /* kotlin.Int? */ /* Some adwords links contain too many characters. */,
        INTERNAL_SERVICE_ERROR = row[INTERNAL_SERVICE_ERROR]  /* kotlin.Int? */ /* We experienced a technical difficulty and were unable to ingest your feed. The next ingestion will happen in 24 hours. */,
        NO_VERIFIED_DOMAIN = row[NO_VERIFIED_DOMAIN]  /* kotlin.Int? */ /* Your merchant domain needs to be claimed. */,
        ADULT_INVALID = row[ADULT_INVALID]  /* kotlin.Int? */ /* Some items have invalid adult values. */,
        IMAGE_LINK_LENGTH_TOO_LONG = row[IMAGE_LINK_LENGTH_TOO_LONG]  /* kotlin.Int? */ /* Some items have image_link URLs that contain too many characters, so those items will not be published. */,
        INVALID_DOMAIN = row[INVALID_DOMAIN]  /* kotlin.Int? */ /* Some of your product link values don't match the verified domain associated with this account. */,
        FEED_LENGTH_TOO_LONG = row[FEED_LENGTH_TOO_LONG]  /* kotlin.Int? */ /* Your feed contains too many items, some items will not be published. */,
        LINK_LENGTH_TOO_LONG = row[LINK_LENGTH_TOO_LONG]  /* kotlin.Int? */ /* Some product links contain too many characters, those items will not be published. */,
        MALFORMED_XML = row[MALFORMED_XML]  /* kotlin.Int? */ /* Your feed couldn't be validated because the xml file is formatted incorrectly. */,
        PRICE_MISSING = row[PRICE_MISSING]  /* kotlin.Int? */ /* Some products are missing a price, those items will not be published. */,
        FEED_TOO_SMALL = row[FEED_TOO_SMALL]  /* kotlin.Int? */ /* Your feed couldn't be validated because the file doesn't contain the minimum number of lines required. */,
        MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED = row[MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED]  /* kotlin.Int? */ /* Some items exceed the maximum number of items per item group, those items will not be published. */,
        ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE = row[ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE]  /* kotlin.Int? */ /* Some items' main images can't be found. */,
        PINJOIN_CONTENT_UNSAFE = row[PINJOIN_CONTENT_UNSAFE]  /* kotlin.Int? */ /* Some items were not published because they don't meet Pinterest's Merchant Guidelines. */,
        BLOCKLISTED_IMAGE_SIGNATURE = row[BLOCKLISTED_IMAGE_SIGNATURE]  /* kotlin.Int? */ /* Some items were not published because they don't meet Pinterest's Merchant Guidelines. */,
        LIST_PRICE_INVALID = row[LIST_PRICE_INVALID]  /* kotlin.Int? */ /* Some items have list price formatting errors in their product metadata, those items will not be published. */,
        PRICE_CANNOT_BE_DETERMINED = row[PRICE_CANNOT_BE_DETERMINED]  /* kotlin.Int? */ /* Some items were not published because price cannot be determined. The price, list price, and sale price are all different, so those items will not be published. */
    )

    /**
    * Assign all the columns from the entity of type CatalogsFeedValidationErrors to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsFeedValidationErrors()
    * database.update(CatalogsFeedValidationErrorss, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsFeedValidationErrors) {
        this.apply {
            set(CatalogsFeedValidationErrorss.FETCH_ERROR, entity.FETCH_ERROR)
            set(CatalogsFeedValidationErrorss.FETCH_INACTIVE_FEED_ERROR, entity.FETCH_INACTIVE_FEED_ERROR)
            set(CatalogsFeedValidationErrorss.ENCODING_ERROR, entity.ENCODING_ERROR)
            set(CatalogsFeedValidationErrorss.DELIMITER_ERROR, entity.DELIMITER_ERROR)
            set(CatalogsFeedValidationErrorss.REQUIRED_COLUMNS_MISSING, entity.REQUIRED_COLUMNS_MISSING)
            set(CatalogsFeedValidationErrorss.DUPLICATE_PRODUCTS, entity.DUPLICATE_PRODUCTS)
            set(CatalogsFeedValidationErrorss.IMAGE_LINK_INVALID, entity.IMAGE_LINK_INVALID)
            set(CatalogsFeedValidationErrorss.ITEMID_MISSING, entity.ITEMID_MISSING)
            set(CatalogsFeedValidationErrorss.TITLE_MISSING, entity.TITLE_MISSING)
            set(CatalogsFeedValidationErrorss.DESCRIPTION_MISSING, entity.DESCRIPTION_MISSING)
            set(CatalogsFeedValidationErrorss.PRODUCT_LINK_MISSING, entity.PRODUCT_LINK_MISSING)
            set(CatalogsFeedValidationErrorss.IMAGE_LINK_MISSING, entity.IMAGE_LINK_MISSING)
            set(CatalogsFeedValidationErrorss.AVAILABILITY_INVALID, entity.AVAILABILITY_INVALID)
            set(CatalogsFeedValidationErrorss.PRODUCT_PRICE_INVALID, entity.PRODUCT_PRICE_INVALID)
            set(CatalogsFeedValidationErrorss.LINK_FORMAT_INVALID, entity.LINK_FORMAT_INVALID)
            set(CatalogsFeedValidationErrorss.PARSE_LINE_ERROR, entity.PARSE_LINE_ERROR)
            set(CatalogsFeedValidationErrorss.ADWORDS_FORMAT_INVALID, entity.ADWORDS_FORMAT_INVALID)
            set(CatalogsFeedValidationErrorss.INTERNAL_SERVICE_ERROR, entity.INTERNAL_SERVICE_ERROR)
            set(CatalogsFeedValidationErrorss.NO_VERIFIED_DOMAIN, entity.NO_VERIFIED_DOMAIN)
            set(CatalogsFeedValidationErrorss.ADULT_INVALID, entity.ADULT_INVALID)
            set(CatalogsFeedValidationErrorss.IMAGE_LINK_LENGTH_TOO_LONG, entity.IMAGE_LINK_LENGTH_TOO_LONG)
            set(CatalogsFeedValidationErrorss.INVALID_DOMAIN, entity.INVALID_DOMAIN)
            set(CatalogsFeedValidationErrorss.FEED_LENGTH_TOO_LONG, entity.FEED_LENGTH_TOO_LONG)
            set(CatalogsFeedValidationErrorss.LINK_LENGTH_TOO_LONG, entity.LINK_LENGTH_TOO_LONG)
            set(CatalogsFeedValidationErrorss.MALFORMED_XML, entity.MALFORMED_XML)
            set(CatalogsFeedValidationErrorss.PRICE_MISSING, entity.PRICE_MISSING)
            set(CatalogsFeedValidationErrorss.FEED_TOO_SMALL, entity.FEED_TOO_SMALL)
            set(CatalogsFeedValidationErrorss.MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED, entity.MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED)
            set(CatalogsFeedValidationErrorss.ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE, entity.ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE)
            set(CatalogsFeedValidationErrorss.PINJOIN_CONTENT_UNSAFE, entity.PINJOIN_CONTENT_UNSAFE)
            set(CatalogsFeedValidationErrorss.BLOCKLISTED_IMAGE_SIGNATURE, entity.BLOCKLISTED_IMAGE_SIGNATURE)
            set(CatalogsFeedValidationErrorss.LIST_PRICE_INVALID, entity.LIST_PRICE_INVALID)
            set(CatalogsFeedValidationErrorss.PRICE_CANNOT_BE_DETERMINED, entity.PRICE_CANNOT_BE_DETERMINED)
        }
    }

}


