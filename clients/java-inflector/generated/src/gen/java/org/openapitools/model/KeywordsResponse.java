package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.Keyword;
import org.openapitools.model.KeywordError;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2024-03-14T23:01:39.171456580Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class KeywordsResponse   {
  @JsonProperty("errors")
  private List<KeywordError> errors = null;

  @JsonProperty("keywords")
  private List<Keyword> keywords = null;

  /**
   **/
  public KeywordsResponse errors(List<KeywordError> errors) {
    this.errors = errors;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("errors")
  public List<KeywordError> getErrors() {
    return errors;
  }
  public void setErrors(List<KeywordError> errors) {
    this.errors = errors;
  }

  /**
   **/
  public KeywordsResponse keywords(List<Keyword> keywords) {
    this.keywords = keywords;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("keywords")
  public List<Keyword> getKeywords() {
    return keywords;
  }
  public void setKeywords(List<Keyword> keywords) {
    this.keywords = keywords;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    KeywordsResponse keywordsResponse = (KeywordsResponse) o;
    return Objects.equals(errors, keywordsResponse.errors) &&
        Objects.equals(keywords, keywordsResponse.keywords);
  }

  @Override
  public int hashCode() {
    return Objects.hash(errors, keywords);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class KeywordsResponse {\n");
    
    sb.append("    errors: ").append(toIndentedString(errors)).append("\n");
    sb.append("    keywords: ").append(toIndentedString(keywords)).append("\n");
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

