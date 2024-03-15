package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.RelatedTermsRelatedTermsListInner;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;



public class RelatedTerms   {
  
  private String id;

  private Integer relatedTermCount;

  private List<@Valid RelatedTermsRelatedTermsListInner> relatedTermsList;

  /**
   * First input term. For example, if you pass \&quot;?terms&#x3D;clothes,workout\&quot;, then id will be \&quot;clothes\&quot;
   **/
  public RelatedTerms id(String id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(example = "clothes", value = "First input term. For example, if you pass \"?terms=clothes,workout\", then id will be \"clothes\"")
  @JsonProperty("id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }


  /**
   * Total number of related terms returned
   **/
  public RelatedTerms relatedTermCount(Integer relatedTermCount) {
    this.relatedTermCount = relatedTermCount;
    return this;
  }

  
  @ApiModelProperty(example = "2", value = "Total number of related terms returned")
  @JsonProperty("related_term_count")
  public Integer getRelatedTermCount() {
    return relatedTermCount;
  }
  public void setRelatedTermCount(Integer relatedTermCount) {
    this.relatedTermCount = relatedTermCount;
  }


  /**
   * The id of the advertiser.
   **/
  public RelatedTerms relatedTermsList(List<@Valid RelatedTermsRelatedTermsListInner> relatedTermsList) {
    this.relatedTermsList = relatedTermsList;
    return this;
  }

  
  @ApiModelProperty(value = "The id of the advertiser.")
  @JsonProperty("related_terms_list")
  public List<@Valid RelatedTermsRelatedTermsListInner> getRelatedTermsList() {
    return relatedTermsList;
  }
  public void setRelatedTermsList(List<@Valid RelatedTermsRelatedTermsListInner> relatedTermsList) {
    this.relatedTermsList = relatedTermsList;
  }

  public RelatedTerms addRelatedTermsListItem(RelatedTermsRelatedTermsListInner relatedTermsListItem) {
    if (this.relatedTermsList == null) {
      this.relatedTermsList = new ArrayList<>();
    }
    this.relatedTermsList.add(relatedTermsListItem);
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
    RelatedTerms relatedTerms = (RelatedTerms) o;
    return Objects.equals(this.id, relatedTerms.id) &&
        Objects.equals(this.relatedTermCount, relatedTerms.relatedTermCount) &&
        Objects.equals(this.relatedTermsList, relatedTerms.relatedTermsList);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, relatedTermCount, relatedTermsList);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RelatedTerms {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    relatedTermCount: ").append(toIndentedString(relatedTermCount)).append("\n");
    sb.append("    relatedTermsList: ").append(toIndentedString(relatedTermsList)).append("\n");
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

