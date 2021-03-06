/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
    public partial class AnalyticsMetricsResponseDailyMetrics : IEquatable<AnalyticsMetricsResponseDailyMetrics>
    {

        /// <summary>
        /// Metrics availablity, e.g., \"READY\".
        /// </summary>
        /// <value>Metrics availablity, e.g., \"READY\".</value>
        [TypeConverter(typeof(CustomEnumConverter<DataStatusEnum>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum DataStatusEnum
        {
            
            /// <summary>
            /// Enum PROCESSINGEnum for PROCESSING
            /// </summary>
            [EnumMember(Value = "PROCESSING")]
            PROCESSINGEnum = 1,
            
            /// <summary>
            /// Enum READYEnum for READY
            /// </summary>
            [EnumMember(Value = "READY")]
            READYEnum = 2,
            
            /// <summary>
            /// Enum ESTIMATEEnum for ESTIMATE
            /// </summary>
            [EnumMember(Value = "ESTIMATE")]
            ESTIMATEEnum = 3,
            
            /// <summary>
            /// Enum BEFOREBUSINESSCREATEDEnum for BEFORE_BUSINESS_CREATED
            /// </summary>
            [EnumMember(Value = "BEFORE_BUSINESS_CREATED")]
            BEFOREBUSINESSCREATEDEnum = 4,
            
            /// <summary>
            /// Enum BEFOREDATARETENTIONPERIODEnum for BEFORE_DATA_RETENTION_PERIOD
            /// </summary>
            [EnumMember(Value = "BEFORE_DATA_RETENTION_PERIOD")]
            BEFOREDATARETENTIONPERIODEnum = 5,
            
            /// <summary>
            /// Enum BEFOREPINDATARETENTIONPERIODEnum for BEFORE_PIN_DATA_RETENTION_PERIOD
            /// </summary>
            [EnumMember(Value = "BEFORE_PIN_DATA_RETENTION_PERIOD")]
            BEFOREPINDATARETENTIONPERIODEnum = 6,
            
            /// <summary>
            /// Enum BEFOREMETRICSTARTDATEEnum for BEFORE_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_METRIC_START_DATE")]
            BEFOREMETRICSTARTDATEEnum = 7,
            
            /// <summary>
            /// Enum BEFORECOREMETRICSTARTDATEEnum for BEFORE_CORE_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_CORE_METRIC_START_DATE")]
            BEFORECOREMETRICSTARTDATEEnum = 8,
            
            /// <summary>
            /// Enum BEFOREPINFORMATMETRICSTARTDATEEnum for BEFORE_PIN_FORMAT_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_PIN_FORMAT_METRIC_START_DATE")]
            BEFOREPINFORMATMETRICSTARTDATEEnum = 9,
            
            /// <summary>
            /// Enum BEFOREAUDIENCEMETRICSTARTDATEEnum for BEFORE_AUDIENCE_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_AUDIENCE_METRIC_START_DATE")]
            BEFOREAUDIENCEMETRICSTARTDATEEnum = 10,
            
            /// <summary>
            /// Enum BEFOREAUDIENCEMONTHLYMETRICSTARTDATEEnum for BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE")]
            BEFOREAUDIENCEMONTHLYMETRICSTARTDATEEnum = 11,
            
            /// <summary>
            /// Enum BEFOREVIDEOMETRICSTARTDATEEnum for BEFORE_VIDEO_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_VIDEO_METRIC_START_DATE")]
            BEFOREVIDEOMETRICSTARTDATEEnum = 12,
            
            /// <summary>
            /// Enum BEFORECONVERSIONMETRICSTARTDATEEnum for BEFORE_CONVERSION_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_CONVERSION_METRIC_START_DATE")]
            BEFORECONVERSIONMETRICSTARTDATEEnum = 13,
            
            /// <summary>
            /// Enum PURCHASERSMETRICSMALLERTHANTHRESHOLDEnum for PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD
            /// </summary>
            [EnumMember(Value = "PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD")]
            PURCHASERSMETRICSMALLERTHANTHRESHOLDEnum = 14,
            
            /// <summary>
            /// Enum INBADTAGDATEEnum for IN_BAD_TAG_DATE
            /// </summary>
            [EnumMember(Value = "IN_BAD_TAG_DATE")]
            INBADTAGDATEEnum = 15,
            
            /// <summary>
            /// Enum BEFOREPUBLISHEDMETRICSTARTDATEEnum for BEFORE_PUBLISHED_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_PUBLISHED_METRIC_START_DATE")]
            BEFOREPUBLISHEDMETRICSTARTDATEEnum = 16,
            
            /// <summary>
            /// Enum BEFOREASSISTMETRICSTARTDATEEnum for BEFORE_ASSIST_METRIC_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_ASSIST_METRIC_START_DATE")]
            BEFOREASSISTMETRICSTARTDATEEnum = 17,
            
            /// <summary>
            /// Enum BEFOREPINCREATEDEnum for BEFORE_PIN_CREATED
            /// </summary>
            [EnumMember(Value = "BEFORE_PIN_CREATED")]
            BEFOREPINCREATEDEnum = 18,
            
            /// <summary>
            /// Enum BEFOREACCOUNTCLAIMEDEnum for BEFORE_ACCOUNT_CLAIMED
            /// </summary>
            [EnumMember(Value = "BEFORE_ACCOUNT_CLAIMED")]
            BEFOREACCOUNTCLAIMEDEnum = 19,
            
            /// <summary>
            /// Enum BEFOREDEMOGRAPHICFILTERSSTARTDATEEnum for BEFORE_DEMOGRAPHIC_FILTERS_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_DEMOGRAPHIC_FILTERS_START_DATE")]
            BEFOREDEMOGRAPHICFILTERSSTARTDATEEnum = 20,
            
            /// <summary>
            /// Enum AUDIENCESEGMENTSMALLERTHANTHRESHOLDEnum for AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD
            /// </summary>
            [EnumMember(Value = "AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD")]
            AUDIENCESEGMENTSMALLERTHANTHRESHOLDEnum = 21,
            
            /// <summary>
            /// Enum AUDIENCETOTALSMALLERTHANTHRESHOLDEnum for AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD
            /// </summary>
            [EnumMember(Value = "AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD")]
            AUDIENCETOTALSMALLERTHANTHRESHOLDEnum = 22,
            
            /// <summary>
            /// Enum BEFOREPRODUCTGROUPFILTERSTARTDATEEnum for BEFORE_PRODUCT_GROUP_FILTER_START_DATE
            /// </summary>
            [EnumMember(Value = "BEFORE_PRODUCT_GROUP_FILTER_START_DATE")]
            BEFOREPRODUCTGROUPFILTERSTARTDATEEnum = 23
        }

        /// <summary>
        /// Metrics availablity, e.g., \&quot;READY\&quot;.
        /// </summary>
        /// <value>Metrics availablity, e.g., \&quot;READY\&quot;.</value>
        [DataMember(Name="data_status", EmitDefaultValue=false)]
        public DataStatusEnum DataStatus { get; set; }

        /// <summary>
        /// Metrics date (UTC): YYYY-MM-DD.
        /// </summary>
        /// <value>Metrics date (UTC): YYYY-MM-DD.</value>
        [DataMember(Name="date", EmitDefaultValue=false)]
        public string Date { get; set; }

        /// <summary>
        /// The metric name and daily value for each requested metric
        /// </summary>
        /// <value>The metric name and daily value for each requested metric</value>
        [DataMember(Name="metrics", EmitDefaultValue=false)]
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
            return obj.GetType() == GetType() && Equals((AnalyticsMetricsResponseDailyMetrics)obj);
        }

        /// <summary>
        /// Returns true if AnalyticsMetricsResponseDailyMetrics instances are equal
        /// </summary>
        /// <param name="other">Instance of AnalyticsMetricsResponseDailyMetrics to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AnalyticsMetricsResponseDailyMetrics other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    DataStatus == other.DataStatus ||
                    
                    DataStatus.Equals(other.DataStatus)
                ) && 
                (
                    Date == other.Date ||
                    Date != null &&
                    Date.Equals(other.Date)
                ) && 
                (
                    Metrics == other.Metrics ||
                    Metrics != null &&
                    other.Metrics != null &&
                    Metrics.SequenceEqual(other.Metrics)
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
                    
                    hashCode = hashCode * 59 + DataStatus.GetHashCode();
                    if (Date != null)
                    hashCode = hashCode * 59 + Date.GetHashCode();
                    if (Metrics != null)
                    hashCode = hashCode * 59 + Metrics.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(AnalyticsMetricsResponseDailyMetrics left, AnalyticsMetricsResponseDailyMetrics right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(AnalyticsMetricsResponseDailyMetrics left, AnalyticsMetricsResponseDailyMetrics right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
