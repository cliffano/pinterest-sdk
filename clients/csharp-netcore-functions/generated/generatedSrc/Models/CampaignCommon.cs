/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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

namespace Org.OpenAPITools.Models
{
    /// <summary>
    /// Campaign Data
    /// </summary>
    [DataContract(Name = "CampaignCommon")]
    public partial class CampaignCommon : IEquatable<CampaignCommon>, IValidatableObject
    {

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name = "status", EmitDefaultValue = false)]
        public EntityStatus? Status { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="CampaignCommon" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CampaignCommon() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CampaignCommon" /> class.
        /// </summary>
        /// <param name="adAccountId">Campaign&#39;s Advertiser ID. (required).</param>
        /// <param name="name">Campaign name..</param>
        /// <param name="status">status (default to &quot;ACTIVE&quot;).</param>
        /// <param name="lifetimeSpendCap">Campaign total spending cap..</param>
        /// <param name="dailySpendCap">Campaign daily spending cap..</param>
        /// <param name="orderLineId">Order line ID that appears on the invoice..</param>
        /// <param name="trackingUrls">trackingUrls.</param>
        /// <param name="startTime">Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns..</param>
        /// <param name="endTime">Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns..</param>
        public CampaignCommon(string adAccountId = default(string), string name = default(string), EntityStatus? status = "ACTIVE", int? lifetimeSpendCap = default(int?), int? dailySpendCap = default(int?), string orderLineId = default(string), TrackingUrls trackingUrls = default(TrackingUrls), int? startTime = default(int?), int? endTime = default(int?))
        {
            // to ensure "adAccountId" is required (not null)
            this.AdAccountId = adAccountId ?? throw new ArgumentNullException("adAccountId is a required property for CampaignCommon and cannot be null");
            this.Name = name;
            this.Status = status;
            this.LifetimeSpendCap = lifetimeSpendCap;
            this.DailySpendCap = dailySpendCap;
            this.OrderLineId = orderLineId;
            this.TrackingUrls = trackingUrls;
            this.StartTime = startTime;
            this.EndTime = endTime;
        }

        /// <summary>
        /// Campaign&#39;s Advertiser ID.
        /// </summary>
        /// <value>Campaign&#39;s Advertiser ID.</value>
        [DataMember(Name = "ad_account_id", IsRequired = true, EmitDefaultValue = false)]
        public string AdAccountId { get; set; }

        /// <summary>
        /// Campaign name.
        /// </summary>
        /// <value>Campaign name.</value>
        [DataMember(Name = "name", EmitDefaultValue = false)]
        public string Name { get; set; }

        /// <summary>
        /// Campaign total spending cap.
        /// </summary>
        /// <value>Campaign total spending cap.</value>
        [DataMember(Name = "lifetime_spend_cap", EmitDefaultValue = true)]
        public int? LifetimeSpendCap { get; set; }

        /// <summary>
        /// Campaign daily spending cap.
        /// </summary>
        /// <value>Campaign daily spending cap.</value>
        [DataMember(Name = "daily_spend_cap", EmitDefaultValue = true)]
        public int? DailySpendCap { get; set; }

        /// <summary>
        /// Order line ID that appears on the invoice.
        /// </summary>
        /// <value>Order line ID that appears on the invoice.</value>
        [DataMember(Name = "order_line_id", EmitDefaultValue = true)]
        public string OrderLineId { get; set; }

        /// <summary>
        /// Gets or Sets TrackingUrls
        /// </summary>
        [DataMember(Name = "tracking_urls", EmitDefaultValue = true)]
        public TrackingUrls TrackingUrls { get; set; }

        /// <summary>
        /// Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
        /// </summary>
        /// <value>Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.</value>
        [DataMember(Name = "start_time", EmitDefaultValue = true)]
        public int? StartTime { get; set; }

        /// <summary>
        /// Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
        /// </summary>
        /// <value>Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.</value>
        [DataMember(Name = "end_time", EmitDefaultValue = true)]
        public int? EndTime { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
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
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as CampaignCommon);
        }

        /// <summary>
        /// Returns true if CampaignCommon instances are equal
        /// </summary>
        /// <param name="input">Instance of CampaignCommon to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CampaignCommon input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.AdAccountId == input.AdAccountId ||
                    (this.AdAccountId != null &&
                    this.AdAccountId.Equals(input.AdAccountId))
                ) && 
                (
                    this.Name == input.Name ||
                    (this.Name != null &&
                    this.Name.Equals(input.Name))
                ) && 
                (
                    this.Status == input.Status ||
                    this.Status.Equals(input.Status)
                ) && 
                (
                    this.LifetimeSpendCap == input.LifetimeSpendCap ||
                    (this.LifetimeSpendCap != null &&
                    this.LifetimeSpendCap.Equals(input.LifetimeSpendCap))
                ) && 
                (
                    this.DailySpendCap == input.DailySpendCap ||
                    (this.DailySpendCap != null &&
                    this.DailySpendCap.Equals(input.DailySpendCap))
                ) && 
                (
                    this.OrderLineId == input.OrderLineId ||
                    (this.OrderLineId != null &&
                    this.OrderLineId.Equals(input.OrderLineId))
                ) && 
                (
                    this.TrackingUrls == input.TrackingUrls ||
                    (this.TrackingUrls != null &&
                    this.TrackingUrls.Equals(input.TrackingUrls))
                ) && 
                (
                    this.StartTime == input.StartTime ||
                    (this.StartTime != null &&
                    this.StartTime.Equals(input.StartTime))
                ) && 
                (
                    this.EndTime == input.EndTime ||
                    (this.EndTime != null &&
                    this.EndTime.Equals(input.EndTime))
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
                int hashCode = 41;
                if (this.AdAccountId != null)
                    hashCode = hashCode * 59 + this.AdAccountId.GetHashCode();
                if (this.Name != null)
                    hashCode = hashCode * 59 + this.Name.GetHashCode();
                hashCode = hashCode * 59 + this.Status.GetHashCode();
                if (this.LifetimeSpendCap != null)
                    hashCode = hashCode * 59 + this.LifetimeSpendCap.GetHashCode();
                if (this.DailySpendCap != null)
                    hashCode = hashCode * 59 + this.DailySpendCap.GetHashCode();
                if (this.OrderLineId != null)
                    hashCode = hashCode * 59 + this.OrderLineId.GetHashCode();
                if (this.TrackingUrls != null)
                    hashCode = hashCode * 59 + this.TrackingUrls.GetHashCode();
                if (this.StartTime != null)
                    hashCode = hashCode * 59 + this.StartTime.GetHashCode();
                if (this.EndTime != null)
                    hashCode = hashCode * 59 + this.EndTime.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            // AdAccountId (string) pattern
            Regex regexAdAccountId = new Regex(@"^\\d+$", RegexOptions.CultureInvariant);
            if (false == regexAdAccountId.Match(this.AdAccountId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for AdAccountId, must match a pattern of " + regexAdAccountId, new [] { "AdAccountId" });
            }

            // OrderLineId (string) pattern
            Regex regexOrderLineId = new Regex(@"^\\d+$", RegexOptions.CultureInvariant);
            if (false == regexOrderLineId.Match(this.OrderLineId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for OrderLineId, must match a pattern of " + regexOrderLineId, new [] { "OrderLineId" });
            }

            yield break;
        }
    }

}
