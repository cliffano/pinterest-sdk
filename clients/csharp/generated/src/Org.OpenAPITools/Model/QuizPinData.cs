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
    /// This field includes all quiz data including questions, options, and results.
    /// </summary>
    [DataContract(Name = "QuizPinData")]
    public partial class QuizPinData : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="QuizPinData" /> class.
        /// </summary>
        /// <param name="questions">questions.</param>
        /// <param name="results">results.</param>
        public QuizPinData(List<QuizPinQuestion> questions = default(List<QuizPinQuestion>), List<QuizPinResult> results = default(List<QuizPinResult>))
        {
            this.Questions = questions;
            this.Results = results;
        }

        /// <summary>
        /// Gets or Sets Questions
        /// </summary>
        [DataMember(Name = "questions", EmitDefaultValue = false)]
        public List<QuizPinQuestion> Questions { get; set; }

        /// <summary>
        /// Gets or Sets Results
        /// </summary>
        [DataMember(Name = "results", EmitDefaultValue = false)]
        public List<QuizPinResult> Results { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class QuizPinData {\n");
            sb.Append("  Questions: ").Append(Questions).Append("\n");
            sb.Append("  Results: ").Append(Results).Append("\n");
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
