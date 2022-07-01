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

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// GoogleProductCategory0Filter
    /// </summary>
    [DataContract(Name = "GoogleProductCategory0Filter")]
    public partial class GoogleProductCategory0Filter : IEquatable<GoogleProductCategory0Filter>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="GoogleProductCategory0Filter" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected GoogleProductCategory0Filter() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="GoogleProductCategory0Filter" /> class.
        /// </summary>
        /// <param name="gOOGLEPRODUCTCATEGORY0">gOOGLEPRODUCTCATEGORY0 (required).</param>
        public GoogleProductCategory0Filter(CatalogsProductGroupMultipleStringListCriteria gOOGLEPRODUCTCATEGORY0 = default(CatalogsProductGroupMultipleStringListCriteria))
        {
            // to ensure "gOOGLEPRODUCTCATEGORY0" is required (not null)
            if (gOOGLEPRODUCTCATEGORY0 == null) {
                throw new ArgumentNullException("gOOGLEPRODUCTCATEGORY0 is a required property for GoogleProductCategory0Filter and cannot be null");
            }
            this.GOOGLEPRODUCTCATEGORY0 = gOOGLEPRODUCTCATEGORY0;
        }

        /// <summary>
        /// Gets or Sets GOOGLEPRODUCTCATEGORY0
        /// </summary>
        [DataMember(Name = "GOOGLE_PRODUCT_CATEGORY_0", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsProductGroupMultipleStringListCriteria GOOGLEPRODUCTCATEGORY0 { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class GoogleProductCategory0Filter {\n");
            sb.Append("  GOOGLEPRODUCTCATEGORY0: ").Append(GOOGLEPRODUCTCATEGORY0).Append("\n");
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
            return this.Equals(input as GoogleProductCategory0Filter);
        }

        /// <summary>
        /// Returns true if GoogleProductCategory0Filter instances are equal
        /// </summary>
        /// <param name="input">Instance of GoogleProductCategory0Filter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(GoogleProductCategory0Filter input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.GOOGLEPRODUCTCATEGORY0 == input.GOOGLEPRODUCTCATEGORY0 ||
                    (this.GOOGLEPRODUCTCATEGORY0 != null &&
                    this.GOOGLEPRODUCTCATEGORY0.Equals(input.GOOGLEPRODUCTCATEGORY0))
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
                if (this.GOOGLEPRODUCTCATEGORY0 != null)
                {
                    hashCode = (hashCode * 59) + this.GOOGLEPRODUCTCATEGORY0.GetHashCode();
                }
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        public IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
