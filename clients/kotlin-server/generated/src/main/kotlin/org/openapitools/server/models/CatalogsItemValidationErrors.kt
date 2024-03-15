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

import org.openapitools.server.models.CatalogsItemValidationDetails

/**
 * 
 * @param ADULT_INVALID 
 * @param ADWORDS_FORMAT_INVALID 
 * @param AVAILABILITY_INVALID 
 * @param BLOCKLISTED_IMAGE_SIGNATURE 
 * @param DESCRIPTION_MISSING 
 * @param DUPLICATE_PRODUCTS 
 * @param IMAGE_LINK_INVALID 
 * @param IMAGE_LINK_LENGTH_TOO_LONG 
 * @param IMAGE_LINK_MISSING 
 * @param INVALID_DOMAIN 
 * @param ITEMID_MISSING 
 * @param ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE 
 * @param LINK_FORMAT_INVALID 
 * @param LINK_LENGTH_TOO_LONG 
 * @param LIST_PRICE_INVALID 
 * @param MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED 
 * @param PARSE_LINE_ERROR 
 * @param PINJOIN_CONTENT_UNSAFE 
 * @param PRICE_CANNOT_BE_DETERMINED 
 * @param PRICE_MISSING 
 * @param PRODUCT_LINK_MISSING 
 * @param PRODUCT_PRICE_INVALID 
 * @param TITLE_MISSING 
 */
data class CatalogsItemValidationErrors(
    val ADULT_INVALID: CatalogsItemValidationDetails? = null,
    val ADWORDS_FORMAT_INVALID: CatalogsItemValidationDetails? = null,
    val AVAILABILITY_INVALID: CatalogsItemValidationDetails? = null,
    val BLOCKLISTED_IMAGE_SIGNATURE: CatalogsItemValidationDetails? = null,
    val DESCRIPTION_MISSING: CatalogsItemValidationDetails? = null,
    val DUPLICATE_PRODUCTS: CatalogsItemValidationDetails? = null,
    val IMAGE_LINK_INVALID: CatalogsItemValidationDetails? = null,
    val IMAGE_LINK_LENGTH_TOO_LONG: CatalogsItemValidationDetails? = null,
    val IMAGE_LINK_MISSING: CatalogsItemValidationDetails? = null,
    val INVALID_DOMAIN: CatalogsItemValidationDetails? = null,
    val ITEMID_MISSING: CatalogsItemValidationDetails? = null,
    val ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE: CatalogsItemValidationDetails? = null,
    val LINK_FORMAT_INVALID: CatalogsItemValidationDetails? = null,
    val LINK_LENGTH_TOO_LONG: CatalogsItemValidationDetails? = null,
    val LIST_PRICE_INVALID: CatalogsItemValidationDetails? = null,
    val MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED: CatalogsItemValidationDetails? = null,
    val PARSE_LINE_ERROR: CatalogsItemValidationDetails? = null,
    val PINJOIN_CONTENT_UNSAFE: CatalogsItemValidationDetails? = null,
    val PRICE_CANNOT_BE_DETERMINED: CatalogsItemValidationDetails? = null,
    val PRICE_MISSING: CatalogsItemValidationDetails? = null,
    val PRODUCT_LINK_MISSING: CatalogsItemValidationDetails? = null,
    val PRODUCT_PRICE_INVALID: CatalogsItemValidationDetails? = null,
    val TITLE_MISSING: CatalogsItemValidationDetails? = null
) 

