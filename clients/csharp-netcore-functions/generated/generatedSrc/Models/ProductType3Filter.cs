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
    /// ProductType3Filter
    /// </summary>
    [DataContract(Name = "ProductType3Filter")]
    public partial class ProductType3Filter : IEquatable<ProductType3Filter>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ProductType3Filter" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ProductType3Filter() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ProductType3Filter" /> class.
        /// </summary>
        /// <param name="pRODUCTTYPE3">pRODUCTTYPE3 (required).</param>
        public ProductType3Filter(CatalogsProductGroupMultipleStringListCriteria pRODUCTTYPE3 = default(CatalogsProductGroupMultipleStringListCriteria))
        {
            // to ensure "pRODUCTTYPE3" is required (not null)
            this.PRODUCTTYPE3 = pRODUCTTYPE3 ?? throw new ArgumentNullException("pRODUCTTYPE3 is a required property for ProductType3Filter and cannot be null");
        }

        /// <summary>
        /// Gets or Sets PRODUCTTYPE3
        /// </summary>
        [DataMember(Name = "PRODUCT_TYPE_3", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsProductGroupMultipleStringListCriteria PRODUCTTYPE3 { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ProductType3Filter {\n");
            sb.Append("  PRODUCTTYPE3: ").Append(PRODUCTTYPE3).Append("\n");
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
            return this.Equals(input as ProductType3Filter);
        }

        /// <summary>
        /// Returns true if ProductType3Filter instances are equal
        /// </summary>
        /// <param name="input">Instance of ProductType3Filter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ProductType3Filter input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.PRODUCTTYPE3 == input.PRODUCTTYPE3 ||
                    (this.PRODUCTTYPE3 != null &&
                    this.PRODUCTTYPE3.Equals(input.PRODUCTTYPE3))
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
                if (this.PRODUCTTYPE3 != null)
                    hashCode = hashCode * 59 + this.PRODUCTTYPE3.GetHashCode();
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
