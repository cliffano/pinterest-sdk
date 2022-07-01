package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.PinPromotionSummaryStatus;

/**
 * AdResponseAllOf1
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2022-07-01T11:59:44.239108Z[Etc/UTC]")
public class AdResponseAllOf1   {
  @JsonProperty("ad_account_id")
  private String adAccountId;

  @JsonProperty("campaign_id")
  private String campaignId;

  @JsonProperty("collection_items_destination_url_template")
  private String collectionItemsDestinationUrlTemplate;

  @JsonProperty("created_time")
  private Integer createdTime;

  @JsonProperty("id")
  private String id;

  /**
   * ad disapproval reasons
   */
  public enum RejectedReasonsEnum {
    HASHTAGS("HASHTAGS"),
    
    PROMOTIONS_AND_PRICES("PROMOTIONS_AND_PRICES"),
    
    TARGETING("TARGETING"),
    
    LANDING_PAGE("LANDING_PAGE"),
    
    CAPS_AND_SYMBOLS("CAPS_AND_SYMBOLS"),
    
    SHOCKING("SHOCKING"),
    
    WEIGHT_LOSS("WEIGHT_LOSS"),
    
    PROHIBITED_PRODUCT("PROHIBITED_PRODUCT"),
    
    AUTHENTICITY("AUTHENTICITY"),
    
    NUDITY("NUDITY"),
    
    CONFUSING_DESIGN("CONFUSING_DESIGN"),
    
    URGENCY("URGENCY"),
    
    RATINGS("RATINGS"),
    
    APP("APP"),
    
    ALCOHOL("ALCOHOL"),
    
    CONTESTS("CONTESTS"),
    
    POLITICAL("POLITICAL"),
    
    OTHER("OTHER"),
    
    IMAGE("IMAGE"),
    
    NAR("NAR"),
    
    INCONSISTENT("INCONSISTENT"),
    
    CLICKBAIT("CLICKBAIT"),
    
    NO_DESCRIPTION("NO_DESCRIPTION"),
    
    LOW_QUALITY("LOW_QUALITY"),
    
    EXAGGERATED_CLAIMS("EXAGGERATED_CLAIMS"),
    
    PINTEREST_BRAND("PINTEREST_BRAND"),
    
    ALCOHOL_NO_SALE("ALCOHOL_NO_SALE"),
    
    LANDING_PAGE_SPEED("LANDING_PAGE_SPEED"),
    
    LANDING_PAGE_HARDWALL("LANDING_PAGE_HARDWALL"),
    
    LANDING_PAGE_BROKEN("LANDING_PAGE_BROKEN"),
    
    LANDING_PAGE_QUALITY("LANDING_PAGE_QUALITY"),
    
    OUT_OF_STOCK("OUT_OF_STOCK"),
    
    IMAGE_LOW_QUALITY("IMAGE_LOW_QUALITY"),
    
    IMAGE_BUSY("IMAGE_BUSY"),
    
    IMAGE_POORLY_EDITED("IMAGE_POORLY_EDITED"),
    
    IMAGE_BEFORE_AFTER("IMAGE_BEFORE_AFTER"),
    
    UGC("UGC"),
    
    FAKE_BUTTONS("FAKE_BUTTONS"),
    
    WEAPONS("WEAPONS"),
    
    SENSITIVE("SENSITIVE"),
    
    UNACCEPTABLE_BUSINESS("UNACCEPTABLE_BUSINESS"),
    
    SUSPICIOUS_CLAIMS("SUSPICIOUS_CLAIMS"),
    
    PHARMA("PHARMA"),
    
    SUSPICIOUS_SUPPLEMENTS("SUSPICIOUS_SUPPLEMENTS"),
    
    ILLEGAL_RECREATIONAL_DRUG("ILLEGAL_RECREATIONAL_DRUG"),
    
    LOW_QUALITY_LANDING_PAGE("LOW_QUALITY_LANDING_PAGE"),
    
    RESTRICTED_HEALTHCARE("RESTRICTED_HEALTHCARE"),
    
    INCONSISTENT_LANG_FR("INCONSISTENT_LANG_FR");

    private String value;

    RejectedReasonsEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }

    @JsonCreator
    public static RejectedReasonsEnum fromValue(String text) {
      for (RejectedReasonsEnum b : RejectedReasonsEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + text + "'");
    }
  }

  @JsonProperty("rejected_reasons")
  private List<RejectedReasonsEnum> rejectedReasons = null;

  @JsonProperty("rejection_labels")
  private List<String> rejectionLabels = null;

  /**
   * Ad review status
   */
  public enum ReviewStatusEnum {
    OTHER("OTHER"),
    
    PENDING("PENDING"),
    
    REJECTED("REJECTED"),
    
    APPROVED("APPROVED");

    private String value;

    ReviewStatusEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }

    @JsonCreator
    public static ReviewStatusEnum fromValue(String text) {
      for (ReviewStatusEnum b : ReviewStatusEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + text + "'");
    }
  }

  @JsonProperty("review_status")
  private ReviewStatusEnum reviewStatus;

  @JsonProperty("type")
  private String type;

  @JsonProperty("updated_time")
  private Integer updatedTime;

  @JsonProperty("summary_status")
  private PinPromotionSummaryStatus summaryStatus;

  public AdResponseAllOf1 adAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
    return this;
  }

   /**
   * The ID of the advertiser that this ad belongs to.
   * @return adAccountId
  **/
  @ApiModelProperty(example = "549755885175", value = "The ID of the advertiser that this ad belongs to.")
  public String getAdAccountId() {
    return adAccountId;
  }

  public void setAdAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
  }

  public AdResponseAllOf1 campaignId(String campaignId) {
    this.campaignId = campaignId;
    return this;
  }

   /**
   * ID of the ad campaign that contains this ad.
   * @return campaignId
  **/
  @ApiModelProperty(example = "626735565838", value = "ID of the ad campaign that contains this ad.")
  public String getCampaignId() {
    return campaignId;
  }

  public void setCampaignId(String campaignId) {
    this.campaignId = campaignId;
  }

  public AdResponseAllOf1 collectionItemsDestinationUrlTemplate(String collectionItemsDestinationUrlTemplate) {
    this.collectionItemsDestinationUrlTemplate = collectionItemsDestinationUrlTemplate;
    return this;
  }

   /**
   * Destination URL template for all items within a collections drawer.
   * @return collectionItemsDestinationUrlTemplate
  **/
  @ApiModelProperty(value = "Destination URL template for all items within a collections drawer.")
  public String getCollectionItemsDestinationUrlTemplate() {
    return collectionItemsDestinationUrlTemplate;
  }

  public void setCollectionItemsDestinationUrlTemplate(String collectionItemsDestinationUrlTemplate) {
    this.collectionItemsDestinationUrlTemplate = collectionItemsDestinationUrlTemplate;
  }

  public AdResponseAllOf1 createdTime(Integer createdTime) {
    this.createdTime = createdTime;
    return this;
  }

   /**
   * Pin creation time. Unix timestamp in seconds.
   * @return createdTime
  **/
  @ApiModelProperty(example = "1451431341", value = "Pin creation time. Unix timestamp in seconds.")
  public Integer getCreatedTime() {
    return createdTime;
  }

  public void setCreatedTime(Integer createdTime) {
    this.createdTime = createdTime;
  }

  public AdResponseAllOf1 id(String id) {
    this.id = id;
    return this;
  }

   /**
   * The ID of this ad.
   * @return id
  **/
  @ApiModelProperty(example = "687195134316", value = "The ID of this ad.")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public AdResponseAllOf1 rejectedReasons(List<RejectedReasonsEnum> rejectedReasons) {
    this.rejectedReasons = rejectedReasons;
    return this;
  }

  public AdResponseAllOf1 addRejectedReasonsItem(RejectedReasonsEnum rejectedReasonsItem) {
    if (this.rejectedReasons == null) {
      this.rejectedReasons = new ArrayList<RejectedReasonsEnum>();
    }
    this.rejectedReasons.add(rejectedReasonsItem);
    return this;
  }

   /**
   * Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
   * @return rejectedReasons
  **/
  @ApiModelProperty(value = "Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".")
  public List<RejectedReasonsEnum> getRejectedReasons() {
    return rejectedReasons;
  }

  public void setRejectedReasons(List<RejectedReasonsEnum> rejectedReasons) {
    this.rejectedReasons = rejectedReasons;
  }

  public AdResponseAllOf1 rejectionLabels(List<String> rejectionLabels) {
    this.rejectionLabels = rejectionLabels;
    return this;
  }

  public AdResponseAllOf1 addRejectionLabelsItem(String rejectionLabelsItem) {
    if (this.rejectionLabels == null) {
      this.rejectionLabels = new ArrayList<String>();
    }
    this.rejectionLabels.add(rejectionLabelsItem);
    return this;
  }

   /**
   * Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
   * @return rejectionLabels
  **/
  @ApiModelProperty(value = "Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".")
  public List<String> getRejectionLabels() {
    return rejectionLabels;
  }

  public void setRejectionLabels(List<String> rejectionLabels) {
    this.rejectionLabels = rejectionLabels;
  }

  public AdResponseAllOf1 reviewStatus(ReviewStatusEnum reviewStatus) {
    this.reviewStatus = reviewStatus;
    return this;
  }

   /**
   * Ad review status
   * @return reviewStatus
  **/
  @ApiModelProperty(example = "PENDING", value = "Ad review status")
  public ReviewStatusEnum getReviewStatus() {
    return reviewStatus;
  }

  public void setReviewStatus(ReviewStatusEnum reviewStatus) {
    this.reviewStatus = reviewStatus;
  }

  public AdResponseAllOf1 type(String type) {
    this.type = type;
    return this;
  }

   /**
   * Always \"ad\".
   * @return type
  **/
  @ApiModelProperty(example = "pinpromotion", value = "Always \"ad\".")
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public AdResponseAllOf1 updatedTime(Integer updatedTime) {
    this.updatedTime = updatedTime;
    return this;
  }

   /**
   * Last update time. Unix timestamp in seconds.
   * @return updatedTime
  **/
  @ApiModelProperty(example = "1451431341", value = "Last update time. Unix timestamp in seconds.")
  public Integer getUpdatedTime() {
    return updatedTime;
  }

  public void setUpdatedTime(Integer updatedTime) {
    this.updatedTime = updatedTime;
  }

  public AdResponseAllOf1 summaryStatus(PinPromotionSummaryStatus summaryStatus) {
    this.summaryStatus = summaryStatus;
    return this;
  }

   /**
   * Ad summary status
   * @return summaryStatus
  **/
  @ApiModelProperty(value = "Ad summary status")
  public PinPromotionSummaryStatus getSummaryStatus() {
    return summaryStatus;
  }

  public void setSummaryStatus(PinPromotionSummaryStatus summaryStatus) {
    this.summaryStatus = summaryStatus;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdResponseAllOf1 adResponseAllOf1 = (AdResponseAllOf1) o;
    return Objects.equals(this.adAccountId, adResponseAllOf1.adAccountId) &&
        Objects.equals(this.campaignId, adResponseAllOf1.campaignId) &&
        Objects.equals(this.collectionItemsDestinationUrlTemplate, adResponseAllOf1.collectionItemsDestinationUrlTemplate) &&
        Objects.equals(this.createdTime, adResponseAllOf1.createdTime) &&
        Objects.equals(this.id, adResponseAllOf1.id) &&
        Objects.equals(this.rejectedReasons, adResponseAllOf1.rejectedReasons) &&
        Objects.equals(this.rejectionLabels, adResponseAllOf1.rejectionLabels) &&
        Objects.equals(this.reviewStatus, adResponseAllOf1.reviewStatus) &&
        Objects.equals(this.type, adResponseAllOf1.type) &&
        Objects.equals(this.updatedTime, adResponseAllOf1.updatedTime) &&
        Objects.equals(this.summaryStatus, adResponseAllOf1.summaryStatus);
  }

  @Override
  public int hashCode() {
    return Objects.hash(adAccountId, campaignId, collectionItemsDestinationUrlTemplate, createdTime, id, rejectedReasons, rejectionLabels, reviewStatus, type, updatedTime, summaryStatus);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdResponseAllOf1 {\n");
    
    sb.append("    adAccountId: ").append(toIndentedString(adAccountId)).append("\n");
    sb.append("    campaignId: ").append(toIndentedString(campaignId)).append("\n");
    sb.append("    collectionItemsDestinationUrlTemplate: ").append(toIndentedString(collectionItemsDestinationUrlTemplate)).append("\n");
    sb.append("    createdTime: ").append(toIndentedString(createdTime)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    rejectedReasons: ").append(toIndentedString(rejectedReasons)).append("\n");
    sb.append("    rejectionLabels: ").append(toIndentedString(rejectionLabels)).append("\n");
    sb.append("    reviewStatus: ").append(toIndentedString(reviewStatus)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    updatedTime: ").append(toIndentedString(updatedTime)).append("\n");
    sb.append("    summaryStatus: ").append(toIndentedString(summaryStatus)).append("\n");
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

