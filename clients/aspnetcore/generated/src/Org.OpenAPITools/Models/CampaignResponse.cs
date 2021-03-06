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
    public partial class CampaignResponse : IEquatable<CampaignResponse>
    {
        /// <summary>
        /// Campaign ID.
        /// </summary>
        /// <value>Campaign ID.</value>
        [Required]
        [RegularExpression("^\\d+$")]
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }

        /// <summary>
        /// Campaign&#39;s Advertiser ID.
        /// </summary>
        /// <value>Campaign&#39;s Advertiser ID.</value>
        [Required]
        [RegularExpression("^\\d+$")]
        [DataMember(Name="ad_account_id", EmitDefaultValue=false)]
        public string AdAccountId { get; set; }

        /// <summary>
        /// Campaign name.
        /// </summary>
        /// <value>Campaign name.</value>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name="status", EmitDefaultValue=false)]
        public EntityStatus Status { get; set; } = "ACTIVE";

        /// <summary>
        /// Campaign total spending cap.
        /// </summary>
        /// <value>Campaign total spending cap.</value>
        [DataMember(Name="lifetime_spend_cap", EmitDefaultValue=true)]
        public int? LifetimeSpendCap { get; set; }

        /// <summary>
        /// Campaign daily spending cap.
        /// </summary>
        /// <value>Campaign daily spending cap.</value>
        [DataMember(Name="daily_spend_cap", EmitDefaultValue=true)]
        public int? DailySpendCap { get; set; }

        /// <summary>
        /// Order line ID that appears on the invoice.
        /// </summary>
        /// <value>Order line ID that appears on the invoice.</value>
        [RegularExpression("^\\d+$")]
        [DataMember(Name="order_line_id", EmitDefaultValue=true)]
        public string OrderLineId { get; set; }

        /// <summary>
        /// Gets or Sets TrackingUrls
        /// </summary>
        [DataMember(Name="tracking_urls", EmitDefaultValue=true)]
        public TrackingUrls TrackingUrls { get; set; }

        /// <summary>
        /// Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
        /// </summary>
        /// <value>Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.</value>
        [DataMember(Name="start_time", EmitDefaultValue=true)]
        public int? StartTime { get; set; }

        /// <summary>
        /// Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
        /// </summary>
        /// <value>Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.</value>
        [DataMember(Name="end_time", EmitDefaultValue=true)]
        public int? EndTime { get; set; }

        /// <summary>
        /// Gets or Sets ObjectiveType
        /// </summary>
        [DataMember(Name="objective_type", EmitDefaultValue=false)]
        public ObjectiveType ObjectiveType { get; set; }

        /// <summary>
        /// Campaign creation time. Unix timestamp in seconds.
        /// </summary>
        /// <value>Campaign creation time. Unix timestamp in seconds.</value>
        [DataMember(Name="created_time", EmitDefaultValue=false)]
        public int CreatedTime { get; set; }

        /// <summary>
        /// UTC timestamp. Last update time.
        /// </summary>
        /// <value>UTC timestamp. Last update time.</value>
        [DataMember(Name="updated_time", EmitDefaultValue=false)]
        public int UpdatedTime { get; set; }

        /// <summary>
        /// Always \&quot;campaign\&quot;.
        /// </summary>
        /// <value>Always \&quot;campaign\&quot;.</value>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public string Type { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CampaignResponse {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  AdAccountId: ").Append(AdAccountId).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  LifetimeSpendCap: ").Append(LifetimeSpendCap).Append("\n");
            sb.Append("  DailySpendCap: ").Append(DailySpendCap).Append("\n");
            sb.Append("  OrderLineId: ").Append(OrderLineId).Append("\n");
            sb.Append("  TrackingUrls: ").Append(TrackingUrls).Append("\n");
            sb.Append("  StartTime: ").Append(StartTime).Append("\n");
            sb.Append("  EndTime: ").Append(EndTime).Append("\n");
            sb.Append("  ObjectiveType: ").Append(ObjectiveType).Append("\n");
            sb.Append("  CreatedTime: ").Append(CreatedTime).Append("\n");
            sb.Append("  UpdatedTime: ").Append(UpdatedTime).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
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
            return obj.GetType() == GetType() && Equals((CampaignResponse)obj);
        }

        /// <summary>
        /// Returns true if CampaignResponse instances are equal
        /// </summary>
        /// <param name="other">Instance of CampaignResponse to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CampaignResponse other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Id == other.Id ||
                    Id != null &&
                    Id.Equals(other.Id)
                ) && 
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
                    ObjectiveType == other.ObjectiveType ||
                    
                    ObjectiveType.Equals(other.ObjectiveType)
                ) && 
                (
                    CreatedTime == other.CreatedTime ||
                    
                    CreatedTime.Equals(other.CreatedTime)
                ) && 
                (
                    UpdatedTime == other.UpdatedTime ||
                    
                    UpdatedTime.Equals(other.UpdatedTime)
                ) && 
                (
                    Type == other.Type ||
                    Type != null &&
                    Type.Equals(other.Type)
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
                    if (Id != null)
                    hashCode = hashCode * 59 + Id.GetHashCode();
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
                    
                    hashCode = hashCode * 59 + ObjectiveType.GetHashCode();
                    
                    hashCode = hashCode * 59 + CreatedTime.GetHashCode();
                    
                    hashCode = hashCode * 59 + UpdatedTime.GetHashCode();
                    if (Type != null)
                    hashCode = hashCode * 59 + Type.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CampaignResponse left, CampaignResponse right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CampaignResponse left, CampaignResponse right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
