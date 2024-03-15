package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonTypeName;



@JsonTypeName("SingleInterestTargetingOptionResponse")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2024-03-14T23:05:05.545684373Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class SingleInterestTargetingOptionResponse   {
  private @Valid String id;
  private @Valid String name;
  private @Valid List<String> childInterests;
  private @Valid Integer level;

  /**
   **/
  public SingleInterestTargetingOptionResponse id(String id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(example = "945391946569", value = "")
  @JsonProperty("id")
 @Pattern(regexp="\\d+")  public String getId() {
    return id;
  }

  @JsonProperty("id")
  public void setId(String id) {
    this.id = id;
  }

  /**
   **/
  public SingleInterestTargetingOptionResponse name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(example = "Dress", value = "")
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  @JsonProperty("name")
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public SingleInterestTargetingOptionResponse childInterests(List<String> childInterests) {
    this.childInterests = childInterests;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("child_interests")
  public List<String> getChildInterests() {
    return childInterests;
  }

  @JsonProperty("child_interests")
  public void setChildInterests(List<String> childInterests) {
    this.childInterests = childInterests;
  }

  public SingleInterestTargetingOptionResponse addChildInterestsItem(String childInterestsItem) {
    if (this.childInterests == null) {
      this.childInterests = new ArrayList<>();
    }

    this.childInterests.add(childInterestsItem);
    return this;
  }

  public SingleInterestTargetingOptionResponse removeChildInterestsItem(String childInterestsItem) {
    if (childInterestsItem != null && this.childInterests != null) {
      this.childInterests.remove(childInterestsItem);
    }

    return this;
  }
  /**
   **/
  public SingleInterestTargetingOptionResponse level(Integer level) {
    this.level = level;
    return this;
  }

  
  @ApiModelProperty(example = "2", value = "")
  @JsonProperty("level")
  public Integer getLevel() {
    return level;
  }

  @JsonProperty("level")
  public void setLevel(Integer level) {
    this.level = level;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SingleInterestTargetingOptionResponse singleInterestTargetingOptionResponse = (SingleInterestTargetingOptionResponse) o;
    return Objects.equals(this.id, singleInterestTargetingOptionResponse.id) &&
        Objects.equals(this.name, singleInterestTargetingOptionResponse.name) &&
        Objects.equals(this.childInterests, singleInterestTargetingOptionResponse.childInterests) &&
        Objects.equals(this.level, singleInterestTargetingOptionResponse.level);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, name, childInterests, level);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SingleInterestTargetingOptionResponse {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    childInterests: ").append(toIndentedString(childInterests)).append("\n");
    sb.append("    level: ").append(toIndentedString(level)).append("\n");
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

