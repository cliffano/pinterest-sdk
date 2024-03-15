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
import com.fasterxml.jackson.annotation.JsonTypeName;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * AdCommonTrackingUrls
 */
@JsonPropertyOrder({
  AdCommonTrackingUrls.JSON_PROPERTY_IMPRESSION,
  AdCommonTrackingUrls.JSON_PROPERTY_CLICK,
  AdCommonTrackingUrls.JSON_PROPERTY_ENGAGEMENT,
  AdCommonTrackingUrls.JSON_PROPERTY_BUYABLE_BUTTON,
  AdCommonTrackingUrls.JSON_PROPERTY_AUDIENCE_VERIFICATION
})
@JsonTypeName("AdCommon_tracking_urls")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class AdCommonTrackingUrls {
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

    public AdCommonTrackingUrls() {
    }

    public AdCommonTrackingUrls impression(List<String> impression) {
        this.impression = impression;
        return this;
    }

    public AdCommonTrackingUrls addImpressionItem(String impressionItem) {
        if (this.impression == null) {
            this.impression = new ArrayList<>();
        }
        this.impression.add(impressionItem);
        return this;
    }

    /**
     * Get impression
     * @return impression
     **/
    @Nullable
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

    public AdCommonTrackingUrls click(List<String> click) {
        this.click = click;
        return this;
    }

    public AdCommonTrackingUrls addClickItem(String clickItem) {
        if (this.click == null) {
            this.click = new ArrayList<>();
        }
        this.click.add(clickItem);
        return this;
    }

    /**
     * Get click
     * @return click
     **/
    @Nullable
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

    public AdCommonTrackingUrls engagement(List<String> engagement) {
        this.engagement = engagement;
        return this;
    }

    public AdCommonTrackingUrls addEngagementItem(String engagementItem) {
        if (this.engagement == null) {
            this.engagement = new ArrayList<>();
        }
        this.engagement.add(engagementItem);
        return this;
    }

    /**
     * Get engagement
     * @return engagement
     **/
    @Nullable
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

    public AdCommonTrackingUrls buyableButton(List<String> buyableButton) {
        this.buyableButton = buyableButton;
        return this;
    }

    public AdCommonTrackingUrls addBuyableButtonItem(String buyableButtonItem) {
        if (this.buyableButton == null) {
            this.buyableButton = new ArrayList<>();
        }
        this.buyableButton.add(buyableButtonItem);
        return this;
    }

    /**
     * Get buyableButton
     * @return buyableButton
     **/
    @Nullable
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

    public AdCommonTrackingUrls audienceVerification(List<String> audienceVerification) {
        this.audienceVerification = audienceVerification;
        return this;
    }

    public AdCommonTrackingUrls addAudienceVerificationItem(String audienceVerificationItem) {
        if (this.audienceVerification == null) {
            this.audienceVerification = new ArrayList<>();
        }
        this.audienceVerification.add(audienceVerificationItem);
        return this;
    }

    /**
     * Get audienceVerification
     * @return audienceVerification
     **/
    @Nullable
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
        AdCommonTrackingUrls adCommonTrackingUrls = (AdCommonTrackingUrls) o;
        return Objects.equals(this.impression, adCommonTrackingUrls.impression) &&
            Objects.equals(this.click, adCommonTrackingUrls.click) &&
            Objects.equals(this.engagement, adCommonTrackingUrls.engagement) &&
            Objects.equals(this.buyableButton, adCommonTrackingUrls.buyableButton) &&
            Objects.equals(this.audienceVerification, adCommonTrackingUrls.audienceVerification);
    }

    @Override
    public int hashCode() {
        return Objects.hash(impression, click, engagement, buyableButton, audienceVerification);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class AdCommonTrackingUrls {\n");
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
