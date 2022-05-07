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
    /// MaxPriceFilter
    /// </summary>
    [DataContract(Name = "MaxPriceFilter")]
    public partial class MaxPriceFilter : IEquatable<MaxPriceFilter>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="MaxPriceFilter" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected MaxPriceFilter() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="MaxPriceFilter" /> class.
        /// </summary>
        /// <param name="mAXPRICE">mAXPRICE (required).</param>
        public MaxPriceFilter(CatalogsProductGroupPricingCriteria mAXPRICE = default(CatalogsProductGroupPricingCriteria))
        {
            // to ensure "mAXPRICE" is required (not null)
            this.MAX_PRICE = mAXPRICE ?? throw new ArgumentNullException("mAXPRICE is a required property for MaxPriceFilter and cannot be null");
        }

        /// <summary>
        /// Gets or Sets MAX_PRICE
        /// </summary>
        [DataMember(Name = "MAX_PRICE", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsProductGroupPricingCriteria MAX_PRICE { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MaxPriceFilter {\n");
            sb.Append("  MAX_PRICE: ").Append(MAX_PRICE).Append("\n");
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
            return this.Equals(input as MaxPriceFilter);
        }

        /// <summary>
        /// Returns true if MaxPriceFilter instances are equal
        /// </summary>
        /// <param name="input">Instance of MaxPriceFilter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(MaxPriceFilter input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.MAX_PRICE == input.MAX_PRICE ||
                    (this.MAX_PRICE != null &&
                    this.MAX_PRICE.Equals(input.MAX_PRICE))
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
                if (this.MAX_PRICE != null)
                    hashCode = hashCode * 59 + this.MAX_PRICE.GetHashCode();
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
