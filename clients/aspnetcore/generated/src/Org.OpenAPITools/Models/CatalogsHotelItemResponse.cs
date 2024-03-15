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
    /// Object describing a hotel record
    /// </summary>
    [DataContract]
    public partial class CatalogsHotelItemResponse : IEquatable<CatalogsHotelItemResponse>
    {
        /// <summary>
        /// Gets or Sets CatalogType
        /// </summary>
        [Required]
        [DataMember(Name="catalog_type", EmitDefaultValue=true)]
        public CatalogsType CatalogType { get; set; }

        /// <summary>
        /// The catalog hotel id in the merchant namespace
        /// </summary>
        /// <value>The catalog hotel id in the merchant namespace</value>
        /// <example>DS0294-M</example>
        [DataMember(Name="hotel_id", EmitDefaultValue=false)]
        public string HotelId { get; set; }

        /// <summary>
        /// The pins mapped to the item
        /// </summary>
        /// <value>The pins mapped to the item</value>
        [DataMember(Name="pins", EmitDefaultValue=true)]
        public List<Pin> Pins { get; set; }

        /// <summary>
        /// Gets or Sets Attributes
        /// </summary>
        [DataMember(Name="attributes", EmitDefaultValue=false)]
        public CatalogsHotelAttributes Attributes { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsHotelItemResponse {\n");
            sb.Append("  CatalogType: ").Append(CatalogType).Append("\n");
            sb.Append("  HotelId: ").Append(HotelId).Append("\n");
            sb.Append("  Pins: ").Append(Pins).Append("\n");
            sb.Append("  Attributes: ").Append(Attributes).Append("\n");
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
            return obj.GetType() == GetType() && Equals((CatalogsHotelItemResponse)obj);
        }

        /// <summary>
        /// Returns true if CatalogsHotelItemResponse instances are equal
        /// </summary>
        /// <param name="other">Instance of CatalogsHotelItemResponse to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsHotelItemResponse other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    CatalogType == other.CatalogType ||
                    
                    CatalogType.Equals(other.CatalogType)
                ) && 
                (
                    HotelId == other.HotelId ||
                    HotelId != null &&
                    HotelId.Equals(other.HotelId)
                ) && 
                (
                    Pins == other.Pins ||
                    Pins != null &&
                    other.Pins != null &&
                    Pins.SequenceEqual(other.Pins)
                ) && 
                (
                    Attributes == other.Attributes ||
                    Attributes != null &&
                    Attributes.Equals(other.Attributes)
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
                    
                    hashCode = hashCode * 59 + CatalogType.GetHashCode();
                    if (HotelId != null)
                    hashCode = hashCode * 59 + HotelId.GetHashCode();
                    if (Pins != null)
                    hashCode = hashCode * 59 + Pins.GetHashCode();
                    if (Attributes != null)
                    hashCode = hashCode * 59 + Attributes.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CatalogsHotelItemResponse left, CatalogsHotelItemResponse right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CatalogsHotelItemResponse left, CatalogsHotelItemResponse right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
