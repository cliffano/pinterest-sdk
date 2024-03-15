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
    /// TargetingTypeFilter
    /// </summary>
    [DataContract(Name = "TargetingTypeFilter")]
    public partial class TargetingTypeFilter : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="TargetingTypeFilter" /> class.
        /// </summary>
        /// <param name="targetingTypes">List of targeting types. Requires &#x60;level&#x60; to be a value ending in &#x60;_TARGETING&#x60;..</param>
        public TargetingTypeFilter(List<AdsAnalyticsTargetingType> targetingTypes = default(List<AdsAnalyticsTargetingType>))
        {
            this.TargetingTypes = targetingTypes;
        }

        /// <summary>
        /// List of targeting types. Requires &#x60;level&#x60; to be a value ending in &#x60;_TARGETING&#x60;.
        /// </summary>
        /// <value>List of targeting types. Requires &#x60;level&#x60; to be a value ending in &#x60;_TARGETING&#x60;.</value>
        [DataMember(Name = "targeting_types", EmitDefaultValue = false)]
        public List<AdsAnalyticsTargetingType> TargetingTypes { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class TargetingTypeFilter {\n");
            sb.Append("  TargetingTypes: ").Append(TargetingTypes).Append("\n");
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
