package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;



public class CatalogsProductGroupMultipleStringListCriteria   {
  
  private List<List<String>> values = new ArrayList<>();

  private Boolean negated = false;

  /**
   **/
  public CatalogsProductGroupMultipleStringListCriteria values(List<List<String>> values) {
    this.values = values;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("values")
  @NotNull
  public List<List<String>> getValues() {
    return values;
  }
  public void setValues(List<List<String>> values) {
    this.values = values;
  }

  public CatalogsProductGroupMultipleStringListCriteria addValuesItem(List<String> valuesItem) {
    if (this.values == null) {
      this.values = new ArrayList<>();
    }
    this.values.add(valuesItem);
    return this;
  }


  /**
   **/
  public CatalogsProductGroupMultipleStringListCriteria negated(Boolean negated) {
    this.negated = negated;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("negated")
  public Boolean getNegated() {
    return negated;
  }
  public void setNegated(Boolean negated) {
    this.negated = negated;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsProductGroupMultipleStringListCriteria catalogsProductGroupMultipleStringListCriteria = (CatalogsProductGroupMultipleStringListCriteria) o;
    return Objects.equals(this.values, catalogsProductGroupMultipleStringListCriteria.values) &&
        Objects.equals(this.negated, catalogsProductGroupMultipleStringListCriteria.negated);
  }

  @Override
  public int hashCode() {
    return Objects.hash(values, negated);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsProductGroupMultipleStringListCriteria {\n");
    
    sb.append("    values: ").append(toIndentedString(values)).append("\n");
    sb.append("    negated: ").append(toIndentedString(negated)).append("\n");
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

