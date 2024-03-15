/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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
    /// Campaign Data
    /// </summary>
    [DataContract]
    public partial class CampaignCommon : IEquatable<CampaignCommon>
    {
        /// <summary>
        /// Campaign&#39;s Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
        /// </summary>
        /// <value>Campaign&#39;s Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.</value>
        /// <example>549755885175</example>
        [RegularExpression("^\\d+$")]
        [DataMember(Name="ad_account_id", EmitDefaultValue=false)]
        public string AdAccountId { get; set; }

        /// <summary>
        /// Campaign name.
        /// </summary>
        /// <value>Campaign name.</value>
        /// <example>ACME Tools</example>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name="status", EmitDefaultValue=true)]
        public EntityStatus Status { get; set; }

        /// <summary>
        /// Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;daily_spend_cap\&quot; cannot be set at the same time.
        /// </summary>
        /// <value>Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;daily_spend_cap\&quot; cannot be set at the same time.</value>
        /// <example>1432744744</example>
        [DataMember(Name="lifetime_spend_cap", EmitDefaultValue=true)]
        public int? LifetimeSpendCap { get; set; }

        /// <summary>
        /// Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;lifetime_spend_cap\&quot; cannot be set at the same time.
        /// </summary>
        /// <value>Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;lifetime_spend_cap\&quot; cannot be set at the same time.</value>
        /// <example>1432744744</example>
        [DataMember(Name="daily_spend_cap", EmitDefaultValue=true)]
        public int? DailySpendCap { get; set; }

        /// <summary>
        /// Order line ID that appears on the invoice.
        /// </summary>
        /// <value>Order line ID that appears on the invoice.</value>
        /// <example>549755885175</example>
        [RegularExpression("^\\d+$")]
        [DataMember(Name="order_line_id", EmitDefaultValue=true)]
        public string OrderLineId { get; set; }

        /// <summary>
        /// Gets or Sets TrackingUrls
        /// </summary>
        [DataMember(Name="tracking_urls", EmitDefaultValue=true)]
        public AdCommonTrackingUrls TrackingUrls { get; set; }

        /// <summary>
        /// Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
        /// </summary>
        /// <value>Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.</value>
        /// <example>1580865126</example>
        [DataMember(Name="start_time", EmitDefaultValue=true)]
        public int? StartTime { get; set; }

        /// <summary>
        /// Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
        /// </summary>
        /// <value>Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.</value>
        /// <example>1644023526</example>
        [DataMember(Name="end_time", EmitDefaultValue=true)]
        public int? EndTime { get; set; }

        /// <summary>
        /// Gets or Sets SummaryStatus
        /// </summary>
        [DataMember(Name="summary_status", EmitDefaultValue=true)]
        public CampaignSummaryStatus SummaryStatus { get; set; }

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
            sb.Append("  SummaryStatus: ").Append(SummaryStatus).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
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
            return obj.GetType() == GetType() && Equals((CampaignCommon)obj);
        }

        /// <summary>
        /// Returns true if CampaignCommon instances are equal
        /// </summary>
        /// <param name="other">Instance of CampaignCommon to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CampaignCommon other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    AdAccountId == other.AdAccountId ||
                    AdAccountId != null &&
                    AdAccountId.Equals(other.AdAccountId)
                ) && 
                (
                    Name == other.Name ||
                    Name != null &&
                    Name.Equals(other.Name)
                ) && 
                (
                    Status == other.Status ||
                    
                    Status.Equals(other.Status)
                ) && 
                (
                    LifetimeSpendCap == other.LifetimeSpendCap ||
                    LifetimeSpendCap != null &&
                    LifetimeSpendCap.Equals(other.LifetimeSpendCap)
                ) && 
                (
                    DailySpendCap == other.DailySpendCap ||
                    DailySpendCap != null &&
                    DailySpendCap.Equals(other.DailySpendCap)
                ) && 
                (
                    OrderLineId == other.OrderLineId ||
                    OrderLineId != null &&
                    OrderLineId.Equals(other.OrderLineId)
                ) && 
                (
                    TrackingUrls == other.TrackingUrls ||
                    TrackingUrls != null &&
                    TrackingUrls.Equals(other.TrackingUrls)
                ) && 
                (
                    StartTime == other.StartTime ||
                    StartTime != null &&
                    StartTime.Equals(other.StartTime)
                ) && 
                (
                    EndTime == other.EndTime ||
                    EndTime != null &&
                    EndTime.Equals(other.EndTime)
                ) && 
                (
                    SummaryStatus == other.SummaryStatus ||
                    
                    SummaryStatus.Equals(other.SummaryStatus)
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
                    if (AdAccountId != null)
                    hashCode = hashCode * 59 + AdAccountId.GetHashCode();
                    if (Name != null)
                    hashCode = hashCode * 59 + Name.GetHashCode();
                    
                    hashCode = hashCode * 59 + Status.GetHashCode();
                    if (LifetimeSpendCap != null)
                    hashCode = hashCode * 59 + LifetimeSpendCap.GetHashCode();
                    if (DailySpendCap != null)
                    hashCode = hashCode * 59 + DailySpendCap.GetHashCode();
                    if (OrderLineId != null)
                    hashCode = hashCode * 59 + OrderLineId.GetHashCode();
                    if (TrackingUrls != null)
                    hashCode = hashCode * 59 + TrackingUrls.GetHashCode();
                    if (StartTime != null)
                    hashCode = hashCode * 59 + StartTime.GetHashCode();
                    if (EndTime != null)
                    hashCode = hashCode * 59 + EndTime.GetHashCode();
                    
                    hashCode = hashCode * 59 + SummaryStatus.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CampaignCommon left, CampaignCommon right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CampaignCommon left, CampaignCommon right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
