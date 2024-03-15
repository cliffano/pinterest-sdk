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

case class KeywordUpdate (
  /* Keyword ID. */
  id: String,
  /* Is keyword archived? */
  archived: Option[Boolean] = None,
  /* Keyword custom bid in microcurrency - null if inherited from parent ad group. */
  bid: Option[Int] = None
) extends ApiModel

