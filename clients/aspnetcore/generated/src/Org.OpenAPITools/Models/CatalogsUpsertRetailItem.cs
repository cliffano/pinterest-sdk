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
    /// An item to be upserted
    /// </summary>
    [DataContract]
    public partial class CatalogsUpsertRetailItem : IEquatable<CatalogsUpsertRetailItem>
    {
        /// <summary>
        /// The catalog item id in the merchant namespace
        /// </summary>
        /// <value>The catalog item id in the merchant namespace</value>
        /// <example>DS0294-M</example>
        [Required]
        [DataMember(Name="item_id", EmitDefaultValue=false)]
        public string ItemId { get; set; }


        /// <summary>
        /// Gets or Sets Operation
        /// </summary>
        [TypeConverter(typeof(CustomEnumConverter<OperationEnum>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum OperationEnum
        {
            
            /// <summary>
            /// Enum CREATEEnum for CREATE
            /// </summary>
            [EnumMember(Value = "CREATE")]
            CREATEEnum = 1,
            
            /// <summary>
            /// Enum UPDATEEnum for UPDATE
            /// </summary>
            [EnumMember(Value = "UPDATE")]
            UPDATEEnum = 2,
            
            /// <summary>
            /// Enum UPSERTEnum for UPSERT
            /// </summary>
            [EnumMember(Value = "UPSERT")]
            UPSERTEnum = 3,
            
            /// <summary>
            /// Enum DELETEEnum for DELETE
            /// </summary>
            [EnumMember(Value = "DELETE")]
            DELETEEnum = 4
        }

        /// <summary>
        /// Gets or Sets Operation
        /// </summary>
        [Required]
        [DataMember(Name="operation", EmitDefaultValue=true)]
        public OperationEnum Operation { get; set; }

        /// <summary>
        /// Gets or Sets Attributes
        /// </summary>
        [Required]
        [DataMember(Name="attributes", EmitDefaultValue=false)]
        public ItemAttributes Attributes { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsUpsertRetailItem {\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  Operation: ").Append(Operation).Append("\n");
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
            return obj.GetType() == GetType() && Equals((CatalogsUpsertRetailItem)obj);
        }

        /// <summary>
        /// Returns true if CatalogsUpsertRetailItem instances are equal
        /// </summary>
        /// <param name="other">Instance of CatalogsUpsertRetailItem to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsUpsertRetailItem other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    ItemId == other.ItemId ||
                    ItemId != null &&
                    ItemId.Equals(other.ItemId)
                ) && 
                (
                    Operation == other.Operation ||
                    
                    Operation.Equals(other.Operation)
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
                    if (ItemId != null)
                    hashCode = hashCode * 59 + ItemId.GetHashCode();
                    
                    hashCode = hashCode * 59 + Operation.GetHashCode();
                    if (Attributes != null)
                    hashCode = hashCode * 59 + Attributes.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CatalogsUpsertRetailItem left, CatalogsUpsertRetailItem right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CatalogsUpsertRetailItem left, CatalogsUpsertRetailItem right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}