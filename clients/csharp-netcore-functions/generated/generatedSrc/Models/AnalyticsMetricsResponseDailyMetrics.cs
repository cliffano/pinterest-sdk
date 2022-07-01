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

namespace Org.OpenAPITools.Models
{
    /// <summary>
    /// AnalyticsMetricsResponseDailyMetrics
    /// </summary>
    [DataContract(Name = "AnalyticsMetricsResponse_daily_metrics")]
    public partial class AnalyticsMetricsResponseDailyMetrics : IEquatable<AnalyticsMetricsResponseDailyMetrics>, IValidatableObject
    {
        /// <summary>
        /// Metrics availablity, e.g., \&quot;READY\&quot;.
        /// </summary>
        /// <value>Metrics availablity, e.g., \&quot;READY\&quot;.</value>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum DataStatusEnum
        {
            /// <summary>
            /// Enum PROCESSING for value: PROCESSING
            /// </summary>
            [EnumMember(Value = "PROCESSING")]
            PROCESSING = 1,

            /// <summary>
            /// Enum READY for value: READY
            /// </summary>
            [EnumMember(Value = "READY")]
            READY = 2,

            /// <summary>
            /// Enum ESTIMATE for value: ESTIMATE
            /// </summary>
            [EnumMember(Value = "ESTIMATE")]
            ESTIMATE = 3,

            /// <summary>
            /// Enum BEFOREBUSINESSCREATED for value: BEFORE_BUSINESS_CREATED
            /// </summary>
            [EnumMember(Value = "BEFORE_BUSINESS_CREATED")]
            BEFOREBUSINESSCREATED = 4,

            /// <summary>
            /// Enum BEFOREDATARETENTIONPERIOD for value: BEFORE_DATA_RETENTION_PERIOD
            /// </summary>
            [EnumMember(Value = "BEFORE_DATA_RETENTION_PERIOD")]
            BEFOREDATARETENTIONPERIOD = 5,

            /// <summary>
            /// Enum BEFOREPINDATARETENTIONPERIOD for value: BEFORE_PIN_DATA_RETENTION_PERIOD
            /// </summary>
            [EnumMember(Value = "BEFORE_PIN_DATA_RETENTION_PERIOD")]
            BEFOREPINDATARETENTIONPERIOD = 6,

            /// <summary>
            /// Enum BEFOREMETRICSTARTDATE for value: BEFORE_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_METRIC_START_DATE")]
            BEFOREMETRICSTARTDATE = 7,

            /// <summary>
            /// Enum BEFORECOREMETRICSTARTDATE for value: BEFORE_CORE_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_CORE_METRIC_START_DATE")]
            BEFORECOREMETRICSTARTDATE = 8,

            /// <summary>
            /// Enum BEFOREPINFORMATMETRICSTARTDATE for value: BEFORE_PIN_FORMAT_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_PIN_FORMAT_METRIC_START_DATE")]
            BEFOREPINFORMATMETRICSTARTDATE = 9,

            /// <summary>
            /// Enum BEFOREAUDIENCEMETRICSTARTDATE for value: BEFORE_AUDIENCE_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_AUDIENCE_METRIC_START_DATE")]
            BEFOREAUDIENCEMETRICSTARTDATE = 10,

            /// <summary>
            /// Enum BEFOREAUDIENCEMONTHLYMETRICSTARTDATE for value: BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE")]
            BEFOREAUDIENCEMONTHLYMETRICSTARTDATE = 11,

            /// <summary>
            /// Enum BEFOREVIDEOMETRICSTARTDATE for value: BEFORE_VIDEO_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_VIDEO_METRIC_START_DATE")]
            BEFOREVIDEOMETRICSTARTDATE = 12,

            /// <summary>
            /// Enum BEFORECONVERSIONMETRICSTARTDATE for value: BEFORE_CONVERSION_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_CONVERSION_METRIC_START_DATE")]
            BEFORECONVERSIONMETRICSTARTDATE = 13,

            /// <summary>
            /// Enum PURCHASERSMETRICSMALLERTHANTHRESHOLD for value: PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD
            /// </summary>
            [EnumMember(Value = "PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD")]
            PURCHASERSMETRICSMALLERTHANTHRESHOLD = 14,

            /// <summary>
            /// Enum INBADTAGDATE for value: IN_BAD_TAG_DATE
            /// </summary>
            [EnumMember(Value = "IN_BAD_TAG_DATE")]
            INBADTAGDATE = 15,

            /// <summary>
            /// Enum BEFOREPUBLISHEDMETRICSTARTDATE for value: BEFORE_PUBLISHED_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_PUBLISHED_METRIC_START_DATE")]
            BEFOREPUBLISHEDMETRICSTARTDATE = 16,

            /// <summary>
            /// Enum BEFOREASSISTMETRICSTARTDATE for value: BEFORE_ASSIST_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_ASSIST_METRIC_START_DATE")]
            BEFOREASSISTMETRICSTARTDATE = 17,

            /// <summary>
            /// Enum BEFOREPINCREATED for value: BEFORE_PIN_CREATED
            /// </summary>
            [EnumMember(Value = "BEFORE_PIN_CREATED")]
            BEFOREPINCREATED = 18,

            /// <summary>
            /// Enum BEFOREACCOUNTCLAIMED for value: BEFORE_ACCOUNT_CLAIMED
            /// </summary>
            [EnumMember(Value = "BEFORE_ACCOUNT_CLAIMED")]
            BEFOREACCOUNTCLAIMED = 19,

            /// <summary>
            /// Enum BEFOREDEMOGRAPHICFILTERSSTARTDATE for value: BEFORE_DEMOGRAPHIC_FILTERS_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_DEMOGRAPHIC_FILTERS_START_DATE")]
            BEFOREDEMOGRAPHICFILTERSSTARTDATE = 20,

            /// <summary>
            /// Enum AUDIENCESEGMENTSMALLERTHANTHRESHOLD for value: AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD
            /// </summary>
            [EnumMember(Value = "AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD")]
            AUDIENCESEGMENTSMALLERTHANTHRESHOLD = 21,

            /// <summary>
            /// Enum AUDIENCETOTALSMALLERTHANTHRESHOLD for value: AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD
            /// </summary>
            [EnumMember(Value = "AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD")]
            AUDIENCETOTALSMALLERTHANTHRESHOLD = 22,

            /// <summary>
            /// Enum BEFOREPRODUCTGROUPFILTERSTARTDATE for value: BEFORE_PRODUCT_GROUP_FILTER_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_PRODUCT_GROUP_FILTER_START_DATE")]
            BEFOREPRODUCTGROUPFILTERSTARTDATE = 23

        }


        /// <summary>
        /// Metrics availablity, e.g., \&quot;READY\&quot;.
        /// </summary>
        /// <value>Metrics availablity, e.g., \&quot;READY\&quot;.</value>
        [DataMember(Name = "data_status", EmitDefaultValue = false)]
        public DataStatusEnum? DataStatus { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="AnalyticsMetricsResponseDailyMetrics" /> class.
        /// </summary>
        /// <param name="dataStatus">Metrics availablity, e.g., \&quot;READY\&quot;..</param>
        /// <param name="date">Metrics date (UTC): YYYY-MM-DD..</param>
        /// <param name="metrics">The metric name and daily value for each requested metric.</param>
        public AnalyticsMetricsResponseDailyMetrics(DataStatusEnum? dataStatus = default(DataStatusEnum?), string date = default(string), Dictionary<string, decimal> metrics = default(Dictionary<string, decimal>))
        {
            this.DataStatus = dataStatus;
            this.Date = date;
            this.Metrics = metrics;
        }

        /// <summary>
        /// Metrics date (UTC): YYYY-MM-DD.
        /// </summary>
        /// <value>Metrics date (UTC): YYYY-MM-DD.</value>
        [DataMember(Name = "date", EmitDefaultValue = false)]
        public string Date { get; set; }

        /// <summary>
        /// The metric name and daily value for each requested metric
        /// </summary>
        /// <value>The metric name and daily value for each requested metric</value>
        [DataMember(Name = "metrics", EmitDefaultValue = false)]
        public Dictionary<string, decimal> Metrics { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class AnalyticsMetricsResponseDailyMetrics {\n");
            sb.Append("  DataStatus: ").Append(DataStatus).Append("\n");
            sb.Append("  Date: ").Append(Date).Append("\n");
            sb.Append("  Metrics: ").Append(Metrics).Append("\n");
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
            return this.Equals(input as AnalyticsMetricsResponseDailyMetrics);
        }

        /// <summary>
        /// Returns true if AnalyticsMetricsResponseDailyMetrics instances are equal
        /// </summary>
        /// <param name="input">Instance of AnalyticsMetricsResponseDailyMetrics to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AnalyticsMetricsResponseDailyMetrics input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.DataStatus == input.DataStatus ||
                    this.DataStatus.Equals(input.DataStatus)
                ) && 
                (
                    this.Date == input.Date ||
                    (this.Date != null &&
                    this.Date.Equals(input.Date))
                ) && 
                (
                    this.Metrics == input.Metrics ||
                    this.Metrics != null &&
                    input.Metrics != null &&
                    this.Metrics.SequenceEqual(input.Metrics)
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
                hashCode = hashCode * 59 + this.DataStatus.GetHashCode();
                if (this.Date != null)
                    hashCode = hashCode * 59 + this.Date.GetHashCode();
                if (this.Metrics != null)
                    hashCode = hashCode * 59 + this.Metrics.GetHashCode();
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
