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
    /// Campaign Data
    /// </summary>
    [DataContract(Name = "CampaignCommon")]
    public partial class CampaignCommon : IValidatableObject
    {

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name = "status", EmitDefaultValue = false)]
        public EntityStatus? Status { get; set; }

        /// <summary>
        /// Gets or Sets SummaryStatus
        /// </summary>
        [DataMember(Name = "summary_status", EmitDefaultValue = false)]
        public CampaignSummaryStatus? SummaryStatus { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="CampaignCommon" /> class.
        /// </summary>
        /// <param name="adAccountId">Campaign&#39;s Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema..</param>
        /// <param name="name">Campaign name..</param>
        /// <param name="status">status.</param>
        /// <param name="lifetimeSpendCap">Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;daily_spend_cap\&quot; cannot be set at the same time..</param>
        /// <param name="dailySpendCap">Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;lifetime_spend_cap\&quot; cannot be set at the same time..</param>
        /// <param name="orderLineId">Order line ID that appears on the invoice..</param>
        /// <param name="trackingUrls">trackingUrls.</param>
        /// <param name="startTime">Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns..</param>
        /// <param name="endTime">Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns..</param>
        /// <param name="summaryStatus">summaryStatus.</param>
        public CampaignCommon(string adAccountId = default(string), string name = default(string), EntityStatus? status = default(EntityStatus?), int? lifetimeSpendCap = default(int?), int? dailySpendCap = default(int?), string orderLineId = default(string), AdCommonTrackingUrls trackingUrls = default(AdCommonTrackingUrls), int? startTime = default(int?), int? endTime = default(int?), CampaignSummaryStatus? summaryStatus = default(CampaignSummaryStatus?))
        {
            this.AdAccountId = adAccountId;
            this.Name = name;
            this.Status = status;
            this.LifetimeSpendCap = lifetimeSpendCap;
            this.DailySpendCap = dailySpendCap;
            this.OrderLineId = orderLineId;
            this.TrackingUrls = trackingUrls;
            this.StartTime = startTime;
            this.EndTime = endTime;
            this.SummaryStatus = summaryStatus;
        }

        /// <summary>
        /// Campaign&#39;s Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
        /// </summary>
        /// <value>Campaign&#39;s Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.</value>
        /// <example>549755885175</example>
        [DataMember(Name = "ad_account_id", EmitDefaultValue = false)]
        public string AdAccountId { get; set; }

        /// <summary>
        /// Campaign name.
        /// </summary>
        /// <value>Campaign name.</value>
        /// <example>ACME Tools</example>
        [DataMember(Name = "name", EmitDefaultValue = false)]
        public string Name { get; set; }

        /// <summary>
        /// Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;daily_spend_cap\&quot; cannot be set at the same time.
        /// </summary>
        /// <value>Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;daily_spend_cap\&quot; cannot be set at the same time.</value>
        /// <example>1432744744</example>
        [DataMember(Name = "lifetime_spend_cap", EmitDefaultValue = true)]
        public int? LifetimeSpendCap { get; set; }

        /// <summary>
        /// Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;lifetime_spend_cap\&quot; cannot be set at the same time.
        /// </summary>
        /// <value>Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;lifetime_spend_cap\&quot; cannot be set at the same time.</value>
        /// <example>1432744744</example>
        [DataMember(Name = "daily_spend_cap", EmitDefaultValue = true)]
        public int? DailySpendCap { get; set; }

        /// <summary>
        /// Order line ID that appears on the invoice.
        /// </summary>
        /// <value>Order line ID that appears on the invoice.</value>
        /// <example>549755885175</example>
        [DataMember(Name = "order_line_id", EmitDefaultValue = true)]
        public string OrderLineId { get; set; }

        /// <summary>
        /// Gets or Sets TrackingUrls
        /// </summary>
        [DataMember(Name = "tracking_urls", EmitDefaultValue = true)]
        public AdCommonTrackingUrls TrackingUrls { get; set; }

        /// <summary>
        /// Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
        /// </summary>
        /// <value>Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.</value>
        /// <example>1580865126</example>
        [DataMember(Name = "start_time", EmitDefaultValue = true)]
        public int? StartTime { get; set; }

        /// <summary>
        /// Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
        /// </summary>
        /// <value>Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.</value>
        /// <example>1644023526</example>
        [DataMember(Name = "end_time", EmitDefaultValue = true)]
        public int? EndTime { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CampaignCommon {\n");
            sb.Append("  AdAccountId: ").Append(AdAccountId).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  LifetimeSpendCap: ").Append(LifetimeSpendCap).Append("\n");
            sb.Append("  DailySpendCap: ").Append(DailySpendCap).Append("\n");
            sb.Append("  OrderLineId: ").Append(OrderLineId).Append("\n");
            sb.Append("  TrackingUrls: ").Append(TrackingUrls).Append("\n");
            sb.Append("  StartTime: ").Append(StartTime).Append("\n");
            sb.Append("  EndTime: ").Append(EndTime).Append("\n");
            sb.Append("  SummaryStatus: ").Append(SummaryStatus).Append("\n");
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
            if (this.AdAccountId != null) {
                // AdAccountId (string) pattern
                Regex regexAdAccountId = new Regex(@"^\d+$", RegexOptions.CultureInvariant);
                if (!regexAdAccountId.Match(this.AdAccountId).Success)
                {
                    yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for AdAccountId, must match a pattern of " + regexAdAccountId, new [] { "AdAccountId" });
                }
            }

            if (this.OrderLineId != null) {
                // OrderLineId (string) pattern
                Regex regexOrderLineId = new Regex(@"^\d+$", RegexOptions.CultureInvariant);
                if (!regexOrderLineId.Match(this.OrderLineId).Success)
                {
                    yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for OrderLineId, must match a pattern of " + regexOrderLineId, new [] { "OrderLineId" });
                }
            }

            yield break;
        }
    }

}
