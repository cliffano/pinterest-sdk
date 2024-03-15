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
    /// AdGroupsAnalyticsResponseInner
    /// </summary>
    [DataContract(Name = "AdGroupsAnalyticsResponse_inner")]
    public partial class AdGroupsAnalyticsResponseInner : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="AdGroupsAnalyticsResponseInner" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected AdGroupsAnalyticsResponseInner()
        {
            this.AdditionalProperties = new Dictionary<string, object>();
        }
        /// <summary>
        /// Initializes a new instance of the <see cref="AdGroupsAnalyticsResponseInner" /> class.
        /// </summary>
        /// <param name="aDGROUPID">The ID of the ad group that this metrics belongs to. (required).</param>
        /// <param name="dATE">Current metrics date. Only returned when granularity is a time-based value (&#x60;DAY&#x60;, &#x60;HOUR&#x60;, &#x60;WEEK&#x60;, &#x60;MONTH&#x60;).</param>
        public AdGroupsAnalyticsResponseInner(string aDGROUPID = default(string), DateOnly dATE = default(DateOnly))
        {
            // to ensure "aDGROUPID" is required (not null)
            if (aDGROUPID == null)
            {
                throw new ArgumentNullException("aDGROUPID is a required property for AdGroupsAnalyticsResponseInner and cannot be null");
            }
            this.AD_GROUP_ID = aDGROUPID;
            this.DATE = dATE;
            this.AdditionalProperties = new Dictionary<string, object>();
        }

        /// <summary>
        /// The ID of the ad group that this metrics belongs to.
        /// </summary>
        /// <value>The ID of the ad group that this metrics belongs to.</value>
        [DataMember(Name = "AD_GROUP_ID", IsRequired = true, EmitDefaultValue = true)]
        public string AD_GROUP_ID { get; set; }

        /// <summary>
        /// Current metrics date. Only returned when granularity is a time-based value (&#x60;DAY&#x60;, &#x60;HOUR&#x60;, &#x60;WEEK&#x60;, &#x60;MONTH&#x60;)
        /// </summary>
        /// <value>Current metrics date. Only returned when granularity is a time-based value (&#x60;DAY&#x60;, &#x60;HOUR&#x60;, &#x60;WEEK&#x60;, &#x60;MONTH&#x60;)</value>
        [DataMember(Name = "DATE", EmitDefaultValue = false)]
        [JsonConverter(typeof(OpenAPIDateConverter))]
        public DateOnly DATE { get; set; }

        /// <summary>
        /// Gets or Sets additional properties
        /// </summary>
        [JsonExtensionData]
        public IDictionary<string, object> AdditionalProperties { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class AdGroupsAnalyticsResponseInner {\n");
            sb.Append("  AD_GROUP_ID: ").Append(AD_GROUP_ID).Append("\n");
            sb.Append("  DATE: ").Append(DATE).Append("\n");
            sb.Append("  AdditionalProperties: ").Append(AdditionalProperties).Append("\n");
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
            if (this.AD_GROUP_ID != null) {
                // AD_GROUP_ID (string) pattern
                Regex regexAD_GROUP_ID = new Regex(@"^\d+$", RegexOptions.CultureInvariant);
                if (!regexAD_GROUP_ID.Match(this.AD_GROUP_ID).Success)
                {
                    yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for AD_GROUP_ID, must match a pattern of " + regexAD_GROUP_ID, new [] { "AD_GROUP_ID" });
                }
            }

            yield break;
        }
    }

}
