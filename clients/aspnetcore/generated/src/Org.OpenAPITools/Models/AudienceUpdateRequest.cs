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
    /// 
    /// </summary>
    [DataContract]
    public partial class AudienceUpdateRequest : IEquatable<AudienceUpdateRequest>
    {
        /// <summary>
        /// Ad account ID.
        /// </summary>
        /// <value>Ad account ID.</value>
        /// <example>549755885175</example>
        [RegularExpression("^\\d+$")]
        [DataMember(Name="ad_account_id", EmitDefaultValue=false)]
        public string AdAccountId { get; set; }

        /// <summary>
        /// Audience name.
        /// </summary>
        /// <value>Audience name.</value>
        /// <example>string</example>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets Rule
        /// </summary>
        [DataMember(Name="rule", EmitDefaultValue=false)]
        public AudienceRule Rule { get; set; }

        /// <summary>
        /// Audience description.
        /// </summary>
        /// <value>Audience description.</value>
        /// <example>string</example>
        [DataMember(Name="description", EmitDefaultValue=false)]
        public string Description { get; set; }

        /// <summary>
        /// Gets or Sets OperationType
        /// </summary>
        [DataMember(Name="operation_type", EmitDefaultValue=true)]
        public AudienceUpdateOperationType OperationType { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class AudienceUpdateRequest {\n");
            sb.Append("  AdAccountId: ").Append(AdAccountId).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Rule: ").Append(Rule).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  OperationType: ").Append(OperationType).Append("\n");
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
            return obj.GetType() == GetType() && Equals((AudienceUpdateRequest)obj);
        }

        /// <summary>
        /// Returns true if AudienceUpdateRequest instances are equal
        /// </summary>
        /// <param name="other">Instance of AudienceUpdateRequest to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AudienceUpdateRequest other)
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
                    Rule == other.Rule ||
                    Rule != null &&
                    Rule.Equals(other.Rule)
                ) && 
                (
                    Description == other.Description ||
                    Description != null &&
                    Description.Equals(other.Description)
                ) && 
                (
                    OperationType == other.OperationType ||
                    
                    OperationType.Equals(other.OperationType)
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
                    if (Rule != null)
                    hashCode = hashCode * 59 + Rule.GetHashCode();
                    if (Description != null)
                    hashCode = hashCode * 59 + Description.GetHashCode();
                    
                    hashCode = hashCode * 59 + OperationType.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(AudienceUpdateRequest left, AudienceUpdateRequest right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(AudienceUpdateRequest left, AudienceUpdateRequest right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
