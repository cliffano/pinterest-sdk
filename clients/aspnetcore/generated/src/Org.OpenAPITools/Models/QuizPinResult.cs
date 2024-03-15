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
    /// The result, and link out, based on the user’s choice.
    /// </summary>
    [DataContract]
    public partial class QuizPinResult : IEquatable<QuizPinResult>
    {
        /// <summary>
        /// Gets or Sets OrganicPinId
        /// </summary>
        [DataMember(Name="organic_pin_id", EmitDefaultValue=false)]
        public string OrganicPinId { get; set; }

        /// <summary>
        /// Gets or Sets AndroidDeepLink
        /// </summary>
        [DataMember(Name="android_deep_link", EmitDefaultValue=false)]
        public string AndroidDeepLink { get; set; }

        /// <summary>
        /// Gets or Sets IosDeepLink
        /// </summary>
        [DataMember(Name="ios_deep_link", EmitDefaultValue=false)]
        public string IosDeepLink { get; set; }

        /// <summary>
        /// Gets or Sets DestinationUrl
        /// </summary>
        [DataMember(Name="destination_url", EmitDefaultValue=false)]
        public string DestinationUrl { get; set; }

        /// <summary>
        /// Gets or Sets ResultId
        /// </summary>
        [DataMember(Name="result_id", EmitDefaultValue=true)]
        public decimal ResultId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class QuizPinResult {\n");
            sb.Append("  OrganicPinId: ").Append(OrganicPinId).Append("\n");
            sb.Append("  AndroidDeepLink: ").Append(AndroidDeepLink).Append("\n");
            sb.Append("  IosDeepLink: ").Append(IosDeepLink).Append("\n");
            sb.Append("  DestinationUrl: ").Append(DestinationUrl).Append("\n");
            sb.Append("  ResultId: ").Append(ResultId).Append("\n");
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
            return obj.GetType() == GetType() && Equals((QuizPinResult)obj);
        }

        /// <summary>
        /// Returns true if QuizPinResult instances are equal
        /// </summary>
        /// <param name="other">Instance of QuizPinResult to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(QuizPinResult other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    OrganicPinId == other.OrganicPinId ||
                    OrganicPinId != null &&
                    OrganicPinId.Equals(other.OrganicPinId)
                ) && 
                (
                    AndroidDeepLink == other.AndroidDeepLink ||
                    AndroidDeepLink != null &&
                    AndroidDeepLink.Equals(other.AndroidDeepLink)
                ) && 
                (
                    IosDeepLink == other.IosDeepLink ||
                    IosDeepLink != null &&
                    IosDeepLink.Equals(other.IosDeepLink)
                ) && 
                (
                    DestinationUrl == other.DestinationUrl ||
                    DestinationUrl != null &&
                    DestinationUrl.Equals(other.DestinationUrl)
                ) && 
                (
                    ResultId == other.ResultId ||
                    
                    ResultId.Equals(other.ResultId)
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
                    if (OrganicPinId != null)
                    hashCode = hashCode * 59 + OrganicPinId.GetHashCode();
                    if (AndroidDeepLink != null)
                    hashCode = hashCode * 59 + AndroidDeepLink.GetHashCode();
                    if (IosDeepLink != null)
                    hashCode = hashCode * 59 + IosDeepLink.GetHashCode();
                    if (DestinationUrl != null)
                    hashCode = hashCode * 59 + DestinationUrl.GetHashCode();
                    
                    hashCode = hashCode * 59 + ResultId.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(QuizPinResult left, QuizPinResult right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(QuizPinResult left, QuizPinResult right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
