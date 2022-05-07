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
    /// Object describing an item processing record
    /// </summary>
    [DataContract]
    public partial class ItemProcessingRecord : IEquatable<ItemProcessingRecord>
    {
        /// <summary>
        /// The catalog item id in the merchant namespace
        /// </summary>
        /// <value>The catalog item id in the merchant namespace</value>
        [DataMember(Name="item_id", EmitDefaultValue=false)]
        public string ItemId { get; set; }

        /// <summary>
        /// Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.
        /// </summary>
        /// <value>Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.</value>
        [DataMember(Name="errors", EmitDefaultValue=false)]
        public List<ItemValidationEvent> Errors { get; set; }

        /// <summary>
        /// Array with the validation warnings for the item processing record
        /// </summary>
        /// <value>Array with the validation warnings for the item processing record</value>
        [DataMember(Name="warnings", EmitDefaultValue=false)]
        public List<ItemValidationEvent> Warnings { get; set; }

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name="status", EmitDefaultValue=false)]
        public ItemProcessingStatus Status { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ItemProcessingRecord {\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  Errors: ").Append(Errors).Append("\n");
            sb.Append("  Warnings: ").Append(Warnings).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ItemProcessingRecord)obj);
        }

        /// <summary>
        /// Returns true if ItemProcessingRecord instances are equal
        /// </summary>
        /// <param name="other">Instance of ItemProcessingRecord to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ItemProcessingRecord other)
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
                    Errors == other.Errors ||
                    Errors != null &&
                    other.Errors != null &&
                    Errors.SequenceEqual(other.Errors)
                ) && 
                (
                    Warnings == other.Warnings ||
                    Warnings != null &&
                    other.Warnings != null &&
                    Warnings.SequenceEqual(other.Warnings)
                ) && 
                (
                    Status == other.Status ||
                    
                    Status.Equals(other.Status)
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
                    if (Errors != null)
                    hashCode = hashCode * 59 + Errors.GetHashCode();
                    if (Warnings != null)
                    hashCode = hashCode * 59 + Warnings.GetHashCode();
                    
                    hashCode = hashCode * 59 + Status.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ItemProcessingRecord left, ItemProcessingRecord right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ItemProcessingRecord left, ItemProcessingRecord right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
