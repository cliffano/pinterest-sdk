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
    /// ImageMetadataImages
    /// </summary>
    [DataContract(Name = "ImageMetadata_images")]
    public partial class ImageMetadataImages : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ImageMetadataImages" /> class.
        /// </summary>
        /// <param name="var150x150">var150x150.</param>
        /// <param name="var400x300">var400x300.</param>
        /// <param name="var600x">var600x.</param>
        /// <param name="var1200x">var1200x.</param>
        public ImageMetadataImages(ImageDetails var150x150 = default(ImageDetails), ImageDetails var400x300 = default(ImageDetails), ImageDetails var600x = default(ImageDetails), ImageDetails var1200x = default(ImageDetails))
        {
            this.Var150x150 = var150x150;
            this.Var400x300 = var400x300;
            this.Var600x = var600x;
            this.Var1200x = var1200x;
        }

        /// <summary>
        /// Gets or Sets Var150x150
        /// </summary>
        [DataMember(Name = "150x150", EmitDefaultValue = false)]
        public ImageDetails Var150x150 { get; set; }

        /// <summary>
        /// Gets or Sets Var400x300
        /// </summary>
        [DataMember(Name = "400x300", EmitDefaultValue = false)]
        public ImageDetails Var400x300 { get; set; }

        /// <summary>
        /// Gets or Sets Var600x
        /// </summary>
        [DataMember(Name = "600x", EmitDefaultValue = false)]
        public ImageDetails Var600x { get; set; }

        /// <summary>
        /// Gets or Sets Var1200x
        /// </summary>
        [DataMember(Name = "1200x", EmitDefaultValue = false)]
        public ImageDetails Var1200x { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class ImageMetadataImages {\n");
            sb.Append("  Var150x150: ").Append(Var150x150).Append("\n");
            sb.Append("  Var400x300: ").Append(Var400x300).Append("\n");
            sb.Append("  Var600x: ").Append(Var600x).Append("\n");
            sb.Append("  Var1200x: ").Append(Var1200x).Append("\n");
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
