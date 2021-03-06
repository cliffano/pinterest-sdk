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
    /// Use this if your feed file requires username and password.
    /// </summary>
    [DataContract(Name = "CatalogsFeedCredentials")]
    public partial class CatalogsFeedCredentials : IEquatable<CatalogsFeedCredentials>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeedCredentials" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CatalogsFeedCredentials() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeedCredentials" /> class.
        /// </summary>
        /// <param name="password">The required password for downloading a feed. (required).</param>
        /// <param name="username">The required username for downloading a feed. (required).</param>
        public CatalogsFeedCredentials(string password = default(string), string username = default(string))
        {
            // to ensure "password" is required (not null)
            this.Password = password ?? throw new ArgumentNullException("password is a required property for CatalogsFeedCredentials and cannot be null");
            // to ensure "username" is required (not null)
            this.Username = username ?? throw new ArgumentNullException("username is a required property for CatalogsFeedCredentials and cannot be null");
        }

        /// <summary>
        /// The required password for downloading a feed.
        /// </summary>
        /// <value>The required password for downloading a feed.</value>
        [DataMember(Name = "password", IsRequired = true, EmitDefaultValue = false)]
        public string Password { get; set; }

        /// <summary>
        /// The required username for downloading a feed.
        /// </summary>
        /// <value>The required username for downloading a feed.</value>
        [DataMember(Name = "username", IsRequired = true, EmitDefaultValue = false)]
        public string Username { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsFeedCredentials {\n");
            sb.Append("  Password: ").Append(Password).Append("\n");
            sb.Append("  Username: ").Append(Username).Append("\n");
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
            return this.Equals(input as CatalogsFeedCredentials);
        }

        /// <summary>
        /// Returns true if CatalogsFeedCredentials instances are equal
        /// </summary>
        /// <param name="input">Instance of CatalogsFeedCredentials to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsFeedCredentials input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Password == input.Password ||
                    (this.Password != null &&
                    this.Password.Equals(input.Password))
                ) && 
                (
                    this.Username == input.Username ||
                    (this.Username != null &&
                    this.Username.Equals(input.Username))
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
                if (this.Password != null)
                    hashCode = hashCode * 59 + this.Password.GetHashCode();
                if (this.Username != null)
                    hashCode = hashCode * 59 + this.Username.GetHashCode();
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
