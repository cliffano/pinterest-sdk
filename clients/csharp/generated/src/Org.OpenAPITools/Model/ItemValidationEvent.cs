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
    /// Object describing an item validation event
    /// </summary>
    [DataContract(Name = "ItemValidationEvent")]
    public partial class ItemValidationEvent : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ItemValidationEvent" /> class.
        /// </summary>
        /// <param name="attribute">The attribute that the item validation event references.</param>
        /// <param name="code">The event code that the item validation event references.</param>
        /// <param name="message">Title message describing the item validation event.</param>
        public ItemValidationEvent(string attribute = default(string), int code = default(int), string message = default(string))
        {
            this.Attribute = attribute;
            this.Code = code;
            this.Message = message;
        }

        /// <summary>
        /// The attribute that the item validation event references
        /// </summary>
        /// <value>The attribute that the item validation event references</value>
        /// <example>title</example>
        [DataMember(Name = "attribute", EmitDefaultValue = false)]
        public string Attribute { get; set; }

        /// <summary>
        /// The event code that the item validation event references
        /// </summary>
        /// <value>The event code that the item validation event references</value>
        /// <example>106</example>
        [DataMember(Name = "code", EmitDefaultValue = false)]
        public int Code { get; set; }

        /// <summary>
        /// Title message describing the item validation event
        /// </summary>
        /// <value>Title message describing the item validation event</value>
        /// <example>Title is missing from product metadata.</example>
        [DataMember(Name = "message", EmitDefaultValue = false)]
        public string Message { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class ItemValidationEvent {\n");
            sb.Append("  Attribute: ").Append(Attribute).Append("\n");
            sb.Append("  Code: ").Append(Code).Append("\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
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
