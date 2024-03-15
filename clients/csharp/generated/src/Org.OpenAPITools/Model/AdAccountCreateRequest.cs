/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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
    /// AdAccountCreateRequest
    /// </summary>
    [DataContract(Name = "AdAccountCreateRequest")]
    public partial class AdAccountCreateRequest : IValidatableObject
    {

        /// <summary>
        /// Gets or Sets Country
        /// </summary>
        [DataMember(Name = "country", EmitDefaultValue = false)]
        public Country? Country { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="AdAccountCreateRequest" /> class.
        /// </summary>
        /// <param name="country">country.</param>
        /// <param name="name">Ad Account name..</param>
        /// <param name="ownerUserId">Advertiser&#39;s owning user ID..</param>
        public AdAccountCreateRequest(Country? country = default(Country?), string name = default(string), string ownerUserId = default(string))
        {
            this.Country = country;
            this.Name = name;
            this.OwnerUserId = ownerUserId;
        }

        /// <summary>
        /// Ad Account name.
        /// </summary>
        /// <value>Ad Account name.</value>
        /// <example>ACME Tools</example>
        [DataMember(Name = "name", EmitDefaultValue = false)]
        public string Name { get; set; }

        /// <summary>
        /// Advertiser&#39;s owning user ID.
        /// </summary>
        /// <value>Advertiser&#39;s owning user ID.</value>
        /// <example>383791336903426391</example>
        [DataMember(Name = "owner_user_id", EmitDefaultValue = false)]
        public string OwnerUserId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class AdAccountCreateRequest {\n");
            sb.Append("  Country: ").Append(Country).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  OwnerUserId: ").Append(OwnerUserId).Append("\n");
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
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            // Name (string) maxLength
            if (this.Name != null && this.Name.Length > 256)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Name, length must be less than 256.", new [] { "Name" });
            }

            if (this.OwnerUserId != null) {
                // OwnerUserId (string) pattern
                Regex regexOwnerUserId = new Regex(@"^\d+$", RegexOptions.CultureInvariant);
                if (!regexOwnerUserId.Match(this.OwnerUserId).Success)
                {
                    yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for OwnerUserId, must match a pattern of " + regexOwnerUserId, new [] { "OwnerUserId" });
                }
            }

            yield break;
        }
    }

}
