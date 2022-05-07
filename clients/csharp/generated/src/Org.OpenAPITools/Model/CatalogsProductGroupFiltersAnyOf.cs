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
    /// CatalogsProductGroupFiltersAnyOf
    /// </summary>
    [DataContract]
    public partial class CatalogsProductGroupFiltersAnyOf :  IEquatable<CatalogsProductGroupFiltersAnyOf>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsProductGroupFiltersAnyOf" /> class.
        /// </summary>
        /// <param name="anyOf">anyOf.</param>
        public CatalogsProductGroupFiltersAnyOf(List<CatalogsProductGroupFilterKeys> anyOf = default(List<CatalogsProductGroupFilterKeys>))
        {
            this.AnyOf = anyOf;
        }

        /// <summary>
        /// Gets or Sets AnyOf
        /// </summary>
        [DataMember(Name="any_of", EmitDefaultValue=false)]
        public List<CatalogsProductGroupFilterKeys> AnyOf { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsProductGroupFiltersAnyOf {\n");
            sb.Append("  AnyOf: ").Append(AnyOf).Append("\n");
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
            return this.Equals(input as CatalogsProductGroupFiltersAnyOf);
        }

        /// <summary>
        /// Returns true if CatalogsProductGroupFiltersAnyOf instances are equal
        /// </summary>
        /// <param name="input">Instance of CatalogsProductGroupFiltersAnyOf to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsProductGroupFiltersAnyOf input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.AnyOf == input.AnyOf ||
                    this.AnyOf != null &&
                    input.AnyOf != null &&
                    this.AnyOf.SequenceEqual(input.AnyOf)
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
                if (this.AnyOf != null)
                    hashCode = hashCode * 59 + this.AnyOf.GetHashCode();
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
