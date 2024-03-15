package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;



/**
 * This field is **OPTIONAL**. Use this if your feed file requires username and password.
 **/

@ApiModel(description = "This field is **OPTIONAL**. Use this if your feed file requires username and password.")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2024-03-14T23:01:39.171456580Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsFeedCredentials   {
  @JsonProperty("password")
  private String password;

  @JsonProperty("username")
  private String username;

  /**
   * The required password for downloading a feed.
   **/
  public CatalogsFeedCredentials password(String password) {
    this.password = password;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "The required password for downloading a feed.")
  @JsonProperty("password")
  public String getPassword() {
    return password;
  }
  public void setPassword(String password) {
    this.password = password;
  }

  /**
   * The required username for downloading a feed.
   **/
  public CatalogsFeedCredentials username(String username) {
    this.username = username;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "The required username for downloading a feed.")
  @JsonProperty("username")
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
    return Objects.equals(password, catalogsFeedCredentials.password) &&
        Objects.equals(username, catalogsFeedCredentials.username);
  }

  @Override
  public int hashCode() {
    return Objects.hash(password, username);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeedCredentials {\n");
    
    sb.append("    password: ").append("*").append("\n");
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

