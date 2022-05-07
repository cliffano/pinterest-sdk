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
    public partial class ProductType4Filter : IEquatable<ProductType4Filter>
    {
        /// <summary>
        /// Gets or Sets PRODUCTTYPE4
        /// </summary>
        [Required]
        [DataMember(Name="PRODUCT_TYPE_4", EmitDefaultValue=false)]
        public CatalogsProductGroupMultipleStringListCriteria PRODUCTTYPE4 { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ProductType4Filter {\n");
            sb.Append("  PRODUCTTYPE4: ").Append(PRODUCTTYPE4).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ProductType4Filter)obj);
        }

        /// <summary>
        /// Returns true if ProductType4Filter instances are equal
        /// </summary>
        /// <param name="other">Instance of ProductType4Filter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ProductType4Filter other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    PRODUCTTYPE4 == other.PRODUCTTYPE4 ||
                    PRODUCTTYPE4 != null &&
                    PRODUCTTYPE4.Equals(other.PRODUCTTYPE4)
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
                    if (PRODUCTTYPE4 != null)
                    hashCode = hashCode * 59 + PRODUCTTYPE4.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ProductType4Filter left, ProductType4Filter right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ProductType4Filter left, ProductType4Filter right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
