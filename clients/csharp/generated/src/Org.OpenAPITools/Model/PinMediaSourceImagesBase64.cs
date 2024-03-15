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
    /// Multiple Base64-encoded images media source
    /// </summary>
    [DataContract(Name = "PinMediaSourceImagesBase64")]
    public partial class PinMediaSourceImagesBase64 : IValidatableObject
    {
        /// <summary>
        /// Defines SourceType
        /// </summary>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum SourceTypeEnum
        {
            /// <summary>
            /// Enum MultipleImageBase64 for value: multiple_image_base64
            /// </summary>
            [EnumMember(Value = "multiple_image_base64")]
            MultipleImageBase64 = 1
        }


        /// <summary>
        /// Gets or Sets SourceType
        /// </summary>
        [DataMember(Name = "source_type", EmitDefaultValue = false)]
        public SourceTypeEnum? SourceType { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="PinMediaSourceImagesBase64" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected PinMediaSourceImagesBase64() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="PinMediaSourceImagesBase64" /> class.
        /// </summary>
        /// <param name="sourceType">sourceType.</param>
        /// <param name="items">Array with image objects. (required).</param>
        /// <param name="index">index.</param>
        public PinMediaSourceImagesBase64(SourceTypeEnum? sourceType = default(SourceTypeEnum?), List<PinMediaSourceImagesBase64ItemsInner> items = default(List<PinMediaSourceImagesBase64ItemsInner>), int index = default(int))
        {
            // to ensure "items" is required (not null)
            if (items == null)
            {
                throw new ArgumentNullException("items is a required property for PinMediaSourceImagesBase64 and cannot be null");
            }
            this.Items = items;
            this.SourceType = sourceType;
            this.Index = index;
        }

        /// <summary>
        /// Array with image objects.
        /// </summary>
        /// <value>Array with image objects.</value>
        [DataMember(Name = "items", IsRequired = true, EmitDefaultValue = true)]
        public List<PinMediaSourceImagesBase64ItemsInner> Items { get; set; }

        /// <summary>
        /// Gets or Sets Index
        /// </summary>
        [DataMember(Name = "index", EmitDefaultValue = false)]
        public int Index { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class PinMediaSourceImagesBase64 {\n");
            sb.Append("  SourceType: ").Append(SourceType).Append("\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("  Index: ").Append(Index).Append("\n");
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
            // Index (int) minimum
            if (this.Index < (int)0)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Index, must be a value greater than or equal to 0.", new [] { "Index" });
            }

            yield break;
        }
    }

}