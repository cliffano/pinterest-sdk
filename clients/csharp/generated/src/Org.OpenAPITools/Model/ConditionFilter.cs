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
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// ConditionFilter
    /// </summary>
    [DataContract]
    public partial class ConditionFilter :  IEquatable<ConditionFilter>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ConditionFilter" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ConditionFilter() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ConditionFilter" /> class.
        /// </summary>
        /// <param name="cONDITION">cONDITION (required).</param>
        public ConditionFilter(CatalogsProductGroupMultipleStringCriteria cONDITION = default(CatalogsProductGroupMultipleStringCriteria))
        {
            // to ensure "cONDITION" is required (not null)
            if (cONDITION == null)
            {
                throw new InvalidDataException("cONDITION is a required property for ConditionFilter and cannot be null");
            }
            else
            {
                this.CONDITION = cONDITION;
            }

        }

        /// <summary>
        /// Gets or Sets CONDITION
        /// </summary>
        [DataMember(Name="CONDITION", EmitDefaultValue=true)]
        public CatalogsProductGroupMultipleStringCriteria CONDITION { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ConditionFilter {\n");
            sb.Append("  CONDITION: ").Append(CONDITION).Append("\n");
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
            return this.Equals(input as ConditionFilter);
        }

        /// <summary>
        /// Returns true if ConditionFilter instances are equal
        /// </summary>
        /// <param name="input">Instance of ConditionFilter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ConditionFilter input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.CONDITION == input.CONDITION ||
                    (this.CONDITION != null &&
                    this.CONDITION.Equals(input.CONDITION))
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
                if (this.CONDITION != null)
                    hashCode = hashCode * 59 + this.CONDITION.GetHashCode();
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
