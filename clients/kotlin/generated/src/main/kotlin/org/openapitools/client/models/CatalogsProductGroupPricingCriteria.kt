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


import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * 
 *
 * @param propertyValues 
 * @param inclusion 
 * @param negated 
 */


data class CatalogsProductGroupPricingCriteria (

    @Json(name = "values")
    val propertyValues: java.math.BigDecimal,

    @Json(name = "inclusion")
    val inclusion: kotlin.Boolean? = true,

    @Json(name = "negated")
    val negated: kotlin.Boolean? = false

)

