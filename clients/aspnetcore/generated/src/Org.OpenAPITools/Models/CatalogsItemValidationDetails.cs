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
    public partial class CatalogsItemValidationDetails : IEquatable<CatalogsItemValidationDetails>
    {
        /// <summary>
        /// Gets or Sets AttributeName
        /// </summary>
        [Required]
        [DataMember(Name="attribute_name", EmitDefaultValue=true)]
        public NullableCatalogsItemFieldType? AttributeName { get; set; }

        /// <summary>
        /// Provided value that caused the validation issue.
        /// </summary>
        /// <value>Provided value that caused the validation issue.</value>
        [Required]
        [DataMember(Name="provided_value", EmitDefaultValue=true)]
        public string ProvidedValue { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsItemValidationDetails {\n");
            sb.Append("  AttributeName: ").Append(AttributeName).Append("\n");
            sb.Append("  ProvidedValue: ").Append(ProvidedValue).Append("\n");
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
            return obj.GetType() == GetType() && Equals((CatalogsItemValidationDetails)obj);
        }

        /// <summary>
        /// Returns true if CatalogsItemValidationDetails instances are equal
        /// </summary>
        /// <param name="other">Instance of CatalogsItemValidationDetails to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsItemValidationDetails other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    AttributeName == other.AttributeName ||
                    
                    AttributeName.Equals(other.AttributeName)
                ) && 
                (
                    ProvidedValue == other.ProvidedValue ||
                    ProvidedValue != null &&
                    ProvidedValue.Equals(other.ProvidedValue)
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
                    
                    hashCode = hashCode * 59 + AttributeName.GetHashCode();
                    if (ProvidedValue != null)
                    hashCode = hashCode * 59 + ProvidedValue.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CatalogsItemValidationDetails left, CatalogsItemValidationDetails right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CatalogsItemValidationDetails left, CatalogsItemValidationDetails right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
