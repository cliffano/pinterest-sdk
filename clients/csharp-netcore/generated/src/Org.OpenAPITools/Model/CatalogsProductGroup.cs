/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
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
    /// catalog product group entity
    /// </summary>
    [DataContract(Name = "CatalogsProductGroup")]
    public partial class CatalogsProductGroup : IEquatable<CatalogsProductGroup>, IValidatableObject
    {

        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name = "type", EmitDefaultValue = false)]
        public CatalogsProductGroupType? Type { get; set; }

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name = "status", EmitDefaultValue = false)]
        public CatalogsProductGroupStatus? Status { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsProductGroup" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected CatalogsProductGroup() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsProductGroup" /> class.
        /// </summary>
        /// <param name="id">ID of the catalog product group. (required).</param>
        /// <param name="name">Name of catalog product group.</param>
        /// <param name="description">description.</param>
        /// <param name="filters">filters (required).</param>
        /// <param name="type">type.</param>
        /// <param name="status">status.</param>
        /// <param name="feedId">id of the catalogs feed belonging to this catalog product group.</param>
        /// <param name="createdAt">Unix timestamp in seconds of when catalog product group was created..</param>
        /// <param name="updatedAt">Unix timestamp in seconds of last time catalog product group was updated..</param>
        public CatalogsProductGroup(string id = default(string), string name = default(string), string description = default(string), CatalogsProductGroupFilters filters = default(CatalogsProductGroupFilters), CatalogsProductGroupType? type = default(CatalogsProductGroupType?), CatalogsProductGroupStatus? status = default(CatalogsProductGroupStatus?), string feedId = default(string), int createdAt = default(int), int updatedAt = default(int))
        {
            // to ensure "id" is required (not null)
            if (id == null) {
                throw new ArgumentNullException("id is a required property for CatalogsProductGroup and cannot be null");
            }
            this.Id = id;
            // to ensure "filters" is required (not null)
            if (filters == null) {
                throw new ArgumentNullException("filters is a required property for CatalogsProductGroup and cannot be null");
            }
            this.Filters = filters;
            this.Name = name;
            this.Description = description;
            this.Type = type;
            this.Status = status;
            this.FeedId = feedId;
            this.CreatedAt = createdAt;
            this.UpdatedAt = updatedAt;
        }

        /// <summary>
        /// ID of the catalog product group.
        /// </summary>
        /// <value>ID of the catalog product group.</value>
        [DataMember(Name = "id", IsRequired = true, EmitDefaultValue = false)]
        public string Id { get; set; }

        /// <summary>
        /// Name of catalog product group
        /// </summary>
        /// <value>Name of catalog product group</value>
        [DataMember(Name = "name", EmitDefaultValue = false)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets Description
        /// </summary>
        [DataMember(Name = "description", EmitDefaultValue = true)]
        public string Description { get; set; }

        /// <summary>
        /// Gets or Sets Filters
        /// </summary>
        [DataMember(Name = "filters", IsRequired = true, EmitDefaultValue = false)]
        public CatalogsProductGroupFilters Filters { get; set; }

        /// <summary>
        /// id of the catalogs feed belonging to this catalog product group
        /// </summary>
        /// <value>id of the catalogs feed belonging to this catalog product group</value>
        [DataMember(Name = "feed_id", EmitDefaultValue = false)]
        public string FeedId { get; set; }

        /// <summary>
        /// Unix timestamp in seconds of when catalog product group was created.
        /// </summary>
        /// <value>Unix timestamp in seconds of when catalog product group was created.</value>
        [DataMember(Name = "created_at", EmitDefaultValue = false)]
        public int CreatedAt { get; set; }

        /// <summary>
        /// Unix timestamp in seconds of last time catalog product group was updated.
        /// </summary>
        /// <value>Unix timestamp in seconds of last time catalog product group was updated.</value>
        [DataMember(Name = "updated_at", EmitDefaultValue = false)]
        public int UpdatedAt { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CatalogsProductGroup {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Filters: ").Append(Filters).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  FeedId: ").Append(FeedId).Append("\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("  UpdatedAt: ").Append(UpdatedAt).Append("\n");
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
            return this.Equals(input as CatalogsProductGroup);
        }

        /// <summary>
        /// Returns true if CatalogsProductGroup instances are equal
        /// </summary>
        /// <param name="input">Instance of CatalogsProductGroup to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsProductGroup input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.Name == input.Name ||
                    (this.Name != null &&
                    this.Name.Equals(input.Name))
                ) && 
                (
                    this.Description == input.Description ||
                    (this.Description != null &&
                    this.Description.Equals(input.Description))
                ) && 
                (
                    this.Filters == input.Filters ||
                    (this.Filters != null &&
                    this.Filters.Equals(input.Filters))
                ) && 
                (
                    this.Type == input.Type ||
                    this.Type.Equals(input.Type)
                ) && 
                (
                    this.Status == input.Status ||
                    this.Status.Equals(input.Status)
                ) && 
                (
                    this.FeedId == input.FeedId ||
                    (this.FeedId != null &&
                    this.FeedId.Equals(input.FeedId))
                ) && 
                (
                    this.CreatedAt == input.CreatedAt ||
                    this.CreatedAt.Equals(input.CreatedAt)
                ) && 
                (
                    this.UpdatedAt == input.UpdatedAt ||
                    this.UpdatedAt.Equals(input.UpdatedAt)
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
                if (this.Id != null)
                {
                    hashCode = (hashCode * 59) + this.Id.GetHashCode();
                }
                if (this.Name != null)
                {
                    hashCode = (hashCode * 59) + this.Name.GetHashCode();
                }
                if (this.Description != null)
                {
                    hashCode = (hashCode * 59) + this.Description.GetHashCode();
                }
                if (this.Filters != null)
                {
                    hashCode = (hashCode * 59) + this.Filters.GetHashCode();
                }
                hashCode = (hashCode * 59) + this.Type.GetHashCode();
                hashCode = (hashCode * 59) + this.Status.GetHashCode();
                if (this.FeedId != null)
                {
                    hashCode = (hashCode * 59) + this.FeedId.GetHashCode();
                }
                hashCode = (hashCode * 59) + this.CreatedAt.GetHashCode();
                hashCode = (hashCode * 59) + this.UpdatedAt.GetHashCode();
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
            // Id (string) pattern
            Regex regexId = new Regex(@"^\\d+$", RegexOptions.CultureInvariant);
            if (false == regexId.Match(this.Id).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Id, must match a pattern of " + regexId, new [] { "Id" });
            }

            // FeedId (string) pattern
            Regex regexFeedId = new Regex(@"^\\d+$", RegexOptions.CultureInvariant);
            if (false == regexFeedId.Match(this.FeedId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for FeedId, must match a pattern of " + regexFeedId, new [] { "FeedId" });
            }

            yield break;
        }
    }

}
