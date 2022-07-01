/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
    /// AdGroupResponseAllOf1
    /// </summary>
    [DataContract(Name = "AdGroupResponse_allOf_1")]
    public partial class AdGroupResponseAllOf1 : IEquatable<AdGroupResponseAllOf1>, IValidatableObject
    {

        /// <summary>
        /// Gets or Sets BillableEvent
        /// </summary>
        [DataMember(Name = "billable_event", EmitDefaultValue = false)]
        public ActionType? BillableEvent { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="AdGroupResponseAllOf1" /> class.
        /// </summary>
        /// <param name="campaignId">Campaign ID of the ad group..</param>
        /// <param name="billableEvent">billableEvent.</param>
        /// <param name="id">Ad group ID..</param>
        /// <param name="type">Always \&quot;adgroup\&quot;..</param>
        /// <param name="adAccountId">Advertiser ID..</param>
        /// <param name="createdTime">Ad group creation time. Unix timestamp in seconds..</param>
        /// <param name="updatedTime">Ad group last update time. Unix timestamp in seconds..</param>
        public AdGroupResponseAllOf1(string campaignId = default(string), ActionType? billableEvent = default(ActionType?), string id = default(string), string type = default(string), string adAccountId = default(string), int createdTime = default(int), int updatedTime = default(int))
        {
            this.CampaignId = campaignId;
            this.BillableEvent = billableEvent;
            this.Id = id;
            this.Type = type;
            this.AdAccountId = adAccountId;
            this.CreatedTime = createdTime;
            this.UpdatedTime = updatedTime;
        }

        /// <summary>
        /// Campaign ID of the ad group.
        /// </summary>
        /// <value>Campaign ID of the ad group.</value>
        [DataMember(Name = "campaign_id", EmitDefaultValue = false)]
        public string CampaignId { get; set; }

        /// <summary>
        /// Ad group ID.
        /// </summary>
        /// <value>Ad group ID.</value>
        [DataMember(Name = "id", EmitDefaultValue = false)]
        public string Id { get; set; }

        /// <summary>
        /// Always \&quot;adgroup\&quot;.
        /// </summary>
        /// <value>Always \&quot;adgroup\&quot;.</value>
        [DataMember(Name = "type", EmitDefaultValue = false)]
        public string Type { get; set; }

        /// <summary>
        /// Advertiser ID.
        /// </summary>
        /// <value>Advertiser ID.</value>
        [DataMember(Name = "ad_account_id", EmitDefaultValue = false)]
        public string AdAccountId { get; set; }

        /// <summary>
        /// Ad group creation time. Unix timestamp in seconds.
        /// </summary>
        /// <value>Ad group creation time. Unix timestamp in seconds.</value>
        [DataMember(Name = "created_time", EmitDefaultValue = false)]
        public int CreatedTime { get; set; }

        /// <summary>
        /// Ad group last update time. Unix timestamp in seconds.
        /// </summary>
        /// <value>Ad group last update time. Unix timestamp in seconds.</value>
        [DataMember(Name = "updated_time", EmitDefaultValue = false)]
        public int UpdatedTime { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class AdGroupResponseAllOf1 {\n");
            sb.Append("  CampaignId: ").Append(CampaignId).Append("\n");
            sb.Append("  BillableEvent: ").Append(BillableEvent).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  AdAccountId: ").Append(AdAccountId).Append("\n");
            sb.Append("  CreatedTime: ").Append(CreatedTime).Append("\n");
            sb.Append("  UpdatedTime: ").Append(UpdatedTime).Append("\n");
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
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as AdGroupResponseAllOf1);
        }

        /// <summary>
        /// Returns true if AdGroupResponseAllOf1 instances are equal
        /// </summary>
        /// <param name="input">Instance of AdGroupResponseAllOf1 to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AdGroupResponseAllOf1 input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.CampaignId == input.CampaignId ||
                    (this.CampaignId != null &&
                    this.CampaignId.Equals(input.CampaignId))
                ) && 
                (
                    this.BillableEvent == input.BillableEvent ||
                    this.BillableEvent.Equals(input.BillableEvent)
                ) && 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.Type == input.Type ||
                    (this.Type != null &&
                    this.Type.Equals(input.Type))
                ) && 
                (
                    this.AdAccountId == input.AdAccountId ||
                    (this.AdAccountId != null &&
                    this.AdAccountId.Equals(input.AdAccountId))
                ) && 
                (
                    this.CreatedTime == input.CreatedTime ||
                    this.CreatedTime.Equals(input.CreatedTime)
                ) && 
                (
                    this.UpdatedTime == input.UpdatedTime ||
                    this.UpdatedTime.Equals(input.UpdatedTime)
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
                int hashCode = 41;
                if (this.CampaignId != null)
                {
                    hashCode = (hashCode * 59) + this.CampaignId.GetHashCode();
                }
                hashCode = (hashCode * 59) + this.BillableEvent.GetHashCode();
                if (this.Id != null)
                {
                    hashCode = (hashCode * 59) + this.Id.GetHashCode();
                }
                if (this.Type != null)
                {
                    hashCode = (hashCode * 59) + this.Type.GetHashCode();
                }
                if (this.AdAccountId != null)
                {
                    hashCode = (hashCode * 59) + this.AdAccountId.GetHashCode();
                }
                hashCode = (hashCode * 59) + this.CreatedTime.GetHashCode();
                hashCode = (hashCode * 59) + this.UpdatedTime.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        public IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> Validate(ValidationContext validationContext)
        {
            // CampaignId (string) pattern
            Regex regexCampaignId = new Regex(@"^\\d+$", RegexOptions.CultureInvariant);
            if (false == regexCampaignId.Match(this.CampaignId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for CampaignId, must match a pattern of " + regexCampaignId, new [] { "CampaignId" });
            }

            // Id (string) pattern
            Regex regexId = new Regex(@"^\\d+$", RegexOptions.CultureInvariant);
            if (false == regexId.Match(this.Id).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Id, must match a pattern of " + regexId, new [] { "Id" });
            }

            // AdAccountId (string) pattern
            Regex regexAdAccountId = new Regex(@"^\\d+$", RegexOptions.CultureInvariant);
            if (false == regexAdAccountId.Match(this.AdAccountId).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for AdAccountId, must match a pattern of " + regexAdAccountId, new [] { "AdAccountId" });
            }

            yield break;
        }
    }

}
