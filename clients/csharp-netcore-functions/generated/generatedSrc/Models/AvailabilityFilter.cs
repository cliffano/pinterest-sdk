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
    /// AvailabilityFilter
    /// </summary>
    [DataContract(Name = "AvailabilityFilter")]
    public partial class AvailabilityFilter : IEquatable<AvailabilityFilter>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="AvailabilityFilter" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected AvailabilityFilter() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="AvailabilityFilter" /> class.
        /// </summary>
        /// <param name="aVAILABILITY">aVAILABILITY (required).</param>
        public AvailabilityFilter(CatalogsProductGroupMultipleStringCriteria aVAILABILITY = default(CatalogsProductGroupMultipleStringCriteria))
        {
            // to ensure "aVAILABILITY" is required (not null)
            this.AVAILABILITY = aVAILABILITY ?? throw new ArgumentNullException("aVAILABILITY is a required property for AvailabilityFilter and cannot be null");
        }

        /// <summary>
        /// Gets or Sets AVAILABILITY
        /// </summary>
        [DataMember(Name = "AVAILABILITY", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsProductGroupMultipleStringCriteria AVAILABILITY { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class AvailabilityFilter {\n");
            sb.Append("  AVAILABILITY: ").Append(AVAILABILITY).Append("\n");
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
            return this.Equals(input as AvailabilityFilter);
        }

        /// <summary>
        /// Returns true if AvailabilityFilter instances are equal
        /// </summary>
        /// <param name="input">Instance of AvailabilityFilter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AvailabilityFilter input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.AVAILABILITY == input.AVAILABILITY ||
                    (this.AVAILABILITY != null &&
                    this.AVAILABILITY.Equals(input.AVAILABILITY))
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
                if (this.AVAILABILITY != null)
                    hashCode = hashCode * 59 + this.AVAILABILITY.GetHashCode();
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
