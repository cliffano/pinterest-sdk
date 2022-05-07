/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
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
    /// Image URL-based media source
    /// </summary>
    [DataContract]
    public partial class PinMediaSourceImageURL :  IEquatable<PinMediaSourceImageURL>, IValidatableObject
    {
        /// <summary>
        /// Defines SourceType
        /// </summary>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum SourceTypeEnum
        {
            /// <summary>
            /// Enum Imageurl for value: image_url
            /// </summary>
            [EnumMember(Value = "image_url")]
            Imageurl = 1

        }

        /// <summary>
        /// Gets or Sets SourceType
        /// </summary>
        [DataMember(Name="source_type", EmitDefaultValue=true)]
        public SourceTypeEnum SourceType { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="PinMediaSourceImageURL" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected PinMediaSourceImageURL() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="PinMediaSourceImageURL" /> class.
        /// </summary>
        /// <param name="sourceType">sourceType (required).</param>
        /// <param name="url">url (required).</param>
        public PinMediaSourceImageURL(SourceTypeEnum sourceType = default(SourceTypeEnum), string url = default(string))
        {
            // to ensure "sourceType" is required (not null)
            if (sourceType == null)
            {
                throw new InvalidDataException("sourceType is a required property for PinMediaSourceImageURL and cannot be null");
            }
            else
            {
                this.SourceType = sourceType;
            }

            // to ensure "url" is required (not null)
            if (url == null)
            {
                throw new InvalidDataException("url is a required property for PinMediaSourceImageURL and cannot be null");
            }
            else
            {
                this.Url = url;
            }

        }


        /// <summary>
        /// Gets or Sets Url
        /// </summary>
        [DataMember(Name="url", EmitDefaultValue=true)]
        public string Url { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PinMediaSourceImageURL {\n");
            sb.Append("  SourceType: ").Append(SourceType).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
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
            return this.Equals(input as PinMediaSourceImageURL);
        }

        /// <summary>
        /// Returns true if PinMediaSourceImageURL instances are equal
        /// </summary>
        /// <param name="input">Instance of PinMediaSourceImageURL to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PinMediaSourceImageURL input)
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
                    this.Url == input.Url ||
                    (this.Url != null &&
                    this.Url.Equals(input.Url))
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
                if (this.Url != null)
                    hashCode = hashCode * 59 + this.Url.GetHashCode();
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
            yield break;
        }
    }

}
