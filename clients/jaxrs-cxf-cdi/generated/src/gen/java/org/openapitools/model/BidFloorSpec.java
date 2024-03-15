package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.ActionType;
import org.openapitools.model.Country;
import org.openapitools.model.CreativeType;
import org.openapitools.model.Currency;
import org.openapitools.model.ObjectiveType;
import org.openapitools.model.OptimizationGoalMetadata;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;



public class BidFloorSpec   {
  
  private List<Country> countries;

  private Currency currency;

  private ObjectiveType objectiveType;

  private ActionType billableEvent;

  private OptimizationGoalMetadata optimizationGoalMetadata;

  private CreativeType creativeType;

  /**
   **/
  public BidFloorSpec countries(List<Country> countries) {
    this.countries = countries;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("countries")
  public List<Country> getCountries() {
    return countries;
  }
  public void setCountries(List<Country> countries) {
    this.countries = countries;
  }

  public BidFloorSpec addCountriesItem(Country countriesItem) {
    if (this.countries == null) {
      this.countries = new ArrayList<>();
    }
    this.countries.add(countriesItem);
    return this;
  }


  /**
   **/
  public BidFloorSpec currency(Currency currency) {
    this.currency = currency;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("currency")
  @NotNull
  public Currency getCurrency() {
    return currency;
  }
  public void setCurrency(Currency currency) {
    this.currency = currency;
  }


  /**
   **/
  public BidFloorSpec objectiveType(ObjectiveType objectiveType) {
    this.objectiveType = objectiveType;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("objective_type")
  public ObjectiveType getObjectiveType() {
    return objectiveType;
  }
  public void setObjectiveType(ObjectiveType objectiveType) {
    this.objectiveType = objectiveType;
  }


  /**
   **/
  public BidFloorSpec billableEvent(ActionType billableEvent) {
    this.billableEvent = billableEvent;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("billable_event")
  @NotNull
  public ActionType getBillableEvent() {
    return billableEvent;
  }
  public void setBillableEvent(ActionType billableEvent) {
    this.billableEvent = billableEvent;
  }


  /**
   **/
  public BidFloorSpec optimizationGoalMetadata(OptimizationGoalMetadata optimizationGoalMetadata) {
    this.optimizationGoalMetadata = optimizationGoalMetadata;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("optimization_goal_metadata")
  public OptimizationGoalMetadata getOptimizationGoalMetadata() {
    return optimizationGoalMetadata;
  }
  public void setOptimizationGoalMetadata(OptimizationGoalMetadata optimizationGoalMetadata) {
    this.optimizationGoalMetadata = optimizationGoalMetadata;
  }


  /**
   **/
  public BidFloorSpec creativeType(CreativeType creativeType) {
    this.creativeType = creativeType;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("creative_type")
  public CreativeType getCreativeType() {
    return creativeType;
  }
  public void setCreativeType(CreativeType creativeType) {
    this.creativeType = creativeType;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BidFloorSpec bidFloorSpec = (BidFloorSpec) o;
    return Objects.equals(this.countries, bidFloorSpec.countries) &&
        Objects.equals(this.currency, bidFloorSpec.currency) &&
        Objects.equals(this.objectiveType, bidFloorSpec.objectiveType) &&
        Objects.equals(this.billableEvent, bidFloorSpec.billableEvent) &&
        Objects.equals(this.optimizationGoalMetadata, bidFloorSpec.optimizationGoalMetadata) &&
        Objects.equals(this.creativeType, bidFloorSpec.creativeType);
  }

  @Override
  public int hashCode() {
    return Objects.hash(countries, currency, objectiveType, billableEvent, optimizationGoalMetadata, creativeType);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BidFloorSpec {\n");
    
    sb.append("    countries: ").append(toIndentedString(countries)).append("\n");
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
    sb.append("    objectiveType: ").append(toIndentedString(objectiveType)).append("\n");
    sb.append("    billableEvent: ").append(toIndentedString(billableEvent)).append("\n");
    sb.append("    optimizationGoalMetadata: ").append(toIndentedString(optimizationGoalMetadata)).append("\n");
    sb.append("    creativeType: ").append(toIndentedString(creativeType)).append("\n");
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

