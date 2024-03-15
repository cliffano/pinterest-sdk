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
    public partial class SSIOAccountResponse : IEquatable<SSIOAccountResponse>
    {
        /// <summary>
        /// Advertiser eligible to create order lines
        /// </summary>
        /// <value>Advertiser eligible to create order lines</value>
        /// <example>true</example>
        [DataMember(Name="eligible", EmitDefaultValue=true)]
        public bool Eligible { get; set; }

        /// <summary>
        /// Advertiser eligible to update order lines
        /// </summary>
        /// <value>Advertiser eligible to update order lines</value>
        /// <example>true</example>
        [DataMember(Name="can_edit", EmitDefaultValue=true)]
        public bool CanEdit { get; set; }

        /// <summary>
        /// An array of Salesforce account information that includes address, io terms, etc.
        /// </summary>
        /// <value>An array of Salesforce account information that includes address, io terms, etc.</value>
        [DataMember(Name="billto_infos", EmitDefaultValue=false)]
        public List<SSIOAccountItem> BilltoInfos { get; set; }

        /// <summary>
        /// Gets or Sets Currency
        /// </summary>
        /// <example>USD</example>
        [DataMember(Name="currency", EmitDefaultValue=false)]
        public string Currency { get; set; }

        /// <summary>
        /// Gets or Sets PmpNames
        /// </summary>
        [DataMember(Name="pmp_names", EmitDefaultValue=false)]
        public List<SSIOAccountPMPName> PmpNames { get; set; }

        /// <summary>
        /// Error indicator from Salesforce which could be \&quot;No Error\&quot;
        /// </summary>
        /// <value>Error indicator from Salesforce which could be \&quot;No Error\&quot;</value>
        /// <example>No Error</example>
        [DataMember(Name="error", EmitDefaultValue=false)]
        public string Error { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SSIOAccountResponse {\n");
            sb.Append("  Eligible: ").Append(Eligible).Append("\n");
            sb.Append("  CanEdit: ").Append(CanEdit).Append("\n");
            sb.Append("  BilltoInfos: ").Append(BilltoInfos).Append("\n");
            sb.Append("  Currency: ").Append(Currency).Append("\n");
            sb.Append("  PmpNames: ").Append(PmpNames).Append("\n");
            sb.Append("  Error: ").Append(Error).Append("\n");
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
            return obj.GetType() == GetType() && Equals((SSIOAccountResponse)obj);
        }

        /// <summary>
        /// Returns true if SSIOAccountResponse instances are equal
        /// </summary>
        /// <param name="other">Instance of SSIOAccountResponse to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(SSIOAccountResponse other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Eligible == other.Eligible ||
                    
                    Eligible.Equals(other.Eligible)
                ) && 
                (
                    CanEdit == other.CanEdit ||
                    
                    CanEdit.Equals(other.CanEdit)
                ) && 
                (
                    BilltoInfos == other.BilltoInfos ||
                    BilltoInfos != null &&
                    other.BilltoInfos != null &&
                    BilltoInfos.SequenceEqual(other.BilltoInfos)
                ) && 
                (
                    Currency == other.Currency ||
                    Currency != null &&
                    Currency.Equals(other.Currency)
                ) && 
                (
                    PmpNames == other.PmpNames ||
                    PmpNames != null &&
                    other.PmpNames != null &&
                    PmpNames.SequenceEqual(other.PmpNames)
                ) && 
                (
                    Error == other.Error ||
                    Error != null &&
                    Error.Equals(other.Error)
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
                    
                    hashCode = hashCode * 59 + Eligible.GetHashCode();
                    
                    hashCode = hashCode * 59 + CanEdit.GetHashCode();
                    if (BilltoInfos != null)
                    hashCode = hashCode * 59 + BilltoInfos.GetHashCode();
                    if (Currency != null)
                    hashCode = hashCode * 59 + Currency.GetHashCode();
                    if (PmpNames != null)
                    hashCode = hashCode * 59 + PmpNames.GetHashCode();
                    if (Error != null)
                    hashCode = hashCode * 59 + Error.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(SSIOAccountResponse left, SSIOAccountResponse right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(SSIOAccountResponse left, SSIOAccountResponse right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
