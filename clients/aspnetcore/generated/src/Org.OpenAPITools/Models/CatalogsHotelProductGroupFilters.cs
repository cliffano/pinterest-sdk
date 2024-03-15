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
    /// Object holding a group of filters for a hotel product group
    /// </summary>
    [DataContract]
    public partial class CatalogsHotelProductGroupFilters : IEquatable<CatalogsHotelProductGroupFilters>
    {
        /// <summary>
        /// Gets or Sets AnyOf
        /// </summary>
        [Required]
        [DataMember(Name="any_of", EmitDefaultValue=false)]
        public List<CatalogsHotelProductGroupFilterKeys> AnyOf { get; set; }

        /// <summary>
        /// Gets or Sets AllOf
        /// </summary>
        [Required]
        [DataMember(Name="all_of", EmitDefaultValue=false)]
        public List<CatalogsHotelProductGroupFilterKeys> AllOf { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsHotelProductGroupFilters {\n");
            sb.Append("  AnyOf: ").Append(AnyOf).Append("\n");
            sb.Append("  AllOf: ").Append(AllOf).Append("\n");
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
            return obj.GetType() == GetType() && Equals((CatalogsHotelProductGroupFilters)obj);
        }

        /// <summary>
        /// Returns true if CatalogsHotelProductGroupFilters instances are equal
        /// </summary>
        /// <param name="other">Instance of CatalogsHotelProductGroupFilters to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsHotelProductGroupFilters other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    AnyOf == other.AnyOf ||
                    AnyOf != null &&
                    other.AnyOf != null &&
                    AnyOf.SequenceEqual(other.AnyOf)
                ) && 
                (
                    AllOf == other.AllOf ||
                    AllOf != null &&
                    other.AllOf != null &&
                    AllOf.SequenceEqual(other.AllOf)
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
                    if (AnyOf != null)
                    hashCode = hashCode * 59 + AnyOf.GetHashCode();
                    if (AllOf != null)
                    hashCode = hashCode * 59 + AllOf.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CatalogsHotelProductGroupFilters left, CatalogsHotelProductGroupFilters right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CatalogsHotelProductGroupFilters left, CatalogsHotelProductGroupFilters right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
