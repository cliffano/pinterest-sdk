/**
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 *
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.models

import org.openapitools.client.models.ProductGroupPromotion

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * 
 *
 * @param adGroupId ID of the ad group the product group belongs to.
 * @param productGroupPromotion 
 */


data class ProductGroupPromotionUpdateRequest (

    /* ID of the ad group the product group belongs to. */
    @Json(name = "ad_group_id")
    val adGroupId: kotlin.String,

    @Json(name = "product_group_promotion")
    val productGroupPromotion: kotlin.collections.List<ProductGroupPromotion>

)

