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
    /// Two set of objects to be managed asyncronusly by bulk. One for creations, one for modifications.
    /// </summary>
    [DataContract]
    public partial class BulkUpsertRequest : IEquatable<BulkUpsertRequest>
    {
        /// <summary>
        /// Gets or Sets Create
        /// </summary>
        [DataMember(Name="create", EmitDefaultValue=false)]
        public BulkUpsertRequestCreate Create { get; set; }

        /// <summary>
        /// Gets or Sets Update
        /// </summary>
        [DataMember(Name="update", EmitDefaultValue=false)]
        public BulkUpsertRequestUpdate Update { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BulkUpsertRequest {\n");
            sb.Append("  Create: ").Append(Create).Append("\n");
            sb.Append("  Update: ").Append(Update).Append("\n");
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
            return obj.GetType() == GetType() && Equals((BulkUpsertRequest)obj);
        }

        /// <summary>
        /// Returns true if BulkUpsertRequest instances are equal
        /// </summary>
        /// <param name="other">Instance of BulkUpsertRequest to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(BulkUpsertRequest other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Create == other.Create ||
                    Create != null &&
                    Create.Equals(other.Create)
                ) && 
                (
                    Update == other.Update ||
                    Update != null &&
                    Update.Equals(other.Update)
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
                    if (Create != null)
                    hashCode = hashCode * 59 + Create.GetHashCode();
                    if (Update != null)
                    hashCode = hashCode * 59 + Update.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(BulkUpsertRequest left, BulkUpsertRequest right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(BulkUpsertRequest left, BulkUpsertRequest right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}