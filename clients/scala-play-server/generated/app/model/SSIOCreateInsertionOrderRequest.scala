package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for SSIOCreateInsertionOrderRequest.
  * @param startDate Starting date of time period. Format: YYYY-MM-DD
  * @param endDate End date of time period. Format: YYYY-MM-DD
  * @param poNumber The po number
  * @param budgetAmount If Budget order line, the budget amount.
  * @param billingContactFirstname The billing contact first name
  * @param billingContactLastname The billing contact last name
  * @param billingContactEmail The billing contact email
  * @param mediaContactFirstname The media contact first name
  * @param mediaContactLastname The media contact last name
  * @param mediaContactEmail The media contact email
  * @param agencyLink URL link for agency
  * @param userEmail The email of user submitting the insertion order
  * @param acceptedTermsTime The UTC timestamp (to the nearest sec) of when terms were accepted
  * @param pmpId The pmp id
  * @param orderName The order name
  * @param orderLineType Type can be Budget or Perpetual
  * @param acceptedTermsId The SFDC id for the terms
  * @param billtoCompanyId The bill-to company id
  * @param billtoBusinessAddressId The bill-to business address id
  * @param billtoBillingAddressId The bill-to billing address id
  * @param estimatedMonthlySpend If Ongoing (perpetual) order line, the estimated monthly spend
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2024-03-14T23:15:00.394859410Z[Etc/UTC]", comments = "Generator version: 7.4.0")
case class SSIOCreateInsertionOrderRequest(
  startDate: String,
  endDate: Option[String],
  poNumber: String,
  budgetAmount: Option[BigDecimal],
  billingContactFirstname: String,
  billingContactLastname: String,
  billingContactEmail: String,
  mediaContactFirstname: String,
  mediaContactLastname: String,
  mediaContactEmail: String,
  agencyLink: Option[String],
  userEmail: Option[String],
  acceptedTermsTime: Option[Int],
  pmpId: String,
  orderName: String,
  orderLineType: SSIOCreateInsertionOrderRequest.OrderLineType.Value,
  acceptedTermsId: String,
  billtoCompanyId: String,
  billtoBusinessAddressId: String,
  billtoBillingAddressId: String,
  estimatedMonthlySpend: Option[BigDecimal],
  currencyInfo: Currency
)

object SSIOCreateInsertionOrderRequest {
  implicit lazy val sSIOCreateInsertionOrderRequestJsonFormat: Format[SSIOCreateInsertionOrderRequest] = Json.format[SSIOCreateInsertionOrderRequest]

  // noinspection TypeAnnotation
  object OrderLineType extends Enumeration {
    val BUDGET = Value("BUDGET")
    val PERPETUALS = Value("PERPETUALS")

    type OrderLineType = Value
    implicit lazy val OrderLineTypeJsonFormat: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[this.type])
  }
}

