package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.Keyword;
import org.openapitools.model.KeywordError;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class KeywordsResponse  {
  
  @ApiModelProperty(value = "")
  private List<KeywordError> errors;

  @ApiModelProperty(value = "")
  private List<Keyword> keywords;
 /**
   * Get errors
   * @return errors
  **/
  @JsonProperty("errors")
  public List<KeywordError> getErrors() {
    return errors;
  }

  public void setErrors(List<KeywordError> errors) {
    this.errors = errors;
  }

  public KeywordsResponse errors(List<KeywordError> errors) {
    this.errors = errors;
    return this;
  }

  public KeywordsResponse addErrorsItem(KeywordError errorsItem) {
    this.errors.add(errorsItem);
    return this;
  }

 /**
   * Get keywords
   * @return keywords
  **/
  @JsonProperty("keywords")
  public List<Keyword> getKeywords() {
    return keywords;
  }

  public void setKeywords(List<Keyword> keywords) {
    this.keywords = keywords;
  }

  public KeywordsResponse keywords(List<Keyword> keywords) {
    this.keywords = keywords;
    return this;
  }

  public KeywordsResponse addKeywordsItem(Keyword keywordsItem) {
    this.keywords.add(keywordsItem);
    return this;
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
    return Objects.equals(this.errors, keywordsResponse.errors) &&
        Objects.equals(this.keywords, keywordsResponse.keywords);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

