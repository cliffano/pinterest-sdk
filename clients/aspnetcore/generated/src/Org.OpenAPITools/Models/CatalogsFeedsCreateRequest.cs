/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Org.OpenAPITools.Converters;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// Request object for creating a feed. Please, be aware that \&quot;default_country\&quot; and \&quot;default_locale\&quot; are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
    /// </summary>
    [DataContract]
    public partial class CatalogsFeedsCreateRequest : IEquatable<CatalogsFeedsCreateRequest>
    {
        /// <summary>
        /// Gets or Sets DefaultCurrency
        /// </summary>
        [DataMember(Name="default_currency", EmitDefaultValue=true)]
        public NullableCurrency? DefaultCurrency { get; set; }

        /// <summary>
        /// A human-friendly name associated to a given feed.
        /// </summary>
        /// <value>A human-friendly name associated to a given feed.</value>
        [Required]
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets Format
        /// </summary>
        [Required]
        [DataMember(Name="format", EmitDefaultValue=true)]
        public CatalogsFormat Format { get; set; }

        /// <summary>
        /// Gets or Sets DefaultLocale
        /// </summary>
        [DataMember(Name="default_locale", EmitDefaultValue=false)]
        public CatalogsFeedsCreateRequestDefaultLocale DefaultLocale { get; set; }

        /// <summary>
        /// Gets or Sets Credentials
        /// </summary>
        [DataMember(Name="credentials", EmitDefaultValue=true)]
        public CatalogsFeedCredentials Credentials { get; set; }

        /// <summary>
        /// The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
        /// </summary>
        /// <value>The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.</value>
        [Required]
        [RegularExpression("^(http|https|ftp|sftp)://")]
        [DataMember(Name="location", EmitDefaultValue=false)]
        public string Location { get; set; }

        /// <summary>
        /// Gets or Sets PreferredProcessingSchedule
        /// </summary>
        [DataMember(Name="preferred_processing_schedule", EmitDefaultValue=true)]
        public CatalogsFeedProcessingSchedule PreferredProcessingSchedule { get; set; }

        /// <summary>
        /// Gets or Sets DefaultCountry
        /// </summary>
        [DataMember(Name="default_country", EmitDefaultValue=true)]
        public Country DefaultCountry { get; set; }

        /// <summary>
        /// Gets or Sets DefaultAvailability
        /// </summary>
        [DataMember(Name="default_availability", EmitDefaultValue=true)]
        public ProductAvailabilityType? DefaultAvailability { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsFeedsCreateRequest {\n");
            sb.Append("  DefaultCurrency: ").Append(DefaultCurrency).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Format: ").Append(Format).Append("\n");
            sb.Append("  DefaultLocale: ").Append(DefaultLocale).Append("\n");
            sb.Append("  Credentials: ").Append(Credentials).Append("\n");
            sb.Append("  Location: ").Append(Location).Append("\n");
            sb.Append("  PreferredProcessingSchedule: ").Append(PreferredProcessingSchedule).Append("\n");
            sb.Append("  DefaultCountry: ").Append(DefaultCountry).Append("\n");
            sb.Append("  DefaultAvailability: ").Append(DefaultAvailability).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((CatalogsFeedsCreateRequest)obj);
        }

        /// <summary>
        /// Returns true if CatalogsFeedsCreateRequest instances are equal
        /// </summary>
        /// <param name="other">Instance of CatalogsFeedsCreateRequest to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsFeedsCreateRequest other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    DefaultCurrency == other.DefaultCurrency ||
                    
                    DefaultCurrency.Equals(other.DefaultCurrency)
                ) && 
                (
                    Name == other.Name ||
                    Name != null &&
                    Name.Equals(other.Name)
                ) && 
                (
                    Format == other.Format ||
                    
                    Format.Equals(other.Format)
                ) && 
                (
                    DefaultLocale == other.DefaultLocale ||
                    DefaultLocale != null &&
                    DefaultLocale.Equals(other.DefaultLocale)
                ) && 
                (
                    Credentials == other.Credentials ||
                    Credentials != null &&
                    Credentials.Equals(other.Credentials)
                ) && 
                (
                    Location == other.Location ||
                    Location != null &&
                    Location.Equals(other.Location)
                ) && 
                (
                    PreferredProcessingSchedule == other.PreferredProcessingSchedule ||
                    PreferredProcessingSchedule != null &&
                    PreferredProcessingSchedule.Equals(other.PreferredProcessingSchedule)
                ) && 
                (
                    DefaultCountry == other.DefaultCountry ||
                    
                    DefaultCountry.Equals(other.DefaultCountry)
                ) && 
                (
                    DefaultAvailability == other.DefaultAvailability ||
                    
                    DefaultAvailability.Equals(other.DefaultAvailability)
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
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    
                    hashCode = hashCode * 59 + DefaultCurrency.GetHashCode();
                    if (Name != null)
                    hashCode = hashCode * 59 + Name.GetHashCode();
                    
                    hashCode = hashCode * 59 + Format.GetHashCode();
                    if (DefaultLocale != null)
                    hashCode = hashCode * 59 + DefaultLocale.GetHashCode();
                    if (Credentials != null)
                    hashCode = hashCode * 59 + Credentials.GetHashCode();
                    if (Location != null)
                    hashCode = hashCode * 59 + Location.GetHashCode();
                    if (PreferredProcessingSchedule != null)
                    hashCode = hashCode * 59 + PreferredProcessingSchedule.GetHashCode();
                    
                    hashCode = hashCode * 59 + DefaultCountry.GetHashCode();
                    
                    hashCode = hashCode * 59 + DefaultAvailability.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CatalogsFeedsCreateRequest left, CatalogsFeedsCreateRequest right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CatalogsFeedsCreateRequest left, CatalogsFeedsCreateRequest right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
