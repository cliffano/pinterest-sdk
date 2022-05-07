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
    /// CustomLabel4Filter
    /// </summary>
    [DataContract(Name = "CustomLabel4Filter")]
    public partial class CustomLabel4Filter : IEquatable<CustomLabel4Filter>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CustomLabel4Filter" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CustomLabel4Filter() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CustomLabel4Filter" /> class.
        /// </summary>
        /// <param name="cUSTOMLABEL4">cUSTOMLABEL4 (required).</param>
        public CustomLabel4Filter(CatalogsProductGroupMultipleStringCriteria cUSTOMLABEL4 = default(CatalogsProductGroupMultipleStringCriteria))
        {
            // to ensure "cUSTOMLABEL4" is required (not null)
            if (cUSTOMLABEL4 == null) {
                throw new ArgumentNullException("cUSTOMLABEL4 is a required property for CustomLabel4Filter and cannot be null");
            }
            this.CUSTOMLABEL4 = cUSTOMLABEL4;
        }

        /// <summary>
        /// Gets or Sets CUSTOMLABEL4
        /// </summary>
        [DataMember(Name = "CUSTOM_LABEL_4", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsProductGroupMultipleStringCriteria CUSTOMLABEL4 { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CustomLabel4Filter {\n");
            sb.Append("  CUSTOMLABEL4: ").Append(CUSTOMLABEL4).Append("\n");
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
            return this.Equals(input as CustomLabel4Filter);
        }

        /// <summary>
        /// Returns true if CustomLabel4Filter instances are equal
        /// </summary>
        /// <param name="input">Instance of CustomLabel4Filter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CustomLabel4Filter input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.CUSTOMLABEL4 == input.CUSTOMLABEL4 ||
                    (this.CUSTOMLABEL4 != null &&
                    this.CUSTOMLABEL4.Equals(input.CUSTOMLABEL4))
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
                if (this.CUSTOMLABEL4 != null)
                {
                    hashCode = (hashCode * 59) + this.CUSTOMLABEL4.GetHashCode();
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
