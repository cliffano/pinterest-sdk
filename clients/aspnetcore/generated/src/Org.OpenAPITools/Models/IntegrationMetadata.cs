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
    /// Integration metadata
    /// </summary>
    [DataContract]
    public partial class IntegrationMetadata : IEquatable<IntegrationMetadata>
    {
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [RegularExpression("^\\d+$")]
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets ExternalBusinessId
        /// </summary>
        [DataMember(Name="external_business_id", EmitDefaultValue=false)]
        public string ExternalBusinessId { get; set; }

        /// <summary>
        /// Gets or Sets ConnectedMerchantId
        /// </summary>
        [DataMember(Name="connected_merchant_id", EmitDefaultValue=false)]
        public string ConnectedMerchantId { get; set; }

        /// <summary>
        /// Gets or Sets ConnectedUserId
        /// </summary>
        [DataMember(Name="connected_user_id", EmitDefaultValue=false)]
        public string ConnectedUserId { get; set; }

        /// <summary>
        /// Gets or Sets ConnectedAdvertiserId
        /// </summary>
        [DataMember(Name="connected_advertiser_id", EmitDefaultValue=false)]
        public string ConnectedAdvertiserId { get; set; }

        /// <summary>
        /// Gets or Sets ConnectedLbaId
        /// </summary>
        [DataMember(Name="connected_lba_id", EmitDefaultValue=false)]
        public string ConnectedLbaId { get; set; }

        /// <summary>
        /// Gets or Sets ConnectedTagId
        /// </summary>
        [DataMember(Name="connected_tag_id", EmitDefaultValue=false)]
        public string ConnectedTagId { get; set; }

        /// <summary>
        /// Gets or Sets PartnerAccessTokenExpiry
        /// </summary>
        [DataMember(Name="partner_access_token_expiry", EmitDefaultValue=true)]
        public decimal PartnerAccessTokenExpiry { get; set; }

        /// <summary>
        /// Gets or Sets PartnerRefreshTokenExpiry
        /// </summary>
        [DataMember(Name="partner_refresh_token_expiry", EmitDefaultValue=true)]
        public decimal PartnerRefreshTokenExpiry { get; set; }

        /// <summary>
        /// Gets or Sets Scopes
        /// </summary>
        [DataMember(Name="scopes", EmitDefaultValue=false)]
        public string Scopes { get; set; }

        /// <summary>
        /// Gets or Sets CreatedTimestamp
        /// </summary>
        [DataMember(Name="created_timestamp", EmitDefaultValue=true)]
        public decimal CreatedTimestamp { get; set; }

        /// <summary>
        /// Gets or Sets UpdatedTimestamp
        /// </summary>
        [DataMember(Name="updated_timestamp", EmitDefaultValue=true)]
        public decimal UpdatedTimestamp { get; set; }

        /// <summary>
        /// Gets or Sets AdditionalId1
        /// </summary>
        [DataMember(Name="additional_id_1", EmitDefaultValue=false)]
        public string AdditionalId1 { get; set; }

        /// <summary>
        /// Gets or Sets PartnerMetadata
        /// </summary>
        [DataMember(Name="partner_metadata", EmitDefaultValue=false)]
        public string PartnerMetadata { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class IntegrationMetadata {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  ExternalBusinessId: ").Append(ExternalBusinessId).Append("\n");
            sb.Append("  ConnectedMerchantId: ").Append(ConnectedMerchantId).Append("\n");
            sb.Append("  ConnectedUserId: ").Append(ConnectedUserId).Append("\n");
            sb.Append("  ConnectedAdvertiserId: ").Append(ConnectedAdvertiserId).Append("\n");
            sb.Append("  ConnectedLbaId: ").Append(ConnectedLbaId).Append("\n");
            sb.Append("  ConnectedTagId: ").Append(ConnectedTagId).Append("\n");
            sb.Append("  PartnerAccessTokenExpiry: ").Append(PartnerAccessTokenExpiry).Append("\n");
            sb.Append("  PartnerRefreshTokenExpiry: ").Append(PartnerRefreshTokenExpiry).Append("\n");
            sb.Append("  Scopes: ").Append(Scopes).Append("\n");
            sb.Append("  CreatedTimestamp: ").Append(CreatedTimestamp).Append("\n");
            sb.Append("  UpdatedTimestamp: ").Append(UpdatedTimestamp).Append("\n");
            sb.Append("  AdditionalId1: ").Append(AdditionalId1).Append("\n");
            sb.Append("  PartnerMetadata: ").Append(PartnerMetadata).Append("\n");
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
            return obj.GetType() == GetType() && Equals((IntegrationMetadata)obj);
        }

        /// <summary>
        /// Returns true if IntegrationMetadata instances are equal
        /// </summary>
        /// <param name="other">Instance of IntegrationMetadata to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(IntegrationMetadata other)
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
                    ExternalBusinessId == other.ExternalBusinessId ||
                    ExternalBusinessId != null &&
                    ExternalBusinessId.Equals(other.ExternalBusinessId)
                ) && 
                (
                    ConnectedMerchantId == other.ConnectedMerchantId ||
                    ConnectedMerchantId != null &&
                    ConnectedMerchantId.Equals(other.ConnectedMerchantId)
                ) && 
                (
                    ConnectedUserId == other.ConnectedUserId ||
                    ConnectedUserId != null &&
                    ConnectedUserId.Equals(other.ConnectedUserId)
                ) && 
                (
                    ConnectedAdvertiserId == other.ConnectedAdvertiserId ||
                    ConnectedAdvertiserId != null &&
                    ConnectedAdvertiserId.Equals(other.ConnectedAdvertiserId)
                ) && 
                (
                    ConnectedLbaId == other.ConnectedLbaId ||
                    ConnectedLbaId != null &&
                    ConnectedLbaId.Equals(other.ConnectedLbaId)
                ) && 
                (
                    ConnectedTagId == other.ConnectedTagId ||
                    ConnectedTagId != null &&
                    ConnectedTagId.Equals(other.ConnectedTagId)
                ) && 
                (
                    PartnerAccessTokenExpiry == other.PartnerAccessTokenExpiry ||
                    
                    PartnerAccessTokenExpiry.Equals(other.PartnerAccessTokenExpiry)
                ) && 
                (
                    PartnerRefreshTokenExpiry == other.PartnerRefreshTokenExpiry ||
                    
                    PartnerRefreshTokenExpiry.Equals(other.PartnerRefreshTokenExpiry)
                ) && 
                (
                    Scopes == other.Scopes ||
                    Scopes != null &&
                    Scopes.Equals(other.Scopes)
                ) && 
                (
                    CreatedTimestamp == other.CreatedTimestamp ||
                    
                    CreatedTimestamp.Equals(other.CreatedTimestamp)
                ) && 
                (
                    UpdatedTimestamp == other.UpdatedTimestamp ||
                    
                    UpdatedTimestamp.Equals(other.UpdatedTimestamp)
                ) && 
                (
                    AdditionalId1 == other.AdditionalId1 ||
                    AdditionalId1 != null &&
                    AdditionalId1.Equals(other.AdditionalId1)
                ) && 
                (
                    PartnerMetadata == other.PartnerMetadata ||
                    PartnerMetadata != null &&
                    PartnerMetadata.Equals(other.PartnerMetadata)
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
                    if (ExternalBusinessId != null)
                    hashCode = hashCode * 59 + ExternalBusinessId.GetHashCode();
                    if (ConnectedMerchantId != null)
                    hashCode = hashCode * 59 + ConnectedMerchantId.GetHashCode();
                    if (ConnectedUserId != null)
                    hashCode = hashCode * 59 + ConnectedUserId.GetHashCode();
                    if (ConnectedAdvertiserId != null)
                    hashCode = hashCode * 59 + ConnectedAdvertiserId.GetHashCode();
                    if (ConnectedLbaId != null)
                    hashCode = hashCode * 59 + ConnectedLbaId.GetHashCode();
                    if (ConnectedTagId != null)
                    hashCode = hashCode * 59 + ConnectedTagId.GetHashCode();
                    
                    hashCode = hashCode * 59 + PartnerAccessTokenExpiry.GetHashCode();
                    
                    hashCode = hashCode * 59 + PartnerRefreshTokenExpiry.GetHashCode();
                    if (Scopes != null)
                    hashCode = hashCode * 59 + Scopes.GetHashCode();
                    
                    hashCode = hashCode * 59 + CreatedTimestamp.GetHashCode();
                    
                    hashCode = hashCode * 59 + UpdatedTimestamp.GetHashCode();
                    if (AdditionalId1 != null)
                    hashCode = hashCode * 59 + AdditionalId1.GetHashCode();
                    if (PartnerMetadata != null)
                    hashCode = hashCode * 59 + PartnerMetadata.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(IntegrationMetadata left, IntegrationMetadata right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(IntegrationMetadata left, IntegrationMetadata right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
