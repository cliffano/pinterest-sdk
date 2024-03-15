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
    /// Multiple Base64-encoded images media source
    /// </summary>
    [DataContract]
    public partial class PinMediaSourceImagesBase64 : IEquatable<PinMediaSourceImagesBase64>
    {

        /// <summary>
        /// Gets or Sets SourceType
        /// </summary>
        [TypeConverter(typeof(CustomEnumConverter<SourceTypeEnum>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum SourceTypeEnum
        {
            
            /// <summary>
            /// Enum MultipleImageBase64Enum for multiple_image_base64
            /// </summary>
            [EnumMember(Value = "multiple_image_base64")]
            MultipleImageBase64Enum = 1
        }

        /// <summary>
        /// Gets or Sets SourceType
        /// </summary>
        [DataMember(Name="source_type", EmitDefaultValue=true)]
        public SourceTypeEnum SourceType { get; set; }

        /// <summary>
        /// Array with image objects.
        /// </summary>
        /// <value>Array with image objects.</value>
        [Required]
        [DataMember(Name="items", EmitDefaultValue=false)]
        public List<PinMediaSourceImagesBase64ItemsInner> Items { get; set; }

        /// <summary>
        /// Gets or Sets Index
        /// </summary>
        [DataMember(Name="index", EmitDefaultValue=true)]
        public int Index { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PinMediaSourceImagesBase64 {\n");
            sb.Append("  SourceType: ").Append(SourceType).Append("\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("  Index: ").Append(Index).Append("\n");
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
            return obj.GetType() == GetType() && Equals((PinMediaSourceImagesBase64)obj);
        }

        /// <summary>
        /// Returns true if PinMediaSourceImagesBase64 instances are equal
        /// </summary>
        /// <param name="other">Instance of PinMediaSourceImagesBase64 to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PinMediaSourceImagesBase64 other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    SourceType == other.SourceType ||
                    
                    SourceType.Equals(other.SourceType)
                ) && 
                (
                    Items == other.Items ||
                    Items != null &&
                    other.Items != null &&
                    Items.SequenceEqual(other.Items)
                ) && 
                (
                    Index == other.Index ||
                    
                    Index.Equals(other.Index)
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
                    
                    hashCode = hashCode * 59 + SourceType.GetHashCode();
                    if (Items != null)
                    hashCode = hashCode * 59 + Items.GetHashCode();
                    
                    hashCode = hashCode * 59 + Index.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(PinMediaSourceImagesBase64 left, PinMediaSourceImagesBase64 right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(PinMediaSourceImagesBase64 left, PinMediaSourceImagesBase64 right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
