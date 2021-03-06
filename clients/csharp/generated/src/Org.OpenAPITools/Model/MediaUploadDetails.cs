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
    /// Media upload details
    /// </summary>
    [DataContract]
    public partial class MediaUploadDetails :  IEquatable<MediaUploadDetails>, IValidatableObject
    {
        /// <summary>
        /// Gets or Sets MediaType
        /// </summary>
        [DataMember(Name="media_type", EmitDefaultValue=false)]
        public MediaUploadType? MediaType { get; set; }
        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name="status", EmitDefaultValue=false)]
        public MediaUploadStatus? Status { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="MediaUploadDetails" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        public MediaUploadDetails()
        {
        }

        /// <summary>
        /// Gets or Sets MediaId
        /// </summary>
        [DataMember(Name="media_id", EmitDefaultValue=false)]
        public string MediaId { get; private set; }



        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MediaUploadDetails {\n");
            sb.Append("  MediaId: ").Append(MediaId).Append("\n");
            sb.Append("  MediaType: ").Append(MediaType).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
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
            return this.Equals(input as MediaUploadDetails);
        }

        /// <summary>
        /// Returns true if MediaUploadDetails instances are equal
        /// </summary>
        /// <param name="input">Instance of MediaUploadDetails to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(MediaUploadDetails input)
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
                    this.Status == input.Status ||
                    (this.Status != null &&
                    this.Status.Equals(input.Status))
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
                if (this.Status != null)
                    hashCode = hashCode * 59 + this.Status.GetHashCode();
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
