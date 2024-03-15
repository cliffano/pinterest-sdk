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
    /// Request object to update catalogs hotel items
    /// </summary>
    [DataContract(Name = "CatalogsHotelBatchRequest")]
    public partial class CatalogsHotelBatchRequest : IValidatableObject
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
        /// Initializes a new instance of the <see cref="CatalogsHotelBatchRequest" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CatalogsHotelBatchRequest() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsHotelBatchRequest" /> class.
        /// </summary>
        /// <param name="catalogType">catalogType (required).</param>
        /// <param name="country">country (required).</param>
        /// <param name="language">language (required).</param>
        /// <param name="items">Array with catalogs item operations (required).</param>
        /// <param name="catalogId">Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog.</param>
        public CatalogsHotelBatchRequest(CatalogsType catalogType = default(CatalogsType), Country country = default(Country), Language language = default(Language), List<CatalogsHotelBatchItem> items = default(List<CatalogsHotelBatchItem>), string catalogId = default(string))
        {
            this.CatalogType = catalogType;
            this.Country = country;
            this.Language = language;
            // to ensure "items" is required (not null)
            if (items == null)
            {
                throw new ArgumentNullException("items is a required property for CatalogsHotelBatchRequest and cannot be null");
            }
            this.Items = items;
            this.CatalogId = catalogId;
        }

        /// <summary>
        /// Array with catalogs item operations
        /// </summary>
        /// <value>Array with catalogs item operations</value>
        [DataMember(Name = "items", IsRequired = true, EmitDefaultValue = true)]
        public List<CatalogsHotelBatchItem> Items { get; set; }

        /// <summary>
        /// Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog
        /// </summary>
        /// <value>Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog</value>
        /// <example>2680059592705</example>
        [DataMember(Name = "catalog_id", EmitDefaultValue = false)]
        public string CatalogId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CatalogsHotelBatchRequest {\n");
            sb.Append("  CatalogType: ").Append(CatalogType).Append("\n");
            sb.Append("  Country: ").Append(Country).Append("\n");
            sb.Append("  Language: ").Append(Language).Append("\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("  CatalogId: ").Append(CatalogId).Append("\n");
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
            if (this.CatalogId != null) {
                // CatalogId (string) pattern
                Regex regexCatalogId = new Regex(@"^\d+$", RegexOptions.CultureInvariant);
                if (!regexCatalogId.Match(this.CatalogId).Success)
                {
                    yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for CatalogId, must match a pattern of " + regexCatalogId, new [] { "CatalogId" });
                }
            }

            yield break;
        }
    }

}
