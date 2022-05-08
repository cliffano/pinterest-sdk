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
    /// MediaUploadAllOf
    /// </summary>
    [DataContract]
    public partial class MediaUploadAllOf :  IEquatable<MediaUploadAllOf>, IValidatableObject
    {
        /// <summary>
        /// Gets or Sets MediaType
        /// </summary>
        [DataMember(Name="media_type", EmitDefaultValue=false)]
        public MediaUploadType? MediaType { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="MediaUploadAllOf" /> class.
        /// </summary>
        /// <param name="mediaId">Unique identifier for this media upload. Used to track status and for attaching during Pin creation..</param>
        /// <param name="mediaType">mediaType.</param>
        /// <param name="uploadUrl">The URL where you will POST your media file..</param>
        /// <param name="uploadParameters">uploadParameters.</param>
        public MediaUploadAllOf(string mediaId = default(string), MediaUploadType? mediaType = default(MediaUploadType?), string uploadUrl = default(string), MediaUploadAllOfUploadParameters uploadParameters = default(MediaUploadAllOfUploadParameters))
        {
            this.MediaId = mediaId;
            this.MediaType = mediaType;
            this.UploadUrl = uploadUrl;
            this.UploadParameters = uploadParameters;
        }

        /// <summary>
        /// Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
        /// </summary>
        /// <value>Unique identifier for this media upload. Used to track status and for attaching during Pin creation.</value>
        [DataMember(Name="media_id", EmitDefaultValue=false)]
        public string MediaId { get; set; }


        /// <summary>
        /// The URL where you will POST your media file.
        /// </summary>
        /// <value>The URL where you will POST your media file.</value>
        [DataMember(Name="upload_url", EmitDefaultValue=false)]
        public string UploadUrl { get; set; }

        /// <summary>
        /// Gets or Sets UploadParameters
        /// </summary>
        [DataMember(Name="upload_parameters", EmitDefaultValue=false)]
        public MediaUploadAllOfUploadParameters UploadParameters { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MediaUploadAllOf {\n");
            sb.Append("  MediaId: ").Append(MediaId).Append("\n");
            sb.Append("  MediaType: ").Append(MediaType).Append("\n");
            sb.Append("  UploadUrl: ").Append(UploadUrl).Append("\n");
            sb.Append("  UploadParameters: ").Append(UploadParameters).Append("\n");
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
            return this.Equals(input as MediaUploadAllOf);
        }

        /// <summary>
        /// Returns true if MediaUploadAllOf instances are equal
        /// </summary>
        /// <param name="input">Instance of MediaUploadAllOf to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(MediaUploadAllOf input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.MediaId == input.MediaId ||
                    (this.MediaId != null &&
                    this.MediaId.Equals(input.MediaId))
                ) && 
                (
                    this.MediaType == input.MediaType ||
                    (this.MediaType != null &&
                    this.MediaType.Equals(input.MediaType))
                ) && 
                (
                    this.UploadUrl == input.UploadUrl ||
                    (this.UploadUrl != null &&
                    this.UploadUrl.Equals(input.UploadUrl))
                ) && 
                (
                    this.UploadParameters == input.UploadParameters ||
                    (this.UploadParameters != null &&
                    this.UploadParameters.Equals(input.UploadParameters))
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
                if (this.MediaId != null)
                    hashCode = hashCode * 59 + this.MediaId.GetHashCode();
                if (this.MediaType != null)
                    hashCode = hashCode * 59 + this.MediaType.GetHashCode();
                if (this.UploadUrl != null)
                    hashCode = hashCode * 59 + this.UploadUrl.GetHashCode();
                if (this.UploadParameters != null)
                    hashCode = hashCode * 59 + this.UploadParameters.GetHashCode();
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