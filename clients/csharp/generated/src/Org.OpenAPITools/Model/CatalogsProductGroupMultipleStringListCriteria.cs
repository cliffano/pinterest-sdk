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
    /// CatalogsProductGroupMultipleStringListCriteria
    /// </summary>
    [DataContract]
    public partial class CatalogsProductGroupMultipleStringListCriteria :  IEquatable<CatalogsProductGroupMultipleStringListCriteria>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsProductGroupMultipleStringListCriteria" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CatalogsProductGroupMultipleStringListCriteria() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsProductGroupMultipleStringListCriteria" /> class.
        /// </summary>
        /// <param name="values">values (required).</param>
        /// <param name="negated">negated (required).</param>
        public CatalogsProductGroupMultipleStringListCriteria(List<List<string>> values = default(List<List<string>>), bool negated = default(bool))
        {
            // to ensure "values" is required (not null)
            if (values == null)
            {
                throw new InvalidDataException("values is a required property for CatalogsProductGroupMultipleStringListCriteria and cannot be null");
            }
            else
            {
                this.Values = values;
            }

            // to ensure "negated" is required (not null)
            if (negated == null)
            {
                throw new InvalidDataException("negated is a required property for CatalogsProductGroupMultipleStringListCriteria and cannot be null");
            }
            else
            {
                this.Negated = negated;
            }

        }

        /// <summary>
        /// Gets or Sets Values
        /// </summary>
        [DataMember(Name="values", EmitDefaultValue=true)]
        public List<List<string>> Values { get; set; }

        /// <summary>
        /// Gets or Sets Negated
        /// </summary>
        [DataMember(Name="negated", EmitDefaultValue=true)]
        public bool Negated { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsProductGroupMultipleStringListCriteria {\n");
            sb.Append("  Values: ").Append(Values).Append("\n");
            sb.Append("  Negated: ").Append(Negated).Append("\n");
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
            return this.Equals(input as CatalogsProductGroupMultipleStringListCriteria);
        }

        /// <summary>
        /// Returns true if CatalogsProductGroupMultipleStringListCriteria instances are equal
        /// </summary>
        /// <param name="input">Instance of CatalogsProductGroupMultipleStringListCriteria to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsProductGroupMultipleStringListCriteria input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Values == input.Values ||
                    this.Values != null &&
                    input.Values != null &&
                    this.Values.SequenceEqual(input.Values)
                ) && 
                (
                    this.Negated == input.Negated ||
                    (this.Negated != null &&
                    this.Negated.Equals(input.Negated))
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
                if (this.Values != null)
                    hashCode = hashCode * 59 + this.Values.GetHashCode();
                if (this.Negated != null)
                    hashCode = hashCode * 59 + this.Negated.GetHashCode();
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
