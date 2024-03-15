package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.KeywordUpdate;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class KeywordUpdateBody  {
  
  @ApiModelProperty(required = true, value = "Keywords to update. Object array. Each object has 3 possible fields:<br>1. \"id\": (required) keyword ID<br>2. \"archived\": boolean. Should keyword be archived?<br>3. \"bid\": number<br>For example: [{\"id\":\"2886610576653\", \"archived\": false, \"bid\": 20000}, {\"id\":\"2886610576654\",  \"archived\": true, \"bid\": 20000}, ...]")
 /**
   * Keywords to update. Object array. Each object has 3 possible fields:<br>1. \"id\": (required) keyword ID<br>2. \"archived\": boolean. Should keyword be archived?<br>3. \"bid\": number<br>For example: [{\"id\":\"2886610576653\", \"archived\": false, \"bid\": 20000}, {\"id\":\"2886610576654\",  \"archived\": true, \"bid\": 20000}, ...]
  **/
  private List<KeywordUpdate> keywords = new ArrayList<>();
 /**
   * Keywords to update. Object array. Each object has 3 possible fields:&lt;br&gt;1. \&quot;id\&quot;: (required) keyword ID&lt;br&gt;2. \&quot;archived\&quot;: boolean. Should keyword be archived?&lt;br&gt;3. \&quot;bid\&quot;: number&lt;br&gt;For example: [{\&quot;id\&quot;:\&quot;2886610576653\&quot;, \&quot;archived\&quot;: false, \&quot;bid\&quot;: 20000}, {\&quot;id\&quot;:\&quot;2886610576654\&quot;,  \&quot;archived\&quot;: true, \&quot;bid\&quot;: 20000}, ...]
   * @return keywords
  **/
  @JsonProperty("keywords")
  public List<KeywordUpdate> getKeywords() {
    return keywords;
  }

  public void setKeywords(List<KeywordUpdate> keywords) {
    this.keywords = keywords;
  }

  public KeywordUpdateBody keywords(List<KeywordUpdate> keywords) {
    this.keywords = keywords;
    return this;
  }

  public KeywordUpdateBody addKeywordsItem(KeywordUpdate keywordsItem) {
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
    KeywordUpdateBody keywordUpdateBody = (KeywordUpdateBody) o;
    return Objects.equals(this.keywords, keywordUpdateBody.keywords);
  }

  @Override
  public int hashCode() {
    return Objects.hash(keywords);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class KeywordUpdateBody {\n");
    
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

