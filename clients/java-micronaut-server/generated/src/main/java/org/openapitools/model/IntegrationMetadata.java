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
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * Integration metadata
 */
@Schema(name = "IntegrationMetadata", description = "Integration metadata")
@JsonPropertyOrder({
  IntegrationMetadata.JSON_PROPERTY_ID,
  IntegrationMetadata.JSON_PROPERTY_EXTERNAL_BUSINESS_ID,
  IntegrationMetadata.JSON_PROPERTY_CONNECTED_MERCHANT_ID,
  IntegrationMetadata.JSON_PROPERTY_CONNECTED_USER_ID,
  IntegrationMetadata.JSON_PROPERTY_CONNECTED_ADVERTISER_ID,
  IntegrationMetadata.JSON_PROPERTY_CONNECTED_LBA_ID,
  IntegrationMetadata.JSON_PROPERTY_CONNECTED_TAG_ID,
  IntegrationMetadata.JSON_PROPERTY_PARTNER_ACCESS_TOKEN_EXPIRY,
  IntegrationMetadata.JSON_PROPERTY_PARTNER_REFRESH_TOKEN_EXPIRY,
  IntegrationMetadata.JSON_PROPERTY_SCOPES,
  IntegrationMetadata.JSON_PROPERTY_CREATED_TIMESTAMP,
  IntegrationMetadata.JSON_PROPERTY_UPDATED_TIMESTAMP,
  IntegrationMetadata.JSON_PROPERTY_ADDITIONAL_ID1,
  IntegrationMetadata.JSON_PROPERTY_PARTNER_METADATA
})
@JsonTypeName("IntegrationMetadata")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class IntegrationMetadata {
    public static final String JSON_PROPERTY_ID = "id";
    private String id;

    public static final String JSON_PROPERTY_EXTERNAL_BUSINESS_ID = "external_business_id";
    private String externalBusinessId;

    public static final String JSON_PROPERTY_CONNECTED_MERCHANT_ID = "connected_merchant_id";
    private String connectedMerchantId;

    public static final String JSON_PROPERTY_CONNECTED_USER_ID = "connected_user_id";
    private String connectedUserId;

    public static final String JSON_PROPERTY_CONNECTED_ADVERTISER_ID = "connected_advertiser_id";
    private String connectedAdvertiserId;

    public static final String JSON_PROPERTY_CONNECTED_LBA_ID = "connected_lba_id";
    private String connectedLbaId;

    public static final String JSON_PROPERTY_CONNECTED_TAG_ID = "connected_tag_id";
    private String connectedTagId;

    public static final String JSON_PROPERTY_PARTNER_ACCESS_TOKEN_EXPIRY = "partner_access_token_expiry";
    private BigDecimal partnerAccessTokenExpiry;

    public static final String JSON_PROPERTY_PARTNER_REFRESH_TOKEN_EXPIRY = "partner_refresh_token_expiry";
    private BigDecimal partnerRefreshTokenExpiry;

    public static final String JSON_PROPERTY_SCOPES = "scopes";
    private String scopes;

    public static final String JSON_PROPERTY_CREATED_TIMESTAMP = "created_timestamp";
    private BigDecimal createdTimestamp;

    public static final String JSON_PROPERTY_UPDATED_TIMESTAMP = "updated_timestamp";
    private BigDecimal updatedTimestamp;

    public static final String JSON_PROPERTY_ADDITIONAL_ID1 = "additional_id_1";
    private String additionalId1;

    public static final String JSON_PROPERTY_PARTNER_METADATA = "partner_metadata";
    private String partnerMetadata;

    public IntegrationMetadata() {
    }

    public IntegrationMetadata id(String id) {
        this.id = id;
        return this;
    }

    /**
     * Get id
     * @return id
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @Schema(name = "id", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public IntegrationMetadata externalBusinessId(String externalBusinessId) {
        this.externalBusinessId = externalBusinessId;
        return this;
    }

    /**
     * Get externalBusinessId
     * @return externalBusinessId
     **/
    @Nullable
    @Schema(name = "external_business_id", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_EXTERNAL_BUSINESS_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getExternalBusinessId() {
        return externalBusinessId;
    }

    @JsonProperty(JSON_PROPERTY_EXTERNAL_BUSINESS_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setExternalBusinessId(String externalBusinessId) {
        this.externalBusinessId = externalBusinessId;
    }

    public IntegrationMetadata connectedMerchantId(String connectedMerchantId) {
        this.connectedMerchantId = connectedMerchantId;
        return this;
    }

    /**
     * Get connectedMerchantId
     * @return connectedMerchantId
     **/
    @Nullable
    @Schema(name = "connected_merchant_id", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CONNECTED_MERCHANT_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getConnectedMerchantId() {
        return connectedMerchantId;
    }

    @JsonProperty(JSON_PROPERTY_CONNECTED_MERCHANT_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setConnectedMerchantId(String connectedMerchantId) {
        this.connectedMerchantId = connectedMerchantId;
    }

    /**
     * Get connectedUserId
     * @return connectedUserId
     **/
    @Nullable
    @Schema(name = "connected_user_id", accessMode = Schema.AccessMode.READ_ONLY, requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CONNECTED_USER_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getConnectedUserId() {
        return connectedUserId;
    }

    /**
     * Get connectedAdvertiserId
     * @return connectedAdvertiserId
     **/
    @Nullable
    @Schema(name = "connected_advertiser_id", accessMode = Schema.AccessMode.READ_ONLY, requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CONNECTED_ADVERTISER_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getConnectedAdvertiserId() {
        return connectedAdvertiserId;
    }

    public IntegrationMetadata connectedLbaId(String connectedLbaId) {
        this.connectedLbaId = connectedLbaId;
        return this;
    }

    /**
     * Get connectedLbaId
     * @return connectedLbaId
     **/
    @Nullable
    @Schema(name = "connected_lba_id", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CONNECTED_LBA_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getConnectedLbaId() {
        return connectedLbaId;
    }

    @JsonProperty(JSON_PROPERTY_CONNECTED_LBA_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setConnectedLbaId(String connectedLbaId) {
        this.connectedLbaId = connectedLbaId;
    }

    public IntegrationMetadata connectedTagId(String connectedTagId) {
        this.connectedTagId = connectedTagId;
        return this;
    }

    /**
     * Get connectedTagId
     * @return connectedTagId
     **/
    @Nullable
    @Schema(name = "connected_tag_id", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CONNECTED_TAG_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getConnectedTagId() {
        return connectedTagId;
    }

    @JsonProperty(JSON_PROPERTY_CONNECTED_TAG_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setConnectedTagId(String connectedTagId) {
        this.connectedTagId = connectedTagId;
    }

    public IntegrationMetadata partnerAccessTokenExpiry(BigDecimal partnerAccessTokenExpiry) {
        this.partnerAccessTokenExpiry = partnerAccessTokenExpiry;
        return this;
    }

    /**
     * Get partnerAccessTokenExpiry
     * @return partnerAccessTokenExpiry
     **/
    @Nullable
    @Schema(name = "partner_access_token_expiry", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_PARTNER_ACCESS_TOKEN_EXPIRY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getPartnerAccessTokenExpiry() {
        return partnerAccessTokenExpiry;
    }

    @JsonProperty(JSON_PROPERTY_PARTNER_ACCESS_TOKEN_EXPIRY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setPartnerAccessTokenExpiry(BigDecimal partnerAccessTokenExpiry) {
        this.partnerAccessTokenExpiry = partnerAccessTokenExpiry;
    }

    public IntegrationMetadata partnerRefreshTokenExpiry(BigDecimal partnerRefreshTokenExpiry) {
        this.partnerRefreshTokenExpiry = partnerRefreshTokenExpiry;
        return this;
    }

    /**
     * Get partnerRefreshTokenExpiry
     * @return partnerRefreshTokenExpiry
     **/
    @Nullable
    @Schema(name = "partner_refresh_token_expiry", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_PARTNER_REFRESH_TOKEN_EXPIRY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getPartnerRefreshTokenExpiry() {
        return partnerRefreshTokenExpiry;
    }

    @JsonProperty(JSON_PROPERTY_PARTNER_REFRESH_TOKEN_EXPIRY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setPartnerRefreshTokenExpiry(BigDecimal partnerRefreshTokenExpiry) {
        this.partnerRefreshTokenExpiry = partnerRefreshTokenExpiry;
    }

    public IntegrationMetadata scopes(String scopes) {
        this.scopes = scopes;
        return this;
    }

    /**
     * Get scopes
     * @return scopes
     **/
    @Nullable
    @Schema(name = "scopes", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_SCOPES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getScopes() {
        return scopes;
    }

    @JsonProperty(JSON_PROPERTY_SCOPES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setScopes(String scopes) {
        this.scopes = scopes;
    }

    public IntegrationMetadata createdTimestamp(BigDecimal createdTimestamp) {
        this.createdTimestamp = createdTimestamp;
        return this;
    }

    /**
     * Get createdTimestamp
     * @return createdTimestamp
     **/
    @Nullable
    @Schema(name = "created_timestamp", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CREATED_TIMESTAMP)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getCreatedTimestamp() {
        return createdTimestamp;
    }

    @JsonProperty(JSON_PROPERTY_CREATED_TIMESTAMP)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCreatedTimestamp(BigDecimal createdTimestamp) {
        this.createdTimestamp = createdTimestamp;
    }

    public IntegrationMetadata updatedTimestamp(BigDecimal updatedTimestamp) {
        this.updatedTimestamp = updatedTimestamp;
        return this;
    }

    /**
     * Get updatedTimestamp
     * @return updatedTimestamp
     **/
    @Nullable
    @Schema(name = "updated_timestamp", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_UPDATED_TIMESTAMP)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getUpdatedTimestamp() {
        return updatedTimestamp;
    }

    @JsonProperty(JSON_PROPERTY_UPDATED_TIMESTAMP)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setUpdatedTimestamp(BigDecimal updatedTimestamp) {
        this.updatedTimestamp = updatedTimestamp;
    }

    public IntegrationMetadata additionalId1(String additionalId1) {
        this.additionalId1 = additionalId1;
        return this;
    }

    /**
     * Get additionalId1
     * @return additionalId1
     **/
    @Nullable
    @Schema(name = "additional_id_1", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_ADDITIONAL_ID1)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getAdditionalId1() {
        return additionalId1;
    }

    @JsonProperty(JSON_PROPERTY_ADDITIONAL_ID1)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAdditionalId1(String additionalId1) {
        this.additionalId1 = additionalId1;
    }

    public IntegrationMetadata partnerMetadata(String partnerMetadata) {
        this.partnerMetadata = partnerMetadata;
        return this;
    }

    /**
     * Get partnerMetadata
     * @return partnerMetadata
     **/
    @Nullable
    @Schema(name = "partner_metadata", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_PARTNER_METADATA)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getPartnerMetadata() {
        return partnerMetadata;
    }

    @JsonProperty(JSON_PROPERTY_PARTNER_METADATA)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setPartnerMetadata(String partnerMetadata) {
        this.partnerMetadata = partnerMetadata;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        IntegrationMetadata integrationMetadata = (IntegrationMetadata) o;
        return Objects.equals(this.id, integrationMetadata.id) &&
            Objects.equals(this.externalBusinessId, integrationMetadata.externalBusinessId) &&
            Objects.equals(this.connectedMerchantId, integrationMetadata.connectedMerchantId) &&
            Objects.equals(this.connectedUserId, integrationMetadata.connectedUserId) &&
            Objects.equals(this.connectedAdvertiserId, integrationMetadata.connectedAdvertiserId) &&
            Objects.equals(this.connectedLbaId, integrationMetadata.connectedLbaId) &&
            Objects.equals(this.connectedTagId, integrationMetadata.connectedTagId) &&
            Objects.equals(this.partnerAccessTokenExpiry, integrationMetadata.partnerAccessTokenExpiry) &&
            Objects.equals(this.partnerRefreshTokenExpiry, integrationMetadata.partnerRefreshTokenExpiry) &&
            Objects.equals(this.scopes, integrationMetadata.scopes) &&
            Objects.equals(this.createdTimestamp, integrationMetadata.createdTimestamp) &&
            Objects.equals(this.updatedTimestamp, integrationMetadata.updatedTimestamp) &&
            Objects.equals(this.additionalId1, integrationMetadata.additionalId1) &&
            Objects.equals(this.partnerMetadata, integrationMetadata.partnerMetadata);
    }

    @Override
    public int hashCode() {
        return Objects.hash(id, externalBusinessId, connectedMerchantId, connectedUserId, connectedAdvertiserId, connectedLbaId, connectedTagId, partnerAccessTokenExpiry, partnerRefreshTokenExpiry, scopes, createdTimestamp, updatedTimestamp, additionalId1, partnerMetadata);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class IntegrationMetadata {\n");
        sb.append("    id: ").append(toIndentedString(id)).append("\n");
        sb.append("    externalBusinessId: ").append(toIndentedString(externalBusinessId)).append("\n");
        sb.append("    connectedMerchantId: ").append(toIndentedString(connectedMerchantId)).append("\n");
        sb.append("    connectedUserId: ").append(toIndentedString(connectedUserId)).append("\n");
        sb.append("    connectedAdvertiserId: ").append(toIndentedString(connectedAdvertiserId)).append("\n");
        sb.append("    connectedLbaId: ").append(toIndentedString(connectedLbaId)).append("\n");
        sb.append("    connectedTagId: ").append(toIndentedString(connectedTagId)).append("\n");
        sb.append("    partnerAccessTokenExpiry: ").append(toIndentedString(partnerAccessTokenExpiry)).append("\n");
        sb.append("    partnerRefreshTokenExpiry: ").append(toIndentedString(partnerRefreshTokenExpiry)).append("\n");
        sb.append("    scopes: ").append(toIndentedString(scopes)).append("\n");
        sb.append("    createdTimestamp: ").append(toIndentedString(createdTimestamp)).append("\n");
        sb.append("    updatedTimestamp: ").append(toIndentedString(updatedTimestamp)).append("\n");
        sb.append("    additionalId1: ").append(toIndentedString(additionalId1)).append("\n");
        sb.append("    partnerMetadata: ").append(toIndentedString(partnerMetadata)).append("\n");
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

