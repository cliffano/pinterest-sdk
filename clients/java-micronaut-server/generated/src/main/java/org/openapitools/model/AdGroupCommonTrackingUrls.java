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
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * Third-party tracking URLs.&lt;br&gt; JSON object with the format: {\&quot;&lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\&quot;&gt;Tracking event enum&lt;/a&gt;\&quot;:[URL string array],...}&lt;br&gt; For example: {\&quot;impression\&quot;: [\&quot;URL1\&quot;, \&quot;URL2\&quot;], \&quot;click\&quot;: [\&quot;URL1\&quot;, \&quot;URL2\&quot;, \&quot;URL3\&quot;]}.&lt;br&gt;Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.&lt;br&gt;&lt;br&gt; For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Third-party and dynamic tracking&lt;/a&gt;.
 */
@Schema(name = "AdGroupCommon_tracking_urls", description = "Third-party tracking URLs.<br> JSON object with the format: {\"<a href=\"https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\">Tracking event enum</a>\":[URL string array],...}<br> For example: {\"impression\": [\"URL1\", \"URL2\"], \"click\": [\"URL1\", \"URL2\", \"URL3\"]}.<br>Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.<br><br> For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>.")
@JsonPropertyOrder({
  AdGroupCommonTrackingUrls.JSON_PROPERTY_IMPRESSION,
  AdGroupCommonTrackingUrls.JSON_PROPERTY_CLICK,
  AdGroupCommonTrackingUrls.JSON_PROPERTY_ENGAGEMENT,
  AdGroupCommonTrackingUrls.JSON_PROPERTY_BUYABLE_BUTTON,
  AdGroupCommonTrackingUrls.JSON_PROPERTY_AUDIENCE_VERIFICATION
})
@JsonTypeName("AdGroupCommon_tracking_urls")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class AdGroupCommonTrackingUrls {
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

    public AdGroupCommonTrackingUrls() {
    }

    public AdGroupCommonTrackingUrls impression(List<String> impression) {
        this.impression = impression;
        return this;
    }

    public AdGroupCommonTrackingUrls addImpressionItem(String impressionItem) {
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
    @Schema(name = "impression", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdGroupCommonTrackingUrls click(List<String> click) {
        this.click = click;
        return this;
    }

    public AdGroupCommonTrackingUrls addClickItem(String clickItem) {
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
    @Schema(name = "click", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdGroupCommonTrackingUrls engagement(List<String> engagement) {
        this.engagement = engagement;
        return this;
    }

    public AdGroupCommonTrackingUrls addEngagementItem(String engagementItem) {
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
    @Schema(name = "engagement", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdGroupCommonTrackingUrls buyableButton(List<String> buyableButton) {
        this.buyableButton = buyableButton;
        return this;
    }

    public AdGroupCommonTrackingUrls addBuyableButtonItem(String buyableButtonItem) {
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
    @Schema(name = "buyable_button", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public AdGroupCommonTrackingUrls audienceVerification(List<String> audienceVerification) {
        this.audienceVerification = audienceVerification;
        return this;
    }

    public AdGroupCommonTrackingUrls addAudienceVerificationItem(String audienceVerificationItem) {
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
    @Schema(name = "audience_verification", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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
        AdGroupCommonTrackingUrls adGroupCommonTrackingUrls = (AdGroupCommonTrackingUrls) o;
        return Objects.equals(this.impression, adGroupCommonTrackingUrls.impression) &&
            Objects.equals(this.click, adGroupCommonTrackingUrls.click) &&
            Objects.equals(this.engagement, adGroupCommonTrackingUrls.engagement) &&
            Objects.equals(this.buyableButton, adGroupCommonTrackingUrls.buyableButton) &&
            Objects.equals(this.audienceVerification, adGroupCommonTrackingUrls.audienceVerification);
    }

    @Override
    public int hashCode() {
        return Objects.hash(impression, click, engagement, buyableButton, audienceVerification);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class AdGroupCommonTrackingUrls {\n");
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

