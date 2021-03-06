/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Org.OpenAPITools.Converters;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class AdsAnalyticsCreateAsyncRequest : IEquatable<AdsAnalyticsCreateAsyncRequest>
    {
        /// <summary>
        /// Metric report start date (UTC). Format: YYYY-MM-DD
        /// </summary>
        /// <value>Metric report start date (UTC). Format: YYYY-MM-DD</value>
        [Required]
        [RegularExpression("^(\\d{4})-(\\d{2})-(\\d{2})$")]
        [DataMember(Name="start_date", EmitDefaultValue=false)]
        public string StartDate { get; set; }

        /// <summary>
        /// Metric report end date (UTC). Format: YYYY-MM-DD
        /// </summary>
        /// <value>Metric report end date (UTC). Format: YYYY-MM-DD</value>
        [Required]
        [RegularExpression("^(\\d{4})-(\\d{2})-(\\d{2})$")]
        [DataMember(Name="end_date", EmitDefaultValue=false)]
        public string EndDate { get; set; }

        /// <summary>
        /// TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly
        /// </summary>
        /// <value>TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly</value>
        [Required]
        [DataMember(Name="granularity", EmitDefaultValue=false)]
        public Granularity Granularity { get; set; }

        /// <summary>
        /// Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
        /// </summary>
        /// <value>Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.</value>
        [DataMember(Name="click_window_days", EmitDefaultValue=false)]
        public ConversionAttributionWindowDays ClickWindowDays { get; set; } = 30;

        /// <summary>
        /// Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
        /// </summary>
        /// <value>Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.</value>
        [DataMember(Name="engagement_window_days", EmitDefaultValue=false)]
        public ConversionAttributionWindowDays EngagementWindowDays { get; set; } = 30;

        /// <summary>
        /// Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day.
        /// </summary>
        /// <value>Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day.</value>
        [DataMember(Name="view_window_days", EmitDefaultValue=false)]
        public ConversionAttributionWindowDays ViewWindowDays { get; set; } = 1;

        /// <summary>
        /// The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
        /// </summary>
        /// <value>The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.</value>
        [DataMember(Name="conversion_report_time", EmitDefaultValue=false)]
        public ConversionReportTimeType ConversionReportTime { get; set; } = "TIME_OF_AD_ACTION";

        /// <summary>
        /// List of types of attribution for the conversion report
        /// </summary>
        /// <value>List of types of attribution for the conversion report</value>
        [DataMember(Name="attribution_types", EmitDefaultValue=false)]
        public List<ConversionReportAttributionType> AttributionTypes { get; set; }

        /// <summary>
        /// Metric and entity columns
        /// </summary>
        /// <value>Metric and entity columns</value>
        [Required]
        [DataMember(Name="columns", EmitDefaultValue=false)]
        public List<ReportingColumnAsync> Columns { get; set; }

        /// <summary>
        /// Level of the report
        /// </summary>
        /// <value>Level of the report</value>
        [Required]
        [DataMember(Name="level", EmitDefaultValue=false)]
        public MetricsReportingLevel Level { get; set; }

        /// <summary>
        /// Specification for formatting report data
        /// </summary>
        /// <value>Specification for formatting report data</value>
        [DataMember(Name="report_format", EmitDefaultValue=false)]
        public DataOutputFormat ReportFormat { get; set; } = "JSON";

        /// <summary>
        /// List of campaign ids
        /// </summary>
        /// <value>List of campaign ids</value>
        [DataMember(Name="campaign_ids", EmitDefaultValue=false)]
        public List<string> CampaignIds { get; set; }

        /// <summary>
        /// List of status values for filtering
        /// </summary>
        /// <value>List of status values for filtering</value>
        [DataMember(Name="campaign_statuses", EmitDefaultValue=false)]
        public List<CampaignSummaryStatus> CampaignStatuses { get; set; }

        /// <summary>
        /// List of values for filtering
        /// </summary>
        /// <value>List of values for filtering</value>
        [DataMember(Name="campaign_objective_types", EmitDefaultValue=false)]
        public List<ObjectiveType> CampaignObjectiveTypes { get; set; }

        /// <summary>
        /// List of ad group ids
        /// </summary>
        /// <value>List of ad group ids</value>
        [DataMember(Name="ad_group_ids", EmitDefaultValue=false)]
        public List<string> AdGroupIds { get; set; }

        /// <summary>
        /// List of values for filtering
        /// </summary>
        /// <value>List of values for filtering</value>
        [DataMember(Name="ad_group_statuses", EmitDefaultValue=false)]
        public List<AdGroupSummaryStatus> AdGroupStatuses { get; set; }

        /// <summary>
        /// List of ad ids
        /// </summary>
        /// <value>List of ad ids</value>
        [DataMember(Name="ad_ids", EmitDefaultValue=false)]
        public List<string> AdIds { get; set; }

        /// <summary>
        /// List of values for filtering
        /// </summary>
        /// <value>List of values for filtering</value>
        [DataMember(Name="ad_statuses", EmitDefaultValue=false)]
        public List<PinPromotionSummaryStatus> AdStatuses { get; set; }

        /// <summary>
        /// List of product group ids
        /// </summary>
        /// <value>List of product group ids</value>
        [DataMember(Name="product_group_ids", EmitDefaultValue=false)]
        public List<string> ProductGroupIds { get; set; }

        /// <summary>
        /// List of values for filtering
        /// </summary>
        /// <value>List of values for filtering</value>
        [DataMember(Name="product_group_statuses", EmitDefaultValue=false)]
        public List<ProductGroupSummaryStatus> ProductGroupStatuses { get; set; }

        /// <summary>
        /// List of product item ids
        /// </summary>
        /// <value>List of product item ids</value>
        [DataMember(Name="product_item_ids", EmitDefaultValue=false)]
        public List<string> ProductItemIds { get; set; }

        /// <summary>
        /// List of targeting types
        /// </summary>
        /// <value>List of targeting types</value>
        [DataMember(Name="targeting_types", EmitDefaultValue=false)]
        public List<AdsAnalyticsTargetingType> TargetingTypes { get; set; }

        /// <summary>
        /// List of metrics filters
        /// </summary>
        /// <value>List of metrics filters</value>
        [DataMember(Name="metrics_filters", EmitDefaultValue=false)]
        public List<AdsAnalyticsMetricsFilter> MetricsFilters { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class AdsAnalyticsCreateAsyncRequest {\n");
            sb.Append("  StartDate: ").Append(StartDate).Append("\n");
            sb.Append("  EndDate: ").Append(EndDate).Append("\n");
            sb.Append("  Granularity: ").Append(Granularity).Append("\n");
            sb.Append("  ClickWindowDays: ").Append(ClickWindowDays).Append("\n");
            sb.Append("  EngagementWindowDays: ").Append(EngagementWindowDays).Append("\n");
            sb.Append("  ViewWindowDays: ").Append(ViewWindowDays).Append("\n");
            sb.Append("  ConversionReportTime: ").Append(ConversionReportTime).Append("\n");
            sb.Append("  AttributionTypes: ").Append(AttributionTypes).Append("\n");
            sb.Append("  Columns: ").Append(Columns).Append("\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("  ReportFormat: ").Append(ReportFormat).Append("\n");
            sb.Append("  CampaignIds: ").Append(CampaignIds).Append("\n");
            sb.Append("  CampaignStatuses: ").Append(CampaignStatuses).Append("\n");
            sb.Append("  CampaignObjectiveTypes: ").Append(CampaignObjectiveTypes).Append("\n");
            sb.Append("  AdGroupIds: ").Append(AdGroupIds).Append("\n");
            sb.Append("  AdGroupStatuses: ").Append(AdGroupStatuses).Append("\n");
            sb.Append("  AdIds: ").Append(AdIds).Append("\n");
            sb.Append("  AdStatuses: ").Append(AdStatuses).Append("\n");
            sb.Append("  ProductGroupIds: ").Append(ProductGroupIds).Append("\n");
            sb.Append("  ProductGroupStatuses: ").Append(ProductGroupStatuses).Append("\n");
            sb.Append("  ProductItemIds: ").Append(ProductItemIds).Append("\n");
            sb.Append("  TargetingTypes: ").Append(TargetingTypes).Append("\n");
            sb.Append("  MetricsFilters: ").Append(MetricsFilters).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((AdsAnalyticsCreateAsyncRequest)obj);
        }

        /// <summary>
        /// Returns true if AdsAnalyticsCreateAsyncRequest instances are equal
        /// </summary>
        /// <param name="other">Instance of AdsAnalyticsCreateAsyncRequest to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AdsAnalyticsCreateAsyncRequest other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    StartDate == other.StartDate ||
                    StartDate != null &&
                    StartDate.Equals(other.StartDate)
                ) && 
                (
                    EndDate == other.EndDate ||
                    EndDate != null &&
                    EndDate.Equals(other.EndDate)
                ) && 
                (
                    Granularity == other.Granularity ||
                    
                    Granularity.Equals(other.Granularity)
                ) && 
                (
                    ClickWindowDays == other.ClickWindowDays ||
                    
                    ClickWindowDays.Equals(other.ClickWindowDays)
                ) && 
                (
                    EngagementWindowDays == other.EngagementWindowDays ||
                    
                    EngagementWindowDays.Equals(other.EngagementWindowDays)
                ) && 
                (
                    ViewWindowDays == other.ViewWindowDays ||
                    
                    ViewWindowDays.Equals(other.ViewWindowDays)
                ) && 
                (
                    ConversionReportTime == other.ConversionReportTime ||
                    
                    ConversionReportTime.Equals(other.ConversionReportTime)
                ) && 
                (
                    AttributionTypes == other.AttributionTypes ||
                    AttributionTypes != null &&
                    other.AttributionTypes != null &&
                    AttributionTypes.SequenceEqual(other.AttributionTypes)
                ) && 
                (
                    Columns == other.Columns ||
                    Columns != null &&
                    other.Columns != null &&
                    Columns.SequenceEqual(other.Columns)
                ) && 
                (
                    Level == other.Level ||
                    
                    Level.Equals(other.Level)
                ) && 
                (
                    ReportFormat == other.ReportFormat ||
                    
                    ReportFormat.Equals(other.ReportFormat)
                ) && 
                (
                    CampaignIds == other.CampaignIds ||
                    CampaignIds != null &&
                    other.CampaignIds != null &&
                    CampaignIds.SequenceEqual(other.CampaignIds)
                ) && 
                (
                    CampaignStatuses == other.CampaignStatuses ||
                    CampaignStatuses != null &&
                    other.CampaignStatuses != null &&
                    CampaignStatuses.SequenceEqual(other.CampaignStatuses)
                ) && 
                (
                    CampaignObjectiveTypes == other.CampaignObjectiveTypes ||
                    CampaignObjectiveTypes != null &&
                    other.CampaignObjectiveTypes != null &&
                    CampaignObjectiveTypes.SequenceEqual(other.CampaignObjectiveTypes)
                ) && 
                (
                    AdGroupIds == other.AdGroupIds ||
                    AdGroupIds != null &&
                    other.AdGroupIds != null &&
                    AdGroupIds.SequenceEqual(other.AdGroupIds)
                ) && 
                (
                    AdGroupStatuses == other.AdGroupStatuses ||
                    AdGroupStatuses != null &&
                    other.AdGroupStatuses != null &&
                    AdGroupStatuses.SequenceEqual(other.AdGroupStatuses)
                ) && 
                (
                    AdIds == other.AdIds ||
                    AdIds != null &&
                    other.AdIds != null &&
                    AdIds.SequenceEqual(other.AdIds)
                ) && 
                (
                    AdStatuses == other.AdStatuses ||
                    AdStatuses != null &&
                    other.AdStatuses != null &&
                    AdStatuses.SequenceEqual(other.AdStatuses)
                ) && 
                (
                    ProductGroupIds == other.ProductGroupIds ||
                    ProductGroupIds != null &&
                    other.ProductGroupIds != null &&
                    ProductGroupIds.SequenceEqual(other.ProductGroupIds)
                ) && 
                (
                    ProductGroupStatuses == other.ProductGroupStatuses ||
                    ProductGroupStatuses != null &&
                    other.ProductGroupStatuses != null &&
                    ProductGroupStatuses.SequenceEqual(other.ProductGroupStatuses)
                ) && 
                (
                    ProductItemIds == other.ProductItemIds ||
                    ProductItemIds != null &&
                    other.ProductItemIds != null &&
                    ProductItemIds.SequenceEqual(other.ProductItemIds)
                ) && 
                (
                    TargetingTypes == other.TargetingTypes ||
                    TargetingTypes != null &&
                    other.TargetingTypes != null &&
                    TargetingTypes.SequenceEqual(other.TargetingTypes)
                ) && 
                (
                    MetricsFilters == other.MetricsFilters ||
                    MetricsFilters != null &&
                    other.MetricsFilters != null &&
                    MetricsFilters.SequenceEqual(other.MetricsFilters)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (StartDate != null)
                    hashCode = hashCode * 59 + StartDate.GetHashCode();
                    if (EndDate != null)
                    hashCode = hashCode * 59 + EndDate.GetHashCode();
                    
                    hashCode = hashCode * 59 + Granularity.GetHashCode();
                    
                    hashCode = hashCode * 59 + ClickWindowDays.GetHashCode();
                    
                    hashCode = hashCode * 59 + EngagementWindowDays.GetHashCode();
                    
                    hashCode = hashCode * 59 + ViewWindowDays.GetHashCode();
                    
                    hashCode = hashCode * 59 + ConversionReportTime.GetHashCode();
                    if (AttributionTypes != null)
                    hashCode = hashCode * 59 + AttributionTypes.GetHashCode();
                    if (Columns != null)
                    hashCode = hashCode * 59 + Columns.GetHashCode();
                    
                    hashCode = hashCode * 59 + Level.GetHashCode();
                    
                    hashCode = hashCode * 59 + ReportFormat.GetHashCode();
                    if (CampaignIds != null)
                    hashCode = hashCode * 59 + CampaignIds.GetHashCode();
                    if (CampaignStatuses != null)
                    hashCode = hashCode * 59 + CampaignStatuses.GetHashCode();
                    if (CampaignObjectiveTypes != null)
                    hashCode = hashCode * 59 + CampaignObjectiveTypes.GetHashCode();
                    if (AdGroupIds != null)
                    hashCode = hashCode * 59 + AdGroupIds.GetHashCode();
                    if (AdGroupStatuses != null)
                    hashCode = hashCode * 59 + AdGroupStatuses.GetHashCode();
                    if (AdIds != null)
                    hashCode = hashCode * 59 + AdIds.GetHashCode();
                    if (AdStatuses != null)
                    hashCode = hashCode * 59 + AdStatuses.GetHashCode();
                    if (ProductGroupIds != null)
                    hashCode = hashCode * 59 + ProductGroupIds.GetHashCode();
                    if (ProductGroupStatuses != null)
                    hashCode = hashCode * 59 + ProductGroupStatuses.GetHashCode();
                    if (ProductItemIds != null)
                    hashCode = hashCode * 59 + ProductItemIds.GetHashCode();
                    if (TargetingTypes != null)
                    hashCode = hashCode * 59 + TargetingTypes.GetHashCode();
                    if (MetricsFilters != null)
                    hashCode = hashCode * 59 + MetricsFilters.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(AdsAnalyticsCreateAsyncRequest left, AdsAnalyticsCreateAsyncRequest right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(AdsAnalyticsCreateAsyncRequest left, AdsAnalyticsCreateAsyncRequest right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
