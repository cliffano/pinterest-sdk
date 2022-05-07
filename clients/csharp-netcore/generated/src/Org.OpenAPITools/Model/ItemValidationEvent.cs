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
    /// Object describing an item validation event
    /// </summary>
    [DataContract(Name = "ItemValidationEvent")]
    public partial class ItemValidationEvent : IEquatable<ItemValidationEvent>, IValidatableObject
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
        [DataMember(Name = "attribute", EmitDefaultValue = false)]
        public string Attribute { get; set; }

        /// <summary>
        /// The event code that the item validation event references
        /// </summary>
        /// <value>The event code that the item validation event references</value>
        [DataMember(Name = "code", EmitDefaultValue = false)]
        public int Code { get; set; }

        /// <summary>
        /// Title message describing the item validation event
        /// </summary>
        /// <value>Title message describing the item validation event</value>
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
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as ItemValidationEvent);
        }

        /// <summary>
        /// Returns true if ItemValidationEvent instances are equal
        /// </summary>
        /// <param name="input">Instance of ItemValidationEvent to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ItemValidationEvent input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.Attribute == input.Attribute ||
                    (this.Attribute != null &&
                    this.Attribute.Equals(input.Attribute))
                ) && 
                (
                    this.Code == input.Code ||
                    this.Code.Equals(input.Code)
                ) && 
                (
                    this.Message == input.Message ||
                    (this.Message != null &&
                    this.Message.Equals(input.Message))
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
                if (this.Attribute != null)
                {
                    hashCode = (hashCode * 59) + this.Attribute.GetHashCode();
                }
                hashCode = (hashCode * 59) + this.Code.GetHashCode();
                if (this.Message != null)
                {
                    hashCode = (hashCode * 59) + this.Message.GetHashCode();
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
