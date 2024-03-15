package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for BidFloor.
  * @param bidFloors A list of bid floors in micro currency. For example, [100000, 200000]
  * @param `type` Always the string 'bidfloor'
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2024-03-14T23:15:00.394859410Z[Etc/UTC]", comments = "Generator version: 7.4.0")
case class BidFloor(
  bidFloors: Option[List[Int]],
  `type`: Option[String]
)

object BidFloor {
  implicit lazy val bidFloorJsonFormat: Format[BidFloor] = Json.format[BidFloor]
}

