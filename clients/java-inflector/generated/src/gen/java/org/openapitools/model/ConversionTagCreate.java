package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import org.openapitools.jackson.nullable.JsonNullable;





@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2024-03-14T23:01:39.171456580Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class ConversionTagCreate   {
  @JsonProperty("name")
  private String name;

  @JsonProperty("aem_enabled")
  private Boolean aemEnabled = false;

  @JsonProperty("md_frequency")
  private BigDecimal mdFrequency = new BigDecimal("1");

  @JsonProperty("aem_fnln_enabled")
  private Boolean aemFnlnEnabled = false;

  @JsonProperty("aem_ph_enabled")
  private Boolean aemPhEnabled = false;

  @JsonProperty("aem_ge_enabled")
  private Boolean aemGeEnabled = false;

  @JsonProperty("aem_db_enabled")
  private Boolean aemDbEnabled = false;

  @JsonProperty("aem_loc_enabled")
  private Boolean aemLocEnabled = false;

  /**
   * Conversion tag name.
   **/
  public ConversionTagCreate name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(example = "ACME Tools Tag", required = true, value = "Conversion tag name.")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   * Whether Automatic Enhanced Match email is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
   **/
  public ConversionTagCreate aemEnabled(Boolean aemEnabled) {
    this.aemEnabled = aemEnabled;
    return this;
  }

  
  @ApiModelProperty(example = "true", value = "Whether Automatic Enhanced Match email is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.")
  @JsonProperty("aem_enabled")
  public Boolean getAemEnabled() {
    return aemEnabled;
  }
  public void setAemEnabled(Boolean aemEnabled) {
    this.aemEnabled = aemEnabled;
  }

  /**
   * Metadata ingestion frequency.
   **/
  public ConversionTagCreate mdFrequency(BigDecimal mdFrequency) {
    this.mdFrequency = mdFrequency;
    return this;
  }

  
  @ApiModelProperty(example = "0.6", value = "Metadata ingestion frequency.")
  @JsonProperty("md_frequency")
  public BigDecimal getMdFrequency() {
    return mdFrequency;
  }
  public void setMdFrequency(BigDecimal mdFrequency) {
    this.mdFrequency = mdFrequency;
  }

  /**
   * Whether Automatic Enhanced Match name is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
   **/
  public ConversionTagCreate aemFnlnEnabled(Boolean aemFnlnEnabled) {
    this.aemFnlnEnabled = aemFnlnEnabled;
    return this;
  }

  
  @ApiModelProperty(example = "true", value = "Whether Automatic Enhanced Match name is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.")
  @JsonProperty("aem_fnln_enabled")
  public Boolean getAemFnlnEnabled() {
    return aemFnlnEnabled;
  }
  public void setAemFnlnEnabled(Boolean aemFnlnEnabled) {
    this.aemFnlnEnabled = aemFnlnEnabled;
  }

  /**
   * Whether Automatic Enhanced Match phone is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
   **/
  public ConversionTagCreate aemPhEnabled(Boolean aemPhEnabled) {
    this.aemPhEnabled = aemPhEnabled;
    return this;
  }

  
  @ApiModelProperty(example = "true", value = "Whether Automatic Enhanced Match phone is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.")
  @JsonProperty("aem_ph_enabled")
  public Boolean getAemPhEnabled() {
    return aemPhEnabled;
  }
  public void setAemPhEnabled(Boolean aemPhEnabled) {
    this.aemPhEnabled = aemPhEnabled;
  }

  /**
   * Whether Automatic Enhanced Match gender is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
   **/
  public ConversionTagCreate aemGeEnabled(Boolean aemGeEnabled) {
    this.aemGeEnabled = aemGeEnabled;
    return this;
  }

  
  @ApiModelProperty(example = "true", value = "Whether Automatic Enhanced Match gender is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.")
  @JsonProperty("aem_ge_enabled")
  public Boolean getAemGeEnabled() {
    return aemGeEnabled;
  }
  public void setAemGeEnabled(Boolean aemGeEnabled) {
    this.aemGeEnabled = aemGeEnabled;
  }

  /**
   * Whether Automatic Enhanced Match birthdate is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
   **/
  public ConversionTagCreate aemDbEnabled(Boolean aemDbEnabled) {
    this.aemDbEnabled = aemDbEnabled;
    return this;
  }

  
  @ApiModelProperty(example = "true", value = "Whether Automatic Enhanced Match birthdate is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.")
  @JsonProperty("aem_db_enabled")
  public Boolean getAemDbEnabled() {
    return aemDbEnabled;
  }
  public void setAemDbEnabled(Boolean aemDbEnabled) {
    this.aemDbEnabled = aemDbEnabled;
  }

  /**
   * Whether Automatic Enhanced Match location is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
   **/
  public ConversionTagCreate aemLocEnabled(Boolean aemLocEnabled) {
    this.aemLocEnabled = aemLocEnabled;
    return this;
  }

  
  @ApiModelProperty(example = "true", value = "Whether Automatic Enhanced Match location is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.")
  @JsonProperty("aem_loc_enabled")
  public Boolean getAemLocEnabled() {
    return aemLocEnabled;
  }
  public void setAemLocEnabled(Boolean aemLocEnabled) {
    this.aemLocEnabled = aemLocEnabled;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ConversionTagCreate conversionTagCreate = (ConversionTagCreate) o;
    return Objects.equals(name, conversionTagCreate.name) &&
        Objects.equals(aemEnabled, conversionTagCreate.aemEnabled) &&
        Objects.equals(mdFrequency, conversionTagCreate.mdFrequency) &&
        Objects.equals(aemFnlnEnabled, conversionTagCreate.aemFnlnEnabled) &&
        Objects.equals(aemPhEnabled, conversionTagCreate.aemPhEnabled) &&
        Objects.equals(aemGeEnabled, conversionTagCreate.aemGeEnabled) &&
        Objects.equals(aemDbEnabled, conversionTagCreate.aemDbEnabled) &&
        Objects.equals(aemLocEnabled, conversionTagCreate.aemLocEnabled);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, aemEnabled, mdFrequency, aemFnlnEnabled, aemPhEnabled, aemGeEnabled, aemDbEnabled, aemLocEnabled);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ConversionTagCreate {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    aemEnabled: ").append(toIndentedString(aemEnabled)).append("\n");
    sb.append("    mdFrequency: ").append(toIndentedString(mdFrequency)).append("\n");
    sb.append("    aemFnlnEnabled: ").append(toIndentedString(aemFnlnEnabled)).append("\n");
    sb.append("    aemPhEnabled: ").append(toIndentedString(aemPhEnabled)).append("\n");
    sb.append("    aemGeEnabled: ").append(toIndentedString(aemGeEnabled)).append("\n");
    sb.append("    aemDbEnabled: ").append(toIndentedString(aemDbEnabled)).append("\n");
    sb.append("    aemLocEnabled: ").append(toIndentedString(aemLocEnabled)).append("\n");
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

