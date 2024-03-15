/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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
    /// Request object to upsert catalogs items
    /// </summary>
    [DataContract(Name = "CatalogsItemsUpsertBatchRequest")]
    public partial class CatalogsItemsUpsertBatchRequest : IValidatableObject
    {

        /// <summary>
        /// Gets or Sets Country
        /// </summary>
        [DataMember(Name = "country", IsRequired = true, EmitDefaultValue = true)]
        public Country Country { get; set; }

        /// <summary>
        /// Gets or Sets Language
        /// </summary>
        [DataMember(Name = "language", IsRequired = true, EmitDefaultValue = true)]
        public Language Language { get; set; }

        /// <summary>
        /// Gets or Sets Operation
        /// </summary>
        [DataMember(Name = "operation", IsRequired = true, EmitDefaultValue = true)]
        public BatchOperation Operation { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsItemsUpsertBatchRequest" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CatalogsItemsUpsertBatchRequest() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsItemsUpsertBatchRequest" /> class.
        /// </summary>
        /// <param name="country">country (required).</param>
        /// <param name="language">language (required).</param>
        /// <param name="operation">operation (required).</param>
        /// <param name="items">Array with catalogs items (required).</param>
        public CatalogsItemsUpsertBatchRequest(Country country = default(Country), Language language = default(Language), BatchOperation operation = default(BatchOperation), List<ItemUpsertBatchRecord> items = default(List<ItemUpsertBatchRecord>))
        {
            this.Country = country;
            this.Language = language;
            this.Operation = operation;
            // to ensure "items" is required (not null)
            if (items == null)
            {
                throw new ArgumentNullException("items is a required property for CatalogsItemsUpsertBatchRequest and cannot be null");
            }
            this.Items = items;
        }

        /// <summary>
        /// Array with catalogs items
        /// </summary>
        /// <value>Array with catalogs items</value>
        [DataMember(Name = "items", IsRequired = true, EmitDefaultValue = true)]
        public List<ItemUpsertBatchRecord> Items { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CatalogsItemsUpsertBatchRequest {\n");
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
