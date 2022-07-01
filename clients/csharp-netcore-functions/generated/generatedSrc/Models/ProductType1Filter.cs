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
    /// ProductType1Filter
    /// </summary>
    [DataContract(Name = "ProductType1Filter")]
    public partial class ProductType1Filter : IEquatable<ProductType1Filter>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ProductType1Filter" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ProductType1Filter() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ProductType1Filter" /> class.
        /// </summary>
        /// <param name="pRODUCTTYPE1">pRODUCTTYPE1 (required).</param>
        public ProductType1Filter(CatalogsProductGroupMultipleStringListCriteria pRODUCTTYPE1 = default(CatalogsProductGroupMultipleStringListCriteria))
        {
            // to ensure "pRODUCTTYPE1" is required (not null)
            this.PRODUCTTYPE1 = pRODUCTTYPE1 ?? throw new ArgumentNullException("pRODUCTTYPE1 is a required property for ProductType1Filter and cannot be null");
        }

        /// <summary>
        /// Gets or Sets PRODUCTTYPE1
        /// </summary>
        [DataMember(Name = "PRODUCT_TYPE_1", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsProductGroupMultipleStringListCriteria PRODUCTTYPE1 { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ProductType1Filter {\n");
            sb.Append("  PRODUCTTYPE1: ").Append(PRODUCTTYPE1).Append("\n");
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
            return this.Equals(input as ProductType1Filter);
        }

        /// <summary>
        /// Returns true if ProductType1Filter instances are equal
        /// </summary>
        /// <param name="input">Instance of ProductType1Filter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ProductType1Filter input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.PRODUCTTYPE1 == input.PRODUCTTYPE1 ||
                    (this.PRODUCTTYPE1 != null &&
                    this.PRODUCTTYPE1.Equals(input.PRODUCTTYPE1))
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
                if (this.PRODUCTTYPE1 != null)
                    hashCode = hashCode * 59 + this.PRODUCTTYPE1.GetHashCode();
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
