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

package io.swagger.client.model
import play.api.libs.json._

case class Account (
                  accountType:  Option[AccountAccountTypeEnum.AccountAccountTypeEnum],
                  profileImage: Option[String],
                  websiteUrl: Option[String],
                  username: Option[String]
)

object Account {
implicit val format: Format[Account] = Json.format
}

object AccountAccountTypeEnum extends Enumeration {
  val   PINNER, BUSINESS = Value
  type AccountAccountTypeEnum = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AccountAccountTypeEnum.type])
}
