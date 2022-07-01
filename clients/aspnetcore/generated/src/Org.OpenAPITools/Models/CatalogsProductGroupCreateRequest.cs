/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
    /// Request object for creating a product group.
    /// </summary>
    [DataContract]
    public partial class CatalogsProductGroupCreateRequest : IEquatable<CatalogsProductGroupCreateRequest>
    {
        /// <summary>
        /// Catalog Feed id pertaining to the catalog product group.
        /// </summary>
        /// <value>Catalog Feed id pertaining to the catalog product group.</value>
        [Required]
        [RegularExpression("^\\d+$")]
        [DataMember(Name="feed_id", EmitDefaultValue=false)]
        public string FeedId { get; set; }

        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [Required]
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
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsProductGroupCreateRequest {\n");
            sb.Append("  FeedId: ").Append(FeedId).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Filters: ").Append(Filters).Append("\n");
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
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((CatalogsProductGroupCreateRequest)obj);
        }

        /// <summary>
        /// Returns true if CatalogsProductGroupCreateRequest instances are equal
        /// </summary>
        /// <param name="other">Instance of CatalogsProductGroupCreateRequest to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsProductGroupCreateRequest other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    FeedId == other.FeedId ||
                    FeedId != null &&
                    FeedId.Equals(other.FeedId)
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
                    if (FeedId != null)
                    hashCode = hashCode * 59 + FeedId.GetHashCode();
                    if (Name != null)
                    hashCode = hashCode * 59 + Name.GetHashCode();
                    if (Description != null)
                    hashCode = hashCode * 59 + Description.GetHashCode();
                    if (Filters != null)
                    hashCode = hashCode * 59 + Filters.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CatalogsProductGroupCreateRequest left, CatalogsProductGroupCreateRequest right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CatalogsProductGroupCreateRequest left, CatalogsProductGroupCreateRequest right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
