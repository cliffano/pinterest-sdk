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
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// A successful OAuth access token response for the authorization code flow.
    /// </summary>
    [DataContract]
    public partial class OauthAccessTokenResponseCode : OauthAccessTokenResponse,  IEquatable<OauthAccessTokenResponseCode>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OauthAccessTokenResponseCode" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected OauthAccessTokenResponseCode() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="OauthAccessTokenResponseCode" /> class.
        /// </summary>
        /// <param name="refreshToken">refreshToken (required).</param>
        /// <param name="refreshTokenExpiresIn">refreshTokenExpiresIn (required).</param>
        public OauthAccessTokenResponseCode(string refreshToken = default(string), int refreshTokenExpiresIn = default(int), ResponseTypeEnum? responseType = "OauthAccessTokenResponseCode", string accessToken = default(string), string tokenType = "bearer", int expiresIn = default(int), string scope = default(string)) : base(responseType, accessToken, tokenType, expiresIn, scope)
        {
            // to ensure "refreshToken" is required (not null)
            if (refreshToken == null)
            {
                throw new InvalidDataException("refreshToken is a required property for OauthAccessTokenResponseCode and cannot be null");
            }
            else
            {
                this.RefreshToken = refreshToken;
            }

            // to ensure "refreshTokenExpiresIn" is required (not null)
            if (refreshTokenExpiresIn == null)
            {
                throw new InvalidDataException("refreshTokenExpiresIn is a required property for OauthAccessTokenResponseCode and cannot be null");
            }
            else
            {
                this.RefreshTokenExpiresIn = refreshTokenExpiresIn;
            }

        }

        /// <summary>
        /// Gets or Sets RefreshToken
        /// </summary>
        [DataMember(Name="refresh_token", EmitDefaultValue=true)]
        public string RefreshToken { get; set; }

        /// <summary>
        /// Gets or Sets RefreshTokenExpiresIn
        /// </summary>
        [DataMember(Name="refresh_token_expires_in", EmitDefaultValue=true)]
        public int RefreshTokenExpiresIn { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OauthAccessTokenResponseCode {\n");
            sb.Append("  ").Append(base.ToString().Replace("\n", "\n  ")).Append("\n");
            sb.Append("  RefreshToken: ").Append(RefreshToken).Append("\n");
            sb.Append("  RefreshTokenExpiresIn: ").Append(RefreshTokenExpiresIn).Append("\n");
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
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as OauthAccessTokenResponseCode);
        }

        /// <summary>
        /// Returns true if OauthAccessTokenResponseCode instances are equal
        /// </summary>
        /// <param name="input">Instance of OauthAccessTokenResponseCode to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OauthAccessTokenResponseCode input)
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
                    this.RefreshTokenExpiresIn == input.RefreshTokenExpiresIn ||
                    (this.RefreshTokenExpiresIn != null &&
                    this.RefreshTokenExpiresIn.Equals(input.RefreshTokenExpiresIn))
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
                if (this.RefreshTokenExpiresIn != null)
                    hashCode = hashCode * 59 + this.RefreshTokenExpiresIn.GetHashCode();
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
