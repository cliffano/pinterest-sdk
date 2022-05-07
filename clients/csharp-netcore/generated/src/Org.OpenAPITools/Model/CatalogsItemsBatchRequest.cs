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

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// Request object of catalogs items batch
    /// </summary>
    [DataContract(Name = "CatalogsItemsBatchRequest")]
    public partial class CatalogsItemsBatchRequest : IEquatable<CatalogsItemsBatchRequest>, IValidatableObject
    {

        /// <summary>
        /// Gets or Sets Country
        /// </summary>
        [DataMember(Name = "country", EmitDefaultValue = false)]
        public Country? Country { get; set; }

        /// <summary>
        /// Gets or Sets Language
        /// </summary>
        [DataMember(Name = "language", EmitDefaultValue = false)]
        public Language? Language { get; set; }

        /// <summary>
        /// Gets or Sets Operation
        /// </summary>
        [DataMember(Name = "operation", EmitDefaultValue = false)]
        public BatchOperation? Operation { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsItemsBatchRequest" /> class.
        /// </summary>
        /// <param name="country">country.</param>
        /// <param name="language">language.</param>
        /// <param name="operation">operation.</param>
        /// <param name="items">Array with catalogs items.</param>
        public CatalogsItemsBatchRequest(Country? country = default(Country?), Language? language = default(Language?), BatchOperation? operation = default(BatchOperation?), List<ItemBatchRecord> items = default(List<ItemBatchRecord>))
        {
            this.Country = country;
            this.Language = language;
            this.Operation = operation;
            this.Items = items;
        }

        /// <summary>
        /// Array with catalogs items
        /// </summary>
        /// <value>Array with catalogs items</value>
        [DataMember(Name = "items", EmitDefaultValue = false)]
        public List<ItemBatchRecord> Items { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CatalogsItemsBatchRequest {\n");
            sb.Append("  Country: ").Append(Country).Append("\n");
            sb.Append("  Language: ").Append(Language).Append("\n");
            sb.Append("  Operation: ").Append(Operation).Append("\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
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
            return this.Equals(input as CatalogsItemsBatchRequest);
        }

        /// <summary>
        /// Returns true if CatalogsItemsBatchRequest instances are equal
        /// </summary>
        /// <param name="input">Instance of CatalogsItemsBatchRequest to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsItemsBatchRequest input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.Country == input.Country ||
                    this.Country.Equals(input.Country)
                ) && 
                (
                    this.Language == input.Language ||
                    this.Language.Equals(input.Language)
                ) && 
                (
                    this.Operation == input.Operation ||
                    this.Operation.Equals(input.Operation)
                ) && 
                (
                    this.Items == input.Items ||
                    this.Items != null &&
                    input.Items != null &&
                    this.Items.SequenceEqual(input.Items)
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
                hashCode = (hashCode * 59) + this.Country.GetHashCode();
                hashCode = (hashCode * 59) + this.Language.GetHashCode();
                hashCode = (hashCode * 59) + this.Operation.GetHashCode();
                if (this.Items != null)
                {
                    hashCode = (hashCode * 59) + this.Items.GetHashCode();
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
