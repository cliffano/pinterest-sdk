/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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
    /// Array with metrics, status, and pin id for the requested metric
    /// </summary>
    [DataContract]
    public partial class TopVideoPinsAnalyticsResponsePinsInner : IEquatable<TopVideoPinsAnalyticsResponsePinsInner>
    {
        /// <summary>
        /// The metric name and daily value for each requested metric
        /// </summary>
        /// <value>The metric name and daily value for each requested metric</value>
        /// <example>{&quot;IMPRESSION&quot;:7,&quot;QUARTILE_95_PERCENT_VIEW&quot;:2,&quot;SAVE&quot;:1,&quot;VIDEO_10S_VIEW&quot;:5,&quot;VIDEO_AVG_WATCH_TIME&quot;:86989,&quot;VIDEO_MRC_VIEW&quot;:2,&quot;VIDEO_START&quot;:2,&quot;VIDEO_V50_WATCH_TIME&quot;:173979,&quot;OUTBOUND_CLICK&quot;:2}</example>
        [DataMember(Name="metrics", EmitDefaultValue=false)]
        public Dictionary<string, decimal> Metrics { get; set; }

        /// <summary>
        /// Gets or Sets DataStatus
        /// </summary>
        [DataMember(Name="data_status", EmitDefaultValue=false)]
        public Dictionary<string, DataStatus> DataStatus { get; set; }

        /// <summary>
        /// The pin id
        /// </summary>
        /// <value>The pin id</value>
        /// <example>642396334344813594</example>
        [DataMember(Name="pin_id", EmitDefaultValue=false)]
        public string PinId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class TopVideoPinsAnalyticsResponsePinsInner {\n");
            sb.Append("  Metrics: ").Append(Metrics).Append("\n");
            sb.Append("  DataStatus: ").Append(DataStatus).Append("\n");
            sb.Append("  PinId: ").Append(PinId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
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
            return obj.GetType() == GetType() && Equals((TopVideoPinsAnalyticsResponsePinsInner)obj);
        }

        /// <summary>
        /// Returns true if TopVideoPinsAnalyticsResponsePinsInner instances are equal
        /// </summary>
        /// <param name="other">Instance of TopVideoPinsAnalyticsResponsePinsInner to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(TopVideoPinsAnalyticsResponsePinsInner other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Metrics == other.Metrics ||
                    Metrics != null &&
                    other.Metrics != null &&
                    Metrics.SequenceEqual(other.Metrics)
                ) && 
                (
                    DataStatus == other.DataStatus ||
                    DataStatus != null &&
                    other.DataStatus != null &&
                    DataStatus.SequenceEqual(other.DataStatus)
                ) && 
                (
                    PinId == other.PinId ||
                    PinId != null &&
                    PinId.Equals(other.PinId)
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
                    if (Metrics != null)
                    hashCode = hashCode * 59 + Metrics.GetHashCode();
                    if (DataStatus != null)
                    hashCode = hashCode * 59 + DataStatus.GetHashCode();
                    if (PinId != null)
                    hashCode = hashCode * 59 + PinId.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(TopVideoPinsAnalyticsResponsePinsInner left, TopVideoPinsAnalyticsResponsePinsInner right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(TopVideoPinsAnalyticsResponsePinsInner left, TopVideoPinsAnalyticsResponsePinsInner right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
