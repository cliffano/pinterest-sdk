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

package org.openapitools.client.model;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Schema used for creating the integration metadata.
 **/
@ApiModel(description = "Schema used for creating the integration metadata.")
public class IntegrationRequest {
  
  @SerializedName("external_business_id")
  private String externalBusinessId = null;
  @SerializedName("connected_merchant_id")
  private String connectedMerchantId = null;
  @SerializedName("connected_advertiser_id")
  private String connectedAdvertiserId = null;
  @SerializedName("connected_lba_id")
  private String connectedLbaId = null;
  @SerializedName("connected_tag_id")
  private String connectedTagId = null;
  @SerializedName("partner_access_token")
  private String partnerAccessToken = null;
  @SerializedName("partner_refresh_token")
  private String partnerRefreshToken = null;
  @SerializedName("partner_primary_email")
  private String partnerPrimaryEmail = null;
  @SerializedName("partner_access_token_expiry")
  private Integer partnerAccessTokenExpiry = null;
  @SerializedName("partner_refresh_token_expiry")
  private Integer partnerRefreshTokenExpiry = null;
  @SerializedName("scopes")
  private String scopes = null;
  @SerializedName("additional_id_1")
  private String additionalId1 = null;
  @SerializedName("partner_metadata")
  private String partnerMetadata = null;

  /**
   * External business ID for the integration.
   **/
  @ApiModelProperty(value = "External business ID for the integration.")
  public String getExternalBusinessId() {
    return externalBusinessId;
  }
  public void setExternalBusinessId(String externalBusinessId) {
    this.externalBusinessId = externalBusinessId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getConnectedMerchantId() {
    return connectedMerchantId;
  }
  public void setConnectedMerchantId(String connectedMerchantId) {
    this.connectedMerchantId = connectedMerchantId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getConnectedAdvertiserId() {
    return connectedAdvertiserId;
  }
  public void setConnectedAdvertiserId(String connectedAdvertiserId) {
    this.connectedAdvertiserId = connectedAdvertiserId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getConnectedLbaId() {
    return connectedLbaId;
  }
  public void setConnectedLbaId(String connectedLbaId) {
    this.connectedLbaId = connectedLbaId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getConnectedTagId() {
    return connectedTagId;
  }
  public void setConnectedTagId(String connectedTagId) {
    this.connectedTagId = connectedTagId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getPartnerAccessToken() {
    return partnerAccessToken;
  }
  public void setPartnerAccessToken(String partnerAccessToken) {
    this.partnerAccessToken = partnerAccessToken;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getPartnerRefreshToken() {
    return partnerRefreshToken;
  }
  public void setPartnerRefreshToken(String partnerRefreshToken) {
    this.partnerRefreshToken = partnerRefreshToken;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getPartnerPrimaryEmail() {
    return partnerPrimaryEmail;
  }
  public void setPartnerPrimaryEmail(String partnerPrimaryEmail) {
    this.partnerPrimaryEmail = partnerPrimaryEmail;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getPartnerAccessTokenExpiry() {
    return partnerAccessTokenExpiry;
  }
  public void setPartnerAccessTokenExpiry(Integer partnerAccessTokenExpiry) {
    this.partnerAccessTokenExpiry = partnerAccessTokenExpiry;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getPartnerRefreshTokenExpiry() {
    return partnerRefreshTokenExpiry;
  }
  public void setPartnerRefreshTokenExpiry(Integer partnerRefreshTokenExpiry) {
    this.partnerRefreshTokenExpiry = partnerRefreshTokenExpiry;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getScopes() {
    return scopes;
  }
  public void setScopes(String scopes) {
    this.scopes = scopes;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getAdditionalId1() {
    return additionalId1;
  }
  public void setAdditionalId1(String additionalId1) {
    this.additionalId1 = additionalId1;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getPartnerMetadata() {
    return partnerMetadata;
  }
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
    IntegrationRequest integrationRequest = (IntegrationRequest) o;
    return (this.externalBusinessId == null ? integrationRequest.externalBusinessId == null : this.externalBusinessId.equals(integrationRequest.externalBusinessId)) &&
        (this.connectedMerchantId == null ? integrationRequest.connectedMerchantId == null : this.connectedMerchantId.equals(integrationRequest.connectedMerchantId)) &&
        (this.connectedAdvertiserId == null ? integrationRequest.connectedAdvertiserId == null : this.connectedAdvertiserId.equals(integrationRequest.connectedAdvertiserId)) &&
        (this.connectedLbaId == null ? integrationRequest.connectedLbaId == null : this.connectedLbaId.equals(integrationRequest.connectedLbaId)) &&
        (this.connectedTagId == null ? integrationRequest.connectedTagId == null : this.connectedTagId.equals(integrationRequest.connectedTagId)) &&
        (this.partnerAccessToken == null ? integrationRequest.partnerAccessToken == null : this.partnerAccessToken.equals(integrationRequest.partnerAccessToken)) &&
        (this.partnerRefreshToken == null ? integrationRequest.partnerRefreshToken == null : this.partnerRefreshToken.equals(integrationRequest.partnerRefreshToken)) &&
        (this.partnerPrimaryEmail == null ? integrationRequest.partnerPrimaryEmail == null : this.partnerPrimaryEmail.equals(integrationRequest.partnerPrimaryEmail)) &&
        (this.partnerAccessTokenExpiry == null ? integrationRequest.partnerAccessTokenExpiry == null : this.partnerAccessTokenExpiry.equals(integrationRequest.partnerAccessTokenExpiry)) &&
        (this.partnerRefreshTokenExpiry == null ? integrationRequest.partnerRefreshTokenExpiry == null : this.partnerRefreshTokenExpiry.equals(integrationRequest.partnerRefreshTokenExpiry)) &&
        (this.scopes == null ? integrationRequest.scopes == null : this.scopes.equals(integrationRequest.scopes)) &&
        (this.additionalId1 == null ? integrationRequest.additionalId1 == null : this.additionalId1.equals(integrationRequest.additionalId1)) &&
        (this.partnerMetadata == null ? integrationRequest.partnerMetadata == null : this.partnerMetadata.equals(integrationRequest.partnerMetadata));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.externalBusinessId == null ? 0: this.externalBusinessId.hashCode());
    result = 31 * result + (this.connectedMerchantId == null ? 0: this.connectedMerchantId.hashCode());
    result = 31 * result + (this.connectedAdvertiserId == null ? 0: this.connectedAdvertiserId.hashCode());
    result = 31 * result + (this.connectedLbaId == null ? 0: this.connectedLbaId.hashCode());
    result = 31 * result + (this.connectedTagId == null ? 0: this.connectedTagId.hashCode());
    result = 31 * result + (this.partnerAccessToken == null ? 0: this.partnerAccessToken.hashCode());
    result = 31 * result + (this.partnerRefreshToken == null ? 0: this.partnerRefreshToken.hashCode());
    result = 31 * result + (this.partnerPrimaryEmail == null ? 0: this.partnerPrimaryEmail.hashCode());
    result = 31 * result + (this.partnerAccessTokenExpiry == null ? 0: this.partnerAccessTokenExpiry.hashCode());
    result = 31 * result + (this.partnerRefreshTokenExpiry == null ? 0: this.partnerRefreshTokenExpiry.hashCode());
    result = 31 * result + (this.scopes == null ? 0: this.scopes.hashCode());
    result = 31 * result + (this.additionalId1 == null ? 0: this.additionalId1.hashCode());
    result = 31 * result + (this.partnerMetadata == null ? 0: this.partnerMetadata.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class IntegrationRequest {\n");
    
    sb.append("  externalBusinessId: ").append(externalBusinessId).append("\n");
    sb.append("  connectedMerchantId: ").append(connectedMerchantId).append("\n");
    sb.append("  connectedAdvertiserId: ").append(connectedAdvertiserId).append("\n");
    sb.append("  connectedLbaId: ").append(connectedLbaId).append("\n");
    sb.append("  connectedTagId: ").append(connectedTagId).append("\n");
    sb.append("  partnerAccessToken: ").append(partnerAccessToken).append("\n");
    sb.append("  partnerRefreshToken: ").append(partnerRefreshToken).append("\n");
    sb.append("  partnerPrimaryEmail: ").append(partnerPrimaryEmail).append("\n");
    sb.append("  partnerAccessTokenExpiry: ").append(partnerAccessTokenExpiry).append("\n");
    sb.append("  partnerRefreshTokenExpiry: ").append(partnerRefreshTokenExpiry).append("\n");
    sb.append("  scopes: ").append(scopes).append("\n");
    sb.append("  additionalId1: ").append(additionalId1).append("\n");
    sb.append("  partnerMetadata: ").append(partnerMetadata).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
