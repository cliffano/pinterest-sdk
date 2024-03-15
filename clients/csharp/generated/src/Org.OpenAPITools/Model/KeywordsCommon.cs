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
    /// KeywordsCommon
    /// </summary>
    [DataContract(Name = "KeywordsCommon")]
    public partial class KeywordsCommon : IValidatableObject
    {

        /// <summary>
        /// Gets or Sets MatchType
        /// </summary>
        [DataMember(Name = "match_type", IsRequired = true, EmitDefaultValue = true)]
        public MatchTypeResponse MatchType { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="KeywordsCommon" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected KeywordsCommon() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="KeywordsCommon" /> class.
        /// </summary>
        /// <param name="bid">Keyword custom bid in microcurrency - null if inherited from parent ad group..</param>
        /// <param name="matchType">matchType (required).</param>
        /// <param name="value">Keyword value (120 chars max). (required).</param>
        public KeywordsCommon(int? bid = default(int?), MatchTypeResponse matchType = default(MatchTypeResponse), string value = default(string))
        {
            this.MatchType = matchType;
            // to ensure "value" is required (not null)
            if (value == null)
            {
                throw new ArgumentNullException("value is a required property for KeywordsCommon and cannot be null");
            }
            this.Value = value;
            this.Bid = bid;
        }

        /// <summary>
        /// Keyword custom bid in microcurrency - null if inherited from parent ad group.
        /// </summary>
        /// <value>Keyword custom bid in microcurrency - null if inherited from parent ad group.</value>
        /// <example>200000</example>
        [DataMember(Name = "bid", EmitDefaultValue = true)]
        public int? Bid { get; set; }

        /// <summary>
        /// Keyword value (120 chars max).
        /// </summary>
        /// <value>Keyword value (120 chars max).</value>
        [DataMember(Name = "value", IsRequired = true, EmitDefaultValue = true)]
        public string Value { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class KeywordsCommon {\n");
            sb.Append("  Bid: ").Append(Bid).Append("\n");
            sb.Append("  MatchType: ").Append(MatchType).Append("\n");
            sb.Append("  Value: ").Append(Value).Append("\n");
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
