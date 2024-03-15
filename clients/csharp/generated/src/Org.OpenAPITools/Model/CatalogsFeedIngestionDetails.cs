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
    /// CatalogsFeedIngestionDetails
    /// </summary>
    [DataContract(Name = "CatalogsFeedIngestionDetails")]
    public partial class CatalogsFeedIngestionDetails : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeedIngestionDetails" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CatalogsFeedIngestionDetails() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeedIngestionDetails" /> class.
        /// </summary>
        /// <param name="errors">errors (required).</param>
        /// <param name="info">info (required).</param>
        /// <param name="warnings">warnings (required).</param>
        public CatalogsFeedIngestionDetails(CatalogsFeedIngestionErrors errors = default(CatalogsFeedIngestionErrors), CatalogsFeedIngestionInfo info = default(CatalogsFeedIngestionInfo), CatalogsFeedIngestionWarnings warnings = default(CatalogsFeedIngestionWarnings))
        {
            // to ensure "errors" is required (not null)
            if (errors == null)
            {
                throw new ArgumentNullException("errors is a required property for CatalogsFeedIngestionDetails and cannot be null");
            }
            this.Errors = errors;
            // to ensure "info" is required (not null)
            if (info == null)
            {
                throw new ArgumentNullException("info is a required property for CatalogsFeedIngestionDetails and cannot be null");
            }
            this.Info = info;
            // to ensure "warnings" is required (not null)
            if (warnings == null)
            {
                throw new ArgumentNullException("warnings is a required property for CatalogsFeedIngestionDetails and cannot be null");
            }
            this.Warnings = warnings;
        }

        /// <summary>
        /// Gets or Sets Errors
        /// </summary>
        [DataMember(Name = "errors", IsRequired = true, EmitDefaultValue = true)]
        public CatalogsFeedIngestionErrors Errors { get; set; }

        /// <summary>
        /// Gets or Sets Info
        /// </summary>
        [DataMember(Name = "info", IsRequired = true, EmitDefaultValue = true)]
        public CatalogsFeedIngestionInfo Info { get; set; }

        /// <summary>
        /// Gets or Sets Warnings
        /// </summary>
        [DataMember(Name = "warnings", IsRequired = true, EmitDefaultValue = true)]
        public CatalogsFeedIngestionWarnings Warnings { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CatalogsFeedIngestionDetails {\n");
            sb.Append("  Errors: ").Append(Errors).Append("\n");
            sb.Append("  Info: ").Append(Info).Append("\n");
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