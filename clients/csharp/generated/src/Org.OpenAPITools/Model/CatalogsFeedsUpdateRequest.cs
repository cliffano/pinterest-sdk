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
    /// Request object for updating a feed.
    /// </summary>
    [DataContract(Name = "CatalogsFeedsUpdateRequest")]
    public partial class CatalogsFeedsUpdateRequest : IValidatableObject
    {

        /// <summary>
        /// Gets or Sets DefaultAvailability
        /// </summary>
        [DataMember(Name = "default_availability", EmitDefaultValue = true)]
        public ProductAvailabilityType? DefaultAvailability { get; set; }

        /// <summary>
        /// Gets or Sets DefaultCurrency
        /// </summary>
        [DataMember(Name = "default_currency", EmitDefaultValue = true)]
        public NullableCurrency? DefaultCurrency { get; set; }

        /// <summary>
        /// Gets or Sets Format
        /// </summary>
        [DataMember(Name = "format", EmitDefaultValue = false)]
        public CatalogsFormat? Format { get; set; }

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name = "status", EmitDefaultValue = false)]
        public CatalogsStatus? Status { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeedsUpdateRequest" /> class.
        /// </summary>
        /// <param name="defaultAvailability">defaultAvailability.</param>
        /// <param name="defaultCurrency">defaultCurrency.</param>
        /// <param name="name">A human-friendly name associated to a given feed..</param>
        /// <param name="format">format.</param>
        /// <param name="credentials">credentials.</param>
        /// <param name="location">The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing..</param>
        /// <param name="preferredProcessingSchedule">preferredProcessingSchedule.</param>
        /// <param name="status">status.</param>
        public CatalogsFeedsUpdateRequest(ProductAvailabilityType? defaultAvailability = default(ProductAvailabilityType?), NullableCurrency? defaultCurrency = default(NullableCurrency?), string name = default(string), CatalogsFormat? format = default(CatalogsFormat?), CatalogsFeedCredentials credentials = default(CatalogsFeedCredentials), string location = default(string), CatalogsFeedProcessingSchedule preferredProcessingSchedule = default(CatalogsFeedProcessingSchedule), CatalogsStatus? status = default(CatalogsStatus?))
        {
            this.DefaultAvailability = defaultAvailability;
            this.DefaultCurrency = defaultCurrency;
            this.Name = name;
            this.Format = format;
            this.Credentials = credentials;
            this.Location = location;
            this.PreferredProcessingSchedule = preferredProcessingSchedule;
            this.Status = status;
        }

        /// <summary>
        /// A human-friendly name associated to a given feed.
        /// </summary>
        /// <value>A human-friendly name associated to a given feed.</value>
        [DataMember(Name = "name", EmitDefaultValue = false)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets Credentials
        /// </summary>
        [DataMember(Name = "credentials", EmitDefaultValue = true)]
        public CatalogsFeedCredentials Credentials { get; set; }

        /// <summary>
        /// The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
        /// </summary>
        /// <value>The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.</value>
        [DataMember(Name = "location", EmitDefaultValue = false)]
        public string Location { get; set; }

        /// <summary>
        /// Gets or Sets PreferredProcessingSchedule
        /// </summary>
        [DataMember(Name = "preferred_processing_schedule", EmitDefaultValue = true)]
        public CatalogsFeedProcessingSchedule PreferredProcessingSchedule { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CatalogsFeedsUpdateRequest {\n");
            sb.Append("  DefaultAvailability: ").Append(DefaultAvailability).Append("\n");
            sb.Append("  DefaultCurrency: ").Append(DefaultCurrency).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Format: ").Append(Format).Append("\n");
            sb.Append("  Credentials: ").Append(Credentials).Append("\n");
            sb.Append("  Location: ").Append(Location).Append("\n");
            sb.Append("  PreferredProcessingSchedule: ").Append(PreferredProcessingSchedule).Append("\n");
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
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            if (this.Location != null) {
                // Location (string) pattern
                Regex regexLocation = new Regex(@"^(http|https|ftp|sftp)://", RegexOptions.CultureInvariant);
                if (!regexLocation.Match(this.Location).Success)
                {
                    yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Location, must match a pattern of " + regexLocation, new [] { "Location" });
                }
            }

            yield break;
        }
    }

}
