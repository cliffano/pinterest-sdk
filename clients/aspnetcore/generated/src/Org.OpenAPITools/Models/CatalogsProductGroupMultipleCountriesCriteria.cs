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
    public partial class CatalogsProductGroupMultipleCountriesCriteria : IEquatable<CatalogsProductGroupMultipleCountriesCriteria>
    {
        /// <summary>
        /// Gets or Sets Values
        /// </summary>
        [Required]
        [DataMember(Name="values", EmitDefaultValue=false)]
        public List<Country> Values { get; set; }

        /// <summary>
        /// Gets or Sets Negated
        /// </summary>
        [DataMember(Name="negated", EmitDefaultValue=true)]
        public bool Negated { get; set; } = false;

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsProductGroupMultipleCountriesCriteria {\n");
            sb.Append("  Values: ").Append(Values).Append("\n");
            sb.Append("  Negated: ").Append(Negated).Append("\n");
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
            return obj.GetType() == GetType() && Equals((CatalogsProductGroupMultipleCountriesCriteria)obj);
        }

        /// <summary>
        /// Returns true if CatalogsProductGroupMultipleCountriesCriteria instances are equal
        /// </summary>
        /// <param name="other">Instance of CatalogsProductGroupMultipleCountriesCriteria to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsProductGroupMultipleCountriesCriteria other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Values == other.Values ||
                    Values != null &&
                    other.Values != null &&
                    Values.SequenceEqual(other.Values)
                ) && 
                (
                    Negated == other.Negated ||
                    
                    Negated.Equals(other.Negated)
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
                    if (Values != null)
                    hashCode = hashCode * 59 + Values.GetHashCode();
                    
                    hashCode = hashCode * 59 + Negated.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CatalogsProductGroupMultipleCountriesCriteria left, CatalogsProductGroupMultipleCountriesCriteria right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CatalogsProductGroupMultipleCountriesCriteria left, CatalogsProductGroupMultipleCountriesCriteria right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
