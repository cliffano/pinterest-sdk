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
    /// ProductType2Filter
    /// </summary>
    [DataContract(Name = "ProductType2Filter")]
    public partial class ProductType2Filter : IEquatable<ProductType2Filter>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ProductType2Filter" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ProductType2Filter() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ProductType2Filter" /> class.
        /// </summary>
        /// <param name="pRODUCTTYPE2">pRODUCTTYPE2 (required).</param>
        public ProductType2Filter(CatalogsProductGroupMultipleStringListCriteria pRODUCTTYPE2 = default(CatalogsProductGroupMultipleStringListCriteria))
        {
            // to ensure "pRODUCTTYPE2" is required (not null)
            this.PRODUCTTYPE2 = pRODUCTTYPE2 ?? throw new ArgumentNullException("pRODUCTTYPE2 is a required property for ProductType2Filter and cannot be null");
        }

        /// <summary>
        /// Gets or Sets PRODUCTTYPE2
        /// </summary>
        [DataMember(Name = "PRODUCT_TYPE_2", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsProductGroupMultipleStringListCriteria PRODUCTTYPE2 { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ProductType2Filter {\n");
            sb.Append("  PRODUCTTYPE2: ").Append(PRODUCTTYPE2).Append("\n");
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
            return this.Equals(input as ProductType2Filter);
        }

        /// <summary>
        /// Returns true if ProductType2Filter instances are equal
        /// </summary>
        /// <param name="input">Instance of ProductType2Filter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ProductType2Filter input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.PRODUCTTYPE2 == input.PRODUCTTYPE2 ||
                    (this.PRODUCTTYPE2 != null &&
                    this.PRODUCTTYPE2.Equals(input.PRODUCTTYPE2))
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
                if (this.PRODUCTTYPE2 != null)
                    hashCode = hashCode * 59 + this.PRODUCTTYPE2.GetHashCode();
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
