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
    /// Object describing an item processing record
    /// </summary>
    [DataContract(Name = "HotelProcessingRecord")]
    public partial class HotelProcessingRecord : IValidatableObject
    {

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name = "status", EmitDefaultValue = false)]
        public ItemProcessingStatus? Status { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="HotelProcessingRecord" /> class.
        /// </summary>
        /// <param name="hotelId">The catalog hotel id in the merchant namespace.</param>
        /// <param name="errors">Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail..</param>
        /// <param name="warnings">Array with the validation warnings for the item processing record.</param>
        /// <param name="status">status.</param>
        public HotelProcessingRecord(string hotelId = default(string), List<ItemValidationEvent> errors = default(List<ItemValidationEvent>), List<ItemValidationEvent> warnings = default(List<ItemValidationEvent>), ItemProcessingStatus? status = default(ItemProcessingStatus?))
        {
            this.HotelId = hotelId;
            this.Errors = errors;
            this.Warnings = warnings;
            this.Status = status;
        }

        /// <summary>
        /// The catalog hotel id in the merchant namespace
        /// </summary>
        /// <value>The catalog hotel id in the merchant namespace</value>
        /// <example>DS0294-M</example>
        [DataMember(Name = "hotel_id", EmitDefaultValue = false)]
        public string HotelId { get; set; }

        /// <summary>
        /// Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.
        /// </summary>
        /// <value>Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.</value>
        [DataMember(Name = "errors", EmitDefaultValue = false)]
        public List<ItemValidationEvent> Errors { get; set; }

        /// <summary>
        /// Array with the validation warnings for the item processing record
        /// </summary>
        /// <value>Array with the validation warnings for the item processing record</value>
        [DataMember(Name = "warnings", EmitDefaultValue = false)]
        public List<ItemValidationEvent> Warnings { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class HotelProcessingRecord {\n");
            sb.Append("  HotelId: ").Append(HotelId).Append("\n");
            sb.Append("  Errors: ").Append(Errors).Append("\n");
            sb.Append("  Warnings: ").Append(Warnings).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
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
