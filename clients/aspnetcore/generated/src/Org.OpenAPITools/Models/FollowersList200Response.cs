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
    /// 
    /// </summary>
    [DataContract]
    public partial class FollowersList200Response : IEquatable<FollowersList200Response>
    {
        /// <summary>
        /// Gets or Sets Items
        /// </summary>
        [Required]
        [DataMember(Name="items", EmitDefaultValue=false)]
        public List<UserSummary> Items { get; set; }

        /// <summary>
        /// Gets or Sets Bookmark
        /// </summary>
        [DataMember(Name="bookmark", EmitDefaultValue=true)]
        public string Bookmark { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class FollowersList200Response {\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("  Bookmark: ").Append(Bookmark).Append("\n");
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
            return obj.GetType() == GetType() && Equals((FollowersList200Response)obj);
        }

        /// <summary>
        /// Returns true if FollowersList200Response instances are equal
        /// </summary>
        /// <param name="other">Instance of FollowersList200Response to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(FollowersList200Response other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Items == other.Items ||
                    Items != null &&
                    other.Items != null &&
                    Items.SequenceEqual(other.Items)
                ) && 
                (
                    Bookmark == other.Bookmark ||
                    Bookmark != null &&
                    Bookmark.Equals(other.Bookmark)
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
                    if (Items != null)
                    hashCode = hashCode * 59 + Items.GetHashCode();
                    if (Bookmark != null)
                    hashCode = hashCode * 59 + Bookmark.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(FollowersList200Response left, FollowersList200Response right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(FollowersList200Response left, FollowersList200Response right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
