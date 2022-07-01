/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.model;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class Account {
  
  public enum AccountTypeEnum {
     PINNER,  BUSINESS, 
  };
  @SerializedName("account_type")
  private AccountTypeEnum accountType = null;
  @SerializedName("profile_image")
  private String profileImage = null;
  @SerializedName("website_url")
  private String websiteUrl = null;
  @SerializedName("username")
  private String username = null;

  /**
   * Type of account
   **/
  @ApiModelProperty(value = "Type of account")
  public AccountTypeEnum getAccountType() {
    return accountType;
  }
  public void setAccountType(AccountTypeEnum accountType) {
    this.accountType = accountType;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getProfileImage() {
    return profileImage;
  }
  public void setProfileImage(String profileImage) {
    this.profileImage = profileImage;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getWebsiteUrl() {
    return websiteUrl;
  }
  public void setWebsiteUrl(String websiteUrl) {
    this.websiteUrl = websiteUrl;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getUsername() {
    return username;
  }
  public void setUsername(String username) {
    this.username = username;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Account account = (Account) o;
    return (this.accountType == null ? account.accountType == null : this.accountType.equals(account.accountType)) &&
        (this.profileImage == null ? account.profileImage == null : this.profileImage.equals(account.profileImage)) &&
        (this.websiteUrl == null ? account.websiteUrl == null : this.websiteUrl.equals(account.websiteUrl)) &&
        (this.username == null ? account.username == null : this.username.equals(account.username));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.accountType == null ? 0: this.accountType.hashCode());
    result = 31 * result + (this.profileImage == null ? 0: this.profileImage.hashCode());
    result = 31 * result + (this.websiteUrl == null ? 0: this.websiteUrl.hashCode());
    result = 31 * result + (this.username == null ? 0: this.username.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Account {\n");
    
    sb.append("  accountType: ").append(accountType).append("\n");
    sb.append("  profileImage: ").append(profileImage).append("\n");
    sb.append("  websiteUrl: ").append(websiteUrl).append("\n");
    sb.append("  username: ").append(username).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
