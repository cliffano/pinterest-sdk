package com.prokarma.pkmst.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import com.prokarma.pkmst.model.Currency;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import java.time.LocalDate;
import org.openapitools.jackson.nullable.JsonNullable;
/**
 * Response class to be returned by Api
 * @author pkmst
 *
 */
/**
 * SSIOOrderLine
 */

@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPKMSTServerCodegen", date = "2024-03-14T23:02:40.880156196Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class SSIOOrderLine   {
  @JsonProperty("salesforce_order_line_id")
  private String salesforceOrderLineId;

  @JsonProperty("ads_manager_order_line_id")
  private String adsManagerOrderLineId;

  @JsonProperty("pin_order_id")
  private String pinOrderId;

  @JsonProperty("last_modified_date_time")
  private String lastModifiedDateTime;

  @JsonProperty("start_date")
  private LocalDate startDate;

  @JsonProperty("end_date")
  private LocalDate endDate;

  @JsonProperty("bill_to_company_name")
  private String billToCompanyName;

  @JsonProperty("billing_contact_firstname")
  private String billingContactFirstname;

  @JsonProperty("billing_contact_lastname")
  private String billingContactLastname;

  @JsonProperty("billing_contact_email")
  private String billingContactEmail;

  @JsonProperty("media_contact_email")
  private String mediaContactEmail;

  @JsonProperty("media_contact_firstname")
  private String mediaContactFirstname;

  @JsonProperty("media_contact_lastname")
  private String mediaContactLastname;

  @JsonProperty("currency_info")
  private Currency currencyInfo;

  @JsonProperty("agency_link")
  private String agencyLink;

  @JsonProperty("po_number")
  private String poNumber;

  @JsonProperty("order_name")
  private String orderName;

  @JsonProperty("pmp_name")
  private String pmpName;

  @JsonProperty("accepted_terms_id")
  private String acceptedTermsId;

  @JsonProperty("accepted_terms_time")
  private String acceptedTermsTime;

  @JsonProperty("budget_amount")
  private BigDecimal budgetAmount;

  @JsonProperty("estimated_monthly_spend")
  private BigDecimal estimatedMonthlySpend;

  public SSIOOrderLine salesforceOrderLineId(String salesforceOrderLineId) {
    this.salesforceOrderLineId = salesforceOrderLineId;
    return this;
  }

   /**
   * OrderLineId in SFDC
   * @return salesforceOrderLineId
  **/
  @ApiModelProperty(value = "OrderLineId in SFDC")
  public String getSalesforceOrderLineId() {
    return salesforceOrderLineId;
  }

  public void setSalesforceOrderLineId(String salesforceOrderLineId) {
    this.salesforceOrderLineId = salesforceOrderLineId;
  }

  public SSIOOrderLine adsManagerOrderLineId(String adsManagerOrderLineId) {
    this.adsManagerOrderLineId = adsManagerOrderLineId;
    return this;
  }

   /**
   * Ads manager OrderLineId
   * @return adsManagerOrderLineId
  **/
  @ApiModelProperty(value = "Ads manager OrderLineId")
  public String getAdsManagerOrderLineId() {
    return adsManagerOrderLineId;
  }

  public void setAdsManagerOrderLineId(String adsManagerOrderLineId) {
    this.adsManagerOrderLineId = adsManagerOrderLineId;
  }

  public SSIOOrderLine pinOrderId(String pinOrderId) {
    this.pinOrderId = pinOrderId;
    return this;
  }

   /**
   * The pin order id associated with the order line in SFDC
   * @return pinOrderId
  **/
  @ApiModelProperty(value = "The pin order id associated with the order line in SFDC")
  public String getPinOrderId() {
    return pinOrderId;
  }

  public void setPinOrderId(String pinOrderId) {
    this.pinOrderId = pinOrderId;
  }

  public SSIOOrderLine lastModifiedDateTime(String lastModifiedDateTime) {
    this.lastModifiedDateTime = lastModifiedDateTime;
    return this;
  }

   /**
   * Last modified date.
   * @return lastModifiedDateTime
  **/
  @ApiModelProperty(example = "2020-10-06T13:07:04.000Z", value = "Last modified date.")
  public String getLastModifiedDateTime() {
    return lastModifiedDateTime;
  }

  public void setLastModifiedDateTime(String lastModifiedDateTime) {
    this.lastModifiedDateTime = lastModifiedDateTime;
  }

  public SSIOOrderLine startDate(LocalDate startDate) {
    this.startDate = startDate;
    return this;
  }

   /**
   * Start date of the order line.
   * @return startDate
  **/
  @ApiModelProperty(example = "Thu Mar 01 00:00:00 UTC 2018", value = "Start date of the order line.")
  public LocalDate getStartDate() {
    return startDate;
  }

  public void setStartDate(LocalDate startDate) {
    this.startDate = startDate;
  }

  public SSIOOrderLine endDate(LocalDate endDate) {
    this.endDate = endDate;
    return this;
  }

   /**
   * End date of the order line.
   * @return endDate
  **/
  @ApiModelProperty(example = "Mon Oct 05 00:00:00 UTC 2020", value = "End date of the order line.")
  public LocalDate getEndDate() {
    return endDate;
  }

  public void setEndDate(LocalDate endDate) {
    this.endDate = endDate;
  }

  public SSIOOrderLine billToCompanyName(String billToCompanyName) {
    this.billToCompanyName = billToCompanyName;
    return this;
  }

   /**
   * Bill To Company name
   * @return billToCompanyName
  **/
  @ApiModelProperty(example = "Home Depot Inc.", value = "Bill To Company name")
  public String getBillToCompanyName() {
    return billToCompanyName;
  }

  public void setBillToCompanyName(String billToCompanyName) {
    this.billToCompanyName = billToCompanyName;
  }

  public SSIOOrderLine billingContactFirstname(String billingContactFirstname) {
    this.billingContactFirstname = billingContactFirstname;
    return this;
  }

   /**
   * Billing contact first name
   * @return billingContactFirstname
  **/
  @ApiModelProperty(example = "Mary", value = "Billing contact first name")
  public String getBillingContactFirstname() {
    return billingContactFirstname;
  }

  public void setBillingContactFirstname(String billingContactFirstname) {
    this.billingContactFirstname = billingContactFirstname;
  }

  public SSIOOrderLine billingContactLastname(String billingContactLastname) {
    this.billingContactLastname = billingContactLastname;
    return this;
  }

   /**
   * Billing contact last name
   * @return billingContactLastname
  **/
  @ApiModelProperty(example = "Smith", value = "Billing contact last name")
  public String getBillingContactLastname() {
    return billingContactLastname;
  }

  public void setBillingContactLastname(String billingContactLastname) {
    this.billingContactLastname = billingContactLastname;
  }

  public SSIOOrderLine billingContactEmail(String billingContactEmail) {
    this.billingContactEmail = billingContactEmail;
    return this;
  }

   /**
   * Billing contact email
   * @return billingContactEmail
  **/
  @ApiModelProperty(example = "mail@test.com", value = "Billing contact email")
  public String getBillingContactEmail() {
    return billingContactEmail;
  }

  public void setBillingContactEmail(String billingContactEmail) {
    this.billingContactEmail = billingContactEmail;
  }

  public SSIOOrderLine mediaContactEmail(String mediaContactEmail) {
    this.mediaContactEmail = mediaContactEmail;
    return this;
  }

   /**
   * Billing media email
   * @return mediaContactEmail
  **/
  @ApiModelProperty(example = "mail@test.com", value = "Billing media email")
  public String getMediaContactEmail() {
    return mediaContactEmail;
  }

  public void setMediaContactEmail(String mediaContactEmail) {
    this.mediaContactEmail = mediaContactEmail;
  }

  public SSIOOrderLine mediaContactFirstname(String mediaContactFirstname) {
    this.mediaContactFirstname = mediaContactFirstname;
    return this;
  }

   /**
   * Billing contact first name
   * @return mediaContactFirstname
  **/
  @ApiModelProperty(example = "John", value = "Billing contact first name")
  public String getMediaContactFirstname() {
    return mediaContactFirstname;
  }

  public void setMediaContactFirstname(String mediaContactFirstname) {
    this.mediaContactFirstname = mediaContactFirstname;
  }

  public SSIOOrderLine mediaContactLastname(String mediaContactLastname) {
    this.mediaContactLastname = mediaContactLastname;
    return this;
  }

   /**
   * Billing contact first name
   * @return mediaContactLastname
  **/
  @ApiModelProperty(example = "Doe", value = "Billing contact first name")
  public String getMediaContactLastname() {
    return mediaContactLastname;
  }

  public void setMediaContactLastname(String mediaContactLastname) {
    this.mediaContactLastname = mediaContactLastname;
  }

  public SSIOOrderLine currencyInfo(Currency currencyInfo) {
    this.currencyInfo = currencyInfo;
    return this;
  }

   /**
   * Get currencyInfo
   * @return currencyInfo
  **/
  @ApiModelProperty(value = "")
  public Currency getCurrencyInfo() {
    return currencyInfo;
  }

  public void setCurrencyInfo(Currency currencyInfo) {
    this.currencyInfo = currencyInfo;
  }

  public SSIOOrderLine agencyLink(String agencyLink) {
    this.agencyLink = agencyLink;
    return this;
  }

   /**
   * Agency link
   * @return agencyLink
  **/
  @ApiModelProperty(example = "", value = "Agency link")
  public String getAgencyLink() {
    return agencyLink;
  }

  public void setAgencyLink(String agencyLink) {
    this.agencyLink = agencyLink;
  }

  public SSIOOrderLine poNumber(String poNumber) {
    this.poNumber = poNumber;
    return this;
  }

   /**
   * The po number
   * @return poNumber
  **/
  @ApiModelProperty(value = "The po number")
  public String getPoNumber() {
    return poNumber;
  }

  public void setPoNumber(String poNumber) {
    this.poNumber = poNumber;
  }

  public SSIOOrderLine orderName(String orderName) {
    this.orderName = orderName;
    return this;
  }

   /**
   * The order name
   * @return orderName
  **/
  @ApiModelProperty(value = "The order name")
  public String getOrderName() {
    return orderName;
  }

  public void setOrderName(String orderName) {
    this.orderName = orderName;
  }

  public SSIOOrderLine pmpName(String pmpName) {
    this.pmpName = pmpName;
    return this;
  }

   /**
   * The Pinterest marketing partner name
   * @return pmpName
  **/
  @ApiModelProperty(value = "The Pinterest marketing partner name")
  public String getPmpName() {
    return pmpName;
  }

  public void setPmpName(String pmpName) {
    this.pmpName = pmpName;
  }

  public SSIOOrderLine acceptedTermsId(String acceptedTermsId) {
    this.acceptedTermsId = acceptedTermsId;
    return this;
  }

   /**
   * The SFDC id for the terms
   * @return acceptedTermsId
  **/
  @ApiModelProperty(value = "The SFDC id for the terms")
  public String getAcceptedTermsId() {
    return acceptedTermsId;
  }

  public void setAcceptedTermsId(String acceptedTermsId) {
    this.acceptedTermsId = acceptedTermsId;
  }

  public SSIOOrderLine acceptedTermsTime(String acceptedTermsTime) {
    this.acceptedTermsTime = acceptedTermsTime;
    return this;
  }

   /**
   * The UTC timestamp (to the nearest sec) of when terms were accepted
   * @return acceptedTermsTime
  **/
  @ApiModelProperty(example = "2020-10-06T13:07:04.000Z", value = "The UTC timestamp (to the nearest sec) of when terms were accepted")
  public String getAcceptedTermsTime() {
    return acceptedTermsTime;
  }

  public void setAcceptedTermsTime(String acceptedTermsTime) {
    this.acceptedTermsTime = acceptedTermsTime;
  }

  public SSIOOrderLine budgetAmount(BigDecimal budgetAmount) {
    this.budgetAmount = budgetAmount;
    return this;
  }

   /**
   * If Budget order line, the budget amount.
   * @return budgetAmount
  **/
  @ApiModelProperty(example = "5000000", value = "If Budget order line, the budget amount.")
  public BigDecimal getBudgetAmount() {
    return budgetAmount;
  }

  public void setBudgetAmount(BigDecimal budgetAmount) {
    this.budgetAmount = budgetAmount;
  }

  public SSIOOrderLine estimatedMonthlySpend(BigDecimal estimatedMonthlySpend) {
    this.estimatedMonthlySpend = estimatedMonthlySpend;
    return this;
  }

   /**
   * If Ongoing (perpetual) order line, the estimated monthly spend
   * @return estimatedMonthlySpend
  **/
  @ApiModelProperty(value = "If Ongoing (perpetual) order line, the estimated monthly spend")
  public BigDecimal getEstimatedMonthlySpend() {
    return estimatedMonthlySpend;
  }

  public void setEstimatedMonthlySpend(BigDecimal estimatedMonthlySpend) {
    this.estimatedMonthlySpend = estimatedMonthlySpend;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SSIOOrderLine ssIOOrderLine = (SSIOOrderLine) o;
    return Objects.equals(this.salesforceOrderLineId, ssIOOrderLine.salesforceOrderLineId) &&
        Objects.equals(this.adsManagerOrderLineId, ssIOOrderLine.adsManagerOrderLineId) &&
        Objects.equals(this.pinOrderId, ssIOOrderLine.pinOrderId) &&
        Objects.equals(this.lastModifiedDateTime, ssIOOrderLine.lastModifiedDateTime) &&
        Objects.equals(this.startDate, ssIOOrderLine.startDate) &&
        Objects.equals(this.endDate, ssIOOrderLine.endDate) &&
        Objects.equals(this.billToCompanyName, ssIOOrderLine.billToCompanyName) &&
        Objects.equals(this.billingContactFirstname, ssIOOrderLine.billingContactFirstname) &&
        Objects.equals(this.billingContactLastname, ssIOOrderLine.billingContactLastname) &&
        Objects.equals(this.billingContactEmail, ssIOOrderLine.billingContactEmail) &&
        Objects.equals(this.mediaContactEmail, ssIOOrderLine.mediaContactEmail) &&
        Objects.equals(this.mediaContactFirstname, ssIOOrderLine.mediaContactFirstname) &&
        Objects.equals(this.mediaContactLastname, ssIOOrderLine.mediaContactLastname) &&
        Objects.equals(this.currencyInfo, ssIOOrderLine.currencyInfo) &&
        Objects.equals(this.agencyLink, ssIOOrderLine.agencyLink) &&
        Objects.equals(this.poNumber, ssIOOrderLine.poNumber) &&
        Objects.equals(this.orderName, ssIOOrderLine.orderName) &&
        Objects.equals(this.pmpName, ssIOOrderLine.pmpName) &&
        Objects.equals(this.acceptedTermsId, ssIOOrderLine.acceptedTermsId) &&
        Objects.equals(this.acceptedTermsTime, ssIOOrderLine.acceptedTermsTime) &&
        Objects.equals(this.budgetAmount, ssIOOrderLine.budgetAmount) &&
        Objects.equals(this.estimatedMonthlySpend, ssIOOrderLine.estimatedMonthlySpend);
  }

  @Override
  public int hashCode() {
    return Objects.hash(salesforceOrderLineId, adsManagerOrderLineId, pinOrderId, lastModifiedDateTime, startDate, endDate, billToCompanyName, billingContactFirstname, billingContactLastname, billingContactEmail, mediaContactEmail, mediaContactFirstname, mediaContactLastname, currencyInfo, agencyLink, poNumber, orderName, pmpName, acceptedTermsId, acceptedTermsTime, budgetAmount, estimatedMonthlySpend);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SSIOOrderLine {\n");
    
    sb.append("    salesforceOrderLineId: ").append(toIndentedString(salesforceOrderLineId)).append("\n");
    sb.append("    adsManagerOrderLineId: ").append(toIndentedString(adsManagerOrderLineId)).append("\n");
    sb.append("    pinOrderId: ").append(toIndentedString(pinOrderId)).append("\n");
    sb.append("    lastModifiedDateTime: ").append(toIndentedString(lastModifiedDateTime)).append("\n");
    sb.append("    startDate: ").append(toIndentedString(startDate)).append("\n");
    sb.append("    endDate: ").append(toIndentedString(endDate)).append("\n");
    sb.append("    billToCompanyName: ").append(toIndentedString(billToCompanyName)).append("\n");
    sb.append("    billingContactFirstname: ").append(toIndentedString(billingContactFirstname)).append("\n");
    sb.append("    billingContactLastname: ").append(toIndentedString(billingContactLastname)).append("\n");
    sb.append("    billingContactEmail: ").append(toIndentedString(billingContactEmail)).append("\n");
    sb.append("    mediaContactEmail: ").append(toIndentedString(mediaContactEmail)).append("\n");
    sb.append("    mediaContactFirstname: ").append(toIndentedString(mediaContactFirstname)).append("\n");
    sb.append("    mediaContactLastname: ").append(toIndentedString(mediaContactLastname)).append("\n");
    sb.append("    currencyInfo: ").append(toIndentedString(currencyInfo)).append("\n");
    sb.append("    agencyLink: ").append(toIndentedString(agencyLink)).append("\n");
    sb.append("    poNumber: ").append(toIndentedString(poNumber)).append("\n");
    sb.append("    orderName: ").append(toIndentedString(orderName)).append("\n");
    sb.append("    pmpName: ").append(toIndentedString(pmpName)).append("\n");
    sb.append("    acceptedTermsId: ").append(toIndentedString(acceptedTermsId)).append("\n");
    sb.append("    acceptedTermsTime: ").append(toIndentedString(acceptedTermsTime)).append("\n");
    sb.append("    budgetAmount: ").append(toIndentedString(budgetAmount)).append("\n");
    sb.append("    estimatedMonthlySpend: ").append(toIndentedString(estimatedMonthlySpend)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

