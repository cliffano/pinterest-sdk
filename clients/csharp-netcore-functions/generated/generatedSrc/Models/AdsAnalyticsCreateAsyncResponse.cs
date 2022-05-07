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

namespace Org.OpenAPITools.Models
{
    /// <summary>
    /// AdsAnalyticsCreateAsyncResponse
    /// </summary>
    [DataContract(Name = "AdsAnalyticsCreateAsyncResponse")]
    public partial class AdsAnalyticsCreateAsyncResponse : IEquatable<AdsAnalyticsCreateAsyncResponse>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="AdsAnalyticsCreateAsyncResponse" /> class.
        /// </summary>
        /// <param name="reportStatus">reportStatus.</param>
        /// <param name="token">token.</param>
        /// <param name="message">message.</param>
        public AdsAnalyticsCreateAsyncResponse(string reportStatus = default(string), string token = default(string), string message = default(string))
        {
            this.ReportStatus = reportStatus;
            this.Token = token;
            this.Message = message;
        }

        /// <summary>
        /// Gets or Sets ReportStatus
        /// </summary>
        [DataMember(Name = "report_status", EmitDefaultValue = false)]
        public string ReportStatus { get; set; }

        /// <summary>
        /// Gets or Sets Token
        /// </summary>
        [DataMember(Name = "token", EmitDefaultValue = false)]
        public string Token { get; set; }

        /// <summary>
        /// Gets or Sets Message
        /// </summary>
        [DataMember(Name = "message", EmitDefaultValue = true)]
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
            return this.Equals(input as AdsAnalyticsCreateAsyncResponse);
        }

        /// <summary>
        /// Returns true if AdsAnalyticsCreateAsyncResponse instances are equal
        /// </summary>
        /// <param name="input">Instance of AdsAnalyticsCreateAsyncResponse to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AdsAnalyticsCreateAsyncResponse input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.ReportStatus == input.ReportStatus ||
                    (this.ReportStatus != null &&
                    this.ReportStatus.Equals(input.ReportStatus))
                ) && 
                (
                    this.Token == input.Token ||
                    (this.Token != null &&
                    this.Token.Equals(input.Token))
                ) && 
                (
                    this.Message == input.Message ||
                    (this.Message != null &&
                    this.Message.Equals(input.Message))
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
                if (this.ReportStatus != null)
                    hashCode = hashCode * 59 + this.ReportStatus.GetHashCode();
                if (this.Token != null)
                    hashCode = hashCode * 59 + this.Token.GetHashCode();
                if (this.Message != null)
                    hashCode = hashCode * 59 + this.Message.GetHashCode();
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
