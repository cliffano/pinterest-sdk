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

case class CatalogsFeedProductCounts (
  /* The number of products in the feed file. */
  original: Option[Int] = None,
  /* The number of products successfully ingested from the feed file. */
  ingested: Option[Int] = None
) extends ApiModel

