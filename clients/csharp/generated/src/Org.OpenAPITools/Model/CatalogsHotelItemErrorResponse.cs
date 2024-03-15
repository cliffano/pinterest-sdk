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
    /// Object describing a hotel item error
    /// </summary>
    [DataContract(Name = "CatalogsHotelItemErrorResponse")]
    public partial class CatalogsHotelItemErrorResponse : IValidatableObject
    {

        /// <summary>
        /// Gets or Sets CatalogType
        /// </summary>
        [DataMember(Name = "catalog_type", IsRequired = true, EmitDefaultValue = true)]
        public CatalogsType CatalogType { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsHotelItemErrorResponse" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CatalogsHotelItemErrorResponse() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsHotelItemErrorResponse" /> class.
        /// </summary>
        /// <param name="catalogType">catalogType (required).</param>
        /// <param name="hotelId">The catalog hotel id in the merchant namespace.</param>
        /// <param name="errors">Array with the errors for the item id requested.</param>
        public CatalogsHotelItemErrorResponse(CatalogsType catalogType = default(CatalogsType), string hotelId = default(string), List<ItemValidationEvent> errors = default(List<ItemValidationEvent>))
        {
            this.CatalogType = catalogType;
            this.HotelId = hotelId;
            this.Errors = errors;
        }

        /// <summary>
        /// The catalog hotel id in the merchant namespace
        /// </summary>
        /// <value>The catalog hotel id in the merchant namespace</value>
        /// <example>DS0294-M</example>
        [DataMember(Name = "hotel_id", EmitDefaultValue = false)]
        public string HotelId { get; set; }

        /// <summary>
        /// Array with the errors for the item id requested
        /// </summary>
        /// <value>Array with the errors for the item id requested</value>
        [DataMember(Name = "errors", EmitDefaultValue = false)]
        public List<ItemValidationEvent> Errors { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CatalogsHotelItemErrorResponse {\n");
            sb.Append("  CatalogType: ").Append(CatalogType).Append("\n");
            sb.Append("  HotelId: ").Append(HotelId).Append("\n");
            sb.Append("  Errors: ").Append(Errors).Append("\n");
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
