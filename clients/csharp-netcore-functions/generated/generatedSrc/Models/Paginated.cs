/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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

namespace Org.OpenAPITools.Models
{
    /// <summary>
    /// Paginated
    /// </summary>
    [DataContract(Name = "Paginated")]
    public partial class Paginated : IEquatable<Paginated>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Paginated" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected Paginated() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="Paginated" /> class.
        /// </summary>
        /// <param name="items">items (required).</param>
        /// <param name="bookmark">bookmark.</param>
        public Paginated(List<Object> items = default(List<Object>), string bookmark = default(string))
        {
            // to ensure "items" is required (not null)
            this.Items = items ?? throw new ArgumentNullException("items is a required property for Paginated and cannot be null");
            this.Bookmark = bookmark;
        }

        /// <summary>
        /// Gets or Sets Items
        /// </summary>
        [DataMember(Name = "items", IsRequired = true, EmitDefaultValue = false)]
        public List<Object> Items { get; set; }

        /// <summary>
        /// Gets or Sets Bookmark
        /// </summary>
        [DataMember(Name = "bookmark", EmitDefaultValue = true)]
        public string Bookmark { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Paginated {\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("  Bookmark: ").Append(Bookmark).Append("\n");
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
            return this.Equals(input as Paginated);
        }

        /// <summary>
        /// Returns true if Paginated instances are equal
        /// </summary>
        /// <param name="input">Instance of Paginated to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Paginated input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Items == input.Items ||
                    this.Items != null &&
                    input.Items != null &&
                    this.Items.SequenceEqual(input.Items)
                ) && 
                (
                    this.Bookmark == input.Bookmark ||
                    (this.Bookmark != null &&
                    this.Bookmark.Equals(input.Bookmark))
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
                if (this.Items != null)
                    hashCode = hashCode * 59 + this.Items.GetHashCode();
                if (this.Bookmark != null)
                    hashCode = hashCode * 59 + this.Bookmark.GetHashCode();
                return hashCode;
            }
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
