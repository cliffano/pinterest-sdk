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
    /// GoogleProductCategory6Filter
    /// </summary>
    [DataContract(Name = "GoogleProductCategory6Filter")]
    public partial class GoogleProductCategory6Filter : IEquatable<GoogleProductCategory6Filter>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="GoogleProductCategory6Filter" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected GoogleProductCategory6Filter() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="GoogleProductCategory6Filter" /> class.
        /// </summary>
        /// <param name="gOOGLEPRODUCTCATEGORY6">gOOGLEPRODUCTCATEGORY6 (required).</param>
        public GoogleProductCategory6Filter(CatalogsProductGroupMultipleStringListCriteria gOOGLEPRODUCTCATEGORY6 = default(CatalogsProductGroupMultipleStringListCriteria))
        {
            // to ensure "gOOGLEPRODUCTCATEGORY6" is required (not null)
            this.GOOGLEPRODUCTCATEGORY6 = gOOGLEPRODUCTCATEGORY6 ?? throw new ArgumentNullException("gOOGLEPRODUCTCATEGORY6 is a required property for GoogleProductCategory6Filter and cannot be null");
        }

        /// <summary>
        /// Gets or Sets GOOGLEPRODUCTCATEGORY6
        /// </summary>
        [DataMember(Name = "GOOGLE_PRODUCT_CATEGORY_6", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsProductGroupMultipleStringListCriteria GOOGLEPRODUCTCATEGORY6 { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GoogleProductCategory6Filter {\n");
            sb.Append("  GOOGLEPRODUCTCATEGORY6: ").Append(GOOGLEPRODUCTCATEGORY6).Append("\n");
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
            return this.Equals(input as GoogleProductCategory6Filter);
        }

        /// <summary>
        /// Returns true if GoogleProductCategory6Filter instances are equal
        /// </summary>
        /// <param name="input">Instance of GoogleProductCategory6Filter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(GoogleProductCategory6Filter input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.GOOGLEPRODUCTCATEGORY6 == input.GOOGLEPRODUCTCATEGORY6 ||
                    (this.GOOGLEPRODUCTCATEGORY6 != null &&
                    this.GOOGLEPRODUCTCATEGORY6.Equals(input.GOOGLEPRODUCTCATEGORY6))
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
                if (this.GOOGLEPRODUCTCATEGORY6 != null)
                    hashCode = hashCode * 59 + this.GOOGLEPRODUCTCATEGORY6.GetHashCode();
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
