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
    /// Request object for updating a hotel product group.
    /// </summary>
    [DataContract(Name = "CatalogsHotelProductGroupUpdateRequest")]
    public partial class CatalogsHotelProductGroupUpdateRequest : IValidatableObject
    {
        /// <summary>
        /// Defines CatalogType
        /// </summary>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum CatalogTypeEnum
        {
            /// <summary>
            /// Enum HOTEL for value: HOTEL
            /// </summary>
            [EnumMember(Value = "HOTEL")]
            HOTEL = 1
        }


        /// <summary>
        /// Gets or Sets CatalogType
        /// </summary>
        [DataMember(Name = "catalog_type", EmitDefaultValue = false)]
        public CatalogTypeEnum? CatalogType { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsHotelProductGroupUpdateRequest" /> class.
        /// </summary>
        /// <param name="catalogType">catalogType.</param>
        /// <param name="name">name.</param>
        /// <param name="description">description.</param>
        /// <param name="filters">filters.</param>
        public CatalogsHotelProductGroupUpdateRequest(CatalogTypeEnum? catalogType = default(CatalogTypeEnum?), string name = default(string), string description = default(string), CatalogsHotelProductGroupFilters filters = default(CatalogsHotelProductGroupFilters))
        {
            this.CatalogType = catalogType;
            this.Name = name;
            this.Description = description;
            this.Filters = filters;
        }

        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name = "name", EmitDefaultValue = false)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets Description
        /// </summary>
        [DataMember(Name = "description", EmitDefaultValue = true)]
        public string Description { get; set; }

        /// <summary>
        /// Gets or Sets Filters
        /// </summary>
        [DataMember(Name = "filters", EmitDefaultValue = false)]
        public CatalogsHotelProductGroupFilters Filters { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CatalogsHotelProductGroupUpdateRequest {\n");
            sb.Append("  CatalogType: ").Append(CatalogType).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Filters: ").Append(Filters).Append("\n");
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