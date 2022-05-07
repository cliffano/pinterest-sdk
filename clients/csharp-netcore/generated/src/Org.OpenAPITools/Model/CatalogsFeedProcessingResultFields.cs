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
    /// CatalogsFeedProcessingResultFields
    /// </summary>
    [DataContract(Name = "catalogs_feed_processing_result_fields")]
    public partial class CatalogsFeedProcessingResultFields : IEquatable<CatalogsFeedProcessingResultFields>, IValidatableObject
    {

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name = "status", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsFeedProcessingStatus Status { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeedProcessingResultFields" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CatalogsFeedProcessingResultFields() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeedProcessingResultFields" /> class.
        /// </summary>
        /// <param name="ingestionDetails">ingestionDetails (required).</param>
        /// <param name="status">status (required).</param>
        /// <param name="productCounts">productCounts (required).</param>
        /// <param name="validationDetails">validationDetails (required).</param>
        public CatalogsFeedProcessingResultFields(CatalogsFeedIngestionDetails ingestionDetails = default(CatalogsFeedIngestionDetails), CatalogsFeedProcessingStatus status = default(CatalogsFeedProcessingStatus), CatalogsFeedProductCounts productCounts = default(CatalogsFeedProductCounts), CatalogsFeedValidationDetails validationDetails = default(CatalogsFeedValidationDetails))
        {
            // to ensure "ingestionDetails" is required (not null)
            if (ingestionDetails == null) {
                throw new ArgumentNullException("ingestionDetails is a required property for CatalogsFeedProcessingResultFields and cannot be null");
            }
            this.IngestionDetails = ingestionDetails;
            this.Status = status;
            // to ensure "productCounts" is required (not null)
            if (productCounts == null) {
                throw new ArgumentNullException("productCounts is a required property for CatalogsFeedProcessingResultFields and cannot be null");
            }
            this.ProductCounts = productCounts;
            // to ensure "validationDetails" is required (not null)
            if (validationDetails == null) {
                throw new ArgumentNullException("validationDetails is a required property for CatalogsFeedProcessingResultFields and cannot be null");
            }
            this.ValidationDetails = validationDetails;
        }

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
            StringBuilder sb = new StringBuilder();
            sb.Append("class CatalogsFeedProcessingResultFields {\n");
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
            return this.Equals(input as CatalogsFeedProcessingResultFields);
        }

        /// <summary>
        /// Returns true if CatalogsFeedProcessingResultFields instances are equal
        /// </summary>
        /// <param name="input">Instance of CatalogsFeedProcessingResultFields to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsFeedProcessingResultFields input)
        {
            if (input == null)
            {
                return false;
            }
            return 
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
                if (this.IngestionDetails != null)
                {
                    hashCode = (hashCode * 59) + this.IngestionDetails.GetHashCode();
                }
                hashCode = (hashCode * 59) + this.Status.GetHashCode();
                if (this.ProductCounts != null)
                {
                    hashCode = (hashCode * 59) + this.ProductCounts.GetHashCode();
                }
                if (this.ValidationDetails != null)
                {
                    hashCode = (hashCode * 59) + this.ValidationDetails.GetHashCode();
                }
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
