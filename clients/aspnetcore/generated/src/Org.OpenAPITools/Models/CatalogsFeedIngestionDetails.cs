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
    public partial class CatalogsFeedIngestionDetails : IEquatable<CatalogsFeedIngestionDetails>
    {
        /// <summary>
        /// Gets or Sets Errors
        /// </summary>
        [Required]
        [DataMember(Name="errors", EmitDefaultValue=false)]
        public CatalogsFeedIngestionErrors Errors { get; set; }

        /// <summary>
        /// Gets or Sets Info
        /// </summary>
        [Required]
        [DataMember(Name="info", EmitDefaultValue=false)]
        public CatalogsFeedIngestionInfo Info { get; set; }

        /// <summary>
        /// Gets or Sets Warnings
        /// </summary>
        [Required]
        [DataMember(Name="warnings", EmitDefaultValue=false)]
        public CatalogsFeedIngestionWarnings Warnings { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsFeedIngestionDetails {\n");
            sb.Append("  Errors: ").Append(Errors).Append("\n");
            sb.Append("  Info: ").Append(Info).Append("\n");
            sb.Append("  Warnings: ").Append(Warnings).Append("\n");
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
            return obj.GetType() == GetType() && Equals((CatalogsFeedIngestionDetails)obj);
        }

        /// <summary>
        /// Returns true if CatalogsFeedIngestionDetails instances are equal
        /// </summary>
        /// <param name="other">Instance of CatalogsFeedIngestionDetails to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsFeedIngestionDetails other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Errors == other.Errors ||
                    Errors != null &&
                    Errors.Equals(other.Errors)
                ) && 
                (
                    Info == other.Info ||
                    Info != null &&
                    Info.Equals(other.Info)
                ) && 
                (
                    Warnings == other.Warnings ||
                    Warnings != null &&
                    Warnings.Equals(other.Warnings)
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
                    if (Errors != null)
                    hashCode = hashCode * 59 + Errors.GetHashCode();
                    if (Info != null)
                    hashCode = hashCode * 59 + Info.GetHashCode();
                    if (Warnings != null)
                    hashCode = hashCode * 59 + Warnings.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CatalogsFeedIngestionDetails left, CatalogsFeedIngestionDetails right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CatalogsFeedIngestionDetails left, CatalogsFeedIngestionDetails right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
