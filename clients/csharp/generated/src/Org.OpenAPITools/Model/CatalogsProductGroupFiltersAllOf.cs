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
    /// CatalogsProductGroupFiltersAllOf
    /// </summary>
    [DataContract(Name = "CatalogsProductGroupFiltersAllOf")]
    public partial class CatalogsProductGroupFiltersAllOf : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsProductGroupFiltersAllOf" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CatalogsProductGroupFiltersAllOf() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsProductGroupFiltersAllOf" /> class.
        /// </summary>
        /// <param name="allOf">allOf (required).</param>
        public CatalogsProductGroupFiltersAllOf(List<CatalogsProductGroupFilterKeys> allOf = default(List<CatalogsProductGroupFilterKeys>))
        {
            // to ensure "allOf" is required (not null)
            if (allOf == null)
            {
                throw new ArgumentNullException("allOf is a required property for CatalogsProductGroupFiltersAllOf and cannot be null");
            }
            this.AllOf = allOf;
        }

        /// <summary>
        /// Gets or Sets AllOf
        /// </summary>
        [DataMember(Name = "all_of", IsRequired = true, EmitDefaultValue = true)]
        public List<CatalogsProductGroupFilterKeys> AllOf { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CatalogsProductGroupFiltersAllOf {\n");
            sb.Append("  AllOf: ").Append(AllOf).Append("\n");
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