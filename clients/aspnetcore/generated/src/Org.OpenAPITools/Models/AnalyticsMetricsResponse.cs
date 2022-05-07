/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Org.OpenAPITools.Converters;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class AnalyticsMetricsResponse : IEquatable<AnalyticsMetricsResponse>
    {
        /// <summary>
        /// Array with the requested daily metric records
        /// </summary>
        /// <value>Array with the requested daily metric records</value>
        [DataMember(Name="daily_metrics", EmitDefaultValue=false)]
        public List<AnalyticsMetricsResponseDailyMetrics> DailyMetrics { get; set; }

        /// <summary>
        /// The metric name and value over the requested period for each requested metric
        /// </summary>
        /// <value>The metric name and value over the requested period for each requested metric</value>
        [DataMember(Name="summary_metrics", EmitDefaultValue=false)]
        public Dictionary<string, decimal> SummaryMetrics { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class AnalyticsMetricsResponse {\n");
            sb.Append("  DailyMetrics: ").Append(DailyMetrics).Append("\n");
            sb.Append("  SummaryMetrics: ").Append(SummaryMetrics).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((AnalyticsMetricsResponse)obj);
        }

        /// <summary>
        /// Returns true if AnalyticsMetricsResponse instances are equal
        /// </summary>
        /// <param name="other">Instance of AnalyticsMetricsResponse to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AnalyticsMetricsResponse other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    DailyMetrics == other.DailyMetrics ||
                    DailyMetrics != null &&
                    other.DailyMetrics != null &&
                    DailyMetrics.SequenceEqual(other.DailyMetrics)
                ) && 
                (
                    SummaryMetrics == other.SummaryMetrics ||
                    SummaryMetrics != null &&
                    other.SummaryMetrics != null &&
                    SummaryMetrics.SequenceEqual(other.SummaryMetrics)
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
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (DailyMetrics != null)
                    hashCode = hashCode * 59 + DailyMetrics.GetHashCode();
                    if (SummaryMetrics != null)
                    hashCode = hashCode * 59 + SummaryMetrics.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(AnalyticsMetricsResponse left, AnalyticsMetricsResponse right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(AnalyticsMetricsResponse left, AnalyticsMetricsResponse right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
