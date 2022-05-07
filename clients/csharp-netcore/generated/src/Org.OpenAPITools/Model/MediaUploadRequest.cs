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
    /// Media upload request
    /// </summary>
    [DataContract(Name = "MediaUploadRequest")]
    public partial class MediaUploadRequest : IEquatable<MediaUploadRequest>, IValidatableObject
    {

        /// <summary>
        /// Gets or Sets MediaType
        /// </summary>
        [DataMember(Name = "media_type", IsRequired = true, EmitDefaultValue = false)]
        public MediaUploadType MediaType { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="MediaUploadRequest" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected MediaUploadRequest() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="MediaUploadRequest" /> class.
        /// </summary>
        /// <param name="mediaType">mediaType (required).</param>
        public MediaUploadRequest(MediaUploadType mediaType = default(MediaUploadType))
        {
            this.MediaType = mediaType;
        }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class MediaUploadRequest {\n");
            sb.Append("  MediaType: ").Append(MediaType).Append("\n");
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
            return this.Equals(input as MediaUploadRequest);
        }

        /// <summary>
        /// Returns true if MediaUploadRequest instances are equal
        /// </summary>
        /// <param name="input">Instance of MediaUploadRequest to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(MediaUploadRequest input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.MediaType == input.MediaType ||
                    this.MediaType.Equals(input.MediaType)
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
                hashCode = (hashCode * 59) + this.MediaType.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        public IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
