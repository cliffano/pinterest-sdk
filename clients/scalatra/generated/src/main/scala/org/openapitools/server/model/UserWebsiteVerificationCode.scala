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

case class UserWebsiteVerificationCode(
  /* Code to check against the user claiming the website */
  verificationCode: Option[String],

  /* DNS TXT record to check against for the website to be claimed */
  dnsTxtRecord: Option[String],

  /* Metatag the verification process searchs for the website to be claimed */
  metatag: Option[String],

  /* File expected to find on the website being claimed */
  filename: Option[String],

  /* A full html file to upload to the website in order for it to be claimed */
  fileContent: Option[String]

 )
