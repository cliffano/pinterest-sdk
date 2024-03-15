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
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.AdCreateRequest;
import org.openapitools.model.AdGroupCreateRequest;
import org.openapitools.model.CampaignCreateRequest;
import org.openapitools.model.KeywordsRequest;
import org.openapitools.model.ProductGroupPromotionCreateRequest;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Request for creation of entities in bulk.
 */
@JsonPropertyOrder({
  BulkUpsertRequestCreate.JSON_PROPERTY_CAMPAIGNS,
  BulkUpsertRequestCreate.JSON_PROPERTY_AD_GROUPS,
  BulkUpsertRequestCreate.JSON_PROPERTY_ADS,
  BulkUpsertRequestCreate.JSON_PROPERTY_PRODUCT_GROUPS,
  BulkUpsertRequestCreate.JSON_PROPERTY_KEYWORDS
})
@JsonTypeName("BulkUpsertRequestCreate")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class BulkUpsertRequestCreate {
    public static final String JSON_PROPERTY_CAMPAIGNS = "campaigns";
    private List<@Valid CampaignCreateRequest> campaigns = null;

    public static final String JSON_PROPERTY_AD_GROUPS = "ad_groups";
    private List<AdGroupCreateRequest> adGroups = null;

    public static final String JSON_PROPERTY_ADS = "ads";
    private List<AdCreateRequest> ads = null;

    public static final String JSON_PROPERTY_PRODUCT_GROUPS = "product_groups";
    private List<@Valid ProductGroupPromotionCreateRequest> productGroups = null;

    public static final String JSON_PROPERTY_KEYWORDS = "keywords";
    private List<@Valid KeywordsRequest> keywords = null;

    public BulkUpsertRequestCreate() {
    }

    public BulkUpsertRequestCreate campaigns(List<@Valid CampaignCreateRequest> campaigns) {
        this.campaigns = campaigns;
        return this;
    }

    public BulkUpsertRequestCreate addCampaignsItem(CampaignCreateRequest campaignsItem) {
        if (this.campaigns == null) {
            this.campaigns = new ArrayList<>();
        }
        this.campaigns.add(campaignsItem);
        return this;
    }

    /**
     * Get campaigns
     * @return campaigns
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_CAMPAIGNS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Valid CampaignCreateRequest> getCampaigns() {
        return campaigns;
    }

    @JsonProperty(JSON_PROPERTY_CAMPAIGNS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCampaigns(List<@Valid CampaignCreateRequest> campaigns) {
        this.campaigns = campaigns;
    }

    public BulkUpsertRequestCreate adGroups(List<AdGroupCreateRequest> adGroups) {
        this.adGroups = adGroups;
        return this;
    }

    public BulkUpsertRequestCreate addAdGroupsItem(AdGroupCreateRequest adGroupsItem) {
        if (this.adGroups == null) {
            this.adGroups = new ArrayList<>();
        }
        this.adGroups.add(adGroupsItem);
        return this;
    }

    /**
     * Get adGroups
     * @return adGroups
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_AD_GROUPS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<AdGroupCreateRequest> getAdGroups() {
        return adGroups;
    }

    @JsonProperty(JSON_PROPERTY_AD_GROUPS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAdGroups(List<AdGroupCreateRequest> adGroups) {
        this.adGroups = adGroups;
    }

    public BulkUpsertRequestCreate ads(List<AdCreateRequest> ads) {
        this.ads = ads;
        return this;
    }

    public BulkUpsertRequestCreate addAdsItem(AdCreateRequest adsItem) {
        if (this.ads == null) {
            this.ads = new ArrayList<>();
        }
        this.ads.add(adsItem);
        return this;
    }

    /**
     * Get ads
     * @return ads
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_ADS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<AdCreateRequest> getAds() {
        return ads;
    }

    @JsonProperty(JSON_PROPERTY_ADS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAds(List<AdCreateRequest> ads) {
        this.ads = ads;
    }

    public BulkUpsertRequestCreate productGroups(List<@Valid ProductGroupPromotionCreateRequest> productGroups) {
        this.productGroups = productGroups;
        return this;
    }

    public BulkUpsertRequestCreate addProductGroupsItem(ProductGroupPromotionCreateRequest productGroupsItem) {
        if (this.productGroups == null) {
            this.productGroups = new ArrayList<>();
        }
        this.productGroups.add(productGroupsItem);
        return this;
    }

    /**
     * Get productGroups
     * @return productGroups
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_PRODUCT_GROUPS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Valid ProductGroupPromotionCreateRequest> getProductGroups() {
        return productGroups;
    }

    @JsonProperty(JSON_PROPERTY_PRODUCT_GROUPS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setProductGroups(List<@Valid ProductGroupPromotionCreateRequest> productGroups) {
        this.productGroups = productGroups;
    }

    public BulkUpsertRequestCreate keywords(List<@Valid KeywordsRequest> keywords) {
        this.keywords = keywords;
        return this;
    }

    public BulkUpsertRequestCreate addKeywordsItem(KeywordsRequest keywordsItem) {
        if (this.keywords == null) {
            this.keywords = new ArrayList<>();
        }
        this.keywords.add(keywordsItem);
        return this;
    }

    /**
     * Get keywords
     * @return keywords
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_KEYWORDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Valid KeywordsRequest> getKeywords() {
        return keywords;
    }

    @JsonProperty(JSON_PROPERTY_KEYWORDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setKeywords(List<@Valid KeywordsRequest> keywords) {
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
        BulkUpsertRequestCreate bulkUpsertRequestCreate = (BulkUpsertRequestCreate) o;
        return Objects.equals(this.campaigns, bulkUpsertRequestCreate.campaigns) &&
            Objects.equals(this.adGroups, bulkUpsertRequestCreate.adGroups) &&
            Objects.equals(this.ads, bulkUpsertRequestCreate.ads) &&
            Objects.equals(this.productGroups, bulkUpsertRequestCreate.productGroups) &&
            Objects.equals(this.keywords, bulkUpsertRequestCreate.keywords);
    }

    @Override
    public int hashCode() {
        return Objects.hash(campaigns, adGroups, ads, productGroups, keywords);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class BulkUpsertRequestCreate {\n");
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
    private String toIndentedString(Object o) {
        if (o == null) {
            return "null";
        }
        return o.toString().replace("\n", "\n    ");
    }

}

