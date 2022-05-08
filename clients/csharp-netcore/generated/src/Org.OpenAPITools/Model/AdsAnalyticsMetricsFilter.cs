/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
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
    /// AdsAnalyticsMetricsFilter
    /// </summary>
    [DataContract(Name = "AdsAnalyticsMetricsFilter")]
    public partial class AdsAnalyticsMetricsFilter : IEquatable<AdsAnalyticsMetricsFilter>, IValidatableObject
    {

        /// <summary>
        /// Gets or Sets Field
        /// </summary>
        [DataMember(Name = "field", EmitDefaultValue = false)]
        public AdsAnalyticsFilterColumn? Field { get; set; }

        /// <summary>
        /// Gets or Sets Operator
        /// </summary>
        [DataMember(Name = "operator", EmitDefaultValue = false)]
        public AdsAnalyticsFilterOperator? Operator { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="AdsAnalyticsMetricsFilter" /> class.
        /// </summary>
        /// <param name="field">field.</param>
        /// <param name="_operator">_operator.</param>
        /// <param name="values">List of values for filtering.</param>
        public AdsAnalyticsMetricsFilter(AdsAnalyticsFilterColumn? field = default(AdsAnalyticsFilterColumn?), AdsAnalyticsFilterOperator? _operator = default(AdsAnalyticsFilterOperator?), List<decimal> values = default(List<decimal>))
        {
            this.Field = field;
            this.Operator = _operator;
            this.Values = values;
        }

        /// <summary>
        /// List of values for filtering
        /// </summary>
        /// <value>List of values for filtering</value>
        [DataMember(Name = "values", EmitDefaultValue = false)]
        public List<decimal> Values { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class AdsAnalyticsMetricsFilter {\n");
            sb.Append("  Field: ").Append(Field).Append("\n");
            sb.Append("  Operator: ").Append(Operator).Append("\n");
            sb.Append("  Values: ").Append(Values).Append("\n");
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
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as AdsAnalyticsMetricsFilter);
        }

        /// <summary>
        /// Returns true if AdsAnalyticsMetricsFilter instances are equal
        /// </summary>
        /// <param name="input">Instance of AdsAnalyticsMetricsFilter to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AdsAnalyticsMetricsFilter input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.Field == input.Field ||
                    this.Field.Equals(input.Field)
                ) && 
                (
                    this.Operator == input.Operator ||
                    this.Operator.Equals(input.Operator)
                ) && 
                (
                    this.Values == input.Values ||
                    this.Values != null &&
                    input.Values != null &&
                    this.Values.SequenceEqual(input.Values)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                hashCode = (hashCode * 59) + this.Field.GetHashCode();
                hashCode = (hashCode * 59) + this.Operator.GetHashCode();
                if (this.Values != null)
                {
                    hashCode = (hashCode * 59) + this.Values.GetHashCode();
                }
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        public IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}