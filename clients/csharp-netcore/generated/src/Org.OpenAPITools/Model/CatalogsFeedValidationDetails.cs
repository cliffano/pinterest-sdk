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
    /// CatalogsFeedValidationDetails
    /// </summary>
    [DataContract(Name = "CatalogsFeedValidationDetails")]
    public partial class CatalogsFeedValidationDetails : IEquatable<CatalogsFeedValidationDetails>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeedValidationDetails" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CatalogsFeedValidationDetails() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeedValidationDetails" /> class.
        /// </summary>
        /// <param name="errors">errors (required).</param>
        /// <param name="warnings">warnings (required).</param>
        public CatalogsFeedValidationDetails(CatalogsFeedValidationErrors errors = default(CatalogsFeedValidationErrors), CatalogsFeedValidationWarnings warnings = default(CatalogsFeedValidationWarnings))
        {
            // to ensure "errors" is required (not null)
            if (errors == null) {
                throw new ArgumentNullException("errors is a required property for CatalogsFeedValidationDetails and cannot be null");
            }
            this.Errors = errors;
            // to ensure "warnings" is required (not null)
            if (warnings == null) {
                throw new ArgumentNullException("warnings is a required property for CatalogsFeedValidationDetails and cannot be null");
            }
            this.Warnings = warnings;
        }

        /// <summary>
        /// Gets or Sets Errors
        /// </summary>
        [DataMember(Name = "errors", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsFeedValidationErrors Errors { get; set; }

        /// <summary>
        /// Gets or Sets Warnings
        /// </summary>
        [DataMember(Name = "warnings", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsFeedValidationWarnings Warnings { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CatalogsFeedValidationDetails {\n");
            sb.Append("  Errors: ").Append(Errors).Append("\n");
            sb.Append("  Warnings: ").Append(Warnings).Append("\n");
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
            return this.Equals(input as CatalogsFeedValidationDetails);
        }

        /// <summary>
        /// Returns true if CatalogsFeedValidationDetails instances are equal
        /// </summary>
        /// <param name="input">Instance of CatalogsFeedValidationDetails to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsFeedValidationDetails input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.Errors == input.Errors ||
                    (this.Errors != null &&
                    this.Errors.Equals(input.Errors))
                ) && 
                (
                    this.Warnings == input.Warnings ||
                    (this.Warnings != null &&
                    this.Warnings.Equals(input.Warnings))
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
                if (this.Errors != null)
                {
                    hashCode = (hashCode * 59) + this.Errors.GetHashCode();
                }
                if (this.Warnings != null)
                {
                    hashCode = (hashCode * 59) + this.Warnings.GetHashCode();
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
