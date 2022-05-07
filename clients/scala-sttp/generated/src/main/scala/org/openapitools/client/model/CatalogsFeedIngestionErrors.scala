/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.model


case class CatalogsFeedIngestionErrors(
  imageDownloadError: Option[Int] = None,
  imageDownloadConnectionTimeout: Option[Int] = None,
  imageFormatUnrecognize: Option[Int] = None,
  lineLevelInternalError: Option[Int] = None,
  largeProductCountDecrease: Option[CatalogsFeedIngestionErrorsEnums.LargeProductCountDecrease] = None
)

object CatalogsFeedIngestionErrorsEnums {

  type LargeProductCountDecrease = LargeProductCountDecrease.Value
  object LargeProductCountDecrease extends Enumeration {
    val `1` = Value("1")
  }

}
