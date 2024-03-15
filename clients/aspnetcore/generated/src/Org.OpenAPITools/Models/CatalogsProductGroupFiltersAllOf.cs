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
    public partial class CatalogsProductGroupFiltersAllOf : IEquatable<CatalogsProductGroupFiltersAllOf>
    {
        /// <summary>
        /// Gets or Sets AllOf
        /// </summary>
        [Required]
        [DataMember(Name="all_of", EmitDefaultValue=false)]
        public List<CatalogsProductGroupFilterKeys> AllOf { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsProductGroupFiltersAllOf {\n");
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
            return obj.GetType() == GetType() && Equals((CatalogsProductGroupFiltersAllOf)obj);
        }

        /// <summary>
        /// Returns true if CatalogsProductGroupFiltersAllOf instances are equal
        /// </summary>
        /// <param name="other">Instance of CatalogsProductGroupFiltersAllOf to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsProductGroupFiltersAllOf other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
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
                    if (AllOf != null)
                    hashCode = hashCode * 59 + AllOf.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CatalogsProductGroupFiltersAllOf left, CatalogsProductGroupFiltersAllOf right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CatalogsProductGroupFiltersAllOf left, CatalogsProductGroupFiltersAllOf right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
