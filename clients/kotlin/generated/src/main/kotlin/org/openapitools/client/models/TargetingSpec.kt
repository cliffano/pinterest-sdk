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

import org.openapitools.client.models.TargetingSpecSHOPPINGRETARGETING

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * Ad group targeting specification defining the ad group target audience. For example, {\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}
 *
 * @param AGE_BUCKET Age ranges. If the AGE_BUCKET field is missing, the default behavior in terms of ad delivery is that **All age buckets** will be targeted.
 * @param APPTYPE Allowed devices. If the APPTYPE field is missing, the default behavior in terms of ad delivery is that **All devices/apptypes** will be targeted.
 * @param AUDIENCE_EXCLUDE Excluded customer list IDs. Used to drive new customer acquisition goals. For example: [\"2542620905475\"]. Audience lists need to have at least 100 people with Pinterest accounts in them. If the AUDIENCE_EXCLUDE field is missing, the default behavior in terms of ad delivery is that **No users will be excluded**.
 * @param auDIENCEINCLUDEQuote Targeted customer list IDs. For example: [\"2542620905473\"]. Audience lists need to have at least 100 people with Pinterest accounts in them Audience lists need to have at least 100 people with Pinterest accounts in them. If the AUDIENCE_INCLUDE field is missing, the default behavior in terms of ad delivery is that **All users will be included**.
 * @param GENDER Targeted genders. Values: [\"unknown\",\"male\",\"female\"]. If the GENDER field is missing, the default behavior in terms of ad delivery is that **All genders will be targeted**.
 * @param GEO Location region codes, e.g., \"BE-VOV\" (East Flanders, Belgium) For complete list, <a href=\"https://help.pinterest.com/sub/helpcenter/partner/pinterest_location_targeting_codes.xlsx\" target=\"_blank\">click here</a> or postal codes, e.g., \"US-94107\". Use either region codes or postal codes but not both. If the GEO field is missing, the default behavior in terms of ad delivery is that **No geos will be selected**.
 * @param INTEREST Array of interest object IDs. If the INTEREST field is missing, the default behavior in terms of ad delivery is that **All interests will be targeted**.
 * @param LOCALE 24 ISO 639-1 two letter language codes. If the LOCALE field is missing, the default behavior in terms of ad delivery is that **All languages will be target, only english non-sublanguage will be targeted**.
 * @param LOCATION 22 ISO Alpha 2 two letter country codes or US Nielsen DMA (Designated Market Area) codes (location region codes) (e.g., [\"US\", \"807\"]). For complete list, click here. Location-Country and Location-Metro codes apply. If the LOCATION field is missing, the default behavior in terms of ad delivery is that **Selects default country if not specified (US) and all regions within that country**.
 * @param SHOPPING_RETARGETING Array of object: lookback_window [Integer]: Number of days ago to start lookback timeframe for dynamic retargeting tag_types [Array of integer]: Event types to target for dynamic retargeting exclusion_window [Integer]: Number of days ago to stop lookback timeframe for dynamic retargeting
 * @param TARGETING_STRATEGY 
 */


data class TargetingSpec (

    /* Age ranges. If the AGE_BUCKET field is missing, the default behavior in terms of ad delivery is that **All age buckets** will be targeted. */
    @Json(name = "AGE_BUCKET")
    val AGE_BUCKET: kotlin.collections.List<TargetingSpec.AGEBUCKET>? = null,

    /* Allowed devices. If the APPTYPE field is missing, the default behavior in terms of ad delivery is that **All devices/apptypes** will be targeted. */
    @Json(name = "APPTYPE")
    val APPTYPE: kotlin.collections.List<TargetingSpec.APPTYPE>? = null,

    /* Excluded customer list IDs. Used to drive new customer acquisition goals. For example: [\"2542620905475\"]. Audience lists need to have at least 100 people with Pinterest accounts in them. If the AUDIENCE_EXCLUDE field is missing, the default behavior in terms of ad delivery is that **No users will be excluded**. */
    @Json(name = "AUDIENCE_EXCLUDE")
    val AUDIENCE_EXCLUDE: kotlin.collections.List<kotlin.String>? = null,

    /* Targeted customer list IDs. For example: [\"2542620905473\"]. Audience lists need to have at least 100 people with Pinterest accounts in them Audience lists need to have at least 100 people with Pinterest accounts in them. If the AUDIENCE_INCLUDE field is missing, the default behavior in terms of ad delivery is that **All users will be included**. */
    @Json(name = "AUDIENCE_INCLUDE'")
    val auDIENCEINCLUDEQuote: kotlin.collections.List<kotlin.String>? = null,

    /* Targeted genders. Values: [\"unknown\",\"male\",\"female\"]. If the GENDER field is missing, the default behavior in terms of ad delivery is that **All genders will be targeted**. */
    @Json(name = "GENDER")
    val GENDER: kotlin.collections.List<TargetingSpec.GENDER>? = null,

    /* Location region codes, e.g., \"BE-VOV\" (East Flanders, Belgium) For complete list, <a href=\"https://help.pinterest.com/sub/helpcenter/partner/pinterest_location_targeting_codes.xlsx\" target=\"_blank\">click here</a> or postal codes, e.g., \"US-94107\". Use either region codes or postal codes but not both. If the GEO field is missing, the default behavior in terms of ad delivery is that **No geos will be selected**. */
    @Json(name = "GEO")
    val GEO: kotlin.collections.List<kotlin.String>? = null,

    /* Array of interest object IDs. If the INTEREST field is missing, the default behavior in terms of ad delivery is that **All interests will be targeted**. */
    @Json(name = "INTEREST")
    val INTEREST: kotlin.collections.List<kotlin.String>? = null,

    /* 24 ISO 639-1 two letter language codes. If the LOCALE field is missing, the default behavior in terms of ad delivery is that **All languages will be target, only english non-sublanguage will be targeted**. */
    @Json(name = "LOCALE")
    val LOCALE: kotlin.collections.List<kotlin.String>? = null,

    /* 22 ISO Alpha 2 two letter country codes or US Nielsen DMA (Designated Market Area) codes (location region codes) (e.g., [\"US\", \"807\"]). For complete list, click here. Location-Country and Location-Metro codes apply. If the LOCATION field is missing, the default behavior in terms of ad delivery is that **Selects default country if not specified (US) and all regions within that country**. */
    @Json(name = "LOCATION")
    val LOCATION: kotlin.collections.List<kotlin.String>? = null,

    /* Array of object: lookback_window [Integer]: Number of days ago to start lookback timeframe for dynamic retargeting tag_types [Array of integer]: Event types to target for dynamic retargeting exclusion_window [Integer]: Number of days ago to stop lookback timeframe for dynamic retargeting */
    @Json(name = "SHOPPING_RETARGETING")
    val SHOPPING_RETARGETING: kotlin.collections.List<TargetingSpecSHOPPINGRETARGETING>? = null,

    /*  */
    @Json(name = "TARGETING_STRATEGY")
    val TARGETING_STRATEGY: kotlin.collections.List<TargetingSpec.TARGETINGSTRATEGY>? = null

) {

    /**
     * Age ranges. If the AGE_BUCKET field is missing, the default behavior in terms of ad delivery is that **All age buckets** will be targeted.
     *
     * Values: _18Minus24,_21Plus,_25Minus34,_35Minus44,_45Minus49,_50Minus54,_55Minus64,_65Plus
     */
    @JsonClass(generateAdapter = false)
    enum class AGEBUCKET(val value: kotlin.String) {
        @Json(name = "18-24") _18Minus24("18-24"),
        @Json(name = "21+") _21Plus("21+"),
        @Json(name = "25-34") _25Minus34("25-34"),
        @Json(name = "35-44") _35Minus44("35-44"),
        @Json(name = "45-49") _45Minus49("45-49"),
        @Json(name = "50-54") _50Minus54("50-54"),
        @Json(name = "55-64") _55Minus64("55-64"),
        @Json(name = "65+") _65Plus("65+");
    }
    /**
     * Allowed devices. If the APPTYPE field is missing, the default behavior in terms of ad delivery is that **All devices/apptypes** will be targeted.
     *
     * Values: android_mobile,android_tablet,ipad,iphone,web,web_mobile
     */
    @JsonClass(generateAdapter = false)
    enum class APPTYPE(val value: kotlin.String) {
        @Json(name = "android_mobile") android_mobile("android_mobile"),
        @Json(name = "android_tablet") android_tablet("android_tablet"),
        @Json(name = "ipad") ipad("ipad"),
        @Json(name = "iphone") iphone("iphone"),
        @Json(name = "web") web("web"),
        @Json(name = "web_mobile") web_mobile("web_mobile");
    }
    /**
     * Targeted genders. Values: [\"unknown\",\"male\",\"female\"]. If the GENDER field is missing, the default behavior in terms of ad delivery is that **All genders will be targeted**.
     *
     * Values: unknown,male,female
     */
    @JsonClass(generateAdapter = false)
    enum class GENDER(val value: kotlin.String) {
        @Json(name = "unknown") unknown("unknown"),
        @Json(name = "male") male("male"),
        @Json(name = "female") female("female");
    }
    /**
     * 
     *
     * Values: CHOOSE_YOUR_OWN,FIND_NEW_CUSTOMERS,RECONNECT_WITH_USERS
     */
    @JsonClass(generateAdapter = false)
    enum class TARGETINGSTRATEGY(val value: kotlin.String) {
        @Json(name = "CHOOSE_YOUR_OWN") CHOOSE_YOUR_OWN("CHOOSE_YOUR_OWN"),
        @Json(name = "FIND_NEW_CUSTOMERS") FIND_NEW_CUSTOMERS("FIND_NEW_CUSTOMERS"),
        @Json(name = "RECONNECT_WITH_USERS") RECONNECT_WITH_USERS("RECONNECT_WITH_USERS");
    }
}

