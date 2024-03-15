/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.IO;
using System.Runtime.Serialization;
using System.Text;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using Newtonsoft.Json.Linq;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// AdsAnalyticsCreateAsyncRequest
    /// </summary>
    [DataContract(Name = "AdsAnalyticsCreateAsyncRequest")]
    public partial class AdsAnalyticsCreateAsyncRequest : IValidatableObject
    {

        /// <summary>
        /// TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly
        /// </summary>
        /// <value>TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly</value>
        [DataMember(Name = "granularity", IsRequired = true, EmitDefaultValue = true)]
        public Granularity Granularity { get; set; }

        /// <summary>
        /// Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
        /// </summary>
        /// <value>Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.</value>
        [DataMember(Name = "click_window_days", EmitDefaultValue = false)]
        public ConversionAttributionWindowDays? ClickWindowDays { get; set; }

        /// <summary>
        /// Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
        /// </summary>
        /// <value>Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.</value>
        [DataMember(Name = "engagement_window_days", EmitDefaultValue = false)]
        public ConversionAttributionWindowDays? EngagementWindowDays { get; set; }

        /// <summary>
        /// Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day.
        /// </summary>
        /// <value>Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day.</value>
        [DataMember(Name = "view_window_days", EmitDefaultValue = false)]
        public ConversionAttributionWindowDays? ViewWindowDays { get; set; }

        /// <summary>
        /// The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
        /// </summary>
        /// <value>The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.</value>
        [DataMember(Name = "conversion_report_time", EmitDefaultValue = false)]
        public ConversionReportTimeType? ConversionReportTime { get; set; }

        /// <summary>
        /// Level of the report
        /// </summary>
        /// <value>Level of the report</value>
        [DataMember(Name = "level", IsRequired = true, EmitDefaultValue = true)]
        public MetricsReportingLevel Level { get; set; }

        /// <summary>
        /// Specification for formatting the report data. Reports in JSON will not zero-fill metrics, whereas reports in CSV will. Both report formats will omit rows where all the columns are equal to 0.
        /// </summary>
        /// <value>Specification for formatting the report data. Reports in JSON will not zero-fill metrics, whereas reports in CSV will. Both report formats will omit rows where all the columns are equal to 0.</value>
        [DataMember(Name = "report_format", EmitDefaultValue = false)]
        public DataOutputFormat? ReportFormat { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="AdsAnalyticsCreateAsyncRequest" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected AdsAnalyticsCreateAsyncRequest() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="AdsAnalyticsCreateAsyncRequest" /> class.
        /// </summary>
        /// <param name="startDate">Metric report start date (UTC). Format: YYYY-MM-DD (required).</param>
        /// <param name="endDate">Metric report end date (UTC). Format: YYYY-MM-DD (required).</param>
        /// <param name="granularity">TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly (required).</param>
        /// <param name="clickWindowDays">Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (default to ConversionAttributionWindowDays.NUMBER_30).</param>
        /// <param name="engagementWindowDays">Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (default to ConversionAttributionWindowDays.NUMBER_30).</param>
        /// <param name="viewWindowDays">Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (default to ConversionAttributionWindowDays.NUMBER_1).</param>
        /// <param name="conversionReportTime">The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (default to &quot;TIME_OF_AD_ACTION&quot;).</param>
        /// <param name="attributionTypes">List of types of attribution for the conversion report.</param>
        /// <param name="campaignIds">List of campaign ids.</param>
        /// <param name="campaignStatuses">List of status values for filtering.</param>
        /// <param name="campaignObjectiveTypes">List of values for filtering. [\&quot;WEB_SESSIONS\&quot;] in BETA..</param>
        /// <param name="adGroupIds">List of ad group ids.</param>
        /// <param name="adGroupStatuses">List of values for filtering.</param>
        /// <param name="adIds">List of ad ids [This parameter is no supported for Product Item Level Reports].</param>
        /// <param name="adStatuses">List of values for filtering [This parameter is not supported for Product Item Level Reports].</param>
        /// <param name="productGroupIds">List of product group ids.</param>
        /// <param name="productGroupStatuses">List of values for filtering.</param>
        /// <param name="productItemIds">List of product item ids.</param>
        /// <param name="targetingTypes">List of targeting types. Requires &#x60;level&#x60; to be a value ending in &#x60;_TARGETING&#x60;..</param>
        /// <param name="metricsFilters">List of metrics filters.</param>
        /// <param name="columns">Metric and entity columns. Pin promotion and ad related columns are not supported for the Product Item level reports. (required).</param>
        /// <param name="level">Level of the report (required).</param>
        /// <param name="reportFormat">Specification for formatting the report data. Reports in JSON will not zero-fill metrics, whereas reports in CSV will. Both report formats will omit rows where all the columns are equal to 0. (default to &quot;JSON&quot;).</param>
        public AdsAnalyticsCreateAsyncRequest(string startDate = default(string), string endDate = default(string), Granularity granularity = default(Granularity), ConversionAttributionWindowDays? clickWindowDays = ConversionAttributionWindowDays.NUMBER_30, ConversionAttributionWindowDays? engagementWindowDays = ConversionAttributionWindowDays.NUMBER_30, ConversionAttributionWindowDays? viewWindowDays = ConversionAttributionWindowDays.NUMBER_1, ConversionReportTimeType? conversionReportTime = "TIME_OF_AD_ACTION", List<ConversionReportAttributionType> attributionTypes = default(List<ConversionReportAttributionType>), List<string> campaignIds = default(List<string>), List<CampaignSummaryStatus> campaignStatuses = default(List<CampaignSummaryStatus>), List<ObjectiveType> campaignObjectiveTypes = default(List<ObjectiveType>), List<string> adGroupIds = default(List<string>), List<AdGroupSummaryStatus> adGroupStatuses = default(List<AdGroupSummaryStatus>), List<string> adIds = default(List<string>), List<PinPromotionSummaryStatus> adStatuses = default(List<PinPromotionSummaryStatus>), List<string> productGroupIds = default(List<string>), List<ProductGroupSummaryStatus> productGroupStatuses = default(List<ProductGroupSummaryStatus>), List<string> productItemIds = default(List<string>), List<AdsAnalyticsTargetingType> targetingTypes = default(List<AdsAnalyticsTargetingType>), List<AdsAnalyticsMetricsFilter> metricsFilters = default(List<AdsAnalyticsMetricsFilter>), List<ReportingColumnAsync> columns = default(List<ReportingColumnAsync>), MetricsReportingLevel level = default(MetricsReportingLevel), DataOutputFormat? reportFormat = "JSON")
        {
            // to ensure "startDate" is required (not null)
            if (startDate == null)
            {
                throw new ArgumentNullException("startDate is a required property for AdsAnalyticsCreateAsyncRequest and cannot be null");
            }
            this.StartDate = startDate;
            // to ensure "endDate" is required (not null)
            if (endDate == null)
            {
                throw new ArgumentNullException("endDate is a required property for AdsAnalyticsCreateAsyncRequest and cannot be null");
            }
            this.EndDate = endDate;
            this.Granularity = granularity;
            // to ensure "columns" is required (not null)
            if (columns == null)
            {
                throw new ArgumentNullException("columns is a required property for AdsAnalyticsCreateAsyncRequest and cannot be null");
            }
            this.Columns = columns;
            this.Level = level;
            this.ClickWindowDays = clickWindowDays;
            this.EngagementWindowDays = engagementWindowDays;
            this.ViewWindowDays = viewWindowDays;
            this.ConversionReportTime = conversionReportTime;
            this.AttributionTypes = attributionTypes;
            this.CampaignIds = campaignIds;
            this.CampaignStatuses = campaignStatuses;
            this.CampaignObjectiveTypes = campaignObjectiveTypes;
            this.AdGroupIds = adGroupIds;
            this.AdGroupStatuses = adGroupStatuses;
            this.AdIds = adIds;
            this.AdStatuses = adStatuses;
            this.ProductGroupIds = productGroupIds;
            this.ProductGroupStatuses = productGroupStatuses;
            this.ProductItemIds = productItemIds;
            this.TargetingTypes = targetingTypes;
            this.MetricsFilters = metricsFilters;
            this.ReportFormat = reportFormat;
        }

        /// <summary>
        /// Metric report start date (UTC). Format: YYYY-MM-DD
        /// </summary>
        /// <value>Metric report start date (UTC). Format: YYYY-MM-DD</value>
        /// <example>2020-12-20</example>
        [DataMember(Name = "start_date", IsRequired = true, EmitDefaultValue = true)]
        public string StartDate { get; set; }

        /// <summary>
        /// Metric report end date (UTC). Format: YYYY-MM-DD
        /// </summary>
        /// <value>Metric report end date (UTC). Format: YYYY-MM-DD</value>
        /// <example>2020-12-20</example>
        [DataMember(Name = "end_date", IsRequired = true, EmitDefaultValue = true)]
        public string EndDate { get; set; }

        /// <summary>
        /// List of types of attribution for the conversion report
        /// </summary>
        /// <value>List of types of attribution for the conversion report</value>
        [DataMember(Name = "attribution_types", EmitDefaultValue = false)]
        public List<ConversionReportAttributionType> AttributionTypes { get; set; }

        /// <summary>
        /// List of campaign ids
        /// </summary>
        /// <value>List of campaign ids</value>
        /// <example>[&quot;12345678&quot;]</example>
        [DataMember(Name = "campaign_ids", EmitDefaultValue = false)]
        public List<string> CampaignIds { get; set; }

        /// <summary>
        /// List of status values for filtering
        /// </summary>
        /// <value>List of status values for filtering</value>
        /// <example>[&quot;RUNNING&quot;,&quot;PAUSED&quot;]</example>
        [DataMember(Name = "campaign_statuses", EmitDefaultValue = false)]
        public List<CampaignSummaryStatus> CampaignStatuses { get; set; }

        /// <summary>
        /// List of values for filtering. [\&quot;WEB_SESSIONS\&quot;] in BETA.
        /// </summary>
        /// <value>List of values for filtering. [\&quot;WEB_SESSIONS\&quot;] in BETA.</value>
        /// <example>[&quot;AWARENESS&quot;,&quot;VIDEO_VIEW&quot;]</example>
        [DataMember(Name = "campaign_objective_types", EmitDefaultValue = false)]
        public List<ObjectiveType> CampaignObjectiveTypes { get; set; }

        /// <summary>
        /// List of ad group ids
        /// </summary>
        /// <value>List of ad group ids</value>
        /// <example>[&quot;12345678&quot;]</example>
        [DataMember(Name = "ad_group_ids", EmitDefaultValue = false)]
        public List<string> AdGroupIds { get; set; }

        /// <summary>
        /// List of values for filtering
        /// </summary>
        /// <value>List of values for filtering</value>
        /// <example>[&quot;RUNNING&quot;,&quot;PAUSED&quot;]</example>
        [DataMember(Name = "ad_group_statuses", EmitDefaultValue = false)]
        public List<AdGroupSummaryStatus> AdGroupStatuses { get; set; }

        /// <summary>
        /// List of ad ids [This parameter is no supported for Product Item Level Reports]
        /// </summary>
        /// <value>List of ad ids [This parameter is no supported for Product Item Level Reports]</value>
        /// <example>[&quot;12345678&quot;]</example>
        [DataMember(Name = "ad_ids", EmitDefaultValue = false)]
        public List<string> AdIds { get; set; }

        /// <summary>
        /// List of values for filtering [This parameter is not supported for Product Item Level Reports]
        /// </summary>
        /// <value>List of values for filtering [This parameter is not supported for Product Item Level Reports]</value>
        /// <example>[&quot;APPROVED&quot;,&quot;PAUSED&quot;]</example>
        [DataMember(Name = "ad_statuses", EmitDefaultValue = false)]
        public List<PinPromotionSummaryStatus> AdStatuses { get; set; }

        /// <summary>
        /// List of product group ids
        /// </summary>
        /// <value>List of product group ids</value>
        /// <example>[&quot;12345678&quot;]</example>
        [DataMember(Name = "product_group_ids", EmitDefaultValue = false)]
        public List<string> ProductGroupIds { get; set; }

        /// <summary>
        /// List of values for filtering
        /// </summary>
        /// <value>List of values for filtering</value>
        /// <example>[&quot;RUNNING&quot;,&quot;PAUSED&quot;]</example>
        [DataMember(Name = "product_group_statuses", EmitDefaultValue = false)]
        public List<ProductGroupSummaryStatus> ProductGroupStatuses { get; set; }

        /// <summary>
        /// List of product item ids
        /// </summary>
        /// <value>List of product item ids</value>
        /// <example>[&quot;12345678&quot;]</example>
        [DataMember(Name = "product_item_ids", EmitDefaultValue = false)]
        public List<string> ProductItemIds { get; set; }

        /// <summary>
        /// List of targeting types. Requires &#x60;level&#x60; to be a value ending in &#x60;_TARGETING&#x60;.
        /// </summary>
        /// <value>List of targeting types. Requires &#x60;level&#x60; to be a value ending in &#x60;_TARGETING&#x60;.</value>
        [DataMember(Name = "targeting_types", EmitDefaultValue = false)]
        public List<AdsAnalyticsTargetingType> TargetingTypes { get; set; }

        /// <summary>
        /// List of metrics filters
        /// </summary>
        /// <value>List of metrics filters</value>
        [DataMember(Name = "metrics_filters", EmitDefaultValue = false)]
        public List<AdsAnalyticsMetricsFilter> MetricsFilters { get; set; }

        /// <summary>
        /// Metric and entity columns. Pin promotion and ad related columns are not supported for the Product Item level reports.
        /// </summary>
        /// <value>Metric and entity columns. Pin promotion and ad related columns are not supported for the Product Item level reports.</value>
        [DataMember(Name = "columns", IsRequired = true, EmitDefaultValue = true)]
        public List<ReportingColumnAsync> Columns { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class AdsAnalyticsCreateAsyncRequest {\n");
            sb.Append("  StartDate: ").Append(StartDate).Append("\n");
            sb.Append("  EndDate: ").Append(EndDate).Append("\n");
            sb.Append("  Granularity: ").Append(Granularity).Append("\n");
            sb.Append("  ClickWindowDays: ").Append(ClickWindowDays).Append("\n");
            sb.Append("  EngagementWindowDays: ").Append(EngagementWindowDays).Append("\n");
            sb.Append("  ViewWindowDays: ").Append(ViewWindowDays).Append("\n");
            sb.Append("  ConversionReportTime: ").Append(ConversionReportTime).Append("\n");
            sb.Append("  AttributionTypes: ").Append(AttributionTypes).Append("\n");
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
            sb.Append("  Columns: ").Append(Columns).Append("\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("  ReportFormat: ").Append(ReportFormat).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            if (this.StartDate != null) {
                // StartDate (string) pattern
                Regex regexStartDate = new Regex(@"^(\d{4})-(\d{2})-(\d{2})$", RegexOptions.CultureInvariant);
                if (!regexStartDate.Match(this.StartDate).Success)
                {
                    yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for StartDate, must match a pattern of " + regexStartDate, new [] { "StartDate" });
                }
            }

            if (this.EndDate != null) {
                // EndDate (string) pattern
                Regex regexEndDate = new Regex(@"^(\d{4})-(\d{2})-(\d{2})$", RegexOptions.CultureInvariant);
                if (!regexEndDate.Match(this.EndDate).Success)
                {
                    yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for EndDate, must match a pattern of " + regexEndDate, new [] { "EndDate" });
                }
            }

            yield break;
        }
    }

}
