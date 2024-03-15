package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.AudienceDemographicValue;



/**
 * Audience demographics
 **/

@ApiModel(description = "Audience demographics")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2024-03-14T23:01:39.171456580Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AudienceDemographics   {
  @JsonProperty("ages")
  private List<AudienceDemographicValue> ages = null;

  @JsonProperty("genders")
  private List<AudienceDemographicValue> genders = null;

  @JsonProperty("devices")
  private List<AudienceDemographicValue> devices = null;

  @JsonProperty("metros")
  private List<AudienceDemographicValue> metros = null;

  @JsonProperty("countries")
  private List<AudienceDemographicValue> countries = null;

  /**
   * Ages distribution.
   **/
  public AudienceDemographics ages(List<AudienceDemographicValue> ages) {
    this.ages = ages;
    return this;
  }

  
  @ApiModelProperty(value = "Ages distribution.")
  @JsonProperty("ages")
  public List<AudienceDemographicValue> getAges() {
    return ages;
  }
  public void setAges(List<AudienceDemographicValue> ages) {
    this.ages = ages;
  }

  /**
   * Gender distribution.
   **/
  public AudienceDemographics genders(List<AudienceDemographicValue> genders) {
    this.genders = genders;
    return this;
  }

  
  @ApiModelProperty(value = "Gender distribution.")
  @JsonProperty("genders")
  public List<AudienceDemographicValue> getGenders() {
    return genders;
  }
  public void setGenders(List<AudienceDemographicValue> genders) {
    this.genders = genders;
  }

  /**
   * Device usage distribution.
   **/
  public AudienceDemographics devices(List<AudienceDemographicValue> devices) {
    this.devices = devices;
    return this;
  }

  
  @ApiModelProperty(value = "Device usage distribution.")
  @JsonProperty("devices")
  public List<AudienceDemographicValue> getDevices() {
    return devices;
  }
  public void setDevices(List<AudienceDemographicValue> devices) {
    this.devices = devices;
  }

  /**
   * Geographic metro area distribution.
   **/
  public AudienceDemographics metros(List<AudienceDemographicValue> metros) {
    this.metros = metros;
    return this;
  }

  
  @ApiModelProperty(value = "Geographic metro area distribution.")
  @JsonProperty("metros")
  public List<AudienceDemographicValue> getMetros() {
    return metros;
  }
  public void setMetros(List<AudienceDemographicValue> metros) {
    this.metros = metros;
  }

  /**
   * Country area distribution.
   **/
  public AudienceDemographics countries(List<AudienceDemographicValue> countries) {
    this.countries = countries;
    return this;
  }

  
  @ApiModelProperty(value = "Country area distribution.")
  @JsonProperty("countries")
  public List<AudienceDemographicValue> getCountries() {
    return countries;
  }
  public void setCountries(List<AudienceDemographicValue> countries) {
    this.countries = countries;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AudienceDemographics audienceDemographics = (AudienceDemographics) o;
    return Objects.equals(ages, audienceDemographics.ages) &&
        Objects.equals(genders, audienceDemographics.genders) &&
        Objects.equals(devices, audienceDemographics.devices) &&
        Objects.equals(metros, audienceDemographics.metros) &&
        Objects.equals(countries, audienceDemographics.countries);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ages, genders, devices, metros, countries);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AudienceDemographics {\n");
    
    sb.append("    ages: ").append(toIndentedString(ages)).append("\n");
    sb.append("    genders: ").append(toIndentedString(genders)).append("\n");
    sb.append("    devices: ").append(toIndentedString(devices)).append("\n");
    sb.append("    metros: ").append(toIndentedString(metros)).append("\n");
    sb.append("    countries: ").append(toIndentedString(countries)).append("\n");
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

