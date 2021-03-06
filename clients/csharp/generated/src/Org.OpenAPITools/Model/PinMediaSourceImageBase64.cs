/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// Base64-encoded image media source
    /// </summary>
    [DataContract]
    public partial class PinMediaSourceImageBase64 :  IEquatable<PinMediaSourceImageBase64>, IValidatableObject
    {
        /// <summary>
        /// Defines SourceType
        /// </summary>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum SourceTypeEnum
        {
            /// <summary>
            /// Enum Imagebase64 for value: image_base64
            /// </summary>
            [EnumMember(Value = "image_base64")]
            Imagebase64 = 1

        }

        /// <summary>
        /// Gets or Sets SourceType
        /// </summary>
        [DataMember(Name="source_type", EmitDefaultValue=true)]
        public SourceTypeEnum SourceType { get; set; }
        /// <summary>
        /// Defines ContentType
        /// </summary>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum ContentTypeEnum
        {
            /// <summary>
            /// Enum Jpeg for value: image/jpeg
            /// </summary>
            [EnumMember(Value = "image/jpeg")]
            Jpeg = 1,

            /// <summary>
            /// Enum Png for value: image/png
            /// </summary>
            [EnumMember(Value = "image/png")]
            Png = 2

        }

        /// <summary>
        /// Gets or Sets ContentType
        /// </summary>
        [DataMember(Name="content_type", EmitDefaultValue=true)]
        public ContentTypeEnum ContentType { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="PinMediaSourceImageBase64" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected PinMediaSourceImageBase64() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="PinMediaSourceImageBase64" /> class.
        /// </summary>
        /// <param name="sourceType">sourceType (required).</param>
        /// <param name="contentType">contentType (required).</param>
        /// <param name="data">data (required).</param>
        public PinMediaSourceImageBase64(SourceTypeEnum sourceType = default(SourceTypeEnum), ContentTypeEnum contentType = default(ContentTypeEnum), string data = default(string))
        {
            // to ensure "sourceType" is required (not null)
            if (sourceType == null)
            {
                throw new InvalidDataException("sourceType is a required property for PinMediaSourceImageBase64 and cannot be null");
            }
            else
            {
                this.SourceType = sourceType;
            }

            // to ensure "contentType" is required (not null)
            if (contentType == null)
            {
                throw new InvalidDataException("contentType is a required property for PinMediaSourceImageBase64 and cannot be null");
            }
            else
            {
                this.ContentType = contentType;
            }

            // to ensure "data" is required (not null)
            if (data == null)
            {
                throw new InvalidDataException("data is a required property for PinMediaSourceImageBase64 and cannot be null");
            }
            else
            {
                this.Data = data;
            }

        }



        /// <summary>
        /// Gets or Sets Data
        /// </summary>
        [DataMember(Name="data", EmitDefaultValue=true)]
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
        public virtual string ToJson()
        {
            return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as PinMediaSourceImageBase64);
        }

        /// <summary>
        /// Returns true if PinMediaSourceImageBase64 instances are equal
        /// </summary>
        /// <param name="input">Instance of PinMediaSourceImageBase64 to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PinMediaSourceImageBase64 input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.SourceType == input.SourceType ||
                    (this.SourceType != null &&
                    this.SourceType.Equals(input.SourceType))
                ) && 
                (
                    this.ContentType == input.ContentType ||
                    (this.ContentType != null &&
                    this.ContentType.Equals(input.ContentType))
                ) && 
                (
                    this.Data == input.Data ||
                    (this.Data != null &&
                    this.Data.Equals(input.Data))
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
                int hashCode = 41;
                if (this.SourceType != null)
                    hashCode = hashCode * 59 + this.SourceType.GetHashCode();
                if (this.ContentType != null)
                    hashCode = hashCode * 59 + this.ContentType.GetHashCode();
                if (this.Data != null)
                    hashCode = hashCode * 59 + this.Data.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {


            // Data (string) pattern
            Regex regexData = new Regex(@"[a-zA-Z0-9+\/=]+", RegexOptions.CultureInvariant);
            if (false == regexData.Match(this.Data).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Data, must match a pattern of " + regexData, new [] { "Data" });
            }

            yield break;
        }
    }

}
