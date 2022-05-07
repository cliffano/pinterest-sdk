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
    public partial class GoogleProductCategory2Filter : IEquatable<GoogleProductCategory2Filter>
    {
        /// <summary>
        /// Gets or Sets GOOGLEPRODUCTCATEGORY2
        /// </summary>
        [Required]
        [DataMember(Name="GOOGLE_PRODUCT_CATEGORY_2", EmitDefaultValue=false)]
        public CatalogsProductGroupMultipleStringListCriteria GOOGLEPRODUCTCATEGORY2 { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GoogleProductCategory2Filter {\n");
            sb.Append("  GOOGLEPRODUCTCATEGORY2: ").Append(GOOGLEPRODUCTCATEGORY2).Append("\n");
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
            return obj.GetType() == GetType() && Equals((GoogleProductCategory2Filter)obj);
        }

        /// <summary>
        /// Returns true if GoogleProductCategory2Filter instances are equal
        /// </summary>
        /// <param name="other">Instance of GoogleProductCategory2Filter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(GoogleProductCategory2Filter other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    GOOGLEPRODUCTCATEGORY2 == other.GOOGLEPRODUCTCATEGORY2 ||
                    GOOGLEPRODUCTCATEGORY2 != null &&
                    GOOGLEPRODUCTCATEGORY2.Equals(other.GOOGLEPRODUCTCATEGORY2)
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
                    if (GOOGLEPRODUCTCATEGORY2 != null)
                    hashCode = hashCode * 59 + GOOGLEPRODUCTCATEGORY2.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(GoogleProductCategory2Filter left, GoogleProductCategory2Filter right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(GoogleProductCategory2Filter left, GoogleProductCategory2Filter right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
