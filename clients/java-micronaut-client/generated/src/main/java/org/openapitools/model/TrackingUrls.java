/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Third-party tracking URLs. Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Third-party and dynamic tracking&lt;/a&gt;.
 */
@ApiModel(description = "Third-party tracking URLs. Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>.")
@JsonPropertyOrder({
  TrackingUrls.JSON_PROPERTY_IMPRESSION,
  TrackingUrls.JSON_PROPERTY_CLICK,
  TrackingUrls.JSON_PROPERTY_ENGAGEMENT,
  TrackingUrls.JSON_PROPERTY_BUYABLE_BUTTON,
  TrackingUrls.JSON_PROPERTY_AUDIENCE_VERIFICATION
})
@JsonTypeName("TrackingUrls")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-05-07T06:38:30.955411Z[Etc/UTC]")
@Introspected
public class TrackingUrls {
    public static final String JSON_PROPERTY_IMPRESSION = "impression";
    private List<String> impression = null;

    public static final String JSON_PROPERTY_CLICK = "click";
    private List<String> click = null;

    public static final String JSON_PROPERTY_ENGAGEMENT = "engagement";
    private List<String> engagement = null;

    public static final String JSON_PROPERTY_BUYABLE_BUTTON = "buyable_button";
    private List<String> buyableButton = null;

    public static final String JSON_PROPERTY_AUDIENCE_VERIFICATION = "audience_verification";
    private List<String> audienceVerification = null;

    public TrackingUrls() {
    }

    public TrackingUrls impression(List<String> impression) {
        this.impression = impression;
        return this;
    }

    public TrackingUrls addImpressionItem(String impressionItem) {
        if (this.impression == null) {
            this.impression = new ArrayList<String>();
        }
        this.impression.add(impressionItem);
        return this;
    }

    /**
     * Get impression
     * @return impression
     **/
    @Nullable
    @Size(max=3)
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_IMPRESSION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public List<String> getImpression() {
        return impression;
    }

    @JsonProperty(JSON_PROPERTY_IMPRESSION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setImpression(List<String> impression) {
        this.impression = impression;
    }

    public TrackingUrls click(List<String> click) {
        this.click = click;
        return this;
    }

    public TrackingUrls addClickItem(String clickItem) {
        if (this.click == null) {
            this.click = new ArrayList<String>();
        }
        this.click.add(clickItem);
        return this;
    }

    /**
     * Get click
     * @return click
     **/
    @Nullable
    @Size(max=3)
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_CLICK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public List<String> getClick() {
        return click;
    }

    @JsonProperty(JSON_PROPERTY_CLICK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setClick(List<String> click) {
        this.click = click;
    }

    public TrackingUrls engagement(List<String> engagement) {
        this.engagement = engagement;
        return this;
    }

    public TrackingUrls addEngagementItem(String engagementItem) {
        if (this.engagement == null) {
            this.engagement = new ArrayList<String>();
        }
        this.engagement.add(engagementItem);
        return this;
    }

    /**
     * Get engagement
     * @return engagement
     **/
    @Nullable
    @Size(max=3)
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_ENGAGEMENT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public List<String> getEngagement() {
        return engagement;
    }

    @JsonProperty(JSON_PROPERTY_ENGAGEMENT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setEngagement(List<String> engagement) {
        this.engagement = engagement;
    }

    public TrackingUrls buyableButton(List<String> buyableButton) {
        this.buyableButton = buyableButton;
        return this;
    }

    public TrackingUrls addBuyableButtonItem(String buyableButtonItem) {
        if (this.buyableButton == null) {
            this.buyableButton = new ArrayList<String>();
        }
        this.buyableButton.add(buyableButtonItem);
        return this;
    }

    /**
     * Get buyableButton
     * @return buyableButton
     **/
    @Nullable
    @Size(max=3)
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_BUYABLE_BUTTON)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public List<String> getBuyableButton() {
        return buyableButton;
    }

    @JsonProperty(JSON_PROPERTY_BUYABLE_BUTTON)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setBuyableButton(List<String> buyableButton) {
        this.buyableButton = buyableButton;
    }

    public TrackingUrls audienceVerification(List<String> audienceVerification) {
        this.audienceVerification = audienceVerification;
        return this;
    }

    public TrackingUrls addAudienceVerificationItem(String audienceVerificationItem) {
        if (this.audienceVerification == null) {
            this.audienceVerification = new ArrayList<String>();
        }
        this.audienceVerification.add(audienceVerificationItem);
        return this;
    }

    /**
     * Get audienceVerification
     * @return audienceVerification
     **/
    @Nullable
    @Size(max=3)
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_AUDIENCE_VERIFICATION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public List<String> getAudienceVerification() {
        return audienceVerification;
    }

    @JsonProperty(JSON_PROPERTY_AUDIENCE_VERIFICATION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setAudienceVerification(List<String> audienceVerification) {
        this.audienceVerification = audienceVerification;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        TrackingUrls trackingUrls = (TrackingUrls) o;
        return Objects.equals(this.impression, trackingUrls.impression) &&
            Objects.equals(this.click, trackingUrls.click) &&
            Objects.equals(this.engagement, trackingUrls.engagement) &&
            Objects.equals(this.buyableButton, trackingUrls.buyableButton) &&
            Objects.equals(this.audienceVerification, trackingUrls.audienceVerification);
    }

    @Override
    public int hashCode() {
        return Objects.hash(impression, click, engagement, buyableButton, audienceVerification);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class TrackingUrls {\n");
        sb.append("    impression: ").append(toIndentedString(impression)).append("\n");
        sb.append("    click: ").append(toIndentedString(click)).append("\n");
        sb.append("    engagement: ").append(toIndentedString(engagement)).append("\n");
        sb.append("    buyableButton: ").append(toIndentedString(buyableButton)).append("\n");
        sb.append("    audienceVerification: ").append(toIndentedString(audienceVerification)).append("\n");
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
