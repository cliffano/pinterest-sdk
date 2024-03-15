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
    public partial class Keyword : IEquatable<Keyword>
    {
        /// <summary>
        /// Gets or Sets Archived
        /// </summary>
        /// <example>false</example>
        [DataMember(Name="archived", EmitDefaultValue=true)]
        public bool Archived { get; set; }

        /// <summary>
        /// Keyword ID .
        /// </summary>
        /// <value>Keyword ID .</value>
        /// <example>383791336903426391</example>
        [RegularExpression("^\\d+$")]
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }

        /// <summary>
        /// Keyword parent entity ID (advertiser, campaign, ad group).
        /// </summary>
        /// <value>Keyword parent entity ID (advertiser, campaign, ad group).</value>
        /// <example>383791336903426391</example>
        [RegularExpression("^\\d+$")]
        [DataMember(Name="parent_id", EmitDefaultValue=false)]
        public string ParentId { get; set; }

        /// <summary>
        /// Parent entity type
        /// </summary>
        /// <value>Parent entity type</value>
        /// <example>campaign</example>
        [DataMember(Name="parent_type", EmitDefaultValue=false)]
        public string ParentType { get; set; }

        /// <summary>
        /// Always keyword
        /// </summary>
        /// <value>Always keyword</value>
        /// <example>keyword</example>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public string Type { get; set; }

        /// <summary>
        /// Keyword custom bid in microcurrency - null if inherited from parent ad group.
        /// </summary>
        /// <value>Keyword custom bid in microcurrency - null if inherited from parent ad group.</value>
        /// <example>200000</example>
        [DataMember(Name="bid", EmitDefaultValue=true)]
        public int? Bid { get; set; }

        /// <summary>
        /// Gets or Sets MatchType
        /// </summary>
        [Required]
        [DataMember(Name="match_type", EmitDefaultValue=true)]
        public MatchTypeResponse? MatchType { get; set; }

        /// <summary>
        /// Keyword value (120 chars max).
        /// </summary>
        /// <value>Keyword value (120 chars max).</value>
        [Required]
        [DataMember(Name="value", EmitDefaultValue=false)]
        public string Value { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Keyword {\n");
            sb.Append("  Archived: ").Append(Archived).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  ParentId: ").Append(ParentId).Append("\n");
            sb.Append("  ParentType: ").Append(ParentType).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Bid: ").Append(Bid).Append("\n");
            sb.Append("  MatchType: ").Append(MatchType).Append("\n");
            sb.Append("  Value: ").Append(Value).Append("\n");
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
            return obj.GetType() == GetType() && Equals((Keyword)obj);
        }

        /// <summary>
        /// Returns true if Keyword instances are equal
        /// </summary>
        /// <param name="other">Instance of Keyword to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Keyword other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Archived == other.Archived ||
                    
                    Archived.Equals(other.Archived)
                ) && 
                (
                    Id == other.Id ||
                    Id != null &&
                    Id.Equals(other.Id)
                ) && 
                (
                    ParentId == other.ParentId ||
                    ParentId != null &&
                    ParentId.Equals(other.ParentId)
                ) && 
                (
                    ParentType == other.ParentType ||
                    ParentType != null &&
                    ParentType.Equals(other.ParentType)
                ) && 
                (
                    Type == other.Type ||
                    Type != null &&
                    Type.Equals(other.Type)
                ) && 
                (
                    Bid == other.Bid ||
                    Bid != null &&
                    Bid.Equals(other.Bid)
                ) && 
                (
                    MatchType == other.MatchType ||
                    
                    MatchType.Equals(other.MatchType)
                ) && 
                (
                    Value == other.Value ||
                    Value != null &&
                    Value.Equals(other.Value)
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
                    
                    hashCode = hashCode * 59 + Archived.GetHashCode();
                    if (Id != null)
                    hashCode = hashCode * 59 + Id.GetHashCode();
                    if (ParentId != null)
                    hashCode = hashCode * 59 + ParentId.GetHashCode();
                    if (ParentType != null)
                    hashCode = hashCode * 59 + ParentType.GetHashCode();
                    if (Type != null)
                    hashCode = hashCode * 59 + Type.GetHashCode();
                    if (Bid != null)
                    hashCode = hashCode * 59 + Bid.GetHashCode();
                    
                    hashCode = hashCode * 59 + MatchType.GetHashCode();
                    if (Value != null)
                    hashCode = hashCode * 59 + Value.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(Keyword left, Keyword right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(Keyword left, Keyword right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
