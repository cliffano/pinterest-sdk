/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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
    /// catalog product group entity
    /// </summary>
    [DataContract]
    public partial class CatalogsProductGroup : IEquatable<CatalogsProductGroup>
    {
        /// <summary>
        /// ID of the catalog product group.
        /// </summary>
        /// <value>ID of the catalog product group.</value>
        /// <example>443727193917</example>
        [Required]
        [RegularExpression("^\\d+$")]
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }

        /// <summary>
        /// Name of catalog product group
        /// </summary>
        /// <value>Name of catalog product group</value>
        /// <example>Most Popular</example>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets Description
        /// </summary>
        [DataMember(Name="description", EmitDefaultValue=true)]
        public string Description { get; set; }

        /// <summary>
        /// Gets or Sets Filters
        /// </summary>
        [Required]
        [DataMember(Name="filters", EmitDefaultValue=false)]
        public CatalogsProductGroupFilters Filters { get; set; }

        /// <summary>
        /// boolean indicator of whether the product group is being featured or not
        /// </summary>
        /// <value>boolean indicator of whether the product group is being featured or not</value>
        [DataMember(Name="is_featured", EmitDefaultValue=true)]
        public bool IsFeatured { get; set; }

        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="type", EmitDefaultValue=true)]
        public CatalogsProductGroupType Type { get; set; }

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name="status", EmitDefaultValue=true)]
        public CatalogsProductGroupStatus Status { get; set; }

        /// <summary>
        /// Unix timestamp in seconds of when catalog product group was created.
        /// </summary>
        /// <value>Unix timestamp in seconds of when catalog product group was created.</value>
        /// <example>1621350033000</example>
        [DataMember(Name="created_at", EmitDefaultValue=true)]
        public int CreatedAt { get; set; }

        /// <summary>
        /// Unix timestamp in seconds of last time catalog product group was updated.
        /// </summary>
        /// <value>Unix timestamp in seconds of last time catalog product group was updated.</value>
        /// <example>1622742155000</example>
        [DataMember(Name="updated_at", EmitDefaultValue=true)]
        public int UpdatedAt { get; set; }

        /// <summary>
        /// id of the catalogs feed belonging to this catalog product group
        /// </summary>
        /// <value>id of the catalogs feed belonging to this catalog product group</value>
        /// <example>2680059592705</example>
        [Required]
        [RegularExpression("^\\d+$")]
        [DataMember(Name="feed_id", EmitDefaultValue=false)]
        public string FeedId { get; set; }


        /// <summary>
        /// Gets or Sets CatalogType
        /// </summary>
        [TypeConverter(typeof(CustomEnumConverter<CatalogTypeEnum>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum CatalogTypeEnum
        {
            
            /// <summary>
            /// Enum RETAILEnum for RETAIL
            /// </summary>
            [EnumMember(Value = "RETAIL")]
            RETAILEnum = 1
        }

        /// <summary>
        /// Gets or Sets CatalogType
        /// </summary>
        [DataMember(Name="catalog_type", EmitDefaultValue=true)]
        public CatalogTypeEnum CatalogType { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
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
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
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
            return obj.GetType() == GetType() && Equals((CatalogsProductGroup)obj);
        }

        /// <summary>
        /// Returns true if CatalogsProductGroup instances are equal
        /// </summary>
        /// <param name="other">Instance of CatalogsProductGroup to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsProductGroup other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Id == other.Id ||
                    Id != null &&
                    Id.Equals(other.Id)
                ) && 
                (
                    Name == other.Name ||
                    Name != null &&
                    Name.Equals(other.Name)
                ) && 
                (
                    Description == other.Description ||
                    Description != null &&
                    Description.Equals(other.Description)
                ) && 
                (
                    Filters == other.Filters ||
                    Filters != null &&
                    Filters.Equals(other.Filters)
                ) && 
                (
                    IsFeatured == other.IsFeatured ||
                    
                    IsFeatured.Equals(other.IsFeatured)
                ) && 
                (
                    Type == other.Type ||
                    
                    Type.Equals(other.Type)
                ) && 
                (
                    Status == other.Status ||
                    
                    Status.Equals(other.Status)
                ) && 
                (
                    CreatedAt == other.CreatedAt ||
                    
                    CreatedAt.Equals(other.CreatedAt)
                ) && 
                (
                    UpdatedAt == other.UpdatedAt ||
                    
                    UpdatedAt.Equals(other.UpdatedAt)
                ) && 
                (
                    FeedId == other.FeedId ||
                    FeedId != null &&
                    FeedId.Equals(other.FeedId)
                ) && 
                (
                    CatalogType == other.CatalogType ||
                    
                    CatalogType.Equals(other.CatalogType)
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
                    if (Id != null)
                    hashCode = hashCode * 59 + Id.GetHashCode();
                    if (Name != null)
                    hashCode = hashCode * 59 + Name.GetHashCode();
                    if (Description != null)
                    hashCode = hashCode * 59 + Description.GetHashCode();
                    if (Filters != null)
                    hashCode = hashCode * 59 + Filters.GetHashCode();
                    
                    hashCode = hashCode * 59 + IsFeatured.GetHashCode();
                    
                    hashCode = hashCode * 59 + Type.GetHashCode();
                    
                    hashCode = hashCode * 59 + Status.GetHashCode();
                    
                    hashCode = hashCode * 59 + CreatedAt.GetHashCode();
                    
                    hashCode = hashCode * 59 + UpdatedAt.GetHashCode();
                    if (FeedId != null)
                    hashCode = hashCode * 59 + FeedId.GetHashCode();
                    
                    hashCode = hashCode * 59 + CatalogType.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CatalogsProductGroup left, CatalogsProductGroup right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CatalogsProductGroup left, CatalogsProductGroup right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
