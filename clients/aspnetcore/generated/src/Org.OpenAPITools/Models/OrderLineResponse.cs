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
    public partial class OrderLineResponse : IEquatable<OrderLineResponse>
    {
        /// <summary>
        /// Error list if update(s) fail.
        /// </summary>
        /// <value>Error list if update(s) fail.</value>
        [DataMember(Name="errors", EmitDefaultValue=false)]
        public List<OrderLineError> Errors { get; set; }

        /// <summary>
        /// Order Line object array.
        /// </summary>
        /// <value>Order Line object array.</value>
        [DataMember(Name="order_line", EmitDefaultValue=false)]
        public List<OrderLine> OrderLine { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrderLineResponse {\n");
            sb.Append("  Errors: ").Append(Errors).Append("\n");
            sb.Append("  OrderLine: ").Append(OrderLine).Append("\n");
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
            return obj.GetType() == GetType() && Equals((OrderLineResponse)obj);
        }

        /// <summary>
        /// Returns true if OrderLineResponse instances are equal
        /// </summary>
        /// <param name="other">Instance of OrderLineResponse to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrderLineResponse other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Errors == other.Errors ||
                    Errors != null &&
                    other.Errors != null &&
                    Errors.SequenceEqual(other.Errors)
                ) && 
                (
                    OrderLine == other.OrderLine ||
                    OrderLine != null &&
                    other.OrderLine != null &&
                    OrderLine.SequenceEqual(other.OrderLine)
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
                    if (OrderLine != null)
                    hashCode = hashCode * 59 + OrderLine.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(OrderLineResponse left, OrderLineResponse right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(OrderLineResponse left, OrderLineResponse right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}