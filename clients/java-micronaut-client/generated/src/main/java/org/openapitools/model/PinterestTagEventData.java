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
import org.openapitools.model.Currency;
import org.openapitools.model.LineItem;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Optional for VISITOR &#x60;audience_type&#x60;. With the Pinterest tag, you can use event data to capture event details from your website. This object lists all the available predefined event data fields in the Pinterest tag. You can include these event data fields as part of a VISITOR audience’s &#x60;rule&#x60;; however, you **must** specify an &#x60;event&#x60; for the &#x60;event_data&#x60; fields to be evaluated. Besides what’s listed, you can also create your own set of &#x60;event_data&#x60; fields and define their usages or purposes according to your website needs. However, the benefit of using the predefined event data fields is that we can provide various metrics based on those fields&#39; data.&lt;br&gt;Examples per &#x60;event&#x60; type:&lt;br&gt;&#x60;pagevisit&#x60;&lt;br&gt;\&quot;event_data\&quot;: { \&quot;page_name\&quot;: \&quot;My online store 123 | view items | shoe\&quot; }&lt;br&gt;&#x60;signup&#x60;&lt;br&gt;\&quot;event_data\&quot;: { \&quot;lead_type\&quot;: \&quot;New release promotion\&quot; }&lt;br&gt;&#x60;checkout&#x60;&lt;br&gt;\&quot;event_data\&quot;: { \&quot;value\&quot;: 116, \&quot;order_quantity\&quot;: 2, \&quot;currency\&quot;: \&quot;USD\&quot;, \&quot;line_items\&quot;: [ { \&quot;product_name\&quot;: \&quot;Pillows (Set of 2)\&quot;, \&quot;product_id\&quot;: \&quot;11\&quot;, \&quot;product_price\&quot;: 48, \&quot;product_quantity\&quot;: 1 }, { \&quot;product_name\&quot;: \&quot;Pillows, Large (Set of 2)\&quot;, \&quot;product_id\&quot;: \&quot;15\&quot;, \&quot;product_price\&quot;: 68, \&quot;product_quantity\&quot;: 1 } ] }&lt;br&gt;&#x60;addtocart&#x60;&lt;br&gt;\&quot;event_data\&quot;: { \&quot;value\&quot;: 499, \&quot;order_quantity\&quot;: 1, \&quot;currency\&quot;: \&quot;USD\&quot;, \&quot;line_items\&quot;: [ { \&quot;product_name\&quot;: \&quot;Red leather boots\&quot;, \&quot;product_id\&quot;: \&quot;3486\&quot;, \&quot;product_category\&quot;: \&quot;shoe\&quot;, \&quot;product_variant_id\&quot;: \&quot;JB11103000\&quot;, \&quot;product_price\&quot;: 499, \&quot;product_quantity\&quot;: \&quot;1\&quot;, \&quot;product_brand\&quot;: \&quot;My brand\&quot; }]}&lt;br&gt;&#x60;watchvideo&#x60;&lt;br&gt;\&quot;event_data\&quot;: { \&quot;video_title\&quot;: \&quot;My Product Video 01\&quot; }&lt;br&gt;&#x60;lead&#x60;&lt;br&gt;\&quot;event_data\&quot;: { \&quot;lead_type\&quot;: \&quot;Newsletter\&quot; }
 */
@JsonPropertyOrder({
  PinterestTagEventData.JSON_PROPERTY_CURRENCY,
  PinterestTagEventData.JSON_PROPERTY_LEAD_TYPE,
  PinterestTagEventData.JSON_PROPERTY_LINE_ITEMS,
  PinterestTagEventData.JSON_PROPERTY_ORDER_ID,
  PinterestTagEventData.JSON_PROPERTY_ORDER_QUANTITY,
  PinterestTagEventData.JSON_PROPERTY_PAGE_NAME,
  PinterestTagEventData.JSON_PROPERTY_PROMO_CODE,
  PinterestTagEventData.JSON_PROPERTY_PROPERTY,
  PinterestTagEventData.JSON_PROPERTY_SEARCH_QUERY,
  PinterestTagEventData.JSON_PROPERTY_VALUE,
  PinterestTagEventData.JSON_PROPERTY_VIDEO_TITLE
})
@JsonTypeName("PinterestTagEventData")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class PinterestTagEventData {
    public static final String JSON_PROPERTY_CURRENCY = "currency";
    private Currency currency;

    public static final String JSON_PROPERTY_LEAD_TYPE = "lead_type";
    private String leadType;

    public static final String JSON_PROPERTY_LINE_ITEMS = "line_items";
    private LineItem lineItems;

    public static final String JSON_PROPERTY_ORDER_ID = "order_id";
    private String orderId;

    public static final String JSON_PROPERTY_ORDER_QUANTITY = "order_quantity";
    private Integer orderQuantity;

    public static final String JSON_PROPERTY_PAGE_NAME = "page_name";
    private String pageName;

    public static final String JSON_PROPERTY_PROMO_CODE = "promo_code";
    private String promoCode;

    public static final String JSON_PROPERTY_PROPERTY = "property";
    private String property;

    public static final String JSON_PROPERTY_SEARCH_QUERY = "search_query";
    private String searchQuery;

    public static final String JSON_PROPERTY_VALUE = "value";
    private String value;

    public static final String JSON_PROPERTY_VIDEO_TITLE = "video_title";
    private String videoTitle;

    public PinterestTagEventData() {
    }

    public PinterestTagEventData currency(Currency currency) {
        this.currency = currency;
        return this;
    }

    /**
     * Get currency
     * @return currency
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Currency getCurrency() {
        return currency;
    }

    @JsonProperty(JSON_PROPERTY_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCurrency(Currency currency) {
        this.currency = currency;
    }

    public PinterestTagEventData leadType(String leadType) {
        this.leadType = leadType;
        return this;
    }

    /**
     * Promotion code. For example, \&quot;Newsletter\&quot;.
     * @return leadType
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_LEAD_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getLeadType() {
        return leadType;
    }

    @JsonProperty(JSON_PROPERTY_LEAD_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setLeadType(String leadType) {
        this.leadType = leadType;
    }

    public PinterestTagEventData lineItems(LineItem lineItems) {
        this.lineItems = lineItems;
        return this;
    }

    /**
     * Get lineItems
     * @return lineItems
     **/
    @Valid
    @Nullable
    @JsonProperty(JSON_PROPERTY_LINE_ITEMS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public LineItem getLineItems() {
        return lineItems;
    }

    @JsonProperty(JSON_PROPERTY_LINE_ITEMS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setLineItems(LineItem lineItems) {
        this.lineItems = lineItems;
    }

    public PinterestTagEventData orderId(String orderId) {
        this.orderId = orderId;
        return this;
    }

    /**
     * Order ID. For example, \&quot;X-151481\&quot;.
     * @return orderId
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_ORDER_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getOrderId() {
        return orderId;
    }

    @JsonProperty(JSON_PROPERTY_ORDER_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setOrderId(String orderId) {
        this.orderId = orderId;
    }

    public PinterestTagEventData orderQuantity(Integer orderQuantity) {
        this.orderQuantity = orderQuantity;
        return this;
    }

    /**
     * Order quantity. For example, 1.
     * @return orderQuantity
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_ORDER_QUANTITY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Integer getOrderQuantity() {
        return orderQuantity;
    }

    @JsonProperty(JSON_PROPERTY_ORDER_QUANTITY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setOrderQuantity(Integer orderQuantity) {
        this.orderQuantity = orderQuantity;
    }

    public PinterestTagEventData pageName(String pageName) {
        this.pageName = pageName;
        return this;
    }

    /**
     * Page name. For example, \&quot;Our Favorite Pins on Pinterest\&quot;.
     * @return pageName
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_PAGE_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getPageName() {
        return pageName;
    }

    @JsonProperty(JSON_PROPERTY_PAGE_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setPageName(String pageName) {
        this.pageName = pageName;
    }

    public PinterestTagEventData promoCode(String promoCode) {
        this.promoCode = promoCode;
        return this;
    }

    /**
     * Promotion code. For example, \&quot;WINTER10\&quot;.
     * @return promoCode
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_PROMO_CODE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getPromoCode() {
        return promoCode;
    }

    @JsonProperty(JSON_PROPERTY_PROMO_CODE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setPromoCode(String promoCode) {
        this.promoCode = promoCode;
    }

    public PinterestTagEventData property(String property) {
        this.property = property;
        return this;
    }

    /**
     * Property. For example, \&quot;Athleta\&quot;.
     * @return property
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_PROPERTY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getProperty() {
        return property;
    }

    @JsonProperty(JSON_PROPERTY_PROPERTY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setProperty(String property) {
        this.property = property;
    }

    public PinterestTagEventData searchQuery(String searchQuery) {
        this.searchQuery = searchQuery;
        return this;
    }

    /**
     * Search query string. For example, \&quot;boots\&quot;.
     * @return searchQuery
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_SEARCH_QUERY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getSearchQuery() {
        return searchQuery;
    }

    @JsonProperty(JSON_PROPERTY_SEARCH_QUERY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setSearchQuery(String searchQuery) {
        this.searchQuery = searchQuery;
    }

    public PinterestTagEventData value(String value) {
        this.value = value;
        return this;
    }

    /**
     * Product value. For example, \&quot;199.98\&quot;
     * @return value
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_VALUE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getValue() {
        return value;
    }

    @JsonProperty(JSON_PROPERTY_VALUE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setValue(String value) {
        this.value = value;
    }

    public PinterestTagEventData videoTitle(String videoTitle) {
        this.videoTitle = videoTitle;
        return this;
    }

    /**
     * Video title. For example, \&quot;How to style your Parker Boots\&quot;.
     * @return videoTitle
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_VIDEO_TITLE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getVideoTitle() {
        return videoTitle;
    }

    @JsonProperty(JSON_PROPERTY_VIDEO_TITLE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setVideoTitle(String videoTitle) {
        this.videoTitle = videoTitle;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        PinterestTagEventData pinterestTagEventData = (PinterestTagEventData) o;
        return Objects.equals(this.currency, pinterestTagEventData.currency) &&
            Objects.equals(this.leadType, pinterestTagEventData.leadType) &&
            Objects.equals(this.lineItems, pinterestTagEventData.lineItems) &&
            Objects.equals(this.orderId, pinterestTagEventData.orderId) &&
            Objects.equals(this.orderQuantity, pinterestTagEventData.orderQuantity) &&
            Objects.equals(this.pageName, pinterestTagEventData.pageName) &&
            Objects.equals(this.promoCode, pinterestTagEventData.promoCode) &&
            Objects.equals(this.property, pinterestTagEventData.property) &&
            Objects.equals(this.searchQuery, pinterestTagEventData.searchQuery) &&
            Objects.equals(this.value, pinterestTagEventData.value) &&
            Objects.equals(this.videoTitle, pinterestTagEventData.videoTitle);
    }

    @Override
    public int hashCode() {
        return Objects.hash(currency, leadType, lineItems, orderId, orderQuantity, pageName, promoCode, property, searchQuery, value, videoTitle);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class PinterestTagEventData {\n");
        sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
        sb.append("    leadType: ").append(toIndentedString(leadType)).append("\n");
        sb.append("    lineItems: ").append(toIndentedString(lineItems)).append("\n");
        sb.append("    orderId: ").append(toIndentedString(orderId)).append("\n");
        sb.append("    orderQuantity: ").append(toIndentedString(orderQuantity)).append("\n");
        sb.append("    pageName: ").append(toIndentedString(pageName)).append("\n");
        sb.append("    promoCode: ").append(toIndentedString(promoCode)).append("\n");
        sb.append("    property: ").append(toIndentedString(property)).append("\n");
        sb.append("    searchQuery: ").append(toIndentedString(searchQuery)).append("\n");
        sb.append("    value: ").append(toIndentedString(value)).append("\n");
        sb.append("    videoTitle: ").append(toIndentedString(videoTitle)).append("\n");
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

