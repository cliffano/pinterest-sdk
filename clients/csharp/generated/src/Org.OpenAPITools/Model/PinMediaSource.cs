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
using JsonSubTypes;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// Pin media source.
    /// </summary>
    [DataContract]
    [JsonConverter(typeof(JsonSubtypes), "sourceType")]
    public partial class PinMediaSource :  IEquatable<PinMediaSource>, IValidatableObject
    {
        /// <summary>
        /// Defines SourceType
        /// </summary>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum SourceTypeEnum
        {
            /// <summary>
            /// Enum Videoid for value: video_id
            /// </summary>
            [EnumMember(Value = "video_id")]
            Videoid = 1

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
        /// Initializes a new instance of the <see cref="PinMediaSource" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected PinMediaSource() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="PinMediaSource" /> class.
        /// </summary>
        /// <param name="sourceType">sourceType (required).</param>
        /// <param name="contentType">contentType (required).</param>
        /// <param name="data">data (required).</param>
        /// <param name="url">url (required).</param>
        /// <param name="coverImageUrl">coverImageUrl (required).</param>
        /// <param name="mediaId">mediaId (required).</param>
        public PinMediaSource(SourceTypeEnum sourceType = default(SourceTypeEnum), ContentTypeEnum contentType = default(ContentTypeEnum), string data = default(string), string url = default(string), string coverImageUrl = default(string), string mediaId = default(string))
        {
            // to ensure "sourceType" is required (not null)
            if (sourceType == null)
            {
                throw new InvalidDataException("sourceType is a required property for PinMediaSource and cannot be null");
            }
            else
            {
                this.SourceType = sourceType;
            }

            // to ensure "contentType" is required (not null)
            if (contentType == null)
            {
                throw new InvalidDataException("contentType is a required property for PinMediaSource and cannot be null");
            }
            else
            {
                this.ContentType = contentType;
            }

            // to ensure "data" is required (not null)
            if (data == null)
            {
                throw new InvalidDataException("data is a required property for PinMediaSource and cannot be null");
            }
            else
            {
                this.Data = data;
            }

            // to ensure "url" is required (not null)
            if (url == null)
            {
                throw new InvalidDataException("url is a required property for PinMediaSource and cannot be null");
            }
            else
            {
                this.Url = url;
            }

            // to ensure "coverImageUrl" is required (not null)
            if (coverImageUrl == null)
            {
                throw new InvalidDataException("coverImageUrl is a required property for PinMediaSource and cannot be null");
            }
            else
            {
                this.CoverImageUrl = coverImageUrl;
            }

            // to ensure "mediaId" is required (not null)
            if (mediaId == null)
            {
                throw new InvalidDataException("mediaId is a required property for PinMediaSource and cannot be null");
            }
            else
            {
                this.MediaId = mediaId;
            }

        }



        /// <summary>
        /// Gets or Sets Data
        /// </summary>
        [DataMember(Name="data", EmitDefaultValue=true)]
        public string Data { get; set; }

        /// <summary>
        /// Gets or Sets Url
        /// </summary>
        [DataMember(Name="url", EmitDefaultValue=true)]
        public string Url { get; set; }

        /// <summary>
        /// Gets or Sets CoverImageUrl
        /// </summary>
        [DataMember(Name="cover_image_url", EmitDefaultValue=true)]
        public string CoverImageUrl { get; set; }

        /// <summary>
        /// Gets or Sets MediaId
        /// </summary>
        [DataMember(Name="media_id", EmitDefaultValue=true)]
        public string MediaId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PinMediaSource {\n");
            sb.Append("  SourceType: ").Append(SourceType).Append("\n");
            sb.Append("  ContentType: ").Append(ContentType).Append("\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("  CoverImageUrl: ").Append(CoverImageUrl).Append("\n");
            sb.Append("  MediaId: ").Append(MediaId).Append("\n");
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
            return this.Equals(input as PinMediaSource);
        }

        /// <summary>
        /// Returns true if PinMediaSource instances are equal
        /// </summary>
        /// <param name="input">Instance of PinMediaSource to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PinMediaSource input)
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
                ) && 
                (
                    this.Url == input.Url ||
                    (this.Url != null &&
                    this.Url.Equals(input.Url))
                ) && 
                (
                    this.CoverImageUrl == input.CoverImageUrl ||
                    (this.CoverImageUrl != null &&
                    this.CoverImageUrl.Equals(input.CoverImageUrl))
                ) && 
                (
                    this.MediaId == input.MediaId ||
                    (this.MediaId != null &&
                    this.MediaId.Equals(input.MediaId))
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
                if (this.Url != null)
                    hashCode = hashCode * 59 + this.Url.GetHashCode();
                if (this.CoverImageUrl != null)
                    hashCode = hashCode * 59 + this.CoverImageUrl.GetHashCode();
                if (this.MediaId != null)
                    hashCode = hashCode * 59 + this.MediaId.GetHashCode();
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



            // MediaId (string) pattern
            Regex regexMediaId = new Regex(@"^\\d+$", RegexOptions.CultureInvariant);
            if (false == regexMediaId.Match(this.MediaId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for MediaId, must match a pattern of " + regexMediaId, new [] { "MediaId" });
            }

            yield break;
        }
    }

}
