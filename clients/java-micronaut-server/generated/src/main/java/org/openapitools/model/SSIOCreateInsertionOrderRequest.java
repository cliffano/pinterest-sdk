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
import java.util.Arrays;
import java.math.BigDecimal;
import org.openapitools.model.Currency;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * SSIOCreateInsertionOrderRequest
 */
@JsonPropertyOrder({
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_START_DATE,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_END_DATE,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_PO_NUMBER,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_BUDGET_AMOUNT,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_BILLING_CONTACT_FIRSTNAME,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_BILLING_CONTACT_LASTNAME,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_BILLING_CONTACT_EMAIL,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_MEDIA_CONTACT_FIRSTNAME,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_MEDIA_CONTACT_LASTNAME,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_MEDIA_CONTACT_EMAIL,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_AGENCY_LINK,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_USER_EMAIL,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_ACCEPTED_TERMS_TIME,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_PMP_ID,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_ORDER_NAME,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_ORDER_LINE_TYPE,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_ACCEPTED_TERMS_ID,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_BILLTO_COMPANY_ID,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_BILLTO_BUSINESS_ADDRESS_ID,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_BILLTO_BILLING_ADDRESS_ID,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_ESTIMATED_MONTHLY_SPEND,
  SSIOCreateInsertionOrderRequest.JSON_PROPERTY_CURRENCY_INFO
})
@JsonTypeName("SSIOCreateInsertionOrderRequest")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class SSIOCreateInsertionOrderRequest {
    public static final String JSON_PROPERTY_START_DATE = "start_date";
    private String startDate;

    public static final String JSON_PROPERTY_END_DATE = "end_date";
    private String endDate;

    public static final String JSON_PROPERTY_PO_NUMBER = "po_number";
    private String poNumber;

    public static final String JSON_PROPERTY_BUDGET_AMOUNT = "budget_amount";
    private BigDecimal budgetAmount;

    public static final String JSON_PROPERTY_BILLING_CONTACT_FIRSTNAME = "billing_contact_firstname";
    private String billingContactFirstname;

    public static final String JSON_PROPERTY_BILLING_CONTACT_LASTNAME = "billing_contact_lastname";
    private String billingContactLastname;

    public static final String JSON_PROPERTY_BILLING_CONTACT_EMAIL = "billing_contact_email";
    private String billingContactEmail;

    public static final String JSON_PROPERTY_MEDIA_CONTACT_FIRSTNAME = "media_contact_firstname";
    private String mediaContactFirstname;

    public static final String JSON_PROPERTY_MEDIA_CONTACT_LASTNAME = "media_contact_lastname";
    private String mediaContactLastname;

    public static final String JSON_PROPERTY_MEDIA_CONTACT_EMAIL = "media_contact_email";
    private String mediaContactEmail;

    public static final String JSON_PROPERTY_AGENCY_LINK = "agency_link";
    private String agencyLink;

    public static final String JSON_PROPERTY_USER_EMAIL = "user_email";
    private String userEmail;

    public static final String JSON_PROPERTY_ACCEPTED_TERMS_TIME = "accepted_terms_time";
    private Integer acceptedTermsTime;

    public static final String JSON_PROPERTY_PMP_ID = "pmp_id";
    private String pmpId;

    public static final String JSON_PROPERTY_ORDER_NAME = "order_name";
    private String orderName;

    /**
     * Type can be Budget or Perpetual
     */
    public enum OrderLineTypeEnum {
        BUDGET("BUDGET"),
        PERPETUALS("PERPETUALS");

        private String value;

        OrderLineTypeEnum(String value) {
            this.value = value;
        }

        @JsonValue
        public String getValue() {
            return value;
        }

        @Override
        public String toString() {
            return String.valueOf(value);
        }

        @JsonCreator
        public static OrderLineTypeEnum fromValue(String value) {
            for (OrderLineTypeEnum b : OrderLineTypeEnum.values()) {
                if (b.value.equals(value)) {
                    return b;
                }
            }
            throw new IllegalArgumentException("Unexpected value '" + value + "'");
        }
    }
    public static final String JSON_PROPERTY_ORDER_LINE_TYPE = "order_line_type";
    private OrderLineTypeEnum orderLineType;

    public static final String JSON_PROPERTY_ACCEPTED_TERMS_ID = "accepted_terms_id";
    private String acceptedTermsId;

    public static final String JSON_PROPERTY_BILLTO_COMPANY_ID = "billto_company_id";
    private String billtoCompanyId;

    public static final String JSON_PROPERTY_BILLTO_BUSINESS_ADDRESS_ID = "billto_business_address_id";
    private String billtoBusinessAddressId;

    public static final String JSON_PROPERTY_BILLTO_BILLING_ADDRESS_ID = "billto_billing_address_id";
    private String billtoBillingAddressId;

    public static final String JSON_PROPERTY_ESTIMATED_MONTHLY_SPEND = "estimated_monthly_spend";
    private BigDecimal estimatedMonthlySpend;

    public static final String JSON_PROPERTY_CURRENCY_INFO = "currency_info";
    private Currency currencyInfo;

    public SSIOCreateInsertionOrderRequest(String startDate, String poNumber, String billingContactFirstname, String billingContactLastname, String billingContactEmail, String mediaContactFirstname, String mediaContactLastname, String mediaContactEmail, String pmpId, String orderName, OrderLineTypeEnum orderLineType, String acceptedTermsId, String billtoCompanyId, String billtoBusinessAddressId, String billtoBillingAddressId, Currency currencyInfo) {
        this.startDate = startDate;
        this.poNumber = poNumber;
        this.billingContactFirstname = billingContactFirstname;
        this.billingContactLastname = billingContactLastname;
        this.billingContactEmail = billingContactEmail;
        this.mediaContactFirstname = mediaContactFirstname;
        this.mediaContactLastname = mediaContactLastname;
        this.mediaContactEmail = mediaContactEmail;
        this.pmpId = pmpId;
        this.orderName = orderName;
        this.orderLineType = orderLineType;
        this.acceptedTermsId = acceptedTermsId;
        this.billtoCompanyId = billtoCompanyId;
        this.billtoBusinessAddressId = billtoBusinessAddressId;
        this.billtoBillingAddressId = billtoBillingAddressId;
        this.currencyInfo = currencyInfo;
    }

    public SSIOCreateInsertionOrderRequest startDate(String startDate) {
        this.startDate = startDate;
        return this;
    }

    /**
     * Starting date of time period. Format: YYYY-MM-DD
     * @return startDate
     **/
    @NotNull
    @Pattern(regexp="^(\\d{4})-(\\d{2})-(\\d{2})$")
    @Schema(name = "start_date", example = "2020-12-20", description = "Starting date of time period. Format: YYYY-MM-DD", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_START_DATE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getStartDate() {
        return startDate;
    }

    @JsonProperty(JSON_PROPERTY_START_DATE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setStartDate(String startDate) {
        this.startDate = startDate;
    }

    public SSIOCreateInsertionOrderRequest endDate(String endDate) {
        this.endDate = endDate;
        return this;
    }

    /**
     * End date of time period. Format: YYYY-MM-DD
     * @return endDate
     **/
    @Nullable
    @Pattern(regexp="^(\\d{4})-(\\d{2})-(\\d{2})$")
    @Schema(name = "end_date", example = "2020-12-20", description = "End date of time period. Format: YYYY-MM-DD", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_END_DATE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getEndDate() {
        return endDate;
    }

    @JsonProperty(JSON_PROPERTY_END_DATE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setEndDate(String endDate) {
        this.endDate = endDate;
    }

    public SSIOCreateInsertionOrderRequest poNumber(String poNumber) {
        this.poNumber = poNumber;
        return this;
    }

    /**
     * The po number
     * @return poNumber
     **/
    @NotNull
    @Schema(name = "po_number", description = "The po number", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_PO_NUMBER)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getPoNumber() {
        return poNumber;
    }

    @JsonProperty(JSON_PROPERTY_PO_NUMBER)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setPoNumber(String poNumber) {
        this.poNumber = poNumber;
    }

    public SSIOCreateInsertionOrderRequest budgetAmount(BigDecimal budgetAmount) {
        this.budgetAmount = budgetAmount;
        return this;
    }

    /**
     * If Budget order line, the budget amount.
     * @return budgetAmount
     **/
    @Nullable
    @Schema(name = "budget_amount", example = "5000000", description = "If Budget order line, the budget amount.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_BUDGET_AMOUNT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getBudgetAmount() {
        return budgetAmount;
    }

    @JsonProperty(JSON_PROPERTY_BUDGET_AMOUNT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setBudgetAmount(BigDecimal budgetAmount) {
        this.budgetAmount = budgetAmount;
    }

    public SSIOCreateInsertionOrderRequest billingContactFirstname(String billingContactFirstname) {
        this.billingContactFirstname = billingContactFirstname;
        return this;
    }

    /**
     * The billing contact first name
     * @return billingContactFirstname
     **/
    @NotNull
    @Schema(name = "billing_contact_firstname", description = "The billing contact first name", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_BILLING_CONTACT_FIRSTNAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getBillingContactFirstname() {
        return billingContactFirstname;
    }

    @JsonProperty(JSON_PROPERTY_BILLING_CONTACT_FIRSTNAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setBillingContactFirstname(String billingContactFirstname) {
        this.billingContactFirstname = billingContactFirstname;
    }

    public SSIOCreateInsertionOrderRequest billingContactLastname(String billingContactLastname) {
        this.billingContactLastname = billingContactLastname;
        return this;
    }

    /**
     * The billing contact last name
     * @return billingContactLastname
     **/
    @NotNull
    @Schema(name = "billing_contact_lastname", description = "The billing contact last name", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_BILLING_CONTACT_LASTNAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getBillingContactLastname() {
        return billingContactLastname;
    }

    @JsonProperty(JSON_PROPERTY_BILLING_CONTACT_LASTNAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setBillingContactLastname(String billingContactLastname) {
        this.billingContactLastname = billingContactLastname;
    }

    public SSIOCreateInsertionOrderRequest billingContactEmail(String billingContactEmail) {
        this.billingContactEmail = billingContactEmail;
        return this;
    }

    /**
     * The billing contact email
     * @return billingContactEmail
     **/
    @NotNull
    @Schema(name = "billing_contact_email", example = "test@example", description = "The billing contact email", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_BILLING_CONTACT_EMAIL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getBillingContactEmail() {
        return billingContactEmail;
    }

    @JsonProperty(JSON_PROPERTY_BILLING_CONTACT_EMAIL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setBillingContactEmail(String billingContactEmail) {
        this.billingContactEmail = billingContactEmail;
    }

    public SSIOCreateInsertionOrderRequest mediaContactFirstname(String mediaContactFirstname) {
        this.mediaContactFirstname = mediaContactFirstname;
        return this;
    }

    /**
     * The media contact first name
     * @return mediaContactFirstname
     **/
    @NotNull
    @Schema(name = "media_contact_firstname", description = "The media contact first name", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_MEDIA_CONTACT_FIRSTNAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getMediaContactFirstname() {
        return mediaContactFirstname;
    }

    @JsonProperty(JSON_PROPERTY_MEDIA_CONTACT_FIRSTNAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setMediaContactFirstname(String mediaContactFirstname) {
        this.mediaContactFirstname = mediaContactFirstname;
    }

    public SSIOCreateInsertionOrderRequest mediaContactLastname(String mediaContactLastname) {
        this.mediaContactLastname = mediaContactLastname;
        return this;
    }

    /**
     * The media contact last name
     * @return mediaContactLastname
     **/
    @NotNull
    @Schema(name = "media_contact_lastname", description = "The media contact last name", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_MEDIA_CONTACT_LASTNAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getMediaContactLastname() {
        return mediaContactLastname;
    }

    @JsonProperty(JSON_PROPERTY_MEDIA_CONTACT_LASTNAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setMediaContactLastname(String mediaContactLastname) {
        this.mediaContactLastname = mediaContactLastname;
    }

    public SSIOCreateInsertionOrderRequest mediaContactEmail(String mediaContactEmail) {
        this.mediaContactEmail = mediaContactEmail;
        return this;
    }

    /**
     * The media contact email
     * @return mediaContactEmail
     **/
    @NotNull
    @Schema(name = "media_contact_email", example = "test@example", description = "The media contact email", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_MEDIA_CONTACT_EMAIL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getMediaContactEmail() {
        return mediaContactEmail;
    }

    @JsonProperty(JSON_PROPERTY_MEDIA_CONTACT_EMAIL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setMediaContactEmail(String mediaContactEmail) {
        this.mediaContactEmail = mediaContactEmail;
    }

    public SSIOCreateInsertionOrderRequest agencyLink(String agencyLink) {
        this.agencyLink = agencyLink;
        return this;
    }

    /**
     * URL link for agency
     * @return agencyLink
     **/
    @Nullable
    @Schema(name = "agency_link", description = "URL link for agency", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_AGENCY_LINK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getAgencyLink() {
        return agencyLink;
    }

    @JsonProperty(JSON_PROPERTY_AGENCY_LINK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAgencyLink(String agencyLink) {
        this.agencyLink = agencyLink;
    }

    public SSIOCreateInsertionOrderRequest userEmail(String userEmail) {
        this.userEmail = userEmail;
        return this;
    }

    /**
     * The email of user submitting the insertion order
     * @return userEmail
     **/
    @Nullable
    @Schema(name = "user_email", example = "test@example", description = "The email of user submitting the insertion order", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_USER_EMAIL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getUserEmail() {
        return userEmail;
    }

    @JsonProperty(JSON_PROPERTY_USER_EMAIL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setUserEmail(String userEmail) {
        this.userEmail = userEmail;
    }

    public SSIOCreateInsertionOrderRequest acceptedTermsTime(Integer acceptedTermsTime) {
        this.acceptedTermsTime = acceptedTermsTime;
        return this;
    }

    /**
     * The UTC timestamp (to the nearest sec) of when terms were accepted
     * @return acceptedTermsTime
     **/
    @Nullable
    @Schema(name = "accepted_terms_time", description = "The UTC timestamp (to the nearest sec) of when terms were accepted", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_ACCEPTED_TERMS_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Integer getAcceptedTermsTime() {
        return acceptedTermsTime;
    }

    @JsonProperty(JSON_PROPERTY_ACCEPTED_TERMS_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAcceptedTermsTime(Integer acceptedTermsTime) {
        this.acceptedTermsTime = acceptedTermsTime;
    }

    public SSIOCreateInsertionOrderRequest pmpId(String pmpId) {
        this.pmpId = pmpId;
        return this;
    }

    /**
     * The pmp id
     * @return pmpId
     **/
    @NotNull
    @Schema(name = "pmp_id", description = "The pmp id", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_PMP_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getPmpId() {
        return pmpId;
    }

    @JsonProperty(JSON_PROPERTY_PMP_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setPmpId(String pmpId) {
        this.pmpId = pmpId;
    }

    public SSIOCreateInsertionOrderRequest orderName(String orderName) {
        this.orderName = orderName;
        return this;
    }

    /**
     * The order name
     * @return orderName
     **/
    @NotNull
    @Schema(name = "order_name", description = "The order name", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_ORDER_NAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getOrderName() {
        return orderName;
    }

    @JsonProperty(JSON_PROPERTY_ORDER_NAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setOrderName(String orderName) {
        this.orderName = orderName;
    }

    public SSIOCreateInsertionOrderRequest orderLineType(OrderLineTypeEnum orderLineType) {
        this.orderLineType = orderLineType;
        return this;
    }

    /**
     * Type can be Budget or Perpetual
     * @return orderLineType
     **/
    @NotNull
    @Schema(name = "order_line_type", description = "Type can be Budget or Perpetual", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_ORDER_LINE_TYPE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public OrderLineTypeEnum getOrderLineType() {
        return orderLineType;
    }

    @JsonProperty(JSON_PROPERTY_ORDER_LINE_TYPE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setOrderLineType(OrderLineTypeEnum orderLineType) {
        this.orderLineType = orderLineType;
    }

    public SSIOCreateInsertionOrderRequest acceptedTermsId(String acceptedTermsId) {
        this.acceptedTermsId = acceptedTermsId;
        return this;
    }

    /**
     * The SFDC id for the terms
     * @return acceptedTermsId
     **/
    @NotNull
    @Schema(name = "accepted_terms_id", description = "The SFDC id for the terms", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_ACCEPTED_TERMS_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getAcceptedTermsId() {
        return acceptedTermsId;
    }

    @JsonProperty(JSON_PROPERTY_ACCEPTED_TERMS_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setAcceptedTermsId(String acceptedTermsId) {
        this.acceptedTermsId = acceptedTermsId;
    }

    public SSIOCreateInsertionOrderRequest billtoCompanyId(String billtoCompanyId) {
        this.billtoCompanyId = billtoCompanyId;
        return this;
    }

    /**
     * The bill-to company id
     * @return billtoCompanyId
     **/
    @NotNull
    @Schema(name = "billto_company_id", description = "The bill-to company id", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_BILLTO_COMPANY_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getBilltoCompanyId() {
        return billtoCompanyId;
    }

    @JsonProperty(JSON_PROPERTY_BILLTO_COMPANY_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setBilltoCompanyId(String billtoCompanyId) {
        this.billtoCompanyId = billtoCompanyId;
    }

    public SSIOCreateInsertionOrderRequest billtoBusinessAddressId(String billtoBusinessAddressId) {
        this.billtoBusinessAddressId = billtoBusinessAddressId;
        return this;
    }

    /**
     * The bill-to business address id
     * @return billtoBusinessAddressId
     **/
    @NotNull
    @Schema(name = "billto_business_address_id", description = "The bill-to business address id", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_BILLTO_BUSINESS_ADDRESS_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getBilltoBusinessAddressId() {
        return billtoBusinessAddressId;
    }

    @JsonProperty(JSON_PROPERTY_BILLTO_BUSINESS_ADDRESS_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setBilltoBusinessAddressId(String billtoBusinessAddressId) {
        this.billtoBusinessAddressId = billtoBusinessAddressId;
    }

    public SSIOCreateInsertionOrderRequest billtoBillingAddressId(String billtoBillingAddressId) {
        this.billtoBillingAddressId = billtoBillingAddressId;
        return this;
    }

    /**
     * The bill-to billing address id
     * @return billtoBillingAddressId
     **/
    @NotNull
    @Schema(name = "billto_billing_address_id", description = "The bill-to billing address id", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_BILLTO_BILLING_ADDRESS_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getBilltoBillingAddressId() {
        return billtoBillingAddressId;
    }

    @JsonProperty(JSON_PROPERTY_BILLTO_BILLING_ADDRESS_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setBilltoBillingAddressId(String billtoBillingAddressId) {
        this.billtoBillingAddressId = billtoBillingAddressId;
    }

    public SSIOCreateInsertionOrderRequest estimatedMonthlySpend(BigDecimal estimatedMonthlySpend) {
        this.estimatedMonthlySpend = estimatedMonthlySpend;
        return this;
    }

    /**
     * If Ongoing (perpetual) order line, the estimated monthly spend
     * @return estimatedMonthlySpend
     **/
    @Nullable
    @Schema(name = "estimated_monthly_spend", description = "If Ongoing (perpetual) order line, the estimated monthly spend", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_ESTIMATED_MONTHLY_SPEND)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getEstimatedMonthlySpend() {
        return estimatedMonthlySpend;
    }

    @JsonProperty(JSON_PROPERTY_ESTIMATED_MONTHLY_SPEND)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setEstimatedMonthlySpend(BigDecimal estimatedMonthlySpend) {
        this.estimatedMonthlySpend = estimatedMonthlySpend;
    }

    public SSIOCreateInsertionOrderRequest currencyInfo(Currency currencyInfo) {
        this.currencyInfo = currencyInfo;
        return this;
    }

    /**
     * Get currencyInfo
     * @return currencyInfo
     **/
    @NotNull
    @Schema(name = "currency_info", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_CURRENCY_INFO)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public Currency getCurrencyInfo() {
        return currencyInfo;
    }

    @JsonProperty(JSON_PROPERTY_CURRENCY_INFO)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setCurrencyInfo(Currency currencyInfo) {
        this.currencyInfo = currencyInfo;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        SSIOCreateInsertionOrderRequest ssIOCreateInsertionOrderRequest = (SSIOCreateInsertionOrderRequest) o;
        return Objects.equals(this.startDate, ssIOCreateInsertionOrderRequest.startDate) &&
            Objects.equals(this.endDate, ssIOCreateInsertionOrderRequest.endDate) &&
            Objects.equals(this.poNumber, ssIOCreateInsertionOrderRequest.poNumber) &&
            Objects.equals(this.budgetAmount, ssIOCreateInsertionOrderRequest.budgetAmount) &&
            Objects.equals(this.billingContactFirstname, ssIOCreateInsertionOrderRequest.billingContactFirstname) &&
            Objects.equals(this.billingContactLastname, ssIOCreateInsertionOrderRequest.billingContactLastname) &&
            Objects.equals(this.billingContactEmail, ssIOCreateInsertionOrderRequest.billingContactEmail) &&
            Objects.equals(this.mediaContactFirstname, ssIOCreateInsertionOrderRequest.mediaContactFirstname) &&
            Objects.equals(this.mediaContactLastname, ssIOCreateInsertionOrderRequest.mediaContactLastname) &&
            Objects.equals(this.mediaContactEmail, ssIOCreateInsertionOrderRequest.mediaContactEmail) &&
            Objects.equals(this.agencyLink, ssIOCreateInsertionOrderRequest.agencyLink) &&
            Objects.equals(this.userEmail, ssIOCreateInsertionOrderRequest.userEmail) &&
            Objects.equals(this.acceptedTermsTime, ssIOCreateInsertionOrderRequest.acceptedTermsTime) &&
            Objects.equals(this.pmpId, ssIOCreateInsertionOrderRequest.pmpId) &&
            Objects.equals(this.orderName, ssIOCreateInsertionOrderRequest.orderName) &&
            Objects.equals(this.orderLineType, ssIOCreateInsertionOrderRequest.orderLineType) &&
            Objects.equals(this.acceptedTermsId, ssIOCreateInsertionOrderRequest.acceptedTermsId) &&
            Objects.equals(this.billtoCompanyId, ssIOCreateInsertionOrderRequest.billtoCompanyId) &&
            Objects.equals(this.billtoBusinessAddressId, ssIOCreateInsertionOrderRequest.billtoBusinessAddressId) &&
            Objects.equals(this.billtoBillingAddressId, ssIOCreateInsertionOrderRequest.billtoBillingAddressId) &&
            Objects.equals(this.estimatedMonthlySpend, ssIOCreateInsertionOrderRequest.estimatedMonthlySpend) &&
            Objects.equals(this.currencyInfo, ssIOCreateInsertionOrderRequest.currencyInfo);
    }

    @Override
    public int hashCode() {
        return Objects.hash(startDate, endDate, poNumber, budgetAmount, billingContactFirstname, billingContactLastname, billingContactEmail, mediaContactFirstname, mediaContactLastname, mediaContactEmail, agencyLink, userEmail, acceptedTermsTime, pmpId, orderName, orderLineType, acceptedTermsId, billtoCompanyId, billtoBusinessAddressId, billtoBillingAddressId, estimatedMonthlySpend, currencyInfo);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class SSIOCreateInsertionOrderRequest {\n");
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
        sb.append("    acceptedTermsTime: ").append(toIndentedString(acceptedTermsTime)).append("\n");
        sb.append("    pmpId: ").append(toIndentedString(pmpId)).append("\n");
        sb.append("    orderName: ").append(toIndentedString(orderName)).append("\n");
        sb.append("    orderLineType: ").append(toIndentedString(orderLineType)).append("\n");
        sb.append("    acceptedTermsId: ").append(toIndentedString(acceptedTermsId)).append("\n");
        sb.append("    billtoCompanyId: ").append(toIndentedString(billtoCompanyId)).append("\n");
        sb.append("    billtoBusinessAddressId: ").append(toIndentedString(billtoBusinessAddressId)).append("\n");
        sb.append("    billtoBillingAddressId: ").append(toIndentedString(billtoBillingAddressId)).append("\n");
        sb.append("    estimatedMonthlySpend: ").append(toIndentedString(estimatedMonthlySpend)).append("\n");
        sb.append("    currencyInfo: ").append(toIndentedString(currencyInfo)).append("\n");
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

