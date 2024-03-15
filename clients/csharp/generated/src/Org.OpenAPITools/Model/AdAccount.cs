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
    /// AdAccount
    /// </summary>
    [DataContract(Name = "AdAccount")]
    public partial class AdAccount : IValidatableObject
    {

        /// <summary>
        /// Gets or Sets Country
        /// </summary>
        [DataMember(Name = "country", EmitDefaultValue = false)]
        public Country? Country { get; set; }

        /// <summary>
        /// Gets or Sets Currency
        /// </summary>
        [DataMember(Name = "currency", EmitDefaultValue = false)]
        public Currency? Currency { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="AdAccount" /> class.
        /// </summary>
        /// <param name="id">id.</param>
        /// <param name="name">name.</param>
        /// <param name="owner">owner.</param>
        /// <param name="country">country.</param>
        /// <param name="currency">currency.</param>
        /// <param name="permissions">permissions.</param>
        /// <param name="createdTime">Creation time. Unix timestamp in seconds..</param>
        /// <param name="updatedTime">Last update time. Unix timestamp in seconds..</param>
        public AdAccount(string id = default(string), string name = default(string), AdAccountOwner owner = default(AdAccountOwner), Country? country = default(Country?), Currency? currency = default(Currency?), List<BusinessAccessRole> permissions = default(List<BusinessAccessRole>), int? createdTime = default(int?), int? updatedTime = default(int?))
        {
            this.Id = id;
            this.Name = name;
            this.Owner = owner;
            this.Country = country;
            this.Currency = currency;
            this.Permissions = permissions;
            this.CreatedTime = createdTime;
            this.UpdatedTime = updatedTime;
        }

        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name = "id", EmitDefaultValue = false)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name = "name", EmitDefaultValue = false)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets Owner
        /// </summary>
        [DataMember(Name = "owner", EmitDefaultValue = false)]
        public AdAccountOwner Owner { get; set; }

        /// <summary>
        /// Gets or Sets Permissions
        /// </summary>
        [DataMember(Name = "permissions", EmitDefaultValue = false)]
        public List<BusinessAccessRole> Permissions { get; set; }

        /// <summary>
        /// Creation time. Unix timestamp in seconds.
        /// </summary>
        /// <value>Creation time. Unix timestamp in seconds.</value>
        /// <example>1451431341</example>
        [DataMember(Name = "created_time", EmitDefaultValue = true)]
        public int? CreatedTime { get; set; }

        /// <summary>
        /// Last update time. Unix timestamp in seconds.
        /// </summary>
        /// <value>Last update time. Unix timestamp in seconds.</value>
        /// <example>1451431341</example>
        [DataMember(Name = "updated_time", EmitDefaultValue = true)]
        public int? UpdatedTime { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class AdAccount {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Owner: ").Append(Owner).Append("\n");
            sb.Append("  Country: ").Append(Country).Append("\n");
            sb.Append("  Currency: ").Append(Currency).Append("\n");
            sb.Append("  Permissions: ").Append(Permissions).Append("\n");
            sb.Append("  CreatedTime: ").Append(CreatedTime).Append("\n");
            sb.Append("  UpdatedTime: ").Append(UpdatedTime).Append("\n");
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
            yield break;
        }
    }

}
