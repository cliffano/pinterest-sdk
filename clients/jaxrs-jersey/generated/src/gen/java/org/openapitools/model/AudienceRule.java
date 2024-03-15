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
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.ObjectiveType;
import org.openapitools.model.PinterestTagEventData;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * JSON object defining targeted audience users. Example rule formats per audience type:&lt;br&gt;CUSTOMER_LIST: { \&quot;customer_list_id\&quot;: \&quot;&amp;lt;customer list ID&amp;gt;\&quot;}&lt;br&gt;ACTALIKE: { \&quot;seed_id\&quot;: [\&quot;&amp;lt;audience ID&amp;gt;\&quot;], \&quot;country\&quot;: \&quot;US\&quot;, \&quot;percentage\&quot;: \&quot;10\&quot; }&lt;br&gt;(Valid countries include: \&quot;US\&quot;, \&quot;CA\&quot;, and \&quot;GB\&quot;. Percentage should be 1-10.&lt;br&gt;The targeted audience should be this % size across Pinterest.)&lt;br&gt;VISITOR: { \&quot;visitor_source_id\&quot;: [\&quot;&amp;lt;conversion tag ID&amp;gt;\&quot;], \&quot;retention_days\&quot;: \&quot;180\&quot;, \&quot;event_source\&quot;: {\&quot;&#x3D;\&quot;: [\&quot;web\&quot;, \&quot;mobile\&quot;]}, \&quot;ingestion_source\&quot;: {\&quot;&#x3D;\&quot;: [\&quot;tag\&quot;]}}&lt;br&gt;(Retention days should be 1-540. Retention applies to specific customers.)&lt;br&gt;ENGAGEMENT: {\&quot;engagement_domain\&quot;: [\&quot;www.entomi.com\&quot;], \&quot;engager_type\&quot;: 1}&lt;br&gt;For more details on engagement audiences, see &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/adtech_ads_v4/#section/November-2021\&quot; target&#x3D;\&quot;_blank\&quot;&gt;November 2021 changelog&lt;/a&gt;.
 */
@ApiModel(description = "JSON object defining targeted audience users. Example rule formats per audience type:<br>CUSTOMER_LIST: { \"customer_list_id\": \"&lt;customer list ID&gt;\"}<br>ACTALIKE: { \"seed_id\": [\"&lt;audience ID&gt;\"], \"country\": \"US\", \"percentage\": \"10\" }<br>(Valid countries include: \"US\", \"CA\", and \"GB\". Percentage should be 1-10.<br>The targeted audience should be this % size across Pinterest.)<br>VISITOR: { \"visitor_source_id\": [\"&lt;conversion tag ID&gt;\"], \"retention_days\": \"180\", \"event_source\": {\"=\": [\"web\", \"mobile\"]}, \"ingestion_source\": {\"=\": [\"tag\"]}}<br>(Retention days should be 1-540. Retention applies to specific customers.)<br>ENGAGEMENT: {\"engagement_domain\": [\"www.entomi.com\"], \"engager_type\": 1}<br>For more details on engagement audiences, see <a href=\"https://developers.pinterest.com/docs/redoc/adtech_ads_v4/#section/November-2021\" target=\"_blank\">November 2021 changelog</a>.")
@JsonPropertyOrder({
  AudienceRule.JSON_PROPERTY_COUNTRY,
  AudienceRule.JSON_PROPERTY_CUSTOMER_LIST_ID,
  AudienceRule.JSON_PROPERTY_ENGAGEMENT_DOMAIN,
  AudienceRule.JSON_PROPERTY_ENGAGEMENT_TYPE,
  AudienceRule.JSON_PROPERTY_EVENT,
  AudienceRule.JSON_PROPERTY_EVENT_DATA,
  AudienceRule.JSON_PROPERTY_PERCENTAGE,
  AudienceRule.JSON_PROPERTY_PIN_ID,
  AudienceRule.JSON_PROPERTY_PREFILL,
  AudienceRule.JSON_PROPERTY_RETENTION_DAYS,
  AudienceRule.JSON_PROPERTY_SEED_ID,
  AudienceRule.JSON_PROPERTY_URL,
  AudienceRule.JSON_PROPERTY_VISITOR_SOURCE_ID,
  AudienceRule.JSON_PROPERTY_EVENT_SOURCE,
  AudienceRule.JSON_PROPERTY_INGESTION_SOURCE,
  AudienceRule.JSON_PROPERTY_ENGAGER_TYPE,
  AudienceRule.JSON_PROPERTY_CAMPAIGN_ID,
  AudienceRule.JSON_PROPERTY_AD_ID,
  AudienceRule.JSON_PROPERTY_OBJECTIVE_TYPE,
  AudienceRule.JSON_PROPERTY_AD_ACCOUNT_ID
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AudienceRule   {
  public static final String JSON_PROPERTY_COUNTRY = "country";
  @JsonProperty(JSON_PROPERTY_COUNTRY)
  private String country;

  public static final String JSON_PROPERTY_CUSTOMER_LIST_ID = "customer_list_id";
  @JsonProperty(JSON_PROPERTY_CUSTOMER_LIST_ID)
  private String customerListId;

  public static final String JSON_PROPERTY_ENGAGEMENT_DOMAIN = "engagement_domain";
  @JsonProperty(JSON_PROPERTY_ENGAGEMENT_DOMAIN)
  private List<String> engagementDomain;

  public static final String JSON_PROPERTY_ENGAGEMENT_TYPE = "engagement_type";
  @JsonProperty(JSON_PROPERTY_ENGAGEMENT_TYPE)
  private String engagementType;

  public static final String JSON_PROPERTY_EVENT = "event";
  @JsonProperty(JSON_PROPERTY_EVENT)
  private String event;

  public static final String JSON_PROPERTY_EVENT_DATA = "event_data";
  @JsonProperty(JSON_PROPERTY_EVENT_DATA)
  private PinterestTagEventData eventData;

  public static final String JSON_PROPERTY_PERCENTAGE = "percentage";
  @JsonProperty(JSON_PROPERTY_PERCENTAGE)
  private Integer percentage;

  public static final String JSON_PROPERTY_PIN_ID = "pin_id";
  @JsonProperty(JSON_PROPERTY_PIN_ID)
  private List<@Pattern(regexp = "^\\d+$")String> pinId;

  public static final String JSON_PROPERTY_PREFILL = "prefill";
  @JsonProperty(JSON_PROPERTY_PREFILL)
  private Boolean prefill;

  public static final String JSON_PROPERTY_RETENTION_DAYS = "retention_days";
  @JsonProperty(JSON_PROPERTY_RETENTION_DAYS)
  private Integer retentionDays;

  public static final String JSON_PROPERTY_SEED_ID = "seed_id";
  @JsonProperty(JSON_PROPERTY_SEED_ID)
  private List<@Pattern(regexp = "^\\d+$")String> seedId;

  public static final String JSON_PROPERTY_URL = "url";
  @JsonProperty(JSON_PROPERTY_URL)
  private List<String> url;

  public static final String JSON_PROPERTY_VISITOR_SOURCE_ID = "visitor_source_id";
  @JsonProperty(JSON_PROPERTY_VISITOR_SOURCE_ID)
  private String visitorSourceId;

  public static final String JSON_PROPERTY_EVENT_SOURCE = "event_source";
  @JsonProperty(JSON_PROPERTY_EVENT_SOURCE)
  private Object eventSource;

  public static final String JSON_PROPERTY_INGESTION_SOURCE = "ingestion_source";
  @JsonProperty(JSON_PROPERTY_INGESTION_SOURCE)
  private Object ingestionSource;

  public static final String JSON_PROPERTY_ENGAGER_TYPE = "engager_type";
  @JsonProperty(JSON_PROPERTY_ENGAGER_TYPE)
  private Integer engagerType;

  public static final String JSON_PROPERTY_CAMPAIGN_ID = "campaign_id";
  @JsonProperty(JSON_PROPERTY_CAMPAIGN_ID)
  private List<@Pattern(regexp = "^\\d+$")String> campaignId;

  public static final String JSON_PROPERTY_AD_ID = "ad_id";
  @JsonProperty(JSON_PROPERTY_AD_ID)
  private List<@Pattern(regexp = "^\\d+$")String> adId;

  public static final String JSON_PROPERTY_OBJECTIVE_TYPE = "objective_type";
  @JsonProperty(JSON_PROPERTY_OBJECTIVE_TYPE)
  private List<ObjectiveType> objectiveType;

  public static final String JSON_PROPERTY_AD_ACCOUNT_ID = "ad_account_id";
  @JsonProperty(JSON_PROPERTY_AD_ACCOUNT_ID)
  private String adAccountId;

  public AudienceRule country(String country) {
    this.country = country;
    return this;
  }

  /**
   * Valid countries include: \&quot;US\&quot;, \&quot;CA\&quot;, and \&quot;GB\&quot;.
   * @return country
   **/
  @JsonProperty(value = "country")
  @ApiModelProperty(example = "US", value = "Valid countries include: \"US\", \"CA\", and \"GB\".")
  
  public String getCountry() {
    return country;
  }

  public void setCountry(String country) {
    this.country = country;
  }

  public AudienceRule customerListId(String customerListId) {
    this.customerListId = customerListId;
    return this;
  }

  /**
   * Customer list ID. For CUSTOMER_LIST &#x60;audience_type&#x60;.
   * @return customerListId
   **/
  @JsonProperty(value = "customer_list_id")
  @ApiModelProperty(example = "5497558859876", value = "Customer list ID. For CUSTOMER_LIST `audience_type`.")
   @Pattern(regexp="^\\d+$")
  public String getCustomerListId() {
    return customerListId;
  }

  public void setCustomerListId(String customerListId) {
    this.customerListId = customerListId;
  }

  public AudienceRule engagementDomain(List<String> engagementDomain) {
    this.engagementDomain = engagementDomain;
    return this;
  }

  public AudienceRule addEngagementDomainItem(String engagementDomainItem) {
    if (this.engagementDomain == null) {
      this.engagementDomain = new ArrayList<>();
    }
    this.engagementDomain.add(engagementDomainItem);
    return this;
  }

  /**
   * The audience account&#39;s verified domain. **Required** for ENGAGEMENT &#x60;audience_type&#x60;.
   * @return engagementDomain
   **/
  @JsonProperty(value = "engagement_domain")
  @ApiModelProperty(example = "[\"www.somedomain.com\"]", value = "The audience account's verified domain. **Required** for ENGAGEMENT `audience_type`.")
  
  public List<String> getEngagementDomain() {
    return engagementDomain;
  }

  public void setEngagementDomain(List<String> engagementDomain) {
    this.engagementDomain = engagementDomain;
  }

  public AudienceRule engagementType(String engagementType) {
    this.engagementType = engagementType;
    return this;
  }

  /**
   * Engagement type enum. Optional for ENGAGEMENT &#x60;audience_type&#x60;. Supported values are &#x60;click&#x60;, &#x60;save&#x60;, &#x60;closeup&#x60;, &#x60;comment&#x60; and &#x60;like&#x60;. All engagements are included if this field is not set. 
   * @return engagementType
   **/
  @JsonProperty(value = "engagement_type")
  @ApiModelProperty(example = "click", value = "Engagement type enum. Optional for ENGAGEMENT `audience_type`. Supported values are `click`, `save`, `closeup`, `comment` and `like`. All engagements are included if this field is not set. ")
  
  public String getEngagementType() {
    return engagementType;
  }

  public void setEngagementType(String engagementType) {
    this.engagementType = engagementType;
  }

  public AudienceRule event(String event) {
    this.event = event;
    return this;
  }

  /**
   * A Pinterest tag event. Optional for VISITOR &#x60;audience_type&#x60;. Possible values are &#x60;pagevisit&#x60;, &#x60;signup&#x60;, &#x60;checkout&#x60;, &#x60;viewcategory&#x60;, &#x60;search&#x60;, &#x60;addtocart&#x60;, &#x60;watchvideo&#x60;, &#x60;lead&#x60;, and &#x60;custom&#x60;. This field also accepts a partner-defined Pinterest tag event.
   * @return event
   **/
  @JsonProperty(value = "event")
  @ApiModelProperty(example = "checkout", value = "A Pinterest tag event. Optional for VISITOR `audience_type`. Possible values are `pagevisit`, `signup`, `checkout`, `viewcategory`, `search`, `addtocart`, `watchvideo`, `lead`, and `custom`. This field also accepts a partner-defined Pinterest tag event.")
  
  public String getEvent() {
    return event;
  }

  public void setEvent(String event) {
    this.event = event;
  }

  public AudienceRule eventData(PinterestTagEventData eventData) {
    this.eventData = eventData;
    return this;
  }

  /**
   * Get eventData
   * @return eventData
   **/
  @JsonProperty(value = "event_data")
  @ApiModelProperty(value = "")
  @Valid 
  public PinterestTagEventData getEventData() {
    return eventData;
  }

  public void setEventData(PinterestTagEventData eventData) {
    this.eventData = eventData;
  }

  public AudienceRule percentage(Integer percentage) {
    this.percentage = percentage;
    return this;
  }

  /**
   * Percentage should be 1-10. The targeted audience should be this % size across Pinterest.
   * @return percentage
   **/
  @JsonProperty(value = "percentage")
  @ApiModelProperty(example = "3", value = "Percentage should be 1-10. The targeted audience should be this % size across Pinterest.")
  
  public Integer getPercentage() {
    return percentage;
  }

  public void setPercentage(Integer percentage) {
    this.percentage = percentage;
  }

  public AudienceRule pinId(List<@Pattern(regexp = "^\\d+$")String> pinId) {
    this.pinId = pinId;
    return this;
  }

  public AudienceRule addPinIdItem(String pinIdItem) {
    if (this.pinId == null) {
      this.pinId = new ArrayList<>();
    }
    this.pinId.add(pinIdItem);
    return this;
  }

  /**
   * IDs of engaged organic pins. Optional for ENGAGEMENT &#x60;audience_type&#x60;. For example, \&quot;pin_id:\&quot;: [\&quot;34567\&quot;]
   * @return pinId
   **/
  @JsonProperty(value = "pin_id")
  @ApiModelProperty(example = "[\"34567\"]", value = "IDs of engaged organic pins. Optional for ENGAGEMENT `audience_type`. For example, \"pin_id:\": [\"34567\"]")
  
  public List<@Pattern(regexp = "^\\d+$")String> getPinId() {
    return pinId;
  }

  public void setPinId(List<@Pattern(regexp = "^\\d+$")String> pinId) {
    this.pinId = pinId;
  }

  public AudienceRule prefill(Boolean prefill) {
    this.prefill = prefill;
    return this;
  }

  /**
   * Optional for VISITOR &#x60;audience_type&#x60;. If &#x60;true&#x60;, the specified rule on existing engagement data is applied to pre-populate the audience. If &#x60;false&#x60;, the audience is empty at creation time. The default is &#x60;true&#x60;.
   * @return prefill
   **/
  @JsonProperty(value = "prefill")
  @ApiModelProperty(example = "true", value = "Optional for VISITOR `audience_type`. If `true`, the specified rule on existing engagement data is applied to pre-populate the audience. If `false`, the audience is empty at creation time. The default is `true`.")
  
  public Boolean getPrefill() {
    return prefill;
  }

  public void setPrefill(Boolean prefill) {
    this.prefill = prefill;
  }

  public AudienceRule retentionDays(Integer retentionDays) {
    this.retentionDays = retentionDays;
    return this;
  }

  /**
   * Number of days a Pinterest user remains in the audience. Optional for ENGAGEMENT and VISITOR &#x60;audience_type&#x60;. Accepted range is 1-540. Defaults to 180 if not specified.
   * @return retentionDays
   **/
  @JsonProperty(value = "retention_days")
  @ApiModelProperty(example = "30", value = "Number of days a Pinterest user remains in the audience. Optional for ENGAGEMENT and VISITOR `audience_type`. Accepted range is 1-540. Defaults to 180 if not specified.")
  
  public Integer getRetentionDays() {
    return retentionDays;
  }

  public void setRetentionDays(Integer retentionDays) {
    this.retentionDays = retentionDays;
  }

  public AudienceRule seedId(List<@Pattern(regexp = "^\\d+$")String> seedId) {
    this.seedId = seedId;
    return this;
  }

  public AudienceRule addSeedIdItem(String seedIdItem) {
    if (this.seedId == null) {
      this.seedId = new ArrayList<>();
    }
    this.seedId.add(seedIdItem);
    return this;
  }

  /**
   * Audience ID(s). For ACTALIKE &#x60;audience_type&#x60;. 
   * @return seedId
   **/
  @JsonProperty(value = "seed_id")
  @ApiModelProperty(example = "[\"2542620639259\",\"2542620639261\"]", value = "Audience ID(s). For ACTALIKE `audience_type`. ")
  
  public List<@Pattern(regexp = "^\\d+$")String> getSeedId() {
    return seedId;
  }

  public void setSeedId(List<@Pattern(regexp = "^\\d+$")String> seedId) {
    this.seedId = seedId;
  }

  public AudienceRule url(List<String> url) {
    this.url = url;
    return this;
  }

  public AudienceRule addUrlItem(String urlItem) {
    if (this.url == null) {
      this.url = new ArrayList<>();
    }
    this.url.add(urlItem);
    return this;
  }

  /**
   * Optional for ENGAGEMENT or VISITOR &#x60;audience_type&#x60;. For ENGAGEMENT, it is the engaged pin&#39;s URL. For VISITOR, you can use it as a string or a {operator: value} object for filtering visitors based on conversion tag event URLs. Supported operators are [ &#x3D;, !&#x3D;, contains, not_contains].&lt;br&gt;Example 1:  \&quot;url\&quot;: \&quot;http://www.myonlinestore123.com/view_item/shoe\&quot;&lt;br&gt;Example 2: \&quot;url\&quot;: {\&quot;contains\&quot;: \&quot;/view_item/shoe\&quot;}
   * @return url
   **/
  @JsonProperty(value = "url")
  @ApiModelProperty(value = "Optional for ENGAGEMENT or VISITOR `audience_type`. For ENGAGEMENT, it is the engaged pin's URL. For VISITOR, you can use it as a string or a {operator: value} object for filtering visitors based on conversion tag event URLs. Supported operators are [ =, !=, contains, not_contains].<br>Example 1:  \"url\": \"http://www.myonlinestore123.com/view_item/shoe\"<br>Example 2: \"url\": {\"contains\": \"/view_item/shoe\"}")
  
  public List<String> getUrl() {
    return url;
  }

  public void setUrl(List<String> url) {
    this.url = url;
  }

  public AudienceRule visitorSourceId(String visitorSourceId) {
    this.visitorSourceId = visitorSourceId;
    return this;
  }

  /**
   * The conversion tag ID, or the Pinterest tag ID, that you use on your website. For VISITOR &#x60;audience_type&#x60;.
   * @return visitorSourceId
   **/
  @JsonProperty(value = "visitor_source_id")
  @ApiModelProperty(example = "549755885175", value = "The conversion tag ID, or the Pinterest tag ID, that you use on your website. For VISITOR `audience_type`.")
   @Pattern(regexp="^\\d+$")
  public String getVisitorSourceId() {
    return visitorSourceId;
  }

  public void setVisitorSourceId(String visitorSourceId) {
    this.visitorSourceId = visitorSourceId;
  }

  public AudienceRule eventSource(Object eventSource) {
    this.eventSource = eventSource;
    return this;
  }

  /**
   * Optional for VISITOR. You can use it as a {&#39;&#x3D;&#39;: [value]}. Supported values are: web, mobile, offline
   * @return eventSource
   **/
  @JsonProperty(value = "event_source")
  @ApiModelProperty(example = "{\"=\":[\"web\",\"mobile\"]}", value = "Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: web, mobile, offline")
  
  public Object getEventSource() {
    return eventSource;
  }

  public void setEventSource(Object eventSource) {
    this.eventSource = eventSource;
  }

  public AudienceRule ingestionSource(Object ingestionSource) {
    this.ingestionSource = ingestionSource;
    return this;
  }

  /**
   * Optional for VISITOR. You can use it as a {&#39;&#x3D;&#39;: [value]}. Supported values are: tag, mmp, file_upload, conversions_api
   * @return ingestionSource
   **/
  @JsonProperty(value = "ingestion_source")
  @ApiModelProperty(example = "{\"=\":[\"tag\"]}", value = "Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: tag, mmp, file_upload, conversions_api")
  
  public Object getIngestionSource() {
    return ingestionSource;
  }

  public void setIngestionSource(Object ingestionSource) {
    this.ingestionSource = ingestionSource;
  }

  public AudienceRule engagerType(Integer engagerType) {
    this.engagerType = engagerType;
    return this;
  }

  /**
   * Optional for ENGAGEMENT. Engager type value should be 1-2.
   * @return engagerType
   **/
  @JsonProperty(value = "engager_type")
  @ApiModelProperty(example = "1", value = "Optional for ENGAGEMENT. Engager type value should be 1-2.")
  
  public Integer getEngagerType() {
    return engagerType;
  }

  public void setEngagerType(Integer engagerType) {
    this.engagerType = engagerType;
  }

  public AudienceRule campaignId(List<@Pattern(regexp = "^\\d+$")String> campaignId) {
    this.campaignId = campaignId;
    return this;
  }

  public AudienceRule addCampaignIdItem(String campaignIdItem) {
    if (this.campaignId == null) {
      this.campaignId = new ArrayList<>();
    }
    this.campaignId.add(campaignIdItem);
    return this;
  }

  /**
   * Campaign ID for engagement audience filter.
   * @return campaignId
   **/
  @JsonProperty(value = "campaign_id")
  @ApiModelProperty(example = "[\"626744528398\"]", value = "Campaign ID for engagement audience filter.")
  
  public List<@Pattern(regexp = "^\\d+$")String> getCampaignId() {
    return campaignId;
  }

  public void setCampaignId(List<@Pattern(regexp = "^\\d+$")String> campaignId) {
    this.campaignId = campaignId;
  }

  public AudienceRule adId(List<@Pattern(regexp = "^\\d+$")String> adId) {
    this.adId = adId;
    return this;
  }

  public AudienceRule addAdIdItem(String adIdItem) {
    if (this.adId == null) {
      this.adId = new ArrayList<>();
    }
    this.adId.add(adIdItem);
    return this;
  }

  /**
   * Ad ID for engagement audience filter.
   * @return adId
   **/
  @JsonProperty(value = "ad_id")
  @ApiModelProperty(example = "[\"687201361754\"]", value = "Ad ID for engagement audience filter.")
  
  public List<@Pattern(regexp = "^\\d+$")String> getAdId() {
    return adId;
  }

  public void setAdId(List<@Pattern(regexp = "^\\d+$")String> adId) {
    this.adId = adId;
  }

  public AudienceRule objectiveType(List<ObjectiveType> objectiveType) {
    this.objectiveType = objectiveType;
    return this;
  }

  public AudienceRule addObjectiveTypeItem(ObjectiveType objectiveTypeItem) {
    if (this.objectiveType == null) {
      this.objectiveType = new ArrayList<>();
    }
    this.objectiveType.add(objectiveTypeItem);
    return this;
  }

  /**
   * Objective for engagement audience filter.
   * @return objectiveType
   **/
  @JsonProperty(value = "objective_type")
  @ApiModelProperty(example = "[\"AWARENESS\"]", value = "Objective for engagement audience filter.")
  @Valid 
  public List<ObjectiveType> getObjectiveType() {
    return objectiveType;
  }

  public void setObjectiveType(List<ObjectiveType> objectiveType) {
    this.objectiveType = objectiveType;
  }

  public AudienceRule adAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
    return this;
  }

  /**
   * Ad account ID.
   * @return adAccountId
   **/
  @JsonProperty(value = "ad_account_id")
  @ApiModelProperty(example = "549755885175", value = "Ad account ID.")
   @Pattern(regexp="^\\d+$")
  public String getAdAccountId() {
    return adAccountId;
  }

  public void setAdAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AudienceRule audienceRule = (AudienceRule) o;
    return Objects.equals(this.country, audienceRule.country) &&
        Objects.equals(this.customerListId, audienceRule.customerListId) &&
        Objects.equals(this.engagementDomain, audienceRule.engagementDomain) &&
        Objects.equals(this.engagementType, audienceRule.engagementType) &&
        Objects.equals(this.event, audienceRule.event) &&
        Objects.equals(this.eventData, audienceRule.eventData) &&
        Objects.equals(this.percentage, audienceRule.percentage) &&
        Objects.equals(this.pinId, audienceRule.pinId) &&
        Objects.equals(this.prefill, audienceRule.prefill) &&
        Objects.equals(this.retentionDays, audienceRule.retentionDays) &&
        Objects.equals(this.seedId, audienceRule.seedId) &&
        Objects.equals(this.url, audienceRule.url) &&
        Objects.equals(this.visitorSourceId, audienceRule.visitorSourceId) &&
        Objects.equals(this.eventSource, audienceRule.eventSource) &&
        Objects.equals(this.ingestionSource, audienceRule.ingestionSource) &&
        Objects.equals(this.engagerType, audienceRule.engagerType) &&
        Objects.equals(this.campaignId, audienceRule.campaignId) &&
        Objects.equals(this.adId, audienceRule.adId) &&
        Objects.equals(this.objectiveType, audienceRule.objectiveType) &&
        Objects.equals(this.adAccountId, audienceRule.adAccountId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(country, customerListId, engagementDomain, engagementType, event, eventData, percentage, pinId, prefill, retentionDays, seedId, url, visitorSourceId, eventSource, ingestionSource, engagerType, campaignId, adId, objectiveType, adAccountId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AudienceRule {\n");
    
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    customerListId: ").append(toIndentedString(customerListId)).append("\n");
    sb.append("    engagementDomain: ").append(toIndentedString(engagementDomain)).append("\n");
    sb.append("    engagementType: ").append(toIndentedString(engagementType)).append("\n");
    sb.append("    event: ").append(toIndentedString(event)).append("\n");
    sb.append("    eventData: ").append(toIndentedString(eventData)).append("\n");
    sb.append("    percentage: ").append(toIndentedString(percentage)).append("\n");
    sb.append("    pinId: ").append(toIndentedString(pinId)).append("\n");
    sb.append("    prefill: ").append(toIndentedString(prefill)).append("\n");
    sb.append("    retentionDays: ").append(toIndentedString(retentionDays)).append("\n");
    sb.append("    seedId: ").append(toIndentedString(seedId)).append("\n");
    sb.append("    url: ").append(toIndentedString(url)).append("\n");
    sb.append("    visitorSourceId: ").append(toIndentedString(visitorSourceId)).append("\n");
    sb.append("    eventSource: ").append(toIndentedString(eventSource)).append("\n");
    sb.append("    ingestionSource: ").append(toIndentedString(ingestionSource)).append("\n");
    sb.append("    engagerType: ").append(toIndentedString(engagerType)).append("\n");
    sb.append("    campaignId: ").append(toIndentedString(campaignId)).append("\n");
    sb.append("    adId: ").append(toIndentedString(adId)).append("\n");
    sb.append("    objectiveType: ").append(toIndentedString(objectiveType)).append("\n");
    sb.append("    adAccountId: ").append(toIndentedString(adAccountId)).append("\n");
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

