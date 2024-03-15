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
    /// Board media.
    /// </summary>
    [DataContract(Name = "Board_media")]
    public partial class BoardMedia : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="BoardMedia" /> class.
        /// </summary>
        /// <param name="imageCoverUrl">Board cover image..</param>
        /// <param name="pinThumbnailUrls">Board pin thumbnail urls..</param>
        public BoardMedia(string imageCoverUrl = default(string), List<string> pinThumbnailUrls = default(List<string>))
        {
            this.ImageCoverUrl = imageCoverUrl;
            this.PinThumbnailUrls = pinThumbnailUrls;
        }

        /// <summary>
        /// Board cover image.
        /// </summary>
        /// <value>Board cover image.</value>
        /// <example>https://i.pinimg.com/400x300/fd/cd/d5/fdcdd5a6d8a80824add0d054125cd957.jpg</example>
        [DataMember(Name = "image_cover_url", EmitDefaultValue = true)]
        public string ImageCoverUrl { get; set; }

        /// <summary>
        /// Board pin thumbnail urls.
        /// </summary>
        /// <value>Board pin thumbnail urls.</value>
        /// <example>[&quot;https://i.pinimg.com/150x150/b4/57/10/b45710f1ede96af55230f4b43935c4af.jpg&quot;,&quot;https://i.pinimg.com/150x150/dd/ff/46/ddff4616e39c1935cd05738794fa860e.jpg&quot;,&quot;https://i.pinimg.com/150x150/84/ac/59/84ac59b670ccb5b903dace480a98930c.jpg&quot;,&quot;https://i.pinimg.com/150x150/4c/54/6f/4c546f521be85e30838fb742bfff6936.jpg&quot;]</example>
        [DataMember(Name = "pin_thumbnail_urls", EmitDefaultValue = false)]
        public List<string> PinThumbnailUrls { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class BoardMedia {\n");
            sb.Append("  ImageCoverUrl: ").Append(ImageCoverUrl).Append("\n");
            sb.Append("  PinThumbnailUrls: ").Append(PinThumbnailUrls).Append("\n");
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