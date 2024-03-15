/**
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

package org.openapitools.client.model;

import java.util.*;
import org.openapitools.client.model.ObjectiveType;
import org.openapitools.client.model.PinterestTagEventData;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * JSON object defining targeted audience users. Example rule formats per audience type:&lt;br&gt;CUSTOMER_LIST: { \&quot;customer_list_id\&quot;: \&quot;&amp;lt;customer list ID&amp;gt;\&quot;}&lt;br&gt;ACTALIKE: { \&quot;seed_id\&quot;: [\&quot;&amp;lt;audience ID&amp;gt;\&quot;], \&quot;country\&quot;: \&quot;US\&quot;, \&quot;percentage\&quot;: \&quot;10\&quot; }&lt;br&gt;(Valid countries include: \&quot;US\&quot;, \&quot;CA\&quot;, and \&quot;GB\&quot;. Percentage should be 1-10.&lt;br&gt;The targeted audience should be this % size across Pinterest.)&lt;br&gt;VISITOR: { \&quot;visitor_source_id\&quot;: [\&quot;&amp;lt;conversion tag ID&amp;gt;\&quot;], \&quot;retention_days\&quot;: \&quot;180\&quot;, \&quot;event_source\&quot;: {\&quot;&#x3D;\&quot;: [\&quot;web\&quot;, \&quot;mobile\&quot;]}, \&quot;ingestion_source\&quot;: {\&quot;&#x3D;\&quot;: [\&quot;tag\&quot;]}}&lt;br&gt;(Retention days should be 1-540. Retention applies to specific customers.)&lt;br&gt;ENGAGEMENT: {\&quot;engagement_domain\&quot;: [\&quot;www.entomi.com\&quot;], \&quot;engager_type\&quot;: 1}&lt;br&gt;For more details on engagement audiences, see &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/adtech_ads_v4/#section/November-2021\&quot; target&#x3D;\&quot;_blank\&quot;&gt;November 2021 changelog&lt;/a&gt;.
 **/
@ApiModel(description = "JSON object defining targeted audience users. Example rule formats per audience type:<br>CUSTOMER_LIST: { \"customer_list_id\": \"&lt;customer list ID&gt;\"}<br>ACTALIKE: { \"seed_id\": [\"&lt;audience ID&gt;\"], \"country\": \"US\", \"percentage\": \"10\" }<br>(Valid countries include: \"US\", \"CA\", and \"GB\". Percentage should be 1-10.<br>The targeted audience should be this % size across Pinterest.)<br>VISITOR: { \"visitor_source_id\": [\"&lt;conversion tag ID&gt;\"], \"retention_days\": \"180\", \"event_source\": {\"=\": [\"web\", \"mobile\"]}, \"ingestion_source\": {\"=\": [\"tag\"]}}<br>(Retention days should be 1-540. Retention applies to specific customers.)<br>ENGAGEMENT: {\"engagement_domain\": [\"www.entomi.com\"], \"engager_type\": 1}<br>For more details on engagement audiences, see <a href=\"https://developers.pinterest.com/docs/redoc/adtech_ads_v4/#section/November-2021\" target=\"_blank\">November 2021 changelog</a>.")
public class AudienceRule {
  
  @SerializedName("country")
  private String country = null;
  @SerializedName("customer_list_id")
  private String customerListId = null;
  @SerializedName("engagement_domain")
  private List<String> engagementDomain = null;
  @SerializedName("engagement_type")
  private String engagementType = null;
  @SerializedName("event")
  private String event = null;
  @SerializedName("event_data")
  private PinterestTagEventData eventData = null;
  @SerializedName("percentage")
  private Integer percentage = null;
  @SerializedName("pin_id")
  private List<String> pinId = null;
  @SerializedName("prefill")
  private Boolean prefill = null;
  @SerializedName("retention_days")
  private Integer retentionDays = null;
  @SerializedName("seed_id")
  private List<String> seedId = null;
  @SerializedName("url")
  private List<String> url = null;
  @SerializedName("visitor_source_id")
  private String visitorSourceId = null;
  @SerializedName("event_source")
  private Object eventSource = null;
  @SerializedName("ingestion_source")
  private Object ingestionSource = null;
  @SerializedName("engager_type")
  private Integer engagerType = null;
  @SerializedName("campaign_id")
  private List<String> campaignId = null;
  @SerializedName("ad_id")
  private List<String> adId = null;
  @SerializedName("objective_type")
  private List<ObjectiveType> objectiveType = null;
  @SerializedName("ad_account_id")
  private String adAccountId = null;

  /**
   * Valid countries include: \"US\", \"CA\", and \"GB\".
   **/
  @ApiModelProperty(value = "Valid countries include: \"US\", \"CA\", and \"GB\".")
  public String getCountry() {
    return country;
  }
  public void setCountry(String country) {
    this.country = country;
  }

  /**
   * Customer list ID. For CUSTOMER_LIST `audience_type`.
   **/
  @ApiModelProperty(value = "Customer list ID. For CUSTOMER_LIST `audience_type`.")
  public String getCustomerListId() {
    return customerListId;
  }
  public void setCustomerListId(String customerListId) {
    this.customerListId = customerListId;
  }

  /**
   * The audience account's verified domain. **Required** for ENGAGEMENT `audience_type`.
   **/
  @ApiModelProperty(value = "The audience account's verified domain. **Required** for ENGAGEMENT `audience_type`.")
  public List<String> getEngagementDomain() {
    return engagementDomain;
  }
  public void setEngagementDomain(List<String> engagementDomain) {
    this.engagementDomain = engagementDomain;
  }

  /**
   * Engagement type enum. Optional for ENGAGEMENT `audience_type`. Supported values are `click`, `save`, `closeup`, `comment` and `like`. All engagements are included if this field is not set. 
   **/
  @ApiModelProperty(value = "Engagement type enum. Optional for ENGAGEMENT `audience_type`. Supported values are `click`, `save`, `closeup`, `comment` and `like`. All engagements are included if this field is not set. ")
  public String getEngagementType() {
    return engagementType;
  }
  public void setEngagementType(String engagementType) {
    this.engagementType = engagementType;
  }

  /**
   * A Pinterest tag event. Optional for VISITOR `audience_type`. Possible values are `pagevisit`, `signup`, `checkout`, `viewcategory`, `search`, `addtocart`, `watchvideo`, `lead`, and `custom`. This field also accepts a partner-defined Pinterest tag event.
   **/
  @ApiModelProperty(value = "A Pinterest tag event. Optional for VISITOR `audience_type`. Possible values are `pagevisit`, `signup`, `checkout`, `viewcategory`, `search`, `addtocart`, `watchvideo`, `lead`, and `custom`. This field also accepts a partner-defined Pinterest tag event.")
  public String getEvent() {
    return event;
  }
  public void setEvent(String event) {
    this.event = event;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public PinterestTagEventData getEventData() {
    return eventData;
  }
  public void setEventData(PinterestTagEventData eventData) {
    this.eventData = eventData;
  }

  /**
   * Percentage should be 1-10. The targeted audience should be this % size across Pinterest.
   **/
  @ApiModelProperty(value = "Percentage should be 1-10. The targeted audience should be this % size across Pinterest.")
  public Integer getPercentage() {
    return percentage;
  }
  public void setPercentage(Integer percentage) {
    this.percentage = percentage;
  }

  /**
   * IDs of engaged organic pins. Optional for ENGAGEMENT `audience_type`. For example, \"pin_id:\": [\"34567\"]
   **/
  @ApiModelProperty(value = "IDs of engaged organic pins. Optional for ENGAGEMENT `audience_type`. For example, \"pin_id:\": [\"34567\"]")
  public List<String> getPinId() {
    return pinId;
  }
  public void setPinId(List<String> pinId) {
    this.pinId = pinId;
  }

  /**
   * Optional for VISITOR `audience_type`. If `true`, the specified rule on existing engagement data is applied to pre-populate the audience. If `false`, the audience is empty at creation time. The default is `true`.
   **/
  @ApiModelProperty(value = "Optional for VISITOR `audience_type`. If `true`, the specified rule on existing engagement data is applied to pre-populate the audience. If `false`, the audience is empty at creation time. The default is `true`.")
  public Boolean getPrefill() {
    return prefill;
  }
  public void setPrefill(Boolean prefill) {
    this.prefill = prefill;
  }

  /**
   * Number of days a Pinterest user remains in the audience. Optional for ENGAGEMENT and VISITOR `audience_type`. Accepted range is 1-540. Defaults to 180 if not specified.
   **/
  @ApiModelProperty(value = "Number of days a Pinterest user remains in the audience. Optional for ENGAGEMENT and VISITOR `audience_type`. Accepted range is 1-540. Defaults to 180 if not specified.")
  public Integer getRetentionDays() {
    return retentionDays;
  }
  public void setRetentionDays(Integer retentionDays) {
    this.retentionDays = retentionDays;
  }

  /**
   * Audience ID(s). For ACTALIKE `audience_type`. 
   **/
  @ApiModelProperty(value = "Audience ID(s). For ACTALIKE `audience_type`. ")
  public List<String> getSeedId() {
    return seedId;
  }
  public void setSeedId(List<String> seedId) {
    this.seedId = seedId;
  }

  /**
   * Optional for ENGAGEMENT or VISITOR `audience_type`. For ENGAGEMENT, it is the engaged pin's URL. For VISITOR, you can use it as a string or a {operator: value} object for filtering visitors based on conversion tag event URLs. Supported operators are [ =, !=, contains, not_contains].<br>Example 1:  \"url\": \"http://www.myonlinestore123.com/view_item/shoe\"<br>Example 2: \"url\": {\"contains\": \"/view_item/shoe\"}
   **/
  @ApiModelProperty(value = "Optional for ENGAGEMENT or VISITOR `audience_type`. For ENGAGEMENT, it is the engaged pin's URL. For VISITOR, you can use it as a string or a {operator: value} object for filtering visitors based on conversion tag event URLs. Supported operators are [ =, !=, contains, not_contains].<br>Example 1:  \"url\": \"http://www.myonlinestore123.com/view_item/shoe\"<br>Example 2: \"url\": {\"contains\": \"/view_item/shoe\"}")
  public List<String> getUrl() {
    return url;
  }
  public void setUrl(List<String> url) {
    this.url = url;
  }

  /**
   * The conversion tag ID, or the Pinterest tag ID, that you use on your website. For VISITOR `audience_type`.
   **/
  @ApiModelProperty(value = "The conversion tag ID, or the Pinterest tag ID, that you use on your website. For VISITOR `audience_type`.")
  public String getVisitorSourceId() {
    return visitorSourceId;
  }
  public void setVisitorSourceId(String visitorSourceId) {
    this.visitorSourceId = visitorSourceId;
  }

  /**
   * Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: web, mobile, offline
   **/
  @ApiModelProperty(value = "Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: web, mobile, offline")
  public Object getEventSource() {
    return eventSource;
  }
  public void setEventSource(Object eventSource) {
    this.eventSource = eventSource;
  }

  /**
   * Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: tag, mmp, file_upload, conversions_api
   **/
  @ApiModelProperty(value = "Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: tag, mmp, file_upload, conversions_api")
  public Object getIngestionSource() {
    return ingestionSource;
  }
  public void setIngestionSource(Object ingestionSource) {
    this.ingestionSource = ingestionSource;
  }

  /**
   * Optional for ENGAGEMENT. Engager type value should be 1-2.
   **/
  @ApiModelProperty(value = "Optional for ENGAGEMENT. Engager type value should be 1-2.")
  public Integer getEngagerType() {
    return engagerType;
  }
  public void setEngagerType(Integer engagerType) {
    this.engagerType = engagerType;
  }

  /**
   * Campaign ID for engagement audience filter.
   **/
  @ApiModelProperty(value = "Campaign ID for engagement audience filter.")
  public List<String> getCampaignId() {
    return campaignId;
  }
  public void setCampaignId(List<String> campaignId) {
    this.campaignId = campaignId;
  }

  /**
   * Ad ID for engagement audience filter.
   **/
  @ApiModelProperty(value = "Ad ID for engagement audience filter.")
  public List<String> getAdId() {
    return adId;
  }
  public void setAdId(List<String> adId) {
    this.adId = adId;
  }

  /**
   * Objective for engagement audience filter.
   **/
  @ApiModelProperty(value = "Objective for engagement audience filter.")
  public List<ObjectiveType> getObjectiveType() {
    return objectiveType;
  }
  public void setObjectiveType(List<ObjectiveType> objectiveType) {
    this.objectiveType = objectiveType;
  }

  /**
   * Ad account ID.
   **/
  @ApiModelProperty(value = "Ad account ID.")
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
    return (this.country == null ? audienceRule.country == null : this.country.equals(audienceRule.country)) &&
        (this.customerListId == null ? audienceRule.customerListId == null : this.customerListId.equals(audienceRule.customerListId)) &&
        (this.engagementDomain == null ? audienceRule.engagementDomain == null : this.engagementDomain.equals(audienceRule.engagementDomain)) &&
        (this.engagementType == null ? audienceRule.engagementType == null : this.engagementType.equals(audienceRule.engagementType)) &&
        (this.event == null ? audienceRule.event == null : this.event.equals(audienceRule.event)) &&
        (this.eventData == null ? audienceRule.eventData == null : this.eventData.equals(audienceRule.eventData)) &&
        (this.percentage == null ? audienceRule.percentage == null : this.percentage.equals(audienceRule.percentage)) &&
        (this.pinId == null ? audienceRule.pinId == null : this.pinId.equals(audienceRule.pinId)) &&
        (this.prefill == null ? audienceRule.prefill == null : this.prefill.equals(audienceRule.prefill)) &&
        (this.retentionDays == null ? audienceRule.retentionDays == null : this.retentionDays.equals(audienceRule.retentionDays)) &&
        (this.seedId == null ? audienceRule.seedId == null : this.seedId.equals(audienceRule.seedId)) &&
        (this.url == null ? audienceRule.url == null : this.url.equals(audienceRule.url)) &&
        (this.visitorSourceId == null ? audienceRule.visitorSourceId == null : this.visitorSourceId.equals(audienceRule.visitorSourceId)) &&
        (this.eventSource == null ? audienceRule.eventSource == null : this.eventSource.equals(audienceRule.eventSource)) &&
        (this.ingestionSource == null ? audienceRule.ingestionSource == null : this.ingestionSource.equals(audienceRule.ingestionSource)) &&
        (this.engagerType == null ? audienceRule.engagerType == null : this.engagerType.equals(audienceRule.engagerType)) &&
        (this.campaignId == null ? audienceRule.campaignId == null : this.campaignId.equals(audienceRule.campaignId)) &&
        (this.adId == null ? audienceRule.adId == null : this.adId.equals(audienceRule.adId)) &&
        (this.objectiveType == null ? audienceRule.objectiveType == null : this.objectiveType.equals(audienceRule.objectiveType)) &&
        (this.adAccountId == null ? audienceRule.adAccountId == null : this.adAccountId.equals(audienceRule.adAccountId));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.country == null ? 0: this.country.hashCode());
    result = 31 * result + (this.customerListId == null ? 0: this.customerListId.hashCode());
    result = 31 * result + (this.engagementDomain == null ? 0: this.engagementDomain.hashCode());
    result = 31 * result + (this.engagementType == null ? 0: this.engagementType.hashCode());
    result = 31 * result + (this.event == null ? 0: this.event.hashCode());
    result = 31 * result + (this.eventData == null ? 0: this.eventData.hashCode());
    result = 31 * result + (this.percentage == null ? 0: this.percentage.hashCode());
    result = 31 * result + (this.pinId == null ? 0: this.pinId.hashCode());
    result = 31 * result + (this.prefill == null ? 0: this.prefill.hashCode());
    result = 31 * result + (this.retentionDays == null ? 0: this.retentionDays.hashCode());
    result = 31 * result + (this.seedId == null ? 0: this.seedId.hashCode());
    result = 31 * result + (this.url == null ? 0: this.url.hashCode());
    result = 31 * result + (this.visitorSourceId == null ? 0: this.visitorSourceId.hashCode());
    result = 31 * result + (this.eventSource == null ? 0: this.eventSource.hashCode());
    result = 31 * result + (this.ingestionSource == null ? 0: this.ingestionSource.hashCode());
    result = 31 * result + (this.engagerType == null ? 0: this.engagerType.hashCode());
    result = 31 * result + (this.campaignId == null ? 0: this.campaignId.hashCode());
    result = 31 * result + (this.adId == null ? 0: this.adId.hashCode());
    result = 31 * result + (this.objectiveType == null ? 0: this.objectiveType.hashCode());
    result = 31 * result + (this.adAccountId == null ? 0: this.adAccountId.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class AudienceRule {\n");
    
    sb.append("  country: ").append(country).append("\n");
    sb.append("  customerListId: ").append(customerListId).append("\n");
    sb.append("  engagementDomain: ").append(engagementDomain).append("\n");
    sb.append("  engagementType: ").append(engagementType).append("\n");
    sb.append("  event: ").append(event).append("\n");
    sb.append("  eventData: ").append(eventData).append("\n");
    sb.append("  percentage: ").append(percentage).append("\n");
    sb.append("  pinId: ").append(pinId).append("\n");
    sb.append("  prefill: ").append(prefill).append("\n");
    sb.append("  retentionDays: ").append(retentionDays).append("\n");
    sb.append("  seedId: ").append(seedId).append("\n");
    sb.append("  url: ").append(url).append("\n");
    sb.append("  visitorSourceId: ").append(visitorSourceId).append("\n");
    sb.append("  eventSource: ").append(eventSource).append("\n");
    sb.append("  ingestionSource: ").append(ingestionSource).append("\n");
    sb.append("  engagerType: ").append(engagerType).append("\n");
    sb.append("  campaignId: ").append(campaignId).append("\n");
    sb.append("  adId: ").append(adId).append("\n");
    sb.append("  objectiveType: ").append(objectiveType).append("\n");
    sb.append("  adAccountId: ").append(adAccountId).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
