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
 * Advertiser's ISO two character country code.
 *
 * Values: US,GB,CA,IE,AU,NZ,FR,SE,IL,DE,AT,IT,ES,NL,BE,PT,CH,HK,JP,KR,SG,NO,DK,FI,CY,LU,MT,PL,RO,HU,CZ,GR,SK,BR,MX,AR,CL,CO
 */

@JsonClass(generateAdapter = false)
enum class TargetingAdvertiserCountry(val value: kotlin.String) {

    @Json(name = "US")
    US("US"),

    @Json(name = "GB")
    GB("GB"),

    @Json(name = "CA")
    CA("CA"),

    @Json(name = "IE")
    IE("IE"),

    @Json(name = "AU")
    AU("AU"),

    @Json(name = "NZ")
    NZ("NZ"),

    @Json(name = "FR")
    FR("FR"),

    @Json(name = "SE")
    SE("SE"),

    @Json(name = "IL")
    IL("IL"),

    @Json(name = "DE")
    DE("DE"),

    @Json(name = "AT")
    AT("AT"),

    @Json(name = "IT")
    IT("IT"),

    @Json(name = "ES")
    ES("ES"),

    @Json(name = "NL")
    NL("NL"),

    @Json(name = "BE")
    BE("BE"),

    @Json(name = "PT")
    PT("PT"),

    @Json(name = "CH")
    CH("CH"),

    @Json(name = "HK")
    HK("HK"),

    @Json(name = "JP")
    JP("JP"),

    @Json(name = "KR")
    KR("KR"),

    @Json(name = "SG")
    SG("SG"),

    @Json(name = "NO")
    NO("NO"),

    @Json(name = "DK")
    DK("DK"),

    @Json(name = "FI")
    FI("FI"),

    @Json(name = "CY")
    CY("CY"),

    @Json(name = "LU")
    LU("LU"),

    @Json(name = "MT")
    MT("MT"),

    @Json(name = "PL")
    PL("PL"),

    @Json(name = "RO")
    RO("RO"),

    @Json(name = "HU")
    HU("HU"),

    @Json(name = "CZ")
    CZ("CZ"),

    @Json(name = "GR")
    GR("GR"),

    @Json(name = "SK")
    SK("SK"),

    @Json(name = "BR")
    BR("BR"),

    @Json(name = "MX")
    MX("MX"),

    @Json(name = "AR")
    AR("AR"),

    @Json(name = "CL")
    CL("CL"),

    @Json(name = "CO")
    CO("CO");

    /**
     * Override [toString()] to avoid using the enum variable name as the value, and instead use
     * the actual value defined in the API spec file.
     *
     * This solves a problem when the variable name and its value are different, and ensures that
     * the client sends the correct enum values to the server always.
     */
    override fun toString(): kotlin.String = value

    companion object {
        /**
         * Converts the provided [data] to a [String] on success, null otherwise.
         */
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is TargetingAdvertiserCountry) "$data" else null

        /**
         * Returns a valid [TargetingAdvertiserCountry] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): TargetingAdvertiserCountry? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}

