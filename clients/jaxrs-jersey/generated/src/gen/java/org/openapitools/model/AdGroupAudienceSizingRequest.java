/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.AdGroupAudienceSizingRequestKeywordsInner;
import org.openapitools.model.PlacementGroupType;
import org.openapitools.model.TargetingSpec;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * AdGroupAudienceSizingRequest
 */
@JsonPropertyOrder({
  AdGroupAudienceSizingRequest.JSON_PROPERTY_AUTO_TARGETING_ENABLED,
  AdGroupAudienceSizingRequest.JSON_PROPERTY_PLACEMENT_GROUP,
  AdGroupAudienceSizingRequest.JSON_PROPERTY_CREATIVE_TYPES,
  AdGroupAudienceSizingRequest.JSON_PROPERTY_TARGETING_SPEC,
  AdGroupAudienceSizingRequest.JSON_PROPERTY_PRODUCT_GROUP_IDS,
  AdGroupAudienceSizingRequest.JSON_PROPERTY_KEYWORDS
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AdGroupAudienceSizingRequest   {
  public static final String JSON_PROPERTY_AUTO_TARGETING_ENABLED = "auto_targeting_enabled";
  @JsonProperty(JSON_PROPERTY_AUTO_TARGETING_ENABLED)
  private Boolean autoTargetingEnabled = true;

  public static final String JSON_PROPERTY_PLACEMENT_GROUP = "placement_group";
  @JsonProperty(JSON_PROPERTY_PLACEMENT_GROUP)
  private PlacementGroupType placementGroup = "ALL";

  /**
   * Gets or Sets creativeTypes
   */
  public enum CreativeTypesEnum {
    REGULAR("REGULAR"),
    
    VIDEO("VIDEO"),
    
    SHOPPING("SHOPPING"),
    
    CAROUSEL("CAROUSEL"),
    
    MAX_VIDEO("MAX_VIDEO"),
    
    SHOP_THE_PIN("SHOP_THE_PIN"),
    
    COLLECTION("COLLECTION"),
    
    IDEA("IDEA");

    private String value;

    CreativeTypesEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }

    @JsonCreator
    public static CreativeTypesEnum fromValue(String value) {
      for (CreativeTypesEnum b : CreativeTypesEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
  }

  public static final String JSON_PROPERTY_CREATIVE_TYPES = "creative_types";
  @JsonProperty(JSON_PROPERTY_CREATIVE_TYPES)
  private List<CreativeTypesEnum> creativeTypes;

  public static final String JSON_PROPERTY_TARGETING_SPEC = "targeting_spec";
  @JsonProperty(JSON_PROPERTY_TARGETING_SPEC)
  private TargetingSpec targetingSpec;

  public static final String JSON_PROPERTY_PRODUCT_GROUP_IDS = "product_group_ids";
  @JsonProperty(JSON_PROPERTY_PRODUCT_GROUP_IDS)
  private List<@Pattern(regexp = "^\\d+$")String> productGroupIds;

  public static final String JSON_PROPERTY_KEYWORDS = "keywords";
  @JsonProperty(JSON_PROPERTY_KEYWORDS)
  private List<@Valid AdGroupAudienceSizingRequestKeywordsInner> keywords;

  public AdGroupAudienceSizingRequest autoTargetingEnabled(Boolean autoTargetingEnabled) {
    this.autoTargetingEnabled = autoTargetingEnabled;
    return this;
  }

  /**
   * Enable auto-targeting for ad group. Also known as &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/expanded-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;\&quot;expanded targeting\&quot;&lt;/a&gt;.
   * @return autoTargetingEnabled
   **/
  @JsonProperty(value = "auto_targeting_enabled")
  @ApiModelProperty(example = "true", value = "Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.")
  
  public Boolean getAutoTargetingEnabled() {
    return autoTargetingEnabled;
  }

  public void setAutoTargetingEnabled(Boolean autoTargetingEnabled) {
    this.autoTargetingEnabled = autoTargetingEnabled;
  }

  public AdGroupAudienceSizingRequest placementGroup(PlacementGroupType placementGroup) {
    this.placementGroup = placementGroup;
    return this;
  }

  /**
   * &lt;a href&#x3D;\&quot;/docs/redoc/#section/Placement-group\&quot;&gt;Placement group&lt;/a&gt;.
   * @return placementGroup
   **/
  @JsonProperty(value = "placement_group")
  @ApiModelProperty(value = "<a href=\"/docs/redoc/#section/Placement-group\">Placement group</a>.")
  @Valid 
  public PlacementGroupType getPlacementGroup() {
    return placementGroup;
  }

  public void setPlacementGroup(PlacementGroupType placementGroup) {
    this.placementGroup = placementGroup;
  }

  public AdGroupAudienceSizingRequest creativeTypes(List<CreativeTypesEnum> creativeTypes) {
    this.creativeTypes = creativeTypes;
    return this;
  }

  public AdGroupAudienceSizingRequest addCreativeTypesItem(CreativeTypesEnum creativeTypesItem) {
    if (this.creativeTypes == null) {
      this.creativeTypes = new ArrayList<>();
    }
    this.creativeTypes.add(creativeTypesItem);
    return this;
  }

  /**
   * Pin creative types filter. &lt;/p&gt;&lt;strong&gt;Note:&lt;/strong&gt; SHOP_THE_PIN has been deprecated. Please use COLLECTION instead.
   * @return creativeTypes
   **/
  @JsonProperty(value = "creative_types")
  @ApiModelProperty(value = "Pin creative types filter. </p><strong>Note:</strong> SHOP_THE_PIN has been deprecated. Please use COLLECTION instead.")
  
  public List<CreativeTypesEnum> getCreativeTypes() {
    return creativeTypes;
  }

  public void setCreativeTypes(List<CreativeTypesEnum> creativeTypes) {
    this.creativeTypes = creativeTypes;
  }

  public AdGroupAudienceSizingRequest targetingSpec(TargetingSpec targetingSpec) {
    this.targetingSpec = targetingSpec;
    return this;
  }

  /**
   * Get targetingSpec
   * @return targetingSpec
   **/
  @JsonProperty(value = "targeting_spec")
  @ApiModelProperty(value = "")
  @Valid 
  public TargetingSpec getTargetingSpec() {
    return targetingSpec;
  }

  public void setTargetingSpec(TargetingSpec targetingSpec) {
    this.targetingSpec = targetingSpec;
  }

  public AdGroupAudienceSizingRequest productGroupIds(List<@Pattern(regexp = "^\\d+$")String> productGroupIds) {
    this.productGroupIds = productGroupIds;
    return this;
  }

  public AdGroupAudienceSizingRequest addProductGroupIdsItem(String productGroupIdsItem) {
    if (this.productGroupIds == null) {
      this.productGroupIds = new ArrayList<>();
    }
    this.productGroupIds.add(productGroupIdsItem);
    return this;
  }

  /**
   * Targeted product group IDs. &lt;/p&gt;&lt;strong&gt;Note:&lt;/strong&gt; This can only be combined with shopping/catalog sales campaigns. For more information, &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/shopping-ads#section-14571\&quot; target&#x3D;\&quot;_blank\&quot;&gt;click here&lt;/a&gt;. SHOPPING_RETARGETING must be included in targeting_spec object or this field will be ignored.
   * @return productGroupIds
   **/
  @JsonProperty(value = "product_group_ids")
  @ApiModelProperty(value = "Targeted product group IDs. </p><strong>Note:</strong> This can only be combined with shopping/catalog sales campaigns. For more information, <a href=\"https://help.pinterest.com/en/business/article/shopping-ads#section-14571\" target=\"_blank\">click here</a>. SHOPPING_RETARGETING must be included in targeting_spec object or this field will be ignored.")
  
  public List<@Pattern(regexp = "^\\d+$")String> getProductGroupIds() {
    return productGroupIds;
  }

  public void setProductGroupIds(List<@Pattern(regexp = "^\\d+$")String> productGroupIds) {
    this.productGroupIds = productGroupIds;
  }

  public AdGroupAudienceSizingRequest keywords(List<@Valid AdGroupAudienceSizingRequestKeywordsInner> keywords) {
    this.keywords = keywords;
    return this;
  }

  public AdGroupAudienceSizingRequest addKeywordsItem(AdGroupAudienceSizingRequestKeywordsInner keywordsItem) {
    if (this.keywords == null) {
      this.keywords = new ArrayList<>();
    }
    this.keywords.add(keywordsItem);
    return this;
  }

  /**
   * Array of keyword objects. If the keywords field is missing, all keywords will be targeted.
   * @return keywords
   **/
  @JsonProperty(value = "keywords")
  @ApiModelProperty(value = "Array of keyword objects. If the keywords field is missing, all keywords will be targeted.")
  @Valid 
  public List<@Valid AdGroupAudienceSizingRequestKeywordsInner> getKeywords() {
    return keywords;
  }

  public void setKeywords(List<@Valid AdGroupAudienceSizingRequestKeywordsInner> keywords) {
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
    AdGroupAudienceSizingRequest adGroupAudienceSizingRequest = (AdGroupAudienceSizingRequest) o;
    return Objects.equals(this.autoTargetingEnabled, adGroupAudienceSizingRequest.autoTargetingEnabled) &&
        Objects.equals(this.placementGroup, adGroupAudienceSizingRequest.placementGroup) &&
        Objects.equals(this.creativeTypes, adGroupAudienceSizingRequest.creativeTypes) &&
        Objects.equals(this.targetingSpec, adGroupAudienceSizingRequest.targetingSpec) &&
        Objects.equals(this.productGroupIds, adGroupAudienceSizingRequest.productGroupIds) &&
        Objects.equals(this.keywords, adGroupAudienceSizingRequest.keywords);
  }

  @Override
  public int hashCode() {
    return Objects.hash(autoTargetingEnabled, placementGroup, creativeTypes, targetingSpec, productGroupIds, keywords);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdGroupAudienceSizingRequest {\n");
    
    sb.append("    autoTargetingEnabled: ").append(toIndentedString(autoTargetingEnabled)).append("\n");
    sb.append("    placementGroup: ").append(toIndentedString(placementGroup)).append("\n");
    sb.append("    creativeTypes: ").append(toIndentedString(creativeTypes)).append("\n");
    sb.append("    targetingSpec: ").append(toIndentedString(targetingSpec)).append("\n");
    sb.append("    productGroupIds: ").append(toIndentedString(productGroupIds)).append("\n");
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

