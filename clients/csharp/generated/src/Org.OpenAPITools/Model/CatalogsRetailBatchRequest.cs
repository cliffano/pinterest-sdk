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
    /// A request object that can have multiple operations on a single retail batch
    /// </summary>
    [DataContract(Name = "CatalogsRetailBatchRequest")]
    public partial class CatalogsRetailBatchRequest : IValidatableObject
    {

        /// <summary>
        /// Gets or Sets CatalogType
        /// </summary>
        [DataMember(Name = "catalog_type", IsRequired = true, EmitDefaultValue = true)]
        public CatalogsType CatalogType { get; set; }

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
        /// Initializes a new instance of the <see cref="CatalogsRetailBatchRequest" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CatalogsRetailBatchRequest() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsRetailBatchRequest" /> class.
        /// </summary>
        /// <param name="catalogType">catalogType (required).</param>
        /// <param name="country">country (required).</param>
        /// <param name="language">language (required).</param>
        /// <param name="items">Array with catalogs item operations (required).</param>
        public CatalogsRetailBatchRequest(CatalogsType catalogType = default(CatalogsType), Country country = default(Country), Language language = default(Language), List<CatalogsRetailBatchRequestItemsInner> items = default(List<CatalogsRetailBatchRequestItemsInner>))
        {
            this.CatalogType = catalogType;
            this.Country = country;
            this.Language = language;
            // to ensure "items" is required (not null)
            if (items == null)
            {
                throw new ArgumentNullException("items is a required property for CatalogsRetailBatchRequest and cannot be null");
            }
            this.Items = items;
        }

        /// <summary>
        /// Array with catalogs item operations
        /// </summary>
        /// <value>Array with catalogs item operations</value>
        [DataMember(Name = "items", IsRequired = true, EmitDefaultValue = true)]
        public List<CatalogsRetailBatchRequestItemsInner> Items { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CatalogsRetailBatchRequest {\n");
            sb.Append("  CatalogType: ").Append(CatalogType).Append("\n");
            sb.Append("  Country: ").Append(Country).Append("\n");
            sb.Append("  Language: ").Append(Language).Append("\n");
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
