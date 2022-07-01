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
    /// The list of parameter key/value pairs you will need to send with your POST request to upload your media file.
    /// </summary>
    [DataContract]
    public partial class MediaUploadAllOfUploadParameters : IEquatable<MediaUploadAllOfUploadParameters>
    {
        /// <summary>
        /// Gets or Sets XAmzDate
        /// </summary>
        [DataMember(Name="x-amz-date", EmitDefaultValue=false)]
        public string XAmzDate { get; set; }

        /// <summary>
        /// Gets or Sets XAmzSignature
        /// </summary>
        [DataMember(Name="x-amz-signature", EmitDefaultValue=false)]
        public string XAmzSignature { get; set; }

        /// <summary>
        /// Gets or Sets XAmzSecurityToken
        /// </summary>
        [DataMember(Name="x-amz-security-token", EmitDefaultValue=false)]
        public string XAmzSecurityToken { get; set; }

        /// <summary>
        /// Gets or Sets XAmzAlgorithm
        /// </summary>
        [DataMember(Name="x-amz-algorithm", EmitDefaultValue=false)]
        public string XAmzAlgorithm { get; set; }

        /// <summary>
        /// Gets or Sets Key
        /// </summary>
        [DataMember(Name="key", EmitDefaultValue=false)]
        public string Key { get; set; }

        /// <summary>
        /// Gets or Sets Policy
        /// </summary>
        [DataMember(Name="policy", EmitDefaultValue=false)]
        public string Policy { get; set; }

        /// <summary>
        /// Gets or Sets XAmzCredential
        /// </summary>
        [DataMember(Name="x-amz-credential", EmitDefaultValue=false)]
        public string XAmzCredential { get; set; }

        /// <summary>
        /// Gets or Sets ContentType
        /// </summary>
        [DataMember(Name="Content-Type", EmitDefaultValue=false)]
        public string ContentType { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MediaUploadAllOfUploadParameters {\n");
            sb.Append("  XAmzDate: ").Append(XAmzDate).Append("\n");
            sb.Append("  XAmzSignature: ").Append(XAmzSignature).Append("\n");
            sb.Append("  XAmzSecurityToken: ").Append(XAmzSecurityToken).Append("\n");
            sb.Append("  XAmzAlgorithm: ").Append(XAmzAlgorithm).Append("\n");
            sb.Append("  Key: ").Append(Key).Append("\n");
            sb.Append("  Policy: ").Append(Policy).Append("\n");
            sb.Append("  XAmzCredential: ").Append(XAmzCredential).Append("\n");
            sb.Append("  ContentType: ").Append(ContentType).Append("\n");
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
            return obj.GetType() == GetType() && Equals((MediaUploadAllOfUploadParameters)obj);
        }

        /// <summary>
        /// Returns true if MediaUploadAllOfUploadParameters instances are equal
        /// </summary>
        /// <param name="other">Instance of MediaUploadAllOfUploadParameters to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(MediaUploadAllOfUploadParameters other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    XAmzDate == other.XAmzDate ||
                    XAmzDate != null &&
                    XAmzDate.Equals(other.XAmzDate)
                ) && 
                (
                    XAmzSignature == other.XAmzSignature ||
                    XAmzSignature != null &&
                    XAmzSignature.Equals(other.XAmzSignature)
                ) && 
                (
                    XAmzSecurityToken == other.XAmzSecurityToken ||
                    XAmzSecurityToken != null &&
                    XAmzSecurityToken.Equals(other.XAmzSecurityToken)
                ) && 
                (
                    XAmzAlgorithm == other.XAmzAlgorithm ||
                    XAmzAlgorithm != null &&
                    XAmzAlgorithm.Equals(other.XAmzAlgorithm)
                ) && 
                (
                    Key == other.Key ||
                    Key != null &&
                    Key.Equals(other.Key)
                ) && 
                (
                    Policy == other.Policy ||
                    Policy != null &&
                    Policy.Equals(other.Policy)
                ) && 
                (
                    XAmzCredential == other.XAmzCredential ||
                    XAmzCredential != null &&
                    XAmzCredential.Equals(other.XAmzCredential)
                ) && 
                (
                    ContentType == other.ContentType ||
                    ContentType != null &&
                    ContentType.Equals(other.ContentType)
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
                    if (XAmzDate != null)
                    hashCode = hashCode * 59 + XAmzDate.GetHashCode();
                    if (XAmzSignature != null)
                    hashCode = hashCode * 59 + XAmzSignature.GetHashCode();
                    if (XAmzSecurityToken != null)
                    hashCode = hashCode * 59 + XAmzSecurityToken.GetHashCode();
                    if (XAmzAlgorithm != null)
                    hashCode = hashCode * 59 + XAmzAlgorithm.GetHashCode();
                    if (Key != null)
                    hashCode = hashCode * 59 + Key.GetHashCode();
                    if (Policy != null)
                    hashCode = hashCode * 59 + Policy.GetHashCode();
                    if (XAmzCredential != null)
                    hashCode = hashCode * 59 + XAmzCredential.GetHashCode();
                    if (ContentType != null)
                    hashCode = hashCode * 59 + ContentType.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(MediaUploadAllOfUploadParameters left, MediaUploadAllOfUploadParameters right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(MediaUploadAllOfUploadParameters left, MediaUploadAllOfUploadParameters right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
