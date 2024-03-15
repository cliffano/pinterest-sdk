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
    /// CatalogsHotelItemsFilter
    /// </summary>
    [DataContract(Name = "CatalogsHotelItemsFilter")]
    public partial class CatalogsHotelItemsFilter : IValidatableObject
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
        [DataMember(Name = "catalog_type", IsRequired = true, EmitDefaultValue = true)]
        public CatalogTypeEnum CatalogType { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsHotelItemsFilter" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CatalogsHotelItemsFilter() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsHotelItemsFilter" /> class.
        /// </summary>
        /// <param name="catalogType">catalogType (required).</param>
        /// <param name="hotelIds">hotelIds (required).</param>
        /// <param name="catalogId">Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog.</param>
        public CatalogsHotelItemsFilter(CatalogTypeEnum catalogType = default(CatalogTypeEnum), List<string> hotelIds = default(List<string>), string catalogId = default(string))
        {
            this.CatalogType = catalogType;
            // to ensure "hotelIds" is required (not null)
            if (hotelIds == null)
            {
                throw new ArgumentNullException("hotelIds is a required property for CatalogsHotelItemsFilter and cannot be null");
            }
            this.HotelIds = hotelIds;
            this.CatalogId = catalogId;
        }

        /// <summary>
        /// Gets or Sets HotelIds
        /// </summary>
        [DataMember(Name = "hotel_ids", IsRequired = true, EmitDefaultValue = true)]
        public List<string> HotelIds { get; set; }

        /// <summary>
        /// Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog
        /// </summary>
        /// <value>Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog</value>
        [DataMember(Name = "catalog_id", EmitDefaultValue = false)]
        public string CatalogId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CatalogsHotelItemsFilter {\n");
            sb.Append("  CatalogType: ").Append(CatalogType).Append("\n");
            sb.Append("  HotelIds: ").Append(HotelIds).Append("\n");
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
