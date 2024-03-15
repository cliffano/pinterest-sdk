/*
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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * SSIOEditInsertionOrderRequest
 */
@JsonPropertyOrder({
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_START_DATE,
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_END_DATE,
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_PO_NUMBER,
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_BUDGET_AMOUNT,
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_BILLING_CONTACT_FIRSTNAME,
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_BILLING_CONTACT_LASTNAME,
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_BILLING_CONTACT_EMAIL,
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_MEDIA_CONTACT_FIRSTNAME,
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_MEDIA_CONTACT_LASTNAME,
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_MEDIA_CONTACT_EMAIL,
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_AGENCY_LINK,
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_USER_EMAIL,
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_ORACLE_LINE_ID,
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_SALESFORCE_ORDER_ID,
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_SALESFORCE_ORDER_LINE_ID,
  SSIOEditInsertionOrderRequest.JSON_PROPERTY_ADS_MANAGER_ORDER_LINE_ID
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class SSIOEditInsertionOrderRequest   {
  public static final String JSON_PROPERTY_START_DATE = "start_date";
  @JsonProperty(JSON_PROPERTY_START_DATE)
  private String startDate;

  public static final String JSON_PROPERTY_END_DATE = "end_date";
  @JsonProperty(JSON_PROPERTY_END_DATE)
  private String endDate;

  public static final String JSON_PROPERTY_PO_NUMBER = "po_number";
  @JsonProperty(JSON_PROPERTY_PO_NUMBER)
  private String poNumber;

  public static final String JSON_PROPERTY_BUDGET_AMOUNT = "budget_amount";
  @JsonProperty(JSON_PROPERTY_BUDGET_AMOUNT)
  private BigDecimal budgetAmount;

  public static final String JSON_PROPERTY_BILLING_CONTACT_FIRSTNAME = "billing_contact_firstname";
  @JsonProperty(JSON_PROPERTY_BILLING_CONTACT_FIRSTNAME)
  private String billingContactFirstname;

  public static final String JSON_PROPERTY_BILLING_CONTACT_LASTNAME = "billing_contact_lastname";
  @JsonProperty(JSON_PROPERTY_BILLING_CONTACT_LASTNAME)
  private String billingContactLastname;

  public static final String JSON_PROPERTY_BILLING_CONTACT_EMAIL = "billing_contact_email";
  @JsonProperty(JSON_PROPERTY_BILLING_CONTACT_EMAIL)
  private String billingContactEmail;

  public static final String JSON_PROPERTY_MEDIA_CONTACT_FIRSTNAME = "media_contact_firstname";
  @JsonProperty(JSON_PROPERTY_MEDIA_CONTACT_FIRSTNAME)
  private String mediaContactFirstname;

  public static final String JSON_PROPERTY_MEDIA_CONTACT_LASTNAME = "media_contact_lastname";
  @JsonProperty(JSON_PROPERTY_MEDIA_CONTACT_LASTNAME)
  private String mediaContactLastname;

  public static final String JSON_PROPERTY_MEDIA_CONTACT_EMAIL = "media_contact_email";
  @JsonProperty(JSON_PROPERTY_MEDIA_CONTACT_EMAIL)
  private String mediaContactEmail;

  public static final String JSON_PROPERTY_AGENCY_LINK = "agency_link";
  @JsonProperty(JSON_PROPERTY_AGENCY_LINK)
  private String agencyLink;

  public static final String JSON_PROPERTY_USER_EMAIL = "user_email";
  @JsonProperty(JSON_PROPERTY_USER_EMAIL)
  private String userEmail;

  public static final String JSON_PROPERTY_ORACLE_LINE_ID = "oracle_line_id";
  @JsonProperty(JSON_PROPERTY_ORACLE_LINE_ID)
  private String oracleLineId;

  public static final String JSON_PROPERTY_SALESFORCE_ORDER_ID = "salesforce_order_id";
  @JsonProperty(JSON_PROPERTY_SALESFORCE_ORDER_ID)
  private String salesforceOrderId;

  public static final String JSON_PROPERTY_SALESFORCE_ORDER_LINE_ID = "salesforce_order_line_id";
  @JsonProperty(JSON_PROPERTY_SALESFORCE_ORDER_LINE_ID)
  private String salesforceOrderLineId;

  public static final String JSON_PROPERTY_ADS_MANAGER_ORDER_LINE_ID = "ads_manager_order_line_id";
  @JsonProperty(JSON_PROPERTY_ADS_MANAGER_ORDER_LINE_ID)
  private String adsManagerOrderLineId;

  public SSIOEditInsertionOrderRequest startDate(String startDate) {
    this.startDate = startDate;
    return this;
  }

  /**
   * Starting date of time period. Format: YYYY-MM-DD
   * @return startDate
   **/
  @JsonProperty(value = "start_date")
  @ApiModelProperty(example = "2020-12-20", value = "Starting date of time period. Format: YYYY-MM-DD")
   @Pattern(regexp="^(\\d{4})-(\\d{2})-(\\d{2})$")
  public String getStartDate() {
    return startDate;
  }

  public void setStartDate(String startDate) {
    this.startDate = startDate;
  }

  public SSIOEditInsertionOrderRequest endDate(String endDate) {
    this.endDate = endDate;
    return this;
  }

  /**
   * End date of time period. Format: YYYY-MM-DD
   * @return endDate
   **/
  @JsonProperty(value = "end_date")
  @ApiModelProperty(example = "2020-12-20", value = "End date of time period. Format: YYYY-MM-DD")
   @Pattern(regexp="^(\\d{4})-(\\d{2})-(\\d{2})$")
  public String getEndDate() {
    return endDate;
  }

  public void setEndDate(String endDate) {
    this.endDate = endDate;
  }

  public SSIOEditInsertionOrderRequest poNumber(String poNumber) {
    this.poNumber = poNumber;
    return this;
  }

  /**
   * The po number
   * @return poNumber
   **/
  @JsonProperty(value = "po_number")
  @ApiModelProperty(value = "The po number")
  
  public String getPoNumber() {
    return poNumber;
  }

  public void setPoNumber(String poNumber) {
    this.poNumber = poNumber;
  }

  public SSIOEditInsertionOrderRequest budgetAmount(BigDecimal budgetAmount) {
    this.budgetAmount = budgetAmount;
    return this;
  }

  /**
   * If Budget order line, the budget amount.
   * @return budgetAmount
   **/
  @JsonProperty(value = "budget_amount")
  @ApiModelProperty(example = "5000000", value = "If Budget order line, the budget amount.")
  @Valid 
  public BigDecimal getBudgetAmount() {
    return budgetAmount;
  }

  public void setBudgetAmount(BigDecimal budgetAmount) {
    this.budgetAmount = budgetAmount;
  }

  public SSIOEditInsertionOrderRequest billingContactFirstname(String billingContactFirstname) {
    this.billingContactFirstname = billingContactFirstname;
    return this;
  }

  /**
   * The billing contact first name
   * @return billingContactFirstname
   **/
  @JsonProperty(value = "billing_contact_firstname")
  @ApiModelProperty(value = "The billing contact first name")
  
  public String getBillingContactFirstname() {
    return billingContactFirstname;
  }

  public void setBillingContactFirstname(String billingContactFirstname) {
    this.billingContactFirstname = billingContactFirstname;
  }

  public SSIOEditInsertionOrderRequest billingContactLastname(String billingContactLastname) {
    this.billingContactLastname = billingContactLastname;
    return this;
  }

  /**
   * The billing contact last name
   * @return billingContactLastname
   **/
  @JsonProperty(value = "billing_contact_lastname")
  @ApiModelProperty(value = "The billing contact last name")
  
  public String getBillingContactLastname() {
    return billingContactLastname;
  }

  public void setBillingContactLastname(String billingContactLastname) {
    this.billingContactLastname = billingContactLastname;
  }

  public SSIOEditInsertionOrderRequest billingContactEmail(String billingContactEmail) {
    this.billingContactEmail = billingContactEmail;
    return this;
  }

  /**
   * The billing contact email
   * @return billingContactEmail
   **/
  @JsonProperty(value = "billing_contact_email")
  @ApiModelProperty(example = "test@example", value = "The billing contact email")
  
  public String getBillingContactEmail() {
    return billingContactEmail;
  }

  public void setBillingContactEmail(String billingContactEmail) {
    this.billingContactEmail = billingContactEmail;
  }

  public SSIOEditInsertionOrderRequest mediaContactFirstname(String mediaContactFirstname) {
    this.mediaContactFirstname = mediaContactFirstname;
    return this;
  }

  /**
   * The media contact first name
   * @return mediaContactFirstname
   **/
  @JsonProperty(value = "media_contact_firstname")
  @ApiModelProperty(value = "The media contact first name")
  
  public String getMediaContactFirstname() {
    return mediaContactFirstname;
  }

  public void setMediaContactFirstname(String mediaContactFirstname) {
    this.mediaContactFirstname = mediaContactFirstname;
  }

  public SSIOEditInsertionOrderRequest mediaContactLastname(String mediaContactLastname) {
    this.mediaContactLastname = mediaContactLastname;
    return this;
  }

  /**
   * The media contact last name
   * @return mediaContactLastname
   **/
  @JsonProperty(value = "media_contact_lastname")
  @ApiModelProperty(value = "The media contact last name")
  
  public String getMediaContactLastname() {
    return mediaContactLastname;
  }

  public void setMediaContactLastname(String mediaContactLastname) {
    this.mediaContactLastname = mediaContactLastname;
  }

  public SSIOEditInsertionOrderRequest mediaContactEmail(String mediaContactEmail) {
    this.mediaContactEmail = mediaContactEmail;
    return this;
  }

  /**
   * The media contact email
   * @return mediaContactEmail
   **/
  @JsonProperty(value = "media_contact_email")
  @ApiModelProperty(example = "test@example", value = "The media contact email")
  
  public String getMediaContactEmail() {
    return mediaContactEmail;
  }

  public void setMediaContactEmail(String mediaContactEmail) {
    this.mediaContactEmail = mediaContactEmail;
  }

  public SSIOEditInsertionOrderRequest agencyLink(String agencyLink) {
    this.agencyLink = agencyLink;
    return this;
  }

  /**
   * URL link for agency
   * @return agencyLink
   **/
  @JsonProperty(value = "agency_link")
  @ApiModelProperty(value = "URL link for agency")
  
  public String getAgencyLink() {
    return agencyLink;
  }

  public void setAgencyLink(String agencyLink) {
    this.agencyLink = agencyLink;
  }

  public SSIOEditInsertionOrderRequest userEmail(String userEmail) {
    this.userEmail = userEmail;
    return this;
  }

  /**
   * The email of user submitting the insertion order
   * @return userEmail
   **/
  @JsonProperty(value = "user_email")
  @ApiModelProperty(example = "test@example", value = "The email of user submitting the insertion order")
  
  public String getUserEmail() {
    return userEmail;
  }

  public void setUserEmail(String userEmail) {
    this.userEmail = userEmail;
  }

  public SSIOEditInsertionOrderRequest oracleLineId(String oracleLineId) {
    this.oracleLineId = oracleLineId;
    return this;
  }

  /**
   * LineId in the Oracle DB
   * @return oracleLineId
   **/
  @JsonProperty(value = "oracle_line_id")
  @ApiModelProperty(value = "LineId in the Oracle DB")
  
  public String getOracleLineId() {
    return oracleLineId;
  }

  public void setOracleLineId(String oracleLineId) {
    this.oracleLineId = oracleLineId;
  }

  public SSIOEditInsertionOrderRequest salesforceOrderId(String salesforceOrderId) {
    this.salesforceOrderId = salesforceOrderId;
    return this;
  }

  /**
   * OrderId in SFDC
   * @return salesforceOrderId
   **/
  @JsonProperty(value = "salesforce_order_id")
  @ApiModelProperty(value = "OrderId in SFDC")
  
  public String getSalesforceOrderId() {
    return salesforceOrderId;
  }

  public void setSalesforceOrderId(String salesforceOrderId) {
    this.salesforceOrderId = salesforceOrderId;
  }

  public SSIOEditInsertionOrderRequest salesforceOrderLineId(String salesforceOrderLineId) {
    this.salesforceOrderLineId = salesforceOrderLineId;
    return this;
  }

  /**
   * OrderLineId in SFDC
   * @return salesforceOrderLineId
   **/
  @JsonProperty(value = "salesforce_order_line_id")
  @ApiModelProperty(value = "OrderLineId in SFDC")
  
  public String getSalesforceOrderLineId() {
    return salesforceOrderLineId;
  }

  public void setSalesforceOrderLineId(String salesforceOrderLineId) {
    this.salesforceOrderLineId = salesforceOrderLineId;
  }

  public SSIOEditInsertionOrderRequest adsManagerOrderLineId(String adsManagerOrderLineId) {
    this.adsManagerOrderLineId = adsManagerOrderLineId;
    return this;
  }

  /**
   * Ads manager OrderLineId
   * @return adsManagerOrderLineId
   **/
  @JsonProperty(value = "ads_manager_order_line_id")
  @ApiModelProperty(value = "Ads manager OrderLineId")
  
  public String getAdsManagerOrderLineId() {
    return adsManagerOrderLineId;
  }

  public void setAdsManagerOrderLineId(String adsManagerOrderLineId) {
    this.adsManagerOrderLineId = adsManagerOrderLineId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SSIOEditInsertionOrderRequest ssIOEditInsertionOrderRequest = (SSIOEditInsertionOrderRequest) o;
    return Objects.equals(this.startDate, ssIOEditInsertionOrderRequest.startDate) &&
        Objects.equals(this.endDate, ssIOEditInsertionOrderRequest.endDate) &&
        Objects.equals(this.poNumber, ssIOEditInsertionOrderRequest.poNumber) &&
        Objects.equals(this.budgetAmount, ssIOEditInsertionOrderRequest.budgetAmount) &&
        Objects.equals(this.billingContactFirstname, ssIOEditInsertionOrderRequest.billingContactFirstname) &&
        Objects.equals(this.billingContactLastname, ssIOEditInsertionOrderRequest.billingContactLastname) &&
        Objects.equals(this.billingContactEmail, ssIOEditInsertionOrderRequest.billingContactEmail) &&
        Objects.equals(this.mediaContactFirstname, ssIOEditInsertionOrderRequest.mediaContactFirstname) &&
        Objects.equals(this.mediaContactLastname, ssIOEditInsertionOrderRequest.mediaContactLastname) &&
        Objects.equals(this.mediaContactEmail, ssIOEditInsertionOrderRequest.mediaContactEmail) &&
        Objects.equals(this.agencyLink, ssIOEditInsertionOrderRequest.agencyLink) &&
        Objects.equals(this.userEmail, ssIOEditInsertionOrderRequest.userEmail) &&
        Objects.equals(this.oracleLineId, ssIOEditInsertionOrderRequest.oracleLineId) &&
        Objects.equals(this.salesforceOrderId, ssIOEditInsertionOrderRequest.salesforceOrderId) &&
        Objects.equals(this.salesforceOrderLineId, ssIOEditInsertionOrderRequest.salesforceOrderLineId) &&
        Objects.equals(this.adsManagerOrderLineId, ssIOEditInsertionOrderRequest.adsManagerOrderLineId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(startDate, endDate, poNumber, budgetAmount, billingContactFirstname, billingContactLastname, billingContactEmail, mediaContactFirstname, mediaContactLastname, mediaContactEmail, agencyLink, userEmail, oracleLineId, salesforceOrderId, salesforceOrderLineId, adsManagerOrderLineId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SSIOEditInsertionOrderRequest {\n");
    
    sb.append("    startDate: ").append(toIndentedString(startDate)).append("\n");
    sb.append("    endDate: ").append(toIndentedString(endDate)).append("\n");
    sb.append("    poNumber: ").append(toIndentedString(poNumber)).append("\n");
    sb.append("    budgetAmount: ").append(toIndentedString(budgetAmount)).append("\n");
    sb.append("    billingContactFirstname: ").append(toIndentedString(billingContactFirstname)).append("\n");
    sb.append("    billingContactLastname: ").append(toIndentedString(billingContactLastname)).append("\n");
    sb.append("    billingContactEmail: ").append(toIndentedString(billingContactEmail)).append("\n");
    sb.append("    mediaContactFirstname: ").append(toIndentedString(mediaContactFirstname)).append("\n");
    sb.append("    mediaContactLastname: ").append(toIndentedString(mediaContactLastname)).append("\n");
    sb.append("    mediaContactEmail: ").append(toIndentedString(mediaContactEmail)).append("\n");
    sb.append("    agencyLink: ").append(toIndentedString(agencyLink)).append("\n");
    sb.append("    userEmail: ").append(toIndentedString(userEmail)).append("\n");
    sb.append("    oracleLineId: ").append(toIndentedString(oracleLineId)).append("\n");
    sb.append("    salesforceOrderId: ").append(toIndentedString(salesforceOrderId)).append("\n");
    sb.append("    salesforceOrderLineId: ").append(toIndentedString(salesforceOrderLineId)).append("\n");
    sb.append("    adsManagerOrderLineId: ").append(toIndentedString(adsManagerOrderLineId)).append("\n");
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
