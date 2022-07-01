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
    /// A successful OAuth access token response for the refresh token flow.
    /// </summary>
    [DataContract(Name = "OauthAccessTokenResponseRefresh")]
    [JsonConverter(typeof(JsonSubtypes), "ResponseType")]
    [JsonSubtypes.KnownSubType(typeof(OauthAccessTokenResponseCode), "authorization_code")]
    [JsonSubtypes.KnownSubType(typeof(OauthAccessTokenResponseRefresh), "refresh_token")]
    public partial class OauthAccessTokenResponseRefresh : OauthAccessTokenResponse, IEquatable<OauthAccessTokenResponseRefresh>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OauthAccessTokenResponseRefresh" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected OauthAccessTokenResponseRefresh() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="OauthAccessTokenResponseRefresh" /> class.
        /// </summary>
        /// <param name="responseType">responseType (default to &quot;OauthAccessTokenResponseRefresh&quot;).</param>
        /// <param name="accessToken">accessToken (required).</param>
        /// <param name="tokenType">tokenType (required) (default to &quot;bearer&quot;).</param>
        /// <param name="expiresIn">expiresIn (required).</param>
        /// <param name="scope">scope (required).</param>
        public OauthAccessTokenResponseRefresh(ResponseTypeEnum? responseType = "OauthAccessTokenResponseRefresh", string accessToken = default(string), string tokenType = "bearer", int expiresIn = default(int), string scope = default(string)) : base(responseType, accessToken, tokenType, expiresIn, scope)
        {
        }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OauthAccessTokenResponseRefresh {\n");
            sb.Append("  ").Append(base.ToString().Replace("\n", "\n  ")).Append("\n");
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
            return this.Equals(input as OauthAccessTokenResponseRefresh);
        }

        /// <summary>
        /// Returns true if OauthAccessTokenResponseRefresh instances are equal
        /// </summary>
        /// <param name="input">Instance of OauthAccessTokenResponseRefresh to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OauthAccessTokenResponseRefresh input)
        {
            if (input == null)
                return false;

            return base.Equals(input);
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
