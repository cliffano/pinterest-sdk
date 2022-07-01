/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
    /// Base64-encoded image media source
    /// </summary>
    [DataContract]
    public partial class PinMediaSourceImageBase64 : IEquatable<PinMediaSourceImageBase64>
    {

        /// <summary>
        /// Gets or Sets SourceType
        /// </summary>
        [TypeConverter(typeof(CustomEnumConverter<SourceTypeEnum>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum SourceTypeEnum
        {
            
            /// <summary>
            /// Enum ImageBase64Enum for image_base64
            /// </summary>
            [EnumMember(Value = "image_base64")]
            ImageBase64Enum = 1
        }

        /// <summary>
        /// Gets or Sets SourceType
        /// </summary>
        [Required]
        [DataMember(Name="source_type", EmitDefaultValue=false)]
        public SourceTypeEnum SourceType { get; set; }


        /// <summary>
        /// Gets or Sets ContentType
        /// </summary>
        [TypeConverter(typeof(CustomEnumConverter<ContentTypeEnum>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum ContentTypeEnum
        {
            
            /// <summary>
            /// Enum JpegEnum for image/jpeg
            /// </summary>
            [EnumMember(Value = "image/jpeg")]
            JpegEnum = 1,
            
            /// <summary>
            /// Enum PngEnum for image/png
            /// </summary>
            [EnumMember(Value = "image/png")]
            PngEnum = 2
        }

        /// <summary>
        /// Gets or Sets ContentType
        /// </summary>
        [Required]
        [DataMember(Name="content_type", EmitDefaultValue=false)]
        public ContentTypeEnum ContentType { get; set; }

        /// <summary>
        /// Gets or Sets Data
        /// </summary>
        [Required]
        [RegularExpression("[a-zA-Z0-9+/=]+")]
        [DataMember(Name="data", EmitDefaultValue=false)]
        public string Data { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PinMediaSourceImageBase64 {\n");
            sb.Append("  SourceType: ").Append(SourceType).Append("\n");
            sb.Append("  ContentType: ").Append(ContentType).Append("\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
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
            return obj.GetType() == GetType() && Equals((PinMediaSourceImageBase64)obj);
        }

        /// <summary>
        /// Returns true if PinMediaSourceImageBase64 instances are equal
        /// </summary>
        /// <param name="other">Instance of PinMediaSourceImageBase64 to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PinMediaSourceImageBase64 other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    SourceType == other.SourceType ||
                    
                    SourceType.Equals(other.SourceType)
                ) && 
                (
                    ContentType == other.ContentType ||
                    
                    ContentType.Equals(other.ContentType)
                ) && 
                (
                    Data == other.Data ||
                    Data != null &&
                    Data.Equals(other.Data)
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
                    
                    hashCode = hashCode * 59 + ContentType.GetHashCode();
                    if (Data != null)
                    hashCode = hashCode * 59 + Data.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(PinMediaSourceImageBase64 left, PinMediaSourceImageBase64 right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(PinMediaSourceImageBase64 left, PinMediaSourceImageBase64 right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
