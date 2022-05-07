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
    public partial class AdsAnalyticsCreateAsyncResponse : IEquatable<AdsAnalyticsCreateAsyncResponse>
    {
        /// <summary>
        /// Gets or Sets ReportStatus
        /// </summary>
        [DataMember(Name="report_status", EmitDefaultValue=false)]
        public string ReportStatus { get; set; }

        /// <summary>
        /// Gets or Sets Token
        /// </summary>
        [DataMember(Name="token", EmitDefaultValue=false)]
        public string Token { get; set; }

        /// <summary>
        /// Gets or Sets Message
        /// </summary>
        [DataMember(Name="message", EmitDefaultValue=true)]
        public string Message { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class AdsAnalyticsCreateAsyncResponse {\n");
            sb.Append("  ReportStatus: ").Append(ReportStatus).Append("\n");
            sb.Append("  Token: ").Append(Token).Append("\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
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
            return obj.GetType() == GetType() && Equals((AdsAnalyticsCreateAsyncResponse)obj);
        }

        /// <summary>
        /// Returns true if AdsAnalyticsCreateAsyncResponse instances are equal
        /// </summary>
        /// <param name="other">Instance of AdsAnalyticsCreateAsyncResponse to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AdsAnalyticsCreateAsyncResponse other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    ReportStatus == other.ReportStatus ||
                    ReportStatus != null &&
                    ReportStatus.Equals(other.ReportStatus)
                ) && 
                (
                    Token == other.Token ||
                    Token != null &&
                    Token.Equals(other.Token)
                ) && 
                (
                    Message == other.Message ||
                    Message != null &&
                    Message.Equals(other.Message)
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
                    if (ReportStatus != null)
                    hashCode = hashCode * 59 + ReportStatus.GetHashCode();
                    if (Token != null)
                    hashCode = hashCode * 59 + Token.GetHashCode();
                    if (Message != null)
                    hashCode = hashCode * 59 + Message.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(AdsAnalyticsCreateAsyncResponse left, AdsAnalyticsCreateAsyncResponse right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(AdsAnalyticsCreateAsyncResponse left, AdsAnalyticsCreateAsyncResponse right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
