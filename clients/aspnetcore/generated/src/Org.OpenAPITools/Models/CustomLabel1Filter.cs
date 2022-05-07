/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
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
    public partial class CustomLabel1Filter : IEquatable<CustomLabel1Filter>
    {
        /// <summary>
        /// Gets or Sets CUSTOMLABEL1
        /// </summary>
        [Required]
        [DataMember(Name="CUSTOM_LABEL_1", EmitDefaultValue=false)]
        public CatalogsProductGroupMultipleStringCriteria CUSTOMLABEL1 { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CustomLabel1Filter {\n");
            sb.Append("  CUSTOMLABEL1: ").Append(CUSTOMLABEL1).Append("\n");
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
            return obj.GetType() == GetType() && Equals((CustomLabel1Filter)obj);
        }

        /// <summary>
        /// Returns true if CustomLabel1Filter instances are equal
        /// </summary>
        /// <param name="other">Instance of CustomLabel1Filter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CustomLabel1Filter other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    CUSTOMLABEL1 == other.CUSTOMLABEL1 ||
                    CUSTOMLABEL1 != null &&
                    CUSTOMLABEL1.Equals(other.CUSTOMLABEL1)
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
                    if (CUSTOMLABEL1 != null)
                    hashCode = hashCode * 59 + CUSTOMLABEL1.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CustomLabel1Filter left, CustomLabel1Filter right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CustomLabel1Filter left, CustomLabel1Filter right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
