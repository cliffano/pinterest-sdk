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

case class SSIOCreateInsertionOrderRequest(
  /* Starting date of time period. Format: YYYY-MM-DD */
  startDate: String,

  /* End date of time period. Format: YYYY-MM-DD */
  endDate: Option[String],

  /* The po number */
  poNumber: String,

  /* If Budget order line, the budget amount. */
  budgetAmount: Option[Double],

  /* The billing contact first name */
  billingContactFirstname: String,

  /* The billing contact last name */
  billingContactLastname: String,

  /* The billing contact email */
  billingContactEmail: String,

  /* The media contact first name */
  mediaContactFirstname: String,

  /* The media contact last name */
  mediaContactLastname: String,

  /* The media contact email */
  mediaContactEmail: String,

  /* URL link for agency */
  agencyLink: Option[String],

  /* The email of user submitting the insertion order */
  userEmail: Option[String],

  /* The UTC timestamp (to the nearest sec) of when terms were accepted */
  acceptedTermsTime: Option[Int],

  /* The pmp id */
  pmpId: String,

  /* The order name */
  orderName: String,

  /* Type can be Budget or Perpetual */
  orderLineType: String,

  /* The SFDC id for the terms */
  acceptedTermsId: String,

  /* The bill-to company id */
  billtoCompanyId: String,

  /* The bill-to business address id */
  billtoBusinessAddressId: String,

  /* The bill-to billing address id */
  billtoBillingAddressId: String,

  /* If Ongoing (perpetual) order line, the estimated monthly spend */
  estimatedMonthlySpend: Option[Double],

  currencyInfo: Currency

 )
