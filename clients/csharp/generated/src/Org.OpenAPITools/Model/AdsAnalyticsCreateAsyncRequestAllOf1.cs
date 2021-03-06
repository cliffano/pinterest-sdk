/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// AdsAnalyticsCreateAsyncRequestAllOf1
    /// </summary>
    [DataContract]
    public partial class AdsAnalyticsCreateAsyncRequestAllOf1 :  IEquatable<AdsAnalyticsCreateAsyncRequestAllOf1>, IValidatableObject
    {
        /// <summary>
        /// Level of the report
        /// </summary>
        /// <value>Level of the report</value>
        [DataMember(Name="level", EmitDefaultValue=true)]
        public MetricsReportingLevel Level { get; set; }
        /// <summary>
        /// Specification for formatting report data
        /// </summary>
        /// <value>Specification for formatting report data</value>
        [DataMember(Name="report_format", EmitDefaultValue=false)]
        public DataOutputFormat? ReportFormat { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="AdsAnalyticsCreateAsyncRequestAllOf1" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected AdsAnalyticsCreateAsyncRequestAllOf1() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="AdsAnalyticsCreateAsyncRequestAllOf1" /> class.
        /// </summary>
        /// <param name="columns">Metric and entity columns (required).</param>
        /// <param name="level">Level of the report (required).</param>
        /// <param name="reportFormat">Specification for formatting report data (default to &quot;JSON&quot;).</param>
        public AdsAnalyticsCreateAsyncRequestAllOf1(List<ReportingColumnAsync> columns = default(List<ReportingColumnAsync>), MetricsReportingLevel level = default(MetricsReportingLevel), DataOutputFormat? reportFormat = "JSON")
        {
            // to ensure "columns" is required (not null)
            if (columns == null)
            {
                throw new InvalidDataException("columns is a required property for AdsAnalyticsCreateAsyncRequestAllOf1 and cannot be null");
            }
            else
            {
                this.Columns = columns;
            }

            // to ensure "level" is required (not null)
            if (level == null)
            {
                throw new InvalidDataException("level is a required property for AdsAnalyticsCreateAsyncRequestAllOf1 and cannot be null");
            }
            else
            {
                this.Level = level;
            }

            // use default value if no "reportFormat" provided
            if (reportFormat == null)
            {
                this.ReportFormat = "JSON";
            }
            else
            {
                this.ReportFormat = reportFormat;
            }
        }

        /// <summary>
        /// Metric and entity columns
        /// </summary>
        /// <value>Metric and entity columns</value>
        [DataMember(Name="columns", EmitDefaultValue=true)]
        public List<ReportingColumnAsync> Columns { get; set; }



        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class AdsAnalyticsCreateAsyncRequestAllOf1 {\n");
            sb.Append("  Columns: ").Append(Columns).Append("\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("  ReportFormat: ").Append(ReportFormat).Append("\n");
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
            return this.Equals(input as AdsAnalyticsCreateAsyncRequestAllOf1);
        }

        /// <summary>
        /// Returns true if AdsAnalyticsCreateAsyncRequestAllOf1 instances are equal
        /// </summary>
        /// <param name="input">Instance of AdsAnalyticsCreateAsyncRequestAllOf1 to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AdsAnalyticsCreateAsyncRequestAllOf1 input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Columns == input.Columns ||
                    this.Columns != null &&
                    input.Columns != null &&
                    this.Columns.SequenceEqual(input.Columns)
                ) && 
                (
                    this.Level == input.Level ||
                    (this.Level != null &&
                    this.Level.Equals(input.Level))
                ) && 
                (
                    this.ReportFormat == input.ReportFormat ||
                    (this.ReportFormat != null &&
                    this.ReportFormat.Equals(input.ReportFormat))
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
                if (this.Columns != null)
                    hashCode = hashCode * 59 + this.Columns.GetHashCode();
                if (this.Level != null)
                    hashCode = hashCode * 59 + this.Level.GetHashCode();
                if (this.ReportFormat != null)
                    hashCode = hashCode * 59 + this.ReportFormat.GetHashCode();
                return hashCode;
            }
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
