/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.models


/**
 * 
 * @param titleLengthTooLong 
 * @param descriptionLengthTooLong 
 * @param genderInvalid 
 * @param ageGroupInvalid 
 * @param sizeTypeInvalid 
 * @param linkFormatWarning 
 * @param duplicateProducts 
 * @param duplicateLinks 
 * @param salesPriceInvalid 
 * @param productCategoryDepthWarning 
 * @param adwordsSameAsLink 
 * @param duplicateHeaders 
 * @param fetchSameSignature 
 * @param adwordsFormatWarning 
 * @param additionalImageLinkWarning 
 * @param imageLinkWarning 
 * @param shippingInvalid 
 * @param taxInvalid 
 * @param shippingWeightInvalid 
 * @param expirationDateInvalid 
 * @param availabilityDateInvalid 
 * @param saleDateInvalid 
 * @param weightUnitInvalid 
 * @param isBundleInvalid 
 * @param updatedTimeInvalid 
 * @param customLabelLengthTooLong 
 * @param productTypeLengthTooLong 
 * @param tooManyAdditionalImageLinks 
 * @param multipackInvalid 
 * @param indexedProductCountLargeDelta 
 * @param itemAdditionalImageDownloadFailure 
 * @param optionalProductCategoryMissing 
 * @param optionalProductCategoryInvalid 
 * @param optionalConditionMissing 
 * @param optionalConditionInvalid 
 * @param iosDeepLinkInvalid 
 * @param androidDeepLinkInvalid 
 * @param availabilityNormalized 
 * @param conditionNormalized 
 * @param genderNormalized 
 * @param sizeTypeNormalized 
 * @param ageGroupNormalized 
 * @param utmSourceAutoCorrected 
 * @param countryDoesNotMapToCurrency 
 * @param minAdPriceInvalid 
 */
data class CatalogsFeedValidationWarnings (
    val titleLengthTooLong: kotlin.Int? = null,
    val descriptionLengthTooLong: kotlin.Int? = null,
    val genderInvalid: kotlin.Int? = null,
    val ageGroupInvalid: kotlin.Int? = null,
    val sizeTypeInvalid: kotlin.Int? = null,
    val linkFormatWarning: kotlin.Int? = null,
    val duplicateProducts: kotlin.Int? = null,
    val duplicateLinks: kotlin.Int? = null,
    val salesPriceInvalid: kotlin.Int? = null,
    val productCategoryDepthWarning: kotlin.Int? = null,
    val adwordsSameAsLink: kotlin.Int? = null,
    val duplicateHeaders: kotlin.Int? = null,
    val fetchSameSignature: kotlin.Int? = null,
    val adwordsFormatWarning: kotlin.Int? = null,
    val additionalImageLinkWarning: kotlin.Int? = null,
    val imageLinkWarning: kotlin.Int? = null,
    val shippingInvalid: kotlin.Int? = null,
    val taxInvalid: kotlin.Int? = null,
    val shippingWeightInvalid: kotlin.Int? = null,
    val expirationDateInvalid: kotlin.Int? = null,
    val availabilityDateInvalid: kotlin.Int? = null,
    val saleDateInvalid: kotlin.Int? = null,
    val weightUnitInvalid: kotlin.Int? = null,
    val isBundleInvalid: kotlin.Int? = null,
    val updatedTimeInvalid: kotlin.Int? = null,
    val customLabelLengthTooLong: kotlin.Int? = null,
    val productTypeLengthTooLong: kotlin.Int? = null,
    val tooManyAdditionalImageLinks: kotlin.Int? = null,
    val multipackInvalid: kotlin.Int? = null,
    val indexedProductCountLargeDelta: kotlin.Int? = null,
    val itemAdditionalImageDownloadFailure: kotlin.Int? = null,
    val optionalProductCategoryMissing: kotlin.Int? = null,
    val optionalProductCategoryInvalid: kotlin.Int? = null,
    val optionalConditionMissing: kotlin.Int? = null,
    val optionalConditionInvalid: kotlin.Int? = null,
    val iosDeepLinkInvalid: kotlin.Int? = null,
    val androidDeepLinkInvalid: kotlin.Int? = null,
    val availabilityNormalized: kotlin.Int? = null,
    val conditionNormalized: kotlin.Int? = null,
    val genderNormalized: kotlin.Int? = null,
    val sizeTypeNormalized: kotlin.Int? = null,
    val ageGroupNormalized: kotlin.Int? = null,
    val utmSourceAutoCorrected: kotlin.Int? = null,
    val countryDoesNotMapToCurrency: kotlin.Int? = null,
    val minAdPriceInvalid: kotlin.Int? = null
) 

