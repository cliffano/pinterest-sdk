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
    /// TemplateResponseDateRange
    /// </summary>
    [DataContract(Name = "TemplateResponse_date_range")]
    public partial class TemplateResponseDateRange : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="TemplateResponseDateRange" /> class.
        /// </summary>
        /// <param name="dynamicDateRange">dynamicDateRange.</param>
        /// <param name="relativeDateRange">relativeDateRange.</param>
        /// <param name="absoluteDateRange">absoluteDateRange.</param>
        public TemplateResponseDateRange(TemplateResponseDateRangeDynamicDateRange dynamicDateRange = default(TemplateResponseDateRangeDynamicDateRange), TemplateResponseDateRangeRelativeDateRange relativeDateRange = default(TemplateResponseDateRangeRelativeDateRange), TemplateResponseDateRangeAbsoluteDateRange absoluteDateRange = default(TemplateResponseDateRangeAbsoluteDateRange))
        {
            this.DynamicDateRange = dynamicDateRange;
            this.RelativeDateRange = relativeDateRange;
            this.AbsoluteDateRange = absoluteDateRange;
        }

        /// <summary>
        /// Gets or Sets DynamicDateRange
        /// </summary>
        [DataMember(Name = "dynamic_date_range", EmitDefaultValue = true)]
        public TemplateResponseDateRangeDynamicDateRange DynamicDateRange { get; set; }

        /// <summary>
        /// Gets or Sets RelativeDateRange
        /// </summary>
        [DataMember(Name = "relative_date_range", EmitDefaultValue = true)]
        public TemplateResponseDateRangeRelativeDateRange RelativeDateRange { get; set; }

        /// <summary>
        /// Gets or Sets AbsoluteDateRange
        /// </summary>
        [DataMember(Name = "absolute_date_range", EmitDefaultValue = true)]
        public TemplateResponseDateRangeAbsoluteDateRange AbsoluteDateRange { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class TemplateResponseDateRange {\n");
            sb.Append("  DynamicDateRange: ").Append(DynamicDateRange).Append("\n");
            sb.Append("  RelativeDateRange: ").Append(RelativeDateRange).Append("\n");
            sb.Append("  AbsoluteDateRange: ").Append(AbsoluteDateRange).Append("\n");
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
