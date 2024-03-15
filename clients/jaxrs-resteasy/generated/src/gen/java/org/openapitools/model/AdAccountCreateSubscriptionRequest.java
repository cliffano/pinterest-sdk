package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import javax.validation.constraints.*;
import javax.validation.Valid;
import io.swagger.annotations.*;
import javax.validation.Valid;

@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyServerCodegen", date = "2024-03-14T23:04:42.546429009Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AdAccountCreateSubscriptionRequest   {
  
  private String webhookUrl;
  private String leadFormId;
  private String partnerAccessToken;
  private String partnerRefreshToken;

  /**
   * Standard HTTPS webhook URL.
   **/
  
  @ApiModelProperty(example = "https://webhook.example.com/xyz", required = true, value = "Standard HTTPS webhook URL.")
  @JsonProperty("webhook_url")
  @NotNull
  public String getWebhookUrl() {
    return webhookUrl;
  }
  public void setWebhookUrl(String webhookUrl) {
    this.webhookUrl = webhookUrl;
  }

  /**
   * Lead form ID.
   **/
  
  @ApiModelProperty(example = "383791336903426390", value = "Lead form ID.")
  @JsonProperty("lead_form_id")
 @Pattern(regexp="^\\d+$")  public String getLeadFormId() {
    return leadFormId;
  }
  public void setLeadFormId(String leadFormId) {
    this.leadFormId = leadFormId;
  }

  /**
   * Partner access token. Only for clients that requires authentication. We recommend to avoid this param.
   **/
  
  @ApiModelProperty(value = "Partner access token. Only for clients that requires authentication. We recommend to avoid this param.")
  @JsonProperty("partner_access_token")
  public String getPartnerAccessToken() {
    return partnerAccessToken;
  }
  public void setPartnerAccessToken(String partnerAccessToken) {
    this.partnerAccessToken = partnerAccessToken;
  }

  /**
   * Partner refresh token. Only for clients that requires authentication. We recommend to avoid this param.
   **/
  
  @ApiModelProperty(value = "Partner refresh token. Only for clients that requires authentication. We recommend to avoid this param.")
  @JsonProperty("partner_refresh_token")
  public String getPartnerRefreshToken() {
    return partnerRefreshToken;
  }
  public void setPartnerRefreshToken(String partnerRefreshToken) {
    this.partnerRefreshToken = partnerRefreshToken;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdAccountCreateSubscriptionRequest adAccountCreateSubscriptionRequest = (AdAccountCreateSubscriptionRequest) o;
    return Objects.equals(this.webhookUrl, adAccountCreateSubscriptionRequest.webhookUrl) &&
        Objects.equals(this.leadFormId, adAccountCreateSubscriptionRequest.leadFormId) &&
        Objects.equals(this.partnerAccessToken, adAccountCreateSubscriptionRequest.partnerAccessToken) &&
        Objects.equals(this.partnerRefreshToken, adAccountCreateSubscriptionRequest.partnerRefreshToken);
  }

  @Override
  public int hashCode() {
    return Objects.hash(webhookUrl, leadFormId, partnerAccessToken, partnerRefreshToken);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdAccountCreateSubscriptionRequest {\n");
    
    sb.append("    webhookUrl: ").append(toIndentedString(webhookUrl)).append("\n");
    sb.append("    leadFormId: ").append(toIndentedString(leadFormId)).append("\n");
    sb.append("    partnerAccessToken: ").append(toIndentedString(partnerAccessToken)).append("\n");
    sb.append("    partnerRefreshToken: ").append(toIndentedString(partnerRefreshToken)).append("\n");
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

