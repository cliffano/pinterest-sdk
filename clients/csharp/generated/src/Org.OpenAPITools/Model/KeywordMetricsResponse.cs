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
    /// KeywordMetricsResponse
    /// </summary>
    [DataContract(Name = "KeywordMetricsResponse")]
    public partial class KeywordMetricsResponse : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="KeywordMetricsResponse" /> class.
        /// </summary>
        /// <param name="keyword">Keyword name, e.g., \&quot;keyword\&quot;:\&quot;fashion outfits\&quot;.</param>
        /// <param name="metrics">metrics.</param>
        public KeywordMetricsResponse(string keyword = default(string), KeywordMetrics metrics = default(KeywordMetrics))
        {
            this.Keyword = keyword;
            this.Metrics = metrics;
        }

        /// <summary>
        /// Keyword name, e.g., \&quot;keyword\&quot;:\&quot;fashion outfits\&quot;
        /// </summary>
        /// <value>Keyword name, e.g., \&quot;keyword\&quot;:\&quot;fashion outfits\&quot;</value>
        /// <example>animals</example>
        [DataMember(Name = "keyword", EmitDefaultValue = false)]
        public string Keyword { get; set; }

        /// <summary>
        /// Gets or Sets Metrics
        /// </summary>
        [DataMember(Name = "metrics", EmitDefaultValue = false)]
        public KeywordMetrics Metrics { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class KeywordMetricsResponse {\n");
            sb.Append("  Keyword: ").Append(Keyword).Append("\n");
            sb.Append("  Metrics: ").Append(Metrics).Append("\n");
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
