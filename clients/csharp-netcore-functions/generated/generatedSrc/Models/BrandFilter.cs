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
    /// BrandFilter
    /// </summary>
    [DataContract(Name = "BrandFilter")]
    public partial class BrandFilter : IEquatable<BrandFilter>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="BrandFilter" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected BrandFilter() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="BrandFilter" /> class.
        /// </summary>
        /// <param name="bRAND">bRAND (required).</param>
        public BrandFilter(CatalogsProductGroupMultipleStringCriteria bRAND = default(CatalogsProductGroupMultipleStringCriteria))
        {
            // to ensure "bRAND" is required (not null)
            this.BRAND = bRAND ?? throw new ArgumentNullException("bRAND is a required property for BrandFilter and cannot be null");
        }

        /// <summary>
        /// Gets or Sets BRAND
        /// </summary>
        [DataMember(Name = "BRAND", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsProductGroupMultipleStringCriteria BRAND { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BrandFilter {\n");
            sb.Append("  BRAND: ").Append(BRAND).Append("\n");
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
            return this.Equals(input as BrandFilter);
        }

        /// <summary>
        /// Returns true if BrandFilter instances are equal
        /// </summary>
        /// <param name="input">Instance of BrandFilter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(BrandFilter input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.BRAND == input.BRAND ||
                    (this.BRAND != null &&
                    this.BRAND.Equals(input.BRAND))
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
                if (this.BRAND != null)
                    hashCode = hashCode * 59 + this.BRAND.GetHashCode();
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
