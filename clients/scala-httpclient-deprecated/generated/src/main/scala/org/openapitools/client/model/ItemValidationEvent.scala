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


case class ItemValidationEvent (
  // The attribute that the item validation event references
  attribute: Option[String] = None,
  // The event code that the item validation event references
  code: Option[Integer] = None,
  // Title message describing the item validation event
  message: Option[String] = None
)

