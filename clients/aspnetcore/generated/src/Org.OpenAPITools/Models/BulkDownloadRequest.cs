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
    /// Ad entities to get in bulk request.
    /// </summary>
    [DataContract]
    public partial class BulkDownloadRequest : IEquatable<BulkDownloadRequest>
    {
        /// <summary>
        /// All entity types specified will be downloaded. Fewer types result in faster downloads.
        /// </summary>
        /// <value>All entity types specified will be downloaded. Fewer types result in faster downloads.</value>
        /// <example>[&quot;CAMPAIGN&quot;,&quot;AD_GROUP&quot;]</example>
        [DataMember(Name="entity_types", EmitDefaultValue=false)]
        public List<BulkEntityType> EntityTypes { get; set; }

        /// <summary>
        /// All entities specified by these IDs as well as their children and grandchildren will be downloaded if the entity type is one of the types requested to be downloaded.
        /// </summary>
        /// <value>All entities specified by these IDs as well as their children and grandchildren will be downloaded if the entity type is one of the types requested to be downloaded.</value>
        [DataMember(Name="entity_ids", EmitDefaultValue=false)]
        public List<string> EntityIds { get; set; }

        /// <summary>
        /// Unix UTC timestamp to retrieve all entities that have changed since this time.
        /// </summary>
        /// <value>Unix UTC timestamp to retrieve all entities that have changed since this time.</value>
        /// <example>1622848072</example>
        [RegularExpression("^\\d+$")]
        [DataMember(Name="updated_since", EmitDefaultValue=false)]
        public string UpdatedSince { get; set; }

        /// <summary>
        /// Gets or Sets CampaignFilter
        /// </summary>
        [DataMember(Name="campaign_filter", EmitDefaultValue=false)]
        public BulkDownloadRequestCampaignFilter CampaignFilter { get; set; }

        /// <summary>
        /// Gets or Sets OutputFormat
        /// </summary>
        [DataMember(Name="output_format", EmitDefaultValue=true)]
        public BulkOutputFormat OutputFormat { get; set; } = "JSON";

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BulkDownloadRequest {\n");
            sb.Append("  EntityTypes: ").Append(EntityTypes).Append("\n");
            sb.Append("  EntityIds: ").Append(EntityIds).Append("\n");
            sb.Append("  UpdatedSince: ").Append(UpdatedSince).Append("\n");
            sb.Append("  CampaignFilter: ").Append(CampaignFilter).Append("\n");
            sb.Append("  OutputFormat: ").Append(OutputFormat).Append("\n");
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
            return obj.GetType() == GetType() && Equals((BulkDownloadRequest)obj);
        }

        /// <summary>
        /// Returns true if BulkDownloadRequest instances are equal
        /// </summary>
        /// <param name="other">Instance of BulkDownloadRequest to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(BulkDownloadRequest other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    EntityTypes == other.EntityTypes ||
                    EntityTypes != null &&
                    other.EntityTypes != null &&
                    EntityTypes.SequenceEqual(other.EntityTypes)
                ) && 
                (
                    EntityIds == other.EntityIds ||
                    EntityIds != null &&
                    other.EntityIds != null &&
                    EntityIds.SequenceEqual(other.EntityIds)
                ) && 
                (
                    UpdatedSince == other.UpdatedSince ||
                    UpdatedSince != null &&
                    UpdatedSince.Equals(other.UpdatedSince)
                ) && 
                (
                    CampaignFilter == other.CampaignFilter ||
                    CampaignFilter != null &&
                    CampaignFilter.Equals(other.CampaignFilter)
                ) && 
                (
                    OutputFormat == other.OutputFormat ||
                    
                    OutputFormat.Equals(other.OutputFormat)
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
                    if (EntityTypes != null)
                    hashCode = hashCode * 59 + EntityTypes.GetHashCode();
                    if (EntityIds != null)
                    hashCode = hashCode * 59 + EntityIds.GetHashCode();
                    if (UpdatedSince != null)
                    hashCode = hashCode * 59 + UpdatedSince.GetHashCode();
                    if (CampaignFilter != null)
                    hashCode = hashCode * 59 + CampaignFilter.GetHashCode();
                    
                    hashCode = hashCode * 59 + OutputFormat.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(BulkDownloadRequest left, BulkDownloadRequest right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(BulkDownloadRequest left, BulkDownloadRequest right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
