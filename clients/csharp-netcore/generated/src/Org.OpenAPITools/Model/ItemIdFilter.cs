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
    /// ItemIdFilter
    /// </summary>
    [DataContract(Name = "ItemIdFilter")]
    public partial class ItemIdFilter : IEquatable<ItemIdFilter>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ItemIdFilter" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ItemIdFilter() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ItemIdFilter" /> class.
        /// </summary>
        /// <param name="iTEMID">iTEMID (required).</param>
        public ItemIdFilter(CatalogsProductGroupCurrencyCriteria iTEMID = default(CatalogsProductGroupCurrencyCriteria))
        {
            // to ensure "iTEMID" is required (not null)
            if (iTEMID == null) {
                throw new ArgumentNullException("iTEMID is a required property for ItemIdFilter and cannot be null");
            }
            this.ITEM_ID = iTEMID;
        }

        /// <summary>
        /// Gets or Sets ITEM_ID
        /// </summary>
        [DataMember(Name = "ITEM_ID", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsProductGroupCurrencyCriteria ITEM_ID { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class ItemIdFilter {\n");
            sb.Append("  ITEM_ID: ").Append(ITEM_ID).Append("\n");
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
            return this.Equals(input as ItemIdFilter);
        }

        /// <summary>
        /// Returns true if ItemIdFilter instances are equal
        /// </summary>
        /// <param name="input">Instance of ItemIdFilter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ItemIdFilter input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.ITEM_ID == input.ITEM_ID ||
                    (this.ITEM_ID != null &&
                    this.ITEM_ID.Equals(input.ITEM_ID))
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
                if (this.ITEM_ID != null)
                {
                    hashCode = (hashCode * 59) + this.ITEM_ID.GetHashCode();
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
