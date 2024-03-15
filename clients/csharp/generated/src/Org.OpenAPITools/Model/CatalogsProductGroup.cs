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
    /// catalog product group entity
    /// </summary>
    [DataContract(Name = "CatalogsProductGroup")]
    public partial class CatalogsProductGroup : IValidatableObject
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
        /// Defines CatalogType
        /// </summary>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum CatalogTypeEnum
        {
            /// <summary>
            /// Enum RETAIL for value: RETAIL
            /// </summary>
            [EnumMember(Value = "RETAIL")]
            RETAIL = 1
        }


        /// <summary>
        /// Gets or Sets CatalogType
        /// </summary>
        [DataMember(Name = "catalog_type", EmitDefaultValue = false)]
        public CatalogTypeEnum? CatalogType { get; set; }
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
        /// <param name="isFeatured">boolean indicator of whether the product group is being featured or not.</param>
        /// <param name="type">type.</param>
        /// <param name="status">status.</param>
        /// <param name="createdAt">Unix timestamp in seconds of when catalog product group was created..</param>
        /// <param name="updatedAt">Unix timestamp in seconds of last time catalog product group was updated..</param>
        /// <param name="feedId">id of the catalogs feed belonging to this catalog product group (required).</param>
        /// <param name="catalogType">catalogType.</param>
        public CatalogsProductGroup(string id = default(string), string name = default(string), string description = default(string), CatalogsProductGroupFilters filters = default(CatalogsProductGroupFilters), bool isFeatured = default(bool), CatalogsProductGroupType? type = default(CatalogsProductGroupType?), CatalogsProductGroupStatus? status = default(CatalogsProductGroupStatus?), int createdAt = default(int), int updatedAt = default(int), string feedId = default(string), CatalogTypeEnum? catalogType = default(CatalogTypeEnum?))
        {
            // to ensure "id" is required (not null)
            if (id == null)
            {
                throw new ArgumentNullException("id is a required property for CatalogsProductGroup and cannot be null");
            }
            this.Id = id;
            // to ensure "filters" is required (not null)
            if (filters == null)
            {
                throw new ArgumentNullException("filters is a required property for CatalogsProductGroup and cannot be null");
            }
            this.Filters = filters;
            // to ensure "feedId" is required (not null)
            if (feedId == null)
            {
                throw new ArgumentNullException("feedId is a required property for CatalogsProductGroup and cannot be null");
            }
            this.FeedId = feedId;
            this.Name = name;
            this.Description = description;
            this.IsFeatured = isFeatured;
            this.Type = type;
            this.Status = status;
            this.CreatedAt = createdAt;
            this.UpdatedAt = updatedAt;
            this.CatalogType = catalogType;
        }

        /// <summary>
        /// ID of the catalog product group.
        /// </summary>
        /// <value>ID of the catalog product group.</value>
        /// <example>443727193917</example>
        [DataMember(Name = "id", IsRequired = true, EmitDefaultValue = true)]
        public string Id { get; set; }

        /// <summary>
        /// Name of catalog product group
        /// </summary>
        /// <value>Name of catalog product group</value>
        /// <example>Most Popular</example>
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
        [DataMember(Name = "filters", IsRequired = true, EmitDefaultValue = true)]
        public CatalogsProductGroupFilters Filters { get; set; }

        /// <summary>
        /// boolean indicator of whether the product group is being featured or not
        /// </summary>
        /// <value>boolean indicator of whether the product group is being featured or not</value>
        [DataMember(Name = "is_featured", EmitDefaultValue = true)]
        public bool IsFeatured { get; set; }

        /// <summary>
        /// Unix timestamp in seconds of when catalog product group was created.
        /// </summary>
        /// <value>Unix timestamp in seconds of when catalog product group was created.</value>
        /// <example>1621350033000</example>
        [DataMember(Name = "created_at", EmitDefaultValue = false)]
        public int CreatedAt { get; set; }

        /// <summary>
        /// Unix timestamp in seconds of last time catalog product group was updated.
        /// </summary>
        /// <value>Unix timestamp in seconds of last time catalog product group was updated.</value>
        /// <example>1622742155000</example>
        [DataMember(Name = "updated_at", EmitDefaultValue = false)]
        public int UpdatedAt { get; set; }

        /// <summary>
        /// id of the catalogs feed belonging to this catalog product group
        /// </summary>
        /// <value>id of the catalogs feed belonging to this catalog product group</value>
        /// <example>2680059592705</example>
        [DataMember(Name = "feed_id", IsRequired = true, EmitDefaultValue = true)]
        public string FeedId { get; set; }

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
            sb.Append("  IsFeatured: ").Append(IsFeatured).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("  UpdatedAt: ").Append(UpdatedAt).Append("\n");
            sb.Append("  FeedId: ").Append(FeedId).Append("\n");
            sb.Append("  CatalogType: ").Append(CatalogType).Append("\n");
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
            if (this.Id != null) {
                // Id (string) pattern
                Regex regexId = new Regex(@"^\d+$", RegexOptions.CultureInvariant);
                if (!regexId.Match(this.Id).Success)
                {
                    yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Id, must match a pattern of " + regexId, new [] { "Id" });
                }
            }

            if (this.FeedId != null) {
                // FeedId (string) pattern
                Regex regexFeedId = new Regex(@"^\d+$", RegexOptions.CultureInvariant);
                if (!regexFeedId.Match(this.FeedId).Success)
                {
                    yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for FeedId, must match a pattern of " + regexFeedId, new [] { "FeedId" });
                }
            }

            yield break;
        }
    }

}
