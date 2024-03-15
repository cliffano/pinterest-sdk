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
 * Language code, which is among the offical ISO 639-1 language list.
 *
 * Values: AM,AR,AZ,BG,BN,BS,CA,CS,DA,DV,DZ,DE,EL,EN,ES,ET,FA,FI,FR,HE,HI,HR,HU,HY,ID,IN,IS,IT,IW,JA,KA,KM,KO,LO,LT,LV,MK,MN,MS,MY,NB,NE,NL,NO,PL,PT,RO,RU,SK,SL,SQ,SR,SV,TL,UK,VI,TE,TH,TR,XX,ZH
 */

@JsonClass(generateAdapter = false)
enum class Language(val value: kotlin.String) {

    @Json(name = "AM")
    AM("AM"),

    @Json(name = "AR")
    AR("AR"),

    @Json(name = "AZ")
    AZ("AZ"),

    @Json(name = "BG")
    BG("BG"),

    @Json(name = "BN")
    BN("BN"),

    @Json(name = "BS")
    BS("BS"),

    @Json(name = "CA")
    CA("CA"),

    @Json(name = "CS")
    CS("CS"),

    @Json(name = "DA")
    DA("DA"),

    @Json(name = "DV")
    DV("DV"),

    @Json(name = "DZ")
    DZ("DZ"),

    @Json(name = "DE")
    DE("DE"),

    @Json(name = "EL")
    EL("EL"),

    @Json(name = "EN")
    EN("EN"),

    @Json(name = "ES")
    ES("ES"),

    @Json(name = "ET")
    ET("ET"),

    @Json(name = "FA")
    FA("FA"),

    @Json(name = "FI")
    FI("FI"),

    @Json(name = "FR")
    FR("FR"),

    @Json(name = "HE")
    HE("HE"),

    @Json(name = "HI")
    HI("HI"),

    @Json(name = "HR")
    HR("HR"),

    @Json(name = "HU")
    HU("HU"),

    @Json(name = "HY")
    HY("HY"),

    @Json(name = "ID")
    ID("ID"),

    @Json(name = "IN")
    IN("IN"),

    @Json(name = "IS")
    IS("IS"),

    @Json(name = "IT")
    IT("IT"),

    @Json(name = "IW")
    IW("IW"),

    @Json(name = "JA")
    JA("JA"),

    @Json(name = "KA")
    KA("KA"),

    @Json(name = "KM")
    KM("KM"),

    @Json(name = "KO")
    KO("KO"),

    @Json(name = "LO")
    LO("LO"),

    @Json(name = "LT")
    LT("LT"),

    @Json(name = "LV")
    LV("LV"),

    @Json(name = "MK")
    MK("MK"),

    @Json(name = "MN")
    MN("MN"),

    @Json(name = "MS")
    MS("MS"),

    @Json(name = "MY")
    MY("MY"),

    @Json(name = "NB")
    NB("NB"),

    @Json(name = "NE")
    NE("NE"),

    @Json(name = "NL")
    NL("NL"),

    @Json(name = "NO")
    NO("NO"),

    @Json(name = "PL")
    PL("PL"),

    @Json(name = "PT")
    PT("PT"),

    @Json(name = "RO")
    RO("RO"),

    @Json(name = "RU")
    RU("RU"),

    @Json(name = "SK")
    SK("SK"),

    @Json(name = "SL")
    SL("SL"),

    @Json(name = "SQ")
    SQ("SQ"),

    @Json(name = "SR")
    SR("SR"),

    @Json(name = "SV")
    SV("SV"),

    @Json(name = "TL")
    TL("TL"),

    @Json(name = "UK")
    UK("UK"),

    @Json(name = "VI")
    VI("VI"),

    @Json(name = "TE")
    TE("TE"),

    @Json(name = "TH")
    TH("TH"),

    @Json(name = "TR")
    TR("TR"),

    @Json(name = "XX")
    XX("XX"),

    @Json(name = "ZH")
    ZH("ZH");

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
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is Language) "$data" else null

        /**
         * Returns a valid [Language] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): Language? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}
