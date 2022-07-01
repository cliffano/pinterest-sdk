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

namespace Org.OpenAPITools.Models
{
    /// <summary>
    /// CatalogsFeedIngestionErrors
    /// </summary>
    [DataContract(Name = "CatalogsFeedIngestionErrors")]
    public partial class CatalogsFeedIngestionErrors : IEquatable<CatalogsFeedIngestionErrors>, IValidatableObject
    {
        /// <summary>
        /// Defines LargeProductCountDecrease
        /// </summary>
        public enum LargeProductCountDecreaseEnum
        {
            /// <summary>
            /// Enum NUMBER_1 for value: 1
            /// </summary>
            NUMBER_1 = 1

        }


        /// <summary>
        /// Gets or Sets LargeProductCountDecrease
        /// </summary>
        [DataMember(Name = "large_product_count_decrease", EmitDefaultValue = false)]
        public LargeProductCountDecreaseEnum? LargeProductCountDecrease { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeedIngestionErrors" /> class.
        /// </summary>
        /// <param name="imageDownloadError">imageDownloadError.</param>
        /// <param name="imageDownloadConnectionTimeout">imageDownloadConnectionTimeout.</param>
        /// <param name="imageFormatUnrecognize">imageFormatUnrecognize.</param>
        /// <param name="lineLevelInternalError">lineLevelInternalError.</param>
        /// <param name="largeProductCountDecrease">largeProductCountDecrease.</param>
        public CatalogsFeedIngestionErrors(int imageDownloadError = default(int), int imageDownloadConnectionTimeout = default(int), int imageFormatUnrecognize = default(int), int lineLevelInternalError = default(int), LargeProductCountDecreaseEnum? largeProductCountDecrease = default(LargeProductCountDecreaseEnum?))
        {
            this.ImageDownloadError = imageDownloadError;
            this.ImageDownloadConnectionTimeout = imageDownloadConnectionTimeout;
            this.ImageFormatUnrecognize = imageFormatUnrecognize;
            this.LineLevelInternalError = lineLevelInternalError;
            this.LargeProductCountDecrease = largeProductCountDecrease;
        }

        /// <summary>
        /// Gets or Sets ImageDownloadError
        /// </summary>
        [DataMember(Name = "image_download_error", EmitDefaultValue = false)]
        public int ImageDownloadError { get; set; }

        /// <summary>
        /// Gets or Sets ImageDownloadConnectionTimeout
        /// </summary>
        [DataMember(Name = "image_download_connection_timeout", EmitDefaultValue = false)]
        public int ImageDownloadConnectionTimeout { get; set; }

        /// <summary>
        /// Gets or Sets ImageFormatUnrecognize
        /// </summary>
        [DataMember(Name = "image_format_unrecognize", EmitDefaultValue = false)]
        public int ImageFormatUnrecognize { get; set; }

        /// <summary>
        /// Gets or Sets LineLevelInternalError
        /// </summary>
        [DataMember(Name = "line_level_internal_error", EmitDefaultValue = false)]
        public int LineLevelInternalError { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsFeedIngestionErrors {\n");
            sb.Append("  ImageDownloadError: ").Append(ImageDownloadError).Append("\n");
            sb.Append("  ImageDownloadConnectionTimeout: ").Append(ImageDownloadConnectionTimeout).Append("\n");
            sb.Append("  ImageFormatUnrecognize: ").Append(ImageFormatUnrecognize).Append("\n");
            sb.Append("  LineLevelInternalError: ").Append(LineLevelInternalError).Append("\n");
            sb.Append("  LargeProductCountDecrease: ").Append(LargeProductCountDecrease).Append("\n");
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
            return this.Equals(input as CatalogsFeedIngestionErrors);
        }

        /// <summary>
        /// Returns true if CatalogsFeedIngestionErrors instances are equal
        /// </summary>
        /// <param name="input">Instance of CatalogsFeedIngestionErrors to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsFeedIngestionErrors input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.ImageDownloadError == input.ImageDownloadError ||
                    this.ImageDownloadError.Equals(input.ImageDownloadError)
                ) && 
                (
                    this.ImageDownloadConnectionTimeout == input.ImageDownloadConnectionTimeout ||
                    this.ImageDownloadConnectionTimeout.Equals(input.ImageDownloadConnectionTimeout)
                ) && 
                (
                    this.ImageFormatUnrecognize == input.ImageFormatUnrecognize ||
                    this.ImageFormatUnrecognize.Equals(input.ImageFormatUnrecognize)
                ) && 
                (
                    this.LineLevelInternalError == input.LineLevelInternalError ||
                    this.LineLevelInternalError.Equals(input.LineLevelInternalError)
                ) && 
                (
                    this.LargeProductCountDecrease == input.LargeProductCountDecrease ||
                    this.LargeProductCountDecrease.Equals(input.LargeProductCountDecrease)
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
                hashCode = hashCode * 59 + this.ImageDownloadError.GetHashCode();
                hashCode = hashCode * 59 + this.ImageDownloadConnectionTimeout.GetHashCode();
                hashCode = hashCode * 59 + this.ImageFormatUnrecognize.GetHashCode();
                hashCode = hashCode * 59 + this.LineLevelInternalError.GetHashCode();
                hashCode = hashCode * 59 + this.LargeProductCountDecrease.GetHashCode();
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
