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

namespace Org.OpenAPITools.Models
{
    /// <summary>
    /// ProductType4Filter
    /// </summary>
    [DataContract(Name = "ProductType4Filter")]
    public partial class ProductType4Filter : IEquatable<ProductType4Filter>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ProductType4Filter" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ProductType4Filter() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ProductType4Filter" /> class.
        /// </summary>
        /// <param name="pRODUCTTYPE4">pRODUCTTYPE4 (required).</param>
        public ProductType4Filter(CatalogsProductGroupMultipleStringListCriteria pRODUCTTYPE4 = default(CatalogsProductGroupMultipleStringListCriteria))
        {
            // to ensure "pRODUCTTYPE4" is required (not null)
            this.PRODUCTTYPE4 = pRODUCTTYPE4 ?? throw new ArgumentNullException("pRODUCTTYPE4 is a required property for ProductType4Filter and cannot be null");
        }

        /// <summary>
        /// Gets or Sets PRODUCTTYPE4
        /// </summary>
        [DataMember(Name = "PRODUCT_TYPE_4", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsProductGroupMultipleStringListCriteria PRODUCTTYPE4 { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ProductType4Filter {\n");
            sb.Append("  PRODUCTTYPE4: ").Append(PRODUCTTYPE4).Append("\n");
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
            return this.Equals(input as ProductType4Filter);
        }

        /// <summary>
        /// Returns true if ProductType4Filter instances are equal
        /// </summary>
        /// <param name="input">Instance of ProductType4Filter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ProductType4Filter input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.PRODUCTTYPE4 == input.PRODUCTTYPE4 ||
                    (this.PRODUCTTYPE4 != null &&
                    this.PRODUCTTYPE4.Equals(input.PRODUCTTYPE4))
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
                if (this.PRODUCTTYPE4 != null)
                    hashCode = hashCode * 59 + this.PRODUCTTYPE4.GetHashCode();
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
