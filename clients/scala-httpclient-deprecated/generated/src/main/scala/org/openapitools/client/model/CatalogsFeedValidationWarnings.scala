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

package org.openapitools.client.model


case class CatalogsFeedValidationWarnings (
  titleLengthTooLong: Option[Integer] = None,
  descriptionLengthTooLong: Option[Integer] = None,
  genderInvalid: Option[Integer] = None,
  ageGroupInvalid: Option[Integer] = None,
  sizeTypeInvalid: Option[Integer] = None,
  linkFormatWarning: Option[Integer] = None,
  duplicateProducts: Option[Integer] = None,
  duplicateLinks: Option[Integer] = None,
  salesPriceInvalid: Option[Integer] = None,
  productCategoryDepthWarning: Option[Integer] = None,
  adwordsSameAsLink: Option[Integer] = None,
  duplicateHeaders: Option[Integer] = None,
  fetchSameSignature: Option[Integer] = None,
  adwordsFormatWarning: Option[Integer] = None,
  additionalImageLinkWarning: Option[Integer] = None,
  imageLinkWarning: Option[Integer] = None,
  shippingInvalid: Option[Integer] = None,
  taxInvalid: Option[Integer] = None,
  shippingWeightInvalid: Option[Integer] = None,
  expirationDateInvalid: Option[Integer] = None,
  availabilityDateInvalid: Option[Integer] = None,
  saleDateInvalid: Option[Integer] = None,
  weightUnitInvalid: Option[Integer] = None,
  isBundleInvalid: Option[Integer] = None,
  updatedTimeInvalid: Option[Integer] = None,
  customLabelLengthTooLong: Option[Integer] = None,
  productTypeLengthTooLong: Option[Integer] = None,
  tooManyAdditionalImageLinks: Option[Integer] = None,
  multipackInvalid: Option[Integer] = None,
  indexedProductCountLargeDelta: Option[Integer] = None,
  itemAdditionalImageDownloadFailure: Option[Integer] = None,
  optionalProductCategoryMissing: Option[Integer] = None,
  optionalProductCategoryInvalid: Option[Integer] = None,
  optionalConditionMissing: Option[Integer] = None,
  optionalConditionInvalid: Option[Integer] = None,
  iosDeepLinkInvalid: Option[Integer] = None,
  androidDeepLinkInvalid: Option[Integer] = None,
  availabilityNormalized: Option[Integer] = None,
  conditionNormalized: Option[Integer] = None,
  genderNormalized: Option[Integer] = None,
  sizeTypeNormalized: Option[Integer] = None,
  ageGroupNormalized: Option[Integer] = None,
  utmSourceAutoCorrected: Option[Integer] = None,
  countryDoesNotMapToCurrency: Option[Integer] = None,
  minAdPriceInvalid: Option[Integer] = None
)

