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
 * @param name Display name
 * @param id Salesforce id for PMP
 */


data class SSIOAccountPMPName (

    /* Display name */
    @Json(name = "name")
    val name: kotlin.String? = null,

    /* Salesforce id for PMP */
    @Json(name = "id")
    val id: kotlin.String? = null

)

