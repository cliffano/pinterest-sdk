package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.AdGroupUpdateRequest;
import org.openapitools.model.AdUpdateRequest;
import org.openapitools.model.CampaignUpdateRequest;
import org.openapitools.model.KeywordUpdate;
import org.openapitools.model.ProductGroupPromotionUpdateRequest;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonFormat;
import com.fasterxml.jackson.annotation.JsonProperty;


/**
 * Request for creation of entities in bulk.
 */
@ApiModel(description="Request for creation of entities in bulk.")

public class BulkUpsertRequestUpdate  {
  
  @ApiModelProperty(value = "")
  @Valid
  private List<@Valid CampaignUpdateRequest> campaigns;

  @ApiModelProperty(value = "")
  @Valid
  private List<AdGroupUpdateRequest> adGroups;

  @ApiModelProperty(value = "")
  @Valid
  private List<AdUpdateRequest> ads;

  @ApiModelProperty(value = "")
  @Valid
  private List<@Valid ProductGroupPromotionUpdateRequest> productGroups;

  @ApiModelProperty(value = "")
  @Valid
  private List<@Valid KeywordUpdate> keywords;
 /**
  * Get campaigns
  * @return campaigns
  */
  @JsonProperty("campaigns")
  public List<@Valid CampaignUpdateRequest> getCampaigns() {
    return campaigns;
  }

  /**
   * Sets the <code>campaigns</code> property.
   */
 public void setCampaigns(List<@Valid CampaignUpdateRequest> campaigns) {
    this.campaigns = campaigns;
  }

  /**
   * Sets the <code>campaigns</code> property.
   */
  public BulkUpsertRequestUpdate campaigns(List<@Valid CampaignUpdateRequest> campaigns) {
    this.campaigns = campaigns;
    return this;
  }

  /**
   * Adds a new item to the <code>campaigns</code> list.
   */
  public BulkUpsertRequestUpdate addCampaignsItem(CampaignUpdateRequest campaignsItem) {
    this.campaigns.add(campaignsItem);
    return this;
  }

 /**
  * Get adGroups
  * @return adGroups
  */
  @JsonProperty("ad_groups")
  public List<AdGroupUpdateRequest> getAdGroups() {
    return adGroups;
  }

  /**
   * Sets the <code>adGroups</code> property.
   */
 public void setAdGroups(List<AdGroupUpdateRequest> adGroups) {
    this.adGroups = adGroups;
  }

  /**
   * Sets the <code>adGroups</code> property.
   */
  public BulkUpsertRequestUpdate adGroups(List<AdGroupUpdateRequest> adGroups) {
    this.adGroups = adGroups;
    return this;
  }

  /**
   * Adds a new item to the <code>adGroups</code> list.
   */
  public BulkUpsertRequestUpdate addAdGroupsItem(AdGroupUpdateRequest adGroupsItem) {
    this.adGroups.add(adGroupsItem);
    return this;
  }

 /**
  * Get ads
  * @return ads
  */
  @JsonProperty("ads")
  public List<AdUpdateRequest> getAds() {
    return ads;
  }

  /**
   * Sets the <code>ads</code> property.
   */
 public void setAds(List<AdUpdateRequest> ads) {
    this.ads = ads;
  }

  /**
   * Sets the <code>ads</code> property.
   */
  public BulkUpsertRequestUpdate ads(List<AdUpdateRequest> ads) {
    this.ads = ads;
    return this;
  }

  /**
   * Adds a new item to the <code>ads</code> list.
   */
  public BulkUpsertRequestUpdate addAdsItem(AdUpdateRequest adsItem) {
    this.ads.add(adsItem);
    return this;
  }

 /**
  * Get productGroups
  * @return productGroups
  */
  @JsonProperty("product_groups")
  public List<@Valid ProductGroupPromotionUpdateRequest> getProductGroups() {
    return productGroups;
  }

  /**
   * Sets the <code>productGroups</code> property.
   */
 public void setProductGroups(List<@Valid ProductGroupPromotionUpdateRequest> productGroups) {
    this.productGroups = productGroups;
  }

  /**
   * Sets the <code>productGroups</code> property.
   */
  public BulkUpsertRequestUpdate productGroups(List<@Valid ProductGroupPromotionUpdateRequest> productGroups) {
    this.productGroups = productGroups;
    return this;
  }

  /**
   * Adds a new item to the <code>productGroups</code> list.
   */
  public BulkUpsertRequestUpdate addProductGroupsItem(ProductGroupPromotionUpdateRequest productGroupsItem) {
    this.productGroups.add(productGroupsItem);
    return this;
  }

 /**
  * Get keywords
  * @return keywords
  */
  @JsonProperty("keywords")
  public List<@Valid KeywordUpdate> getKeywords() {
    return keywords;
  }

  /**
   * Sets the <code>keywords</code> property.
   */
 public void setKeywords(List<@Valid KeywordUpdate> keywords) {
    this.keywords = keywords;
  }

  /**
   * Sets the <code>keywords</code> property.
   */
  public BulkUpsertRequestUpdate keywords(List<@Valid KeywordUpdate> keywords) {
    this.keywords = keywords;
    return this;
  }

  /**
   * Adds a new item to the <code>keywords</code> list.
   */
  public BulkUpsertRequestUpdate addKeywordsItem(KeywordUpdate keywordsItem) {
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
    BulkUpsertRequestUpdate bulkUpsertRequestUpdate = (BulkUpsertRequestUpdate) o;
    return Objects.equals(this.campaigns, bulkUpsertRequestUpdate.campaigns) &&
        Objects.equals(this.adGroups, bulkUpsertRequestUpdate.adGroups) &&
        Objects.equals(this.ads, bulkUpsertRequestUpdate.ads) &&
        Objects.equals(this.productGroups, bulkUpsertRequestUpdate.productGroups) &&
        Objects.equals(this.keywords, bulkUpsertRequestUpdate.keywords);
  }

  @Override
  public int hashCode() {
    return Objects.hash(campaigns, adGroups, ads, productGroups, keywords);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BulkUpsertRequestUpdate {\n");
    
    sb.append("    campaigns: ").append(toIndentedString(campaigns)).append("\n");
    sb.append("    adGroups: ").append(toIndentedString(adGroups)).append("\n");
    sb.append("    ads: ").append(toIndentedString(ads)).append("\n");
    sb.append("    productGroups: ").append(toIndentedString(productGroups)).append("\n");
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

