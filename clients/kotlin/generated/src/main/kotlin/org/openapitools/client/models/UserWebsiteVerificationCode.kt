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
 * @param verificationCode Code to check against the user claiming the website
 * @param dnsTxtRecord DNS TXT record to check against for the website to be claimed
 * @param metatag Metatag the verification process searchs for the website to be claimed
 * @param filename File expected to find on the website being claimed
 * @param fileContent A full html file to upload to the website in order for it to be claimed
 */


data class UserWebsiteVerificationCode (

    /* Code to check against the user claiming the website */
    @Json(name = "verification_code")
    val verificationCode: kotlin.String? = null,

    /* DNS TXT record to check against for the website to be claimed */
    @Json(name = "dns_txt_record")
    val dnsTxtRecord: kotlin.String? = null,

    /* Metatag the verification process searchs for the website to be claimed */
    @Json(name = "metatag")
    val metatag: kotlin.String? = null,

    /* File expected to find on the website being claimed */
    @Json(name = "filename")
    val filename: kotlin.String? = null,

    /* A full html file to upload to the website in order for it to be claimed */
    @Json(name = "file_content")
    val fileContent: kotlin.String? = null

)

