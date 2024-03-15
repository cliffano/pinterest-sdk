/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.IO;
using System.Runtime.Serialization;
using System.Text;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using Newtonsoft.Json.Linq;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// Media upload that has been registered but not uploaded/processed yet.
    /// </summary>
    [DataContract(Name = "MediaUpload")]
    public partial class MediaUpload : IValidatableObject
    {

        /// <summary>
        /// Gets or Sets MediaType
        /// </summary>
        [DataMember(Name = "media_type", EmitDefaultValue = false)]
        public MediaUploadType? MediaType { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="MediaUpload" /> class.
        /// </summary>
        /// <param name="mediaId">Unique identifier for this media upload. Used to track status and for attaching during Pin creation..</param>
        /// <param name="mediaType">mediaType.</param>
        /// <param name="uploadUrl">The URL where you will POST your media file..</param>
        /// <param name="uploadParameters">uploadParameters.</param>
        public MediaUpload(string mediaId = default(string), MediaUploadType? mediaType = default(MediaUploadType?), string uploadUrl = default(string), MediaUploadAllOfUploadParameters uploadParameters = default(MediaUploadAllOfUploadParameters))
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
        [DataMember(Name = "media_id", EmitDefaultValue = false)]
        public string MediaId { get; set; }

        /// <summary>
        /// The URL where you will POST your media file.
        /// </summary>
        /// <value>The URL where you will POST your media file.</value>
        /// <example>https://pinterest-media-upload.s3-accelerate.amazonaws.com/</example>
        [DataMember(Name = "upload_url", EmitDefaultValue = false)]
        public string UploadUrl { get; set; }

        /// <summary>
        /// Gets or Sets UploadParameters
        /// </summary>
        [DataMember(Name = "upload_parameters", EmitDefaultValue = false)]
        public MediaUploadAllOfUploadParameters UploadParameters { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class MediaUpload {\n");
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
