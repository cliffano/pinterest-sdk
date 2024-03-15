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


case class AdsCreditRedeemRequest(
  /* Takes in a SHA256 hash of the offerCode. */
  offerCodeHash: String,
  /* If true, only validate if we can redeem offer code. Otherwise it will actually apply the offer code to the account */
  validateOnly: Boolean
)

