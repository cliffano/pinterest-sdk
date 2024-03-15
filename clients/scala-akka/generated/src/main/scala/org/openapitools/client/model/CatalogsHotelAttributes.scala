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

import java.math.BigDecimal
import org.openapitools.client.core.ApiModel

case class CatalogsHotelAttributes (
  /* The hotel's name. */
  name: Option[String] = None,
  /* Link to the product page */
  link: Option[String] = None,
  /* Brief description of the hotel. */
  description: Option[String] = None,
  /* The brand to which this hotel belongs to. */
  brand: Option[String] = None,
  /* Latitude of the hotel. */
  latitude: Option[BigDecimal] = None,
  /* Longitude of the hotel. */
  longitude: Option[BigDecimal] = None,
  /* A list of neighborhoods where the hotel is located */
  neighborhood: Option[Seq[String]] = None,
  address: Option[CatalogsHotelAddress] = None,
  /* Custom grouping of hotels */
  customLabel0: Option[String] = None,
  /* Custom grouping of hotels */
  customLabel1: Option[String] = None,
  /* Custom grouping of hotels */
  customLabel2: Option[String] = None,
  /* Custom grouping of hotels */
  customLabel3: Option[String] = None,
  /* Custom grouping of hotels */
  customLabel4: Option[String] = None,
  /* The type of property. The category can be any type of internal description desired. */
  category: Option[String] = None,
  /* Base price of the hotel room per night followed by the ISO currency code */
  basePrice: Option[String] = None,
  /* Sale price of a hotel room per night. Used to advertise discounts off the regular price of the hotel. */
  salePrice: Option[String] = None,
  guestRatings: Option[CatalogsHotelGuestRatings] = None,
  mainImage: Option[CatalogsHotelAttributesAllOfMainImage] = None,
  /* <p><= 2000 characters</p> <p>The links to additional images for your hotel. Up to ten additional images can be used to show a hotel from different angles. Must begin with http:// or https://.</p> */
  additionalImageLink: Option[Seq[String]] = None
) extends ApiModel

