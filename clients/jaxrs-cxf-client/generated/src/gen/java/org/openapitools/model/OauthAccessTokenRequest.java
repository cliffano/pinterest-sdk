package org.openapitools.model;

import io.swagger.annotations.ApiModel;

import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
  * Describes the valid schema for possible OAuth access token requests.
 **/
@ApiModel(description="Describes the valid schema for possible OAuth access token requests.")
public class OauthAccessTokenRequest  {
  
public enum GrantTypeEnum {

AUTHORIZATION_CODE(String.valueOf("authorization_code")), REFRESH_TOKEN(String.valueOf("refresh_token"));


    private String value;

    GrantTypeEnum (String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static GrantTypeEnum fromValue(String value) {
        for (GrantTypeEnum b : GrantTypeEnum.values()) {
            if (b.value.equals(value)) {
                return b;
            }
        }
        throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
}

  @ApiModelProperty(required = true, value = "")
  private GrantTypeEnum grantType;
 /**
   * Get grantType
   * @return grantType
  **/
  @JsonProperty("grant_type")
  public String getGrantType() {
    if (grantType == null) {
      return null;
    }
    return grantType.value();
  }

  public void setGrantType(GrantTypeEnum grantType) {
    this.grantType = grantType;
  }

  public OauthAccessTokenRequest grantType(GrantTypeEnum grantType) {
    this.grantType = grantType;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OauthAccessTokenRequest {\n");
    
    sb.append("    grantType: ").append(toIndentedString(grantType)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

