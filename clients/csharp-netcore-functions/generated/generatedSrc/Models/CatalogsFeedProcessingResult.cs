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
    /// CatalogsFeedProcessingResult
    /// </summary>
    [DataContract(Name = "CatalogsFeedProcessingResult")]
    public partial class CatalogsFeedProcessingResult : IEquatable<CatalogsFeedProcessingResult>, IValidatableObject
    {

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name = "status", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsFeedProcessingStatus Status { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeedProcessingResult" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CatalogsFeedProcessingResult() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeedProcessingResult" /> class.
        /// </summary>
        /// <param name="createdAt">createdAt.</param>
        /// <param name="id">id.</param>
        /// <param name="updatedAt">updatedAt.</param>
        /// <param name="ingestionDetails">ingestionDetails (required).</param>
        /// <param name="status">status (required).</param>
        /// <param name="productCounts">productCounts (required).</param>
        /// <param name="validationDetails">validationDetails (required).</param>
        public CatalogsFeedProcessingResult(DateTime createdAt = default(DateTime), string id = default(string), DateTime updatedAt = default(DateTime), CatalogsFeedIngestionDetails ingestionDetails = default(CatalogsFeedIngestionDetails), CatalogsFeedProcessingStatus status = default(CatalogsFeedProcessingStatus), CatalogsFeedProductCounts productCounts = default(CatalogsFeedProductCounts), CatalogsFeedValidationDetails validationDetails = default(CatalogsFeedValidationDetails))
        {
            // to ensure "ingestionDetails" is required (not null)
            this.IngestionDetails = ingestionDetails ?? throw new ArgumentNullException("ingestionDetails is a required property for CatalogsFeedProcessingResult and cannot be null");
            this.Status = status;
            // to ensure "productCounts" is required (not null)
            this.ProductCounts = productCounts ?? throw new ArgumentNullException("productCounts is a required property for CatalogsFeedProcessingResult and cannot be null");
            // to ensure "validationDetails" is required (not null)
            this.ValidationDetails = validationDetails ?? throw new ArgumentNullException("validationDetails is a required property for CatalogsFeedProcessingResult and cannot be null");
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
        /// Gets or Sets IngestionDetails
        /// </summary>
        [DataMember(Name = "ingestion_details", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsFeedIngestionDetails IngestionDetails { get; set; }

        /// <summary>
        /// Gets or Sets ProductCounts
        /// </summary>
        [DataMember(Name = "product_counts", IsRequired = true, EmitDefaultValue = true)]
        public CatalogsFeedProductCounts ProductCounts { get; set; }

        /// <summary>
        /// Gets or Sets ValidationDetails
        /// </summary>
        [DataMember(Name = "validation_details", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsFeedValidationDetails ValidationDetails { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsFeedProcessingResult {\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  UpdatedAt: ").Append(UpdatedAt).Append("\n");
            sb.Append("  IngestionDetails: ").Append(IngestionDetails).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  ProductCounts: ").Append(ProductCounts).Append("\n");
            sb.Append("  ValidationDetails: ").Append(ValidationDetails).Append("\n");
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
            return this.Equals(input as CatalogsFeedProcessingResult);
        }

        /// <summary>
        /// Returns true if CatalogsFeedProcessingResult instances are equal
        /// </summary>
        /// <param name="input">Instance of CatalogsFeedProcessingResult to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsFeedProcessingResult input)
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
                    this.IngestionDetails == input.IngestionDetails ||
                    (this.IngestionDetails != null &&
                    this.IngestionDetails.Equals(input.IngestionDetails))
                ) && 
                (
                    this.Status == input.Status ||
                    this.Status.Equals(input.Status)
                ) && 
                (
                    this.ProductCounts == input.ProductCounts ||
                    (this.ProductCounts != null &&
                    this.ProductCounts.Equals(input.ProductCounts))
                ) && 
                (
                    this.ValidationDetails == input.ValidationDetails ||
                    (this.ValidationDetails != null &&
                    this.ValidationDetails.Equals(input.ValidationDetails))
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
                if (this.IngestionDetails != null)
                    hashCode = hashCode * 59 + this.IngestionDetails.GetHashCode();
                hashCode = hashCode * 59 + this.Status.GetHashCode();
                if (this.ProductCounts != null)
                    hashCode = hashCode * 59 + this.ProductCounts.GetHashCode();
                if (this.ValidationDetails != null)
                    hashCode = hashCode * 59 + this.ValidationDetails.GetHashCode();
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
