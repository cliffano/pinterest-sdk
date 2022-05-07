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

namespace Org.OpenAPITools.Models
{
    /// <summary>
    /// Catalogs Catalogs Feed object
    /// </summary>
    [DataContract(Name = "CatalogsFeed")]
    public partial class CatalogsFeed : IEquatable<CatalogsFeed>, IValidatableObject
    {

        /// <summary>
        /// Gets or Sets DefaultCountry
        /// </summary>
        [DataMember(Name = "default_country", IsRequired = true, EmitDefaultValue = false)]
        public Country DefaultCountry { get; set; }

        /// <summary>
        /// Gets or Sets DefaultAvailability
        /// </summary>
        [DataMember(Name = "default_availability", IsRequired = true, EmitDefaultValue = true)]
        public ProductAvailabilityType DefaultAvailability { get; set; }

        /// <summary>
        /// Gets or Sets DefaultCurrency
        /// </summary>
        [DataMember(Name = "default_currency", IsRequired = true, EmitDefaultValue = true)]
        public NullableCurrency DefaultCurrency { get; set; }

        /// <summary>
        /// Gets or Sets Format
        /// </summary>
        [DataMember(Name = "format", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsFormat Format { get; set; }

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name = "status", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsStatus Status { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeed" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CatalogsFeed() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeed" /> class.
        /// </summary>
        /// <param name="createdAt">createdAt.</param>
        /// <param name="id">id.</param>
        /// <param name="updatedAt">updatedAt.</param>
        /// <param name="defaultCountry">defaultCountry (required).</param>
        /// <param name="defaultAvailability">defaultAvailability (required).</param>
        /// <param name="defaultCurrency">defaultCurrency (required).</param>
        /// <param name="name">A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future. (required).</param>
        /// <param name="format">format (required).</param>
        /// <param name="defaultLocale">The locale used within a feed for product descriptions. (required).</param>
        /// <param name="credentials">credentials (required).</param>
        /// <param name="location">The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. (required).</param>
        /// <param name="preferredProcessingSchedule">preferredProcessingSchedule (required).</param>
        /// <param name="status">status (required).</param>
        public CatalogsFeed(DateTime createdAt = default(DateTime), string id = default(string), DateTime updatedAt = default(DateTime), Country defaultCountry = default(Country), ProductAvailabilityType defaultAvailability = default(ProductAvailabilityType), NullableCurrency defaultCurrency = default(NullableCurrency), string name = default(string), CatalogsFormat format = default(CatalogsFormat), string defaultLocale = default(string), CatalogsFeedCredentials credentials = default(CatalogsFeedCredentials), string location = default(string), CatalogsFeedProcessingSchedule preferredProcessingSchedule = default(CatalogsFeedProcessingSchedule), CatalogsStatus status = default(CatalogsStatus))
        {
            this.DefaultCountry = defaultCountry;
            this.DefaultAvailability = defaultAvailability;
            this.DefaultCurrency = defaultCurrency;
            // to ensure "name" is required (not null)
            this.Name = name ?? throw new ArgumentNullException("name is a required property for CatalogsFeed and cannot be null");
            this.Format = format;
            // to ensure "defaultLocale" is required (not null)
            this.DefaultLocale = defaultLocale ?? throw new ArgumentNullException("defaultLocale is a required property for CatalogsFeed and cannot be null");
            // to ensure "credentials" is required (not null)
            this.Credentials = credentials ?? throw new ArgumentNullException("credentials is a required property for CatalogsFeed and cannot be null");
            // to ensure "location" is required (not null)
            this.Location = location ?? throw new ArgumentNullException("location is a required property for CatalogsFeed and cannot be null");
            // to ensure "preferredProcessingSchedule" is required (not null)
            this.PreferredProcessingSchedule = preferredProcessingSchedule ?? throw new ArgumentNullException("preferredProcessingSchedule is a required property for CatalogsFeed and cannot be null");
            this.Status = status;
            this.CreatedAt = createdAt;
            this.Id = id;
            this.UpdatedAt = updatedAt;
        }

        /// <summary>
        /// Gets or Sets CreatedAt
        /// </summary>
        [DataMember(Name = "created_at", EmitDefaultValue = false)]
        public DateTime CreatedAt { get; set; }

        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name = "id", EmitDefaultValue = false)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets UpdatedAt
        /// </summary>
        [DataMember(Name = "updated_at", EmitDefaultValue = false)]
        public DateTime UpdatedAt { get; set; }

        /// <summary>
        /// A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
        /// </summary>
        /// <value>A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.</value>
        [DataMember(Name = "name", IsRequired = true, EmitDefaultValue = true)]
        public string Name { get; set; }

        /// <summary>
        /// The locale used within a feed for product descriptions.
        /// </summary>
        /// <value>The locale used within a feed for product descriptions.</value>
        [DataMember(Name = "default_locale", IsRequired = true, EmitDefaultValue = false)]
        public string DefaultLocale { get; set; }

        /// <summary>
        /// Gets or Sets Credentials
        /// </summary>
        [DataMember(Name = "credentials", IsRequired = true, EmitDefaultValue = true)]
        public CatalogsFeedCredentials Credentials { get; set; }

        /// <summary>
        /// The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
        /// </summary>
        /// <value>The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.</value>
        [DataMember(Name = "location", IsRequired = true, EmitDefaultValue = false)]
        public string Location { get; set; }

        /// <summary>
        /// Gets or Sets PreferredProcessingSchedule
        /// </summary>
        [DataMember(Name = "preferred_processing_schedule", IsRequired = true, EmitDefaultValue = true)]
        public CatalogsFeedProcessingSchedule PreferredProcessingSchedule { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsFeed {\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  UpdatedAt: ").Append(UpdatedAt).Append("\n");
            sb.Append("  DefaultCountry: ").Append(DefaultCountry).Append("\n");
            sb.Append("  DefaultAvailability: ").Append(DefaultAvailability).Append("\n");
            sb.Append("  DefaultCurrency: ").Append(DefaultCurrency).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Format: ").Append(Format).Append("\n");
            sb.Append("  DefaultLocale: ").Append(DefaultLocale).Append("\n");
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
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as CatalogsFeed);
        }

        /// <summary>
        /// Returns true if CatalogsFeed instances are equal
        /// </summary>
        /// <param name="input">Instance of CatalogsFeed to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsFeed input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.CreatedAt == input.CreatedAt ||
                    (this.CreatedAt != null &&
                    this.CreatedAt.Equals(input.CreatedAt))
                ) && 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.UpdatedAt == input.UpdatedAt ||
                    (this.UpdatedAt != null &&
                    this.UpdatedAt.Equals(input.UpdatedAt))
                ) && 
                (
                    this.DefaultCountry == input.DefaultCountry ||
                    this.DefaultCountry.Equals(input.DefaultCountry)
                ) && 
                (
                    this.DefaultAvailability == input.DefaultAvailability ||
                    this.DefaultAvailability.Equals(input.DefaultAvailability)
                ) && 
                (
                    this.DefaultCurrency == input.DefaultCurrency ||
                    this.DefaultCurrency.Equals(input.DefaultCurrency)
                ) && 
                (
                    this.Name == input.Name ||
                    (this.Name != null &&
                    this.Name.Equals(input.Name))
                ) && 
                (
                    this.Format == input.Format ||
                    this.Format.Equals(input.Format)
                ) && 
                (
                    this.DefaultLocale == input.DefaultLocale ||
                    (this.DefaultLocale != null &&
                    this.DefaultLocale.Equals(input.DefaultLocale))
                ) && 
                (
                    this.Credentials == input.Credentials ||
                    (this.Credentials != null &&
                    this.Credentials.Equals(input.Credentials))
                ) && 
                (
                    this.Location == input.Location ||
                    (this.Location != null &&
                    this.Location.Equals(input.Location))
                ) && 
                (
                    this.PreferredProcessingSchedule == input.PreferredProcessingSchedule ||
                    (this.PreferredProcessingSchedule != null &&
                    this.PreferredProcessingSchedule.Equals(input.PreferredProcessingSchedule))
                ) && 
                (
                    this.Status == input.Status ||
                    this.Status.Equals(input.Status)
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
                if (this.CreatedAt != null)
                    hashCode = hashCode * 59 + this.CreatedAt.GetHashCode();
                if (this.Id != null)
                    hashCode = hashCode * 59 + this.Id.GetHashCode();
                if (this.UpdatedAt != null)
                    hashCode = hashCode * 59 + this.UpdatedAt.GetHashCode();
                hashCode = hashCode * 59 + this.DefaultCountry.GetHashCode();
                hashCode = hashCode * 59 + this.DefaultAvailability.GetHashCode();
                hashCode = hashCode * 59 + this.DefaultCurrency.GetHashCode();
                if (this.Name != null)
                    hashCode = hashCode * 59 + this.Name.GetHashCode();
                hashCode = hashCode * 59 + this.Format.GetHashCode();
                if (this.DefaultLocale != null)
                    hashCode = hashCode * 59 + this.DefaultLocale.GetHashCode();
                if (this.Credentials != null)
                    hashCode = hashCode * 59 + this.Credentials.GetHashCode();
                if (this.Location != null)
                    hashCode = hashCode * 59 + this.Location.GetHashCode();
                if (this.PreferredProcessingSchedule != null)
                    hashCode = hashCode * 59 + this.PreferredProcessingSchedule.GetHashCode();
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
            yield break;
        }
    }

}
