/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model

case class IntegrationMetadata(
  id: Option[String],

  externalBusinessId: Option[String],

  connectedMerchantId: Option[String],

  connectedUserId: Option[String],

  connectedAdvertiserId: Option[String],

  connectedLbaId: Option[String],

  connectedTagId: Option[String],

  partnerAccessTokenExpiry: Option[Double],

  partnerRefreshTokenExpiry: Option[Double],

  scopes: Option[String],

  createdTimestamp: Option[Double],

  updatedTimestamp: Option[Double],

  additionalId1: Option[String],

  partnerMetadata: Option[String]

 )