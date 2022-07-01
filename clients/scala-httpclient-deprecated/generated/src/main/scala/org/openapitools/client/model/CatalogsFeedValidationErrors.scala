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


case class CatalogsFeedValidationErrors (
  fetchError: Option[Integer] = None,
  fetchInactiveFeedError: Option[Integer] = None,
  encodingError: Option[Integer] = None,
  delimiterError: Option[Integer] = None,
  requiredColumnsMissing: Option[Integer] = None,
  imageLinkInvalid: Option[Integer] = None,
  itemidMissing: Option[Integer] = None,
  titleMissing: Option[Integer] = None,
  descriptionMissing: Option[Integer] = None,
  productCategoryInvalid: Option[Integer] = None,
  productLinkMissing: Option[Integer] = None,
  imageLinkMissing: Option[Integer] = None,
  availabilityInvalid: Option[Integer] = None,
  productPriceInvalid: Option[Integer] = None,
  linkFormatInvalid: Option[Integer] = None,
  parseLineError: Option[Integer] = None,
  adwordsFormatInvalid: Option[Integer] = None,
  productCategoryMissing: Option[Integer] = None,
  internalServiceError: Option[Integer] = None,
  noVerifiedDomain: Option[Integer] = None,
  adultInvalid: Option[Integer] = None,
  invalidDomain: Option[Integer] = None,
  feedLengthTooLong: Option[Integer] = None,
  linkLengthTooLong: Option[Integer] = None,
  malformedXml: Option[Integer] = None,
  redirectInvalid: Option[Integer] = None,
  priceMissing: Option[Integer] = None,
  feedTooSmall: Option[Integer] = None,
  conditionInvalid: Option[Integer] = None,
  shopifyNoProducts: Option[Integer] = None,
  maxItemsPerItemGroupExceeded: Option[Integer] = None,
  itemMainImageDownloadFailure: Option[Integer] = None,
  pinjoinContentUnsafe: Option[Integer] = None,
  blocklistedImageSignature: Option[Integer] = None
)

