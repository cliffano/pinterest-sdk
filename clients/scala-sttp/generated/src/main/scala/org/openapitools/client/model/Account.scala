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


case class Account(
  /* Type of account */
  accountType: Option[AccountEnums.AccountType] = None,
  profileImage: Option[String] = None,
  websiteUrl: Option[String] = None,
  username: Option[String] = None
)

object AccountEnums {

  type AccountType = AccountType.Value
  object AccountType extends Enumeration {
    val PINNER = Value("PINNER")
    val BUSINESS = Value("BUSINESS")
  }

}
