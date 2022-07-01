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

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// Account
    /// </summary>
    [DataContract(Name = "Account")]
    public partial class Account : IEquatable<Account>, IValidatableObject
    {
        /// <summary>
        /// Type of account
        /// </summary>
        /// <value>Type of account</value>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum AccountTypeEnum
        {
            /// <summary>
            /// Enum PINNER for value: PINNER
            /// </summary>
            [EnumMember(Value = "PINNER")]
            PINNER = 1,

            /// <summary>
            /// Enum BUSINESS for value: BUSINESS
            /// </summary>
            [EnumMember(Value = "BUSINESS")]
            BUSINESS = 2

        }


        /// <summary>
        /// Type of account
        /// </summary>
        /// <value>Type of account</value>
        [DataMember(Name = "account_type", EmitDefaultValue = false)]
        public AccountTypeEnum? AccountType { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="Account" /> class.
        /// </summary>
        /// <param name="accountType">Type of account.</param>
        /// <param name="profileImage">profileImage.</param>
        /// <param name="websiteUrl">websiteUrl.</param>
        /// <param name="username">username.</param>
        public Account(AccountTypeEnum? accountType = default(AccountTypeEnum?), string profileImage = default(string), string websiteUrl = default(string), string username = default(string))
        {
            this.AccountType = accountType;
            this.ProfileImage = profileImage;
            this.WebsiteUrl = websiteUrl;
            this.Username = username;
        }

        /// <summary>
        /// Gets or Sets ProfileImage
        /// </summary>
        [DataMember(Name = "profile_image", EmitDefaultValue = false)]
        public string ProfileImage { get; set; }

        /// <summary>
        /// Gets or Sets WebsiteUrl
        /// </summary>
        [DataMember(Name = "website_url", EmitDefaultValue = false)]
        public string WebsiteUrl { get; set; }

        /// <summary>
        /// Gets or Sets Username
        /// </summary>
        [DataMember(Name = "username", EmitDefaultValue = false)]
        public string Username { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class Account {\n");
            sb.Append("  AccountType: ").Append(AccountType).Append("\n");
            sb.Append("  ProfileImage: ").Append(ProfileImage).Append("\n");
            sb.Append("  WebsiteUrl: ").Append(WebsiteUrl).Append("\n");
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
            return this.Equals(input as Account);
        }

        /// <summary>
        /// Returns true if Account instances are equal
        /// </summary>
        /// <param name="input">Instance of Account to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Account input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.AccountType == input.AccountType ||
                    this.AccountType.Equals(input.AccountType)
                ) && 
                (
                    this.ProfileImage == input.ProfileImage ||
                    (this.ProfileImage != null &&
                    this.ProfileImage.Equals(input.ProfileImage))
                ) && 
                (
                    this.WebsiteUrl == input.WebsiteUrl ||
                    (this.WebsiteUrl != null &&
                    this.WebsiteUrl.Equals(input.WebsiteUrl))
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
                hashCode = (hashCode * 59) + this.AccountType.GetHashCode();
                if (this.ProfileImage != null)
                {
                    hashCode = (hashCode * 59) + this.ProfileImage.GetHashCode();
                }
                if (this.WebsiteUrl != null)
                {
                    hashCode = (hashCode * 59) + this.WebsiteUrl.GetHashCode();
                }
                if (this.Username != null)
                {
                    hashCode = (hashCode * 59) + this.Username.GetHashCode();
                }
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        public IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
