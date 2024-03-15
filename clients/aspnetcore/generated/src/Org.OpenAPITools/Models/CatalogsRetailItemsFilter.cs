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
    public partial class CatalogsRetailItemsFilter : IEquatable<CatalogsRetailItemsFilter>
    {

        /// <summary>
        /// Gets or Sets CatalogType
        /// </summary>
        [TypeConverter(typeof(CustomEnumConverter<CatalogTypeEnum>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum CatalogTypeEnum
        {
            
            /// <summary>
            /// Enum RETAILEnum for RETAIL
            /// </summary>
            [EnumMember(Value = "RETAIL")]
            RETAILEnum = 1
        }

        /// <summary>
        /// Gets or Sets CatalogType
        /// </summary>
        [Required]
        [DataMember(Name="catalog_type", EmitDefaultValue=true)]
        public CatalogTypeEnum CatalogType { get; set; }

        /// <summary>
        /// Gets or Sets ItemIds
        /// </summary>
        [Required]
        [DataMember(Name="item_ids", EmitDefaultValue=false)]
        public List<string> ItemIds { get; set; }

        /// <summary>
        /// Catalog id pertaining to the retail item. If not provided, default to oldest retail catalog
        /// </summary>
        /// <value>Catalog id pertaining to the retail item. If not provided, default to oldest retail catalog</value>
        [RegularExpression("^\\d+$")]
        [DataMember(Name="catalog_id", EmitDefaultValue=false)]
        public string CatalogId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsRetailItemsFilter {\n");
            sb.Append("  CatalogType: ").Append(CatalogType).Append("\n");
            sb.Append("  ItemIds: ").Append(ItemIds).Append("\n");
            sb.Append("  CatalogId: ").Append(CatalogId).Append("\n");
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
            return obj.GetType() == GetType() && Equals((CatalogsRetailItemsFilter)obj);
        }

        /// <summary>
        /// Returns true if CatalogsRetailItemsFilter instances are equal
        /// </summary>
        /// <param name="other">Instance of CatalogsRetailItemsFilter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsRetailItemsFilter other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    CatalogType == other.CatalogType ||
                    
                    CatalogType.Equals(other.CatalogType)
                ) && 
                (
                    ItemIds == other.ItemIds ||
                    ItemIds != null &&
                    other.ItemIds != null &&
                    ItemIds.SequenceEqual(other.ItemIds)
                ) && 
                (
                    CatalogId == other.CatalogId ||
                    CatalogId != null &&
                    CatalogId.Equals(other.CatalogId)
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
                    if (ItemIds != null)
                    hashCode = hashCode * 59 + ItemIds.GetHashCode();
                    if (CatalogId != null)
                    hashCode = hashCode * 59 + CatalogId.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CatalogsRetailItemsFilter left, CatalogsRetailItemsFilter right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CatalogsRetailItemsFilter left, CatalogsRetailItemsFilter right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
