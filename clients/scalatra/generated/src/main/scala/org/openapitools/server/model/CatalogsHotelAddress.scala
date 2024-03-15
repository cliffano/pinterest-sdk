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

case class CatalogsHotelAddress(
  /* Primary street address of hotel. */
  addr1: Option[String],

  /* City where the hotel is located. */
  city: Option[String],

  /* State, county, province, where the hotel is located. */
  region: Option[String],

  /* Country where the hotel is located. */
  country: Option[String],

  /* Required for countries with a postal code system. Postal or zip code of the hotel. */
  postalCode: Option[String]

 )
