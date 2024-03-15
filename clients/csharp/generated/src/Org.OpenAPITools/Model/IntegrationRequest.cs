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
    /// Schema used for creating the integration metadata.
    /// </summary>
    [DataContract(Name = "IntegrationRequest")]
    public partial class IntegrationRequest : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="IntegrationRequest" /> class.
        /// </summary>
        /// <param name="externalBusinessId">External business ID for the integration..</param>
        /// <param name="connectedMerchantId">connectedMerchantId.</param>
        /// <param name="connectedAdvertiserId">connectedAdvertiserId.</param>
        /// <param name="connectedLbaId">connectedLbaId.</param>
        /// <param name="connectedTagId">connectedTagId.</param>
        /// <param name="partnerAccessToken">partnerAccessToken.</param>
        /// <param name="partnerRefreshToken">partnerRefreshToken.</param>
        /// <param name="partnerPrimaryEmail">partnerPrimaryEmail.</param>
        /// <param name="partnerAccessTokenExpiry">partnerAccessTokenExpiry.</param>
        /// <param name="partnerRefreshTokenExpiry">partnerRefreshTokenExpiry.</param>
        /// <param name="scopes">scopes.</param>
        /// <param name="additionalId1">additionalId1.</param>
        /// <param name="partnerMetadata">partnerMetadata.</param>
        public IntegrationRequest(string externalBusinessId = default(string), string connectedMerchantId = default(string), string connectedAdvertiserId = default(string), string connectedLbaId = default(string), string connectedTagId = default(string), string partnerAccessToken = default(string), string partnerRefreshToken = default(string), string partnerPrimaryEmail = default(string), int partnerAccessTokenExpiry = default(int), int partnerRefreshTokenExpiry = default(int), string scopes = default(string), string additionalId1 = default(string), string partnerMetadata = default(string))
        {
            this.ExternalBusinessId = externalBusinessId;
            this.ConnectedMerchantId = connectedMerchantId;
            this.ConnectedAdvertiserId = connectedAdvertiserId;
            this.ConnectedLbaId = connectedLbaId;
            this.ConnectedTagId = connectedTagId;
            this.PartnerAccessToken = partnerAccessToken;
            this.PartnerRefreshToken = partnerRefreshToken;
            this.PartnerPrimaryEmail = partnerPrimaryEmail;
            this.PartnerAccessTokenExpiry = partnerAccessTokenExpiry;
            this.PartnerRefreshTokenExpiry = partnerRefreshTokenExpiry;
            this.Scopes = scopes;
            this.AdditionalId1 = additionalId1;
            this.PartnerMetadata = partnerMetadata;
        }

        /// <summary>
        /// External business ID for the integration.
        /// </summary>
        /// <value>External business ID for the integration.</value>
        [DataMember(Name = "external_business_id", EmitDefaultValue = true)]
        public string ExternalBusinessId { get; set; }

        /// <summary>
        /// Gets or Sets ConnectedMerchantId
        /// </summary>
        [DataMember(Name = "connected_merchant_id", EmitDefaultValue = false)]
        public string ConnectedMerchantId { get; set; }

        /// <summary>
        /// Gets or Sets ConnectedAdvertiserId
        /// </summary>
        [DataMember(Name = "connected_advertiser_id", EmitDefaultValue = false)]
        public string ConnectedAdvertiserId { get; set; }

        /// <summary>
        /// Gets or Sets ConnectedLbaId
        /// </summary>
        [DataMember(Name = "connected_lba_id", EmitDefaultValue = false)]
        public string ConnectedLbaId { get; set; }

        /// <summary>
        /// Gets or Sets ConnectedTagId
        /// </summary>
        [DataMember(Name = "connected_tag_id", EmitDefaultValue = false)]
        public string ConnectedTagId { get; set; }

        /// <summary>
        /// Gets or Sets PartnerAccessToken
        /// </summary>
        [DataMember(Name = "partner_access_token", EmitDefaultValue = false)]
        public string PartnerAccessToken { get; set; }

        /// <summary>
        /// Gets or Sets PartnerRefreshToken
        /// </summary>
        [DataMember(Name = "partner_refresh_token", EmitDefaultValue = false)]
        public string PartnerRefreshToken { get; set; }

        /// <summary>
        /// Gets or Sets PartnerPrimaryEmail
        /// </summary>
        [DataMember(Name = "partner_primary_email", EmitDefaultValue = false)]
        public string PartnerPrimaryEmail { get; set; }

        /// <summary>
        /// Gets or Sets PartnerAccessTokenExpiry
        /// </summary>
        [DataMember(Name = "partner_access_token_expiry", EmitDefaultValue = false)]
        public int PartnerAccessTokenExpiry { get; set; }

        /// <summary>
        /// Gets or Sets PartnerRefreshTokenExpiry
        /// </summary>
        [DataMember(Name = "partner_refresh_token_expiry", EmitDefaultValue = false)]
        public int PartnerRefreshTokenExpiry { get; set; }

        /// <summary>
        /// Gets or Sets Scopes
        /// </summary>
        [DataMember(Name = "scopes", EmitDefaultValue = false)]
        public string Scopes { get; set; }

        /// <summary>
        /// Gets or Sets AdditionalId1
        /// </summary>
        [DataMember(Name = "additional_id_1", EmitDefaultValue = false)]
        public string AdditionalId1 { get; set; }

        /// <summary>
        /// Gets or Sets PartnerMetadata
        /// </summary>
        [DataMember(Name = "partner_metadata", EmitDefaultValue = false)]
        public string PartnerMetadata { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class IntegrationRequest {\n");
            sb.Append("  ExternalBusinessId: ").Append(ExternalBusinessId).Append("\n");
            sb.Append("  ConnectedMerchantId: ").Append(ConnectedMerchantId).Append("\n");
            sb.Append("  ConnectedAdvertiserId: ").Append(ConnectedAdvertiserId).Append("\n");
            sb.Append("  ConnectedLbaId: ").Append(ConnectedLbaId).Append("\n");
            sb.Append("  ConnectedTagId: ").Append(ConnectedTagId).Append("\n");
            sb.Append("  PartnerAccessToken: ").Append(PartnerAccessToken).Append("\n");
            sb.Append("  PartnerRefreshToken: ").Append(PartnerRefreshToken).Append("\n");
            sb.Append("  PartnerPrimaryEmail: ").Append(PartnerPrimaryEmail).Append("\n");
            sb.Append("  PartnerAccessTokenExpiry: ").Append(PartnerAccessTokenExpiry).Append("\n");
            sb.Append("  PartnerRefreshTokenExpiry: ").Append(PartnerRefreshTokenExpiry).Append("\n");
            sb.Append("  Scopes: ").Append(Scopes).Append("\n");
            sb.Append("  AdditionalId1: ").Append(AdditionalId1).Append("\n");
            sb.Append("  PartnerMetadata: ").Append(PartnerMetadata).Append("\n");
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
            yield break;
        }
    }

}
