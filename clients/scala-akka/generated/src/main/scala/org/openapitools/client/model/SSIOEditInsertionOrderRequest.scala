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

case class SSIOEditInsertionOrderRequest (
  /* Starting date of time period. Format: YYYY-MM-DD */
  startDate: Option[String] = None,
  /* End date of time period. Format: YYYY-MM-DD */
  endDate: Option[String] = None,
  /* The po number */
  poNumber: Option[String] = None,
  /* If Budget order line, the budget amount. */
  budgetAmount: Option[BigDecimal] = None,
  /* The billing contact first name */
  billingContactFirstname: Option[String] = None,
  /* The billing contact last name */
  billingContactLastname: Option[String] = None,
  /* The billing contact email */
  billingContactEmail: Option[String] = None,
  /* The media contact first name */
  mediaContactFirstname: Option[String] = None,
  /* The media contact last name */
  mediaContactLastname: Option[String] = None,
  /* The media contact email */
  mediaContactEmail: Option[String] = None,
  /* URL link for agency */
  agencyLink: Option[String] = None,
  /* The email of user submitting the insertion order */
  userEmail: Option[String] = None,
  /* LineId in the Oracle DB */
  oracleLineId: Option[String] = None,
  /* OrderId in SFDC */
  salesforceOrderId: Option[String] = None,
  /* OrderLineId in SFDC */
  salesforceOrderLineId: Option[String] = None,
  /* Ads manager OrderLineId */
  adsManagerOrderLineId: Option[String] = None
) extends ApiModel

