/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.model

import org.openapitools.client.core.ApiModel

case class SSIOInsertionOrderStatusResponse (
  /* Salesforce order id */
  pinOrderId: Option[String] = None,
  /* Salesforce insertion order status */
  status: Option[String] = None,
  /* Salesforce insertion order creation time */
  creationTime: Option[String] = None
) extends ApiModel

