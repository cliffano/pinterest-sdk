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
using JsonSubTypes;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Models
{
    /// <summary>
    /// A request to exchange a refresh token for a new access token.
    /// </summary>
    [DataContract(Name = "OauthAccessTokenRequestRefresh")]
    [JsonConverter(typeof(JsonSubtypes), "GrantType")]
    [JsonSubtypes.KnownSubType(typeof(OauthAccessTokenRequestCode), "authorization_code")]
    [JsonSubtypes.KnownSubType(typeof(OauthAccessTokenRequestRefresh), "refresh_token")]
    public partial class OauthAccessTokenRequestRefresh : OauthAccessTokenRequest, IEquatable<OauthAccessTokenRequestRefresh>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OauthAccessTokenRequestRefresh" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected OauthAccessTokenRequestRefresh() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="OauthAccessTokenRequestRefresh" /> class.
        /// </summary>
        /// <param name="refreshToken">refreshToken (required).</param>
        /// <param name="scope">scope.</param>
        /// <param name="grantType">grantType (required) (default to &quot;OauthAccessTokenRequestRefresh&quot;).</param>
        public OauthAccessTokenRequestRefresh(string refreshToken = default(string), string scope = default(string), GrantTypeEnum grantType = "OauthAccessTokenRequestRefresh") : base(grantType)
        {
            // to ensure "refreshToken" is required (not null)
            this.RefreshToken = refreshToken ?? throw new ArgumentNullException("refreshToken is a required property for OauthAccessTokenRequestRefresh and cannot be null");
            this.Scope = scope;
        }

        /// <summary>
        /// Gets or Sets RefreshToken
        /// </summary>
        [DataMember(Name = "refresh_token", IsRequired = true, EmitDefaultValue = false)]
        public string RefreshToken { get; set; }

        /// <summary>
        /// Gets or Sets Scope
        /// </summary>
        [DataMember(Name = "scope", EmitDefaultValue = false)]
        public string Scope { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OauthAccessTokenRequestRefresh {\n");
            sb.Append("  ").Append(base.ToString().Replace("\n", "\n  ")).Append("\n");
            sb.Append("  RefreshToken: ").Append(RefreshToken).Append("\n");
            sb.Append("  Scope: ").Append(Scope).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public override string ToJson()
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
            return this.Equals(input as OauthAccessTokenRequestRefresh);
        }

        /// <summary>
        /// Returns true if OauthAccessTokenRequestRefresh instances are equal
        /// </summary>
        /// <param name="input">Instance of OauthAccessTokenRequestRefresh to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OauthAccessTokenRequestRefresh input)
        {
            if (input == null)
                return false;

            return base.Equals(input) && 
                (
                    this.RefreshToken == input.RefreshToken ||
                    (this.RefreshToken != null &&
                    this.RefreshToken.Equals(input.RefreshToken))
                ) && base.Equals(input) && 
                (
                    this.Scope == input.Scope ||
                    (this.Scope != null &&
                    this.Scope.Equals(input.Scope))
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
                int hashCode = base.GetHashCode();
                if (this.RefreshToken != null)
                    hashCode = hashCode * 59 + this.RefreshToken.GetHashCode();
                if (this.Scope != null)
                    hashCode = hashCode * 59 + this.Scope.GetHashCode();
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
            return this.BaseValidate(validationContext);
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        protected IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> BaseValidate(ValidationContext validationContext)
        {
            foreach(var x in BaseValidate(validationContext)) yield return x;
            yield break;
        }
    }

}
