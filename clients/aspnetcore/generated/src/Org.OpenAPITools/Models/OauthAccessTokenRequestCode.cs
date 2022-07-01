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
    /// A request to exchange an authorization code for an access token.
    /// </summary>
    [DataContract]
    public partial class OauthAccessTokenRequestCode : OauthAccessTokenRequest, IEquatable<OauthAccessTokenRequestCode>
    {
        /// <summary>
        /// Gets or Sets Code
        /// </summary>
        [Required]
        [DataMember(Name="code", EmitDefaultValue=false)]
        public string Code { get; set; }

        /// <summary>
        /// Gets or Sets RedirectUri
        /// </summary>
        [Required]
        [DataMember(Name="redirect_uri", EmitDefaultValue=false)]
        public string RedirectUri { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OauthAccessTokenRequestCode {\n");
            sb.Append("  Code: ").Append(Code).Append("\n");
            sb.Append("  RedirectUri: ").Append(RedirectUri).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public new string ToJson()
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
            return obj.GetType() == GetType() && Equals((OauthAccessTokenRequestCode)obj);
        }

        /// <summary>
        /// Returns true if OauthAccessTokenRequestCode instances are equal
        /// </summary>
        /// <param name="other">Instance of OauthAccessTokenRequestCode to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OauthAccessTokenRequestCode other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Code == other.Code ||
                    Code != null &&
                    Code.Equals(other.Code)
                ) && 
                (
                    RedirectUri == other.RedirectUri ||
                    RedirectUri != null &&
                    RedirectUri.Equals(other.RedirectUri)
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
                    if (Code != null)
                    hashCode = hashCode * 59 + Code.GetHashCode();
                    if (RedirectUri != null)
                    hashCode = hashCode * 59 + RedirectUri.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(OauthAccessTokenRequestCode left, OauthAccessTokenRequestCode right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(OauthAccessTokenRequestCode left, OauthAccessTokenRequestCode right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
