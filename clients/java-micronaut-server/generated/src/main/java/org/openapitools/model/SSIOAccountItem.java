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
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.SSIOAccountAddress;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * SSIOAccountItem
 */
@JsonPropertyOrder({
  SSIOAccountItem.JSON_PROPERTY_ID,
  SSIOAccountItem.JSON_PROPERTY_IO_TERMS_ID,
  SSIOAccountItem.JSON_PROPERTY_IO_TERMS,
  SSIOAccountItem.JSON_PROPERTY_US_TERMS_ID,
  SSIOAccountItem.JSON_PROPERTY_US_TERMS,
  SSIOAccountItem.JSON_PROPERTY_ROW_TERMS_ID,
  SSIOAccountItem.JSON_PROPERTY_ROW_TERMS,
  SSIOAccountItem.JSON_PROPERTY_IO_TYPE,
  SSIOAccountItem.JSON_PROPERTY_ADDRESSES
})
@JsonTypeName("SSIOAccountItem")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class SSIOAccountItem {
    public static final String JSON_PROPERTY_ID = "id";
    private String id;

    public static final String JSON_PROPERTY_IO_TERMS_ID = "io_terms_id";
    private String ioTermsId;

    public static final String JSON_PROPERTY_IO_TERMS = "io_terms";
    private String ioTerms;

    public static final String JSON_PROPERTY_US_TERMS_ID = "us_terms_id";
    private String usTermsId;

    public static final String JSON_PROPERTY_US_TERMS = "us_terms";
    private String usTerms;

    public static final String JSON_PROPERTY_ROW_TERMS_ID = "row_terms_id";
    private String rowTermsId;

    public static final String JSON_PROPERTY_ROW_TERMS = "row_terms";
    private String rowTerms;

    public static final String JSON_PROPERTY_IO_TYPE = "io_type";
    private String ioType;

    public static final String JSON_PROPERTY_ADDRESSES = "addresses";
    private List<@Valid SSIOAccountAddress> addresses = null;

    public SSIOAccountItem() {
    }

    public SSIOAccountItem id(String id) {
        this.id = id;
        return this;
    }

    /**
     * Salesforce id for billto_info
     * @return id
     **/
    @Nullable
    @Schema(name = "id", example = "0011N00001LW8kAQAT", description = "Salesforce id for billto_info", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getId() {
        return id;
    }

    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setId(String id) {
        this.id = id;
    }

    public SSIOAccountItem ioTermsId(String ioTermsId) {
        this.ioTermsId = ioTermsId;
        return this;
    }

    /**
     * Salesforce id for IO Terms and Conditions
     * @return ioTermsId
     **/
    @Nullable
    @Schema(name = "io_terms_id", example = "a2S1N000000bKHgUAM", description = "Salesforce id for IO Terms and Conditions", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_IO_TERMS_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getIoTermsId() {
        return ioTermsId;
    }

    @JsonProperty(JSON_PROPERTY_IO_TERMS_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setIoTermsId(String ioTermsId) {
        this.ioTermsId = ioTermsId;
    }

    public SSIOAccountItem ioTerms(String ioTerms) {
        this.ioTerms = ioTerms;
        return this;
    }

    /**
     * Salesforce text for IO Terms and Conditions
     * @return ioTerms
     **/
    @Nullable
    @Schema(name = "io_terms", example = "The IO is governed by the terms available at https://business.pinterest.com/en/pinterest-advertising-services-agreement/. If a budget is listed on this IO, the parties agree that Advertiser (or if applicable, its Agency) may apply any of the budget to any auction bid type or ad product. Price will be determined by auction closing price, plus any applicable non-auction fees. The terms of the Agreement supersede any terms on this IO. ANY ADDITIONAL TERMS AND CONDITIONS ON THIS IO ARE NULL AND VOID.", description = "Salesforce text for IO Terms and Conditions", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_IO_TERMS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getIoTerms() {
        return ioTerms;
    }

    @JsonProperty(JSON_PROPERTY_IO_TERMS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setIoTerms(String ioTerms) {
        this.ioTerms = ioTerms;
    }

    public SSIOAccountItem usTermsId(String usTermsId) {
        this.usTermsId = usTermsId;
        return this;
    }

    /**
     * Salesforce id for US Terms and Conditions
     * @return usTermsId
     **/
    @Nullable
    @Schema(name = "us_terms_id", example = "a2S1N000000bKIOUA2", description = "Salesforce id for US Terms and Conditions", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_US_TERMS_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getUsTermsId() {
        return usTermsId;
    }

    @JsonProperty(JSON_PROPERTY_US_TERMS_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setUsTermsId(String usTermsId) {
        this.usTermsId = usTermsId;
    }

    public SSIOAccountItem usTerms(String usTerms) {
        this.usTerms = usTerms;
        return this;
    }

    /**
     * Salesforce text for US Terms and Conditions
     * @return usTerms
     **/
    @Nullable
    @Schema(name = "us_terms", example = "This Insertion Order (\"IO\") is subject to the Pinterest Addendum To IAB Standard Terms and Conditions for Internet Advertising For Media Buys One Year or Less (Version 3.0), as executed by Pinterest, Inc. and GroupM Worldwide LLC on May 7, 2014 and Amendment No. 1 to Pinterest Addendum to IAB Standard Terms and Conditions for Internet Advertising For Media Buys One Year or Less (Version 3.0) as executed by Pinterest, Inc. and GroupM Worldwide LLC on August 20, 2015. The parties agree that Agency may apply any of the budget listed on this IO to any auction bid type or ad product. Price will be determined by auction closing price, plus any applicable non-auction fees.The terms of the Addendum supersede any terms on this IO. ANY ADDITIONAL TERMS AND CONDITIONS ON THIS IO ARE NULL AND VOID.", description = "Salesforce text for US Terms and Conditions", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_US_TERMS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getUsTerms() {
        return usTerms;
    }

    @JsonProperty(JSON_PROPERTY_US_TERMS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setUsTerms(String usTerms) {
        this.usTerms = usTerms;
    }

    public SSIOAccountItem rowTermsId(String rowTermsId) {
        this.rowTermsId = rowTermsId;
        return this;
    }

    /**
     * Salesforce id for Rest of the World Terms and Conditions
     * @return rowTermsId
     **/
    @Nullable
    @Schema(name = "row_terms_id", example = "a2S1N000000bKHhUAM", description = "Salesforce id for Rest of the World Terms and Conditions", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_ROW_TERMS_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getRowTermsId() {
        return rowTermsId;
    }

    @JsonProperty(JSON_PROPERTY_ROW_TERMS_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setRowTermsId(String rowTermsId) {
        this.rowTermsId = rowTermsId;
    }

    public SSIOAccountItem rowTerms(String rowTerms) {
        this.rowTerms = rowTerms;
        return this;
    }

    /**
     * Salesforce text for Rest of the World Terms and Conditions
     * @return rowTerms
     **/
    @Nullable
    @Schema(name = "row_terms", example = "The IO is governed by the terms available at  https://business.pinterest.com/en-gb/pinterest-advertising-services-agreement", description = "Salesforce text for Rest of the World Terms and Conditions", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_ROW_TERMS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getRowTerms() {
        return rowTerms;
    }

    @JsonProperty(JSON_PROPERTY_ROW_TERMS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setRowTerms(String rowTerms) {
        this.rowTerms = rowTerms;
    }

    public SSIOAccountItem ioType(String ioType) {
        this.ioType = ioType;
        return this;
    }

    /**
     * Insertion Order Type - Pinterest Paper or Agency Paper
     * @return ioType
     **/
    @Nullable
    @Schema(name = "io_type", example = "Pinterest Paper", description = "Insertion Order Type - Pinterest Paper or Agency Paper", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_IO_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getIoType() {
        return ioType;
    }

    @JsonProperty(JSON_PROPERTY_IO_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setIoType(String ioType) {
        this.ioType = ioType;
    }

    public SSIOAccountItem addresses(List<@Valid SSIOAccountAddress> addresses) {
        this.addresses = addresses;
        return this;
    }

    public SSIOAccountItem addAddressesItem(SSIOAccountAddress addressesItem) {
        if (this.addresses == null) {
            this.addresses = new ArrayList<>();
        }
        this.addresses.add(addressesItem);
        return this;
    }

    /**
     * Address information that is associated with this account.
     * @return addresses
     **/
    @Nullable
    @Schema(name = "addresses", description = "Address information that is associated with this account.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_ADDRESSES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Valid SSIOAccountAddress> getAddresses() {
        return addresses;
    }

    @JsonProperty(JSON_PROPERTY_ADDRESSES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAddresses(List<@Valid SSIOAccountAddress> addresses) {
        this.addresses = addresses;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        SSIOAccountItem ssIOAccountItem = (SSIOAccountItem) o;
        return Objects.equals(this.id, ssIOAccountItem.id) &&
            Objects.equals(this.ioTermsId, ssIOAccountItem.ioTermsId) &&
            Objects.equals(this.ioTerms, ssIOAccountItem.ioTerms) &&
            Objects.equals(this.usTermsId, ssIOAccountItem.usTermsId) &&
            Objects.equals(this.usTerms, ssIOAccountItem.usTerms) &&
            Objects.equals(this.rowTermsId, ssIOAccountItem.rowTermsId) &&
            Objects.equals(this.rowTerms, ssIOAccountItem.rowTerms) &&
            Objects.equals(this.ioType, ssIOAccountItem.ioType) &&
            Objects.equals(this.addresses, ssIOAccountItem.addresses);
    }

    @Override
    public int hashCode() {
        return Objects.hash(id, ioTermsId, ioTerms, usTermsId, usTerms, rowTermsId, rowTerms, ioType, addresses);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class SSIOAccountItem {\n");
        sb.append("    id: ").append(toIndentedString(id)).append("\n");
        sb.append("    ioTermsId: ").append(toIndentedString(ioTermsId)).append("\n");
        sb.append("    ioTerms: ").append(toIndentedString(ioTerms)).append("\n");
        sb.append("    usTermsId: ").append(toIndentedString(usTermsId)).append("\n");
        sb.append("    usTerms: ").append(toIndentedString(usTerms)).append("\n");
        sb.append("    rowTermsId: ").append(toIndentedString(rowTermsId)).append("\n");
        sb.append("    rowTerms: ").append(toIndentedString(rowTerms)).append("\n");
        sb.append("    ioType: ").append(toIndentedString(ioType)).append("\n");
        sb.append("    addresses: ").append(toIndentedString(addresses)).append("\n");
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

