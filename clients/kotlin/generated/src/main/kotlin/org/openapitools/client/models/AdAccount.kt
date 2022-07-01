/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.models

import org.openapitools.client.models.AdAccountOwner
import org.openapitools.client.models.Country
import org.openapitools.client.models.Currency

import com.squareup.moshi.Json

/**
 * 
 *
 * @param id 
 * @param name 
 * @param owner 
 * @param country 
 * @param currency 
 */

data class AdAccount (

    @Json(name = "id")
    val id: kotlin.String? = null,

    @Json(name = "name")
    val name: kotlin.String? = null,

    @Json(name = "owner")
    val owner: AdAccountOwner? = null,

    @Json(name = "country")
    val country: Country? = null,

    @Json(name = "currency")
    val currency: Currency? = null

)

