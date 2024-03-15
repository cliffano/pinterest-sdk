package org.openapitools.vertxweb.server.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import java.math.BigDecimal;
import org.openapitools.jackson.nullable.JsonNullable;

@JsonInclude(JsonInclude.Include.NON_NULL)
public class ConversionTagConfigs   {
  
  private Boolean aemEnabled = false;
  private BigDecimal mdFrequency = new BigDecimal("1");
  private Boolean aemFnlnEnabled = false;
  private Boolean aemPhEnabled = false;
  private Boolean aemGeEnabled = false;
  private Boolean aemDbEnabled = false;
  private Boolean aemLocEnabled = false;

  public ConversionTagConfigs () {

  }

  public ConversionTagConfigs (Boolean aemEnabled, BigDecimal mdFrequency, Boolean aemFnlnEnabled, Boolean aemPhEnabled, Boolean aemGeEnabled, Boolean aemDbEnabled, Boolean aemLocEnabled) {
    this.aemEnabled = aemEnabled;
    this.mdFrequency = mdFrequency;
    this.aemFnlnEnabled = aemFnlnEnabled;
    this.aemPhEnabled = aemPhEnabled;
    this.aemGeEnabled = aemGeEnabled;
    this.aemDbEnabled = aemDbEnabled;
    this.aemLocEnabled = aemLocEnabled;
  }

    
  @JsonProperty("aem_enabled")
  public Boolean getAemEnabled() {
    return aemEnabled;
  }
  public void setAemEnabled(Boolean aemEnabled) {
    this.aemEnabled = aemEnabled;
  }

    
  @JsonProperty("md_frequency")
  public BigDecimal getMdFrequency() {
    return mdFrequency;
  }
  public void setMdFrequency(BigDecimal mdFrequency) {
    this.mdFrequency = mdFrequency;
  }

    
  @JsonProperty("aem_fnln_enabled")
  public Boolean getAemFnlnEnabled() {
    return aemFnlnEnabled;
  }
  public void setAemFnlnEnabled(Boolean aemFnlnEnabled) {
    this.aemFnlnEnabled = aemFnlnEnabled;
  }

    
  @JsonProperty("aem_ph_enabled")
  public Boolean getAemPhEnabled() {
    return aemPhEnabled;
  }
  public void setAemPhEnabled(Boolean aemPhEnabled) {
    this.aemPhEnabled = aemPhEnabled;
  }

    
  @JsonProperty("aem_ge_enabled")
  public Boolean getAemGeEnabled() {
    return aemGeEnabled;
  }
  public void setAemGeEnabled(Boolean aemGeEnabled) {
    this.aemGeEnabled = aemGeEnabled;
  }

    
  @JsonProperty("aem_db_enabled")
  public Boolean getAemDbEnabled() {
    return aemDbEnabled;
  }
  public void setAemDbEnabled(Boolean aemDbEnabled) {
    this.aemDbEnabled = aemDbEnabled;
  }

    
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
    ConversionTagConfigs conversionTagConfigs = (ConversionTagConfigs) o;
    return Objects.equals(aemEnabled, conversionTagConfigs.aemEnabled) &&
        Objects.equals(mdFrequency, conversionTagConfigs.mdFrequency) &&
        Objects.equals(aemFnlnEnabled, conversionTagConfigs.aemFnlnEnabled) &&
        Objects.equals(aemPhEnabled, conversionTagConfigs.aemPhEnabled) &&
        Objects.equals(aemGeEnabled, conversionTagConfigs.aemGeEnabled) &&
        Objects.equals(aemDbEnabled, conversionTagConfigs.aemDbEnabled) &&
        Objects.equals(aemLocEnabled, conversionTagConfigs.aemLocEnabled);
  }

  @Override
  public int hashCode() {
    return Objects.hash(aemEnabled, mdFrequency, aemFnlnEnabled, aemPhEnabled, aemGeEnabled, aemDbEnabled, aemLocEnabled);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ConversionTagConfigs {\n");
    
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
