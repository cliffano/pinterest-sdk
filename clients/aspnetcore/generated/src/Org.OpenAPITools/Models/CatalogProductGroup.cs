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
    /// non-promoted catalog product group entity
    /// </summary>
    [DataContract]
    public partial class CatalogProductGroup : IEquatable<CatalogProductGroup>
    {
        /// <summary>
        /// ID of the catalog product group.
        /// </summary>
        /// <value>ID of the catalog product group.</value>
        /// <example>2680059592705</example>
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }

        /// <summary>
        /// Merchant ID pertaining to the owner of the catalog product group.
        /// </summary>
        /// <value>Merchant ID pertaining to the owner of the catalog product group.</value>
        /// <example>2680059592705</example>
        [RegularExpression("^\\d+$")]
        [DataMember(Name="merchant_id", EmitDefaultValue=false)]
        public string MerchantId { get; set; }

        /// <summary>
        /// Name of catalog product group
        /// </summary>
        /// <value>Name of catalog product group</value>
        /// <example>Most Popular</example>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }

        /// <summary>
        /// Object holding a list of filters
        /// </summary>
        /// <value>Object holding a list of filters</value>
        /// <example>{&quot;1&quot;:[&quot;123chars_title&quot;]}</example>
        [DataMember(Name="filters", EmitDefaultValue=false)]
        public Object Filters { get; set; }

        /// <summary>
        /// Object holding a list of filters
        /// </summary>
        /// <value>Object holding a list of filters</value>
        /// <example>{&quot;1&quot;:[&quot;123chars_title&quot;]}</example>
        [DataMember(Name="filter_v2", EmitDefaultValue=false)]
        public Object FilterV2 { get; set; }

        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public Board Type { get; set; }

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name="status", EmitDefaultValue=true)]
        public EntityStatus Status { get; set; }

        /// <summary>
        /// id of the feed profile belonging to this catalog product group
        /// </summary>
        /// <value>id of the feed profile belonging to this catalog product group</value>
        [RegularExpression("^\\d+$")]
        [DataMember(Name="feed_profile_id", EmitDefaultValue=false)]
        public string FeedProfileId { get; set; }

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
        [DataMember(Name="last_update", EmitDefaultValue=true)]
        public int LastUpdate { get; set; }

        /// <summary>
        /// Amount of products in the catalog product group
        /// </summary>
        /// <value>Amount of products in the catalog product group</value>
        /// <example>6</example>
        [DataMember(Name="product_count", EmitDefaultValue=true)]
        public int ProductCount { get; set; }

        /// <summary>
        /// index of the featured position of the catalog product group
        /// </summary>
        /// <value>index of the featured position of the catalog product group</value>
        /// <example>2</example>
        [DataMember(Name="featured_position", EmitDefaultValue=true)]
        public int FeaturedPosition { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogProductGroup {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  MerchantId: ").Append(MerchantId).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Filters: ").Append(Filters).Append("\n");
            sb.Append("  FilterV2: ").Append(FilterV2).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  FeedProfileId: ").Append(FeedProfileId).Append("\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("  LastUpdate: ").Append(LastUpdate).Append("\n");
            sb.Append("  ProductCount: ").Append(ProductCount).Append("\n");
            sb.Append("  FeaturedPosition: ").Append(FeaturedPosition).Append("\n");
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
            return obj.GetType() == GetType() && Equals((CatalogProductGroup)obj);
        }

        /// <summary>
        /// Returns true if CatalogProductGroup instances are equal
        /// </summary>
        /// <param name="other">Instance of CatalogProductGroup to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogProductGroup other)
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
                    MerchantId == other.MerchantId ||
                    MerchantId != null &&
                    MerchantId.Equals(other.MerchantId)
                ) && 
                (
                    Name == other.Name ||
                    Name != null &&
                    Name.Equals(other.Name)
                ) && 
                (
                    Filters == other.Filters ||
                    Filters != null &&
                    Filters.Equals(other.Filters)
                ) && 
                (
                    FilterV2 == other.FilterV2 ||
                    FilterV2 != null &&
                    FilterV2.Equals(other.FilterV2)
                ) && 
                (
                    Type == other.Type ||
                    Type != null &&
                    Type.Equals(other.Type)
                ) && 
                (
                    Status == other.Status ||
                    
                    Status.Equals(other.Status)
                ) && 
                (
                    FeedProfileId == other.FeedProfileId ||
                    FeedProfileId != null &&
                    FeedProfileId.Equals(other.FeedProfileId)
                ) && 
                (
                    CreatedAt == other.CreatedAt ||
                    
                    CreatedAt.Equals(other.CreatedAt)
                ) && 
                (
                    LastUpdate == other.LastUpdate ||
                    
                    LastUpdate.Equals(other.LastUpdate)
                ) && 
                (
                    ProductCount == other.ProductCount ||
                    
                    ProductCount.Equals(other.ProductCount)
                ) && 
                (
                    FeaturedPosition == other.FeaturedPosition ||
                    
                    FeaturedPosition.Equals(other.FeaturedPosition)
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
                    if (MerchantId != null)
                    hashCode = hashCode * 59 + MerchantId.GetHashCode();
                    if (Name != null)
                    hashCode = hashCode * 59 + Name.GetHashCode();
                    if (Filters != null)
                    hashCode = hashCode * 59 + Filters.GetHashCode();
                    if (FilterV2 != null)
                    hashCode = hashCode * 59 + FilterV2.GetHashCode();
                    if (Type != null)
                    hashCode = hashCode * 59 + Type.GetHashCode();
                    
                    hashCode = hashCode * 59 + Status.GetHashCode();
                    if (FeedProfileId != null)
                    hashCode = hashCode * 59 + FeedProfileId.GetHashCode();
                    
                    hashCode = hashCode * 59 + CreatedAt.GetHashCode();
                    
                    hashCode = hashCode * 59 + LastUpdate.GetHashCode();
                    
                    hashCode = hashCode * 59 + ProductCount.GetHashCode();
                    
                    hashCode = hashCode * 59 + FeaturedPosition.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CatalogProductGroup left, CatalogProductGroup right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CatalogProductGroup left, CatalogProductGroup right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
