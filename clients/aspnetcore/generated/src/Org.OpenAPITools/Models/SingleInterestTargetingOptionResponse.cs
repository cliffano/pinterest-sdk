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
    public partial class SingleInterestTargetingOptionResponse : IEquatable<SingleInterestTargetingOptionResponse>
    {
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        /// <example>945391946569</example>
        [RegularExpression("\\d+")]
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        /// <example>Dress</example>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets ChildInterests
        /// </summary>
        [DataMember(Name="child_interests", EmitDefaultValue=false)]
        public List<string> ChildInterests { get; set; }

        /// <summary>
        /// Gets or Sets Level
        /// </summary>
        /// <example>2</example>
        [DataMember(Name="level", EmitDefaultValue=true)]
        public int Level { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SingleInterestTargetingOptionResponse {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  ChildInterests: ").Append(ChildInterests).Append("\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
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
            return obj.GetType() == GetType() && Equals((SingleInterestTargetingOptionResponse)obj);
        }

        /// <summary>
        /// Returns true if SingleInterestTargetingOptionResponse instances are equal
        /// </summary>
        /// <param name="other">Instance of SingleInterestTargetingOptionResponse to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(SingleInterestTargetingOptionResponse other)
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
                    Name == other.Name ||
                    Name != null &&
                    Name.Equals(other.Name)
                ) && 
                (
                    ChildInterests == other.ChildInterests ||
                    ChildInterests != null &&
                    other.ChildInterests != null &&
                    ChildInterests.SequenceEqual(other.ChildInterests)
                ) && 
                (
                    Level == other.Level ||
                    
                    Level.Equals(other.Level)
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
                    if (Name != null)
                    hashCode = hashCode * 59 + Name.GetHashCode();
                    if (ChildInterests != null)
                    hashCode = hashCode * 59 + ChildInterests.GetHashCode();
                    
                    hashCode = hashCode * 59 + Level.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(SingleInterestTargetingOptionResponse left, SingleInterestTargetingOptionResponse right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(SingleInterestTargetingOptionResponse left, SingleInterestTargetingOptionResponse right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
