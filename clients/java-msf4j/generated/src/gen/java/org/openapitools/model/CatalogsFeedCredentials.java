package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;

/**
 * Use this if your feed file requires username and password.
 */
@ApiModel(description = "Use this if your feed file requires username and password.")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2022-07-01T11:59:44.239108Z[Etc/UTC]")
public class CatalogsFeedCredentials   {
  @JsonProperty("password")
  private String password;

  @JsonProperty("username")
  private String username;

  public CatalogsFeedCredentials password(String password) {
    this.password = password;
    return this;
  }

   /**
   * The required password for downloading a feed.
   * @return password
  **/
  @ApiModelProperty(required = true, value = "The required password for downloading a feed.")
  public String getPassword() {
    return password;
  }

  public void setPassword(String password) {
    this.password = password;
  }

  public CatalogsFeedCredentials username(String username) {
    this.username = username;
    return this;
  }

   /**
   * The required username for downloading a feed.
   * @return username
  **/
  @ApiModelProperty(required = true, value = "The required username for downloading a feed.")
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
    CatalogsFeedCredentials catalogsFeedCredentials = (CatalogsFeedCredentials) o;
    return Objects.equals(this.password, catalogsFeedCredentials.password) &&
        Objects.equals(this.username, catalogsFeedCredentials.username);
  }

  @Override
  public int hashCode() {
    return Objects.hash(password, username);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeedCredentials {\n");
    
    sb.append("    password: ").append(toIndentedString(password)).append("\n");
    sb.append("    username: ").append(toIndentedString(username)).append("\n");
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

