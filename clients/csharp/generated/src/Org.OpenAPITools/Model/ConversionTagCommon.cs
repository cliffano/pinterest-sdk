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
    /// ConversionTagCommon
    /// </summary>
    [DataContract(Name = "ConversionTagCommon")]
    public partial class ConversionTagCommon : IValidatableObject
    {

        /// <summary>
        /// Gets or Sets EnhancedMatchStatus
        /// </summary>
        [DataMember(Name = "enhanced_match_status", EmitDefaultValue = true)]
        public EnhancedMatchStatusType? EnhancedMatchStatus { get; set; }

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name = "status", EmitDefaultValue = false)]
        public EntityStatus? Status { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="ConversionTagCommon" /> class.
        /// </summary>
        /// <param name="adAccountId">Ad account ID..</param>
        /// <param name="codeSnippet">Tag code snippet..</param>
        /// <param name="enhancedMatchStatus">enhancedMatchStatus.</param>
        /// <param name="id">Tag ID..</param>
        /// <param name="lastFiredTimeMs">Time for the last event fired..</param>
        /// <param name="name">Conversion tag name..</param>
        /// <param name="status">status.</param>
        /// <param name="varVersion">Version number..</param>
        /// <param name="configs">configs.</param>
        public ConversionTagCommon(string adAccountId = default(string), string codeSnippet = default(string), EnhancedMatchStatusType? enhancedMatchStatus = default(EnhancedMatchStatusType?), string id = default(string), decimal? lastFiredTimeMs = default(decimal?), string name = default(string), EntityStatus? status = default(EntityStatus?), string varVersion = default(string), ConversionTagConfigs configs = default(ConversionTagConfigs))
        {
            this.AdAccountId = adAccountId;
            this.CodeSnippet = codeSnippet;
            this.EnhancedMatchStatus = enhancedMatchStatus;
            this.Id = id;
            this.LastFiredTimeMs = lastFiredTimeMs;
            this.Name = name;
            this.Status = status;
            this.VarVersion = varVersion;
            this.Configs = configs;
        }

        /// <summary>
        /// Ad account ID.
        /// </summary>
        /// <value>Ad account ID.</value>
        /// <example>549755885175</example>
        [DataMember(Name = "ad_account_id", EmitDefaultValue = false)]
        public string AdAccountId { get; set; }

        /// <summary>
        /// Tag code snippet.
        /// </summary>
        /// <value>Tag code snippet.</value>
        /// <example>&lt;script type&#x3D;text/javascript&gt; [...]</example>
        [DataMember(Name = "code_snippet", EmitDefaultValue = false)]
        public string CodeSnippet { get; set; }

        /// <summary>
        /// Tag ID.
        /// </summary>
        /// <value>Tag ID.</value>
        /// <example>2617998078212</example>
        [DataMember(Name = "id", EmitDefaultValue = false)]
        public string Id { get; set; }

        /// <summary>
        /// Time for the last event fired.
        /// </summary>
        /// <value>Time for the last event fired.</value>
        /// <example>1599030000000</example>
        [DataMember(Name = "last_fired_time_ms", EmitDefaultValue = true)]
        public decimal? LastFiredTimeMs { get; set; }

        /// <summary>
        /// Conversion tag name.
        /// </summary>
        /// <value>Conversion tag name.</value>
        /// <example>ACME Checkout Test Tag</example>
        [DataMember(Name = "name", EmitDefaultValue = false)]
        public string Name { get; set; }

        /// <summary>
        /// Version number.
        /// </summary>
        /// <value>Version number.</value>
        /// <example>3</example>
        [DataMember(Name = "version", EmitDefaultValue = false)]
        public string VarVersion { get; set; }

        /// <summary>
        /// Gets or Sets Configs
        /// </summary>
        [DataMember(Name = "configs", EmitDefaultValue = false)]
        public ConversionTagConfigs Configs { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class ConversionTagCommon {\n");
            sb.Append("  AdAccountId: ").Append(AdAccountId).Append("\n");
            sb.Append("  CodeSnippet: ").Append(CodeSnippet).Append("\n");
            sb.Append("  EnhancedMatchStatus: ").Append(EnhancedMatchStatus).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LastFiredTimeMs: ").Append(LastFiredTimeMs).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  VarVersion: ").Append(VarVersion).Append("\n");
            sb.Append("  Configs: ").Append(Configs).Append("\n");
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