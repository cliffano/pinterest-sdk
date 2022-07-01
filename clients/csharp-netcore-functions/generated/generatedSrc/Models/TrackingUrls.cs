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

namespace Org.OpenAPITools.Models
{
    /// <summary>
    /// Third-party tracking URLs. Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Third-party and dynamic tracking&lt;/a&gt;.
    /// </summary>
    [DataContract(Name = "TrackingUrls")]
    public partial class TrackingUrls : IEquatable<TrackingUrls>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="TrackingUrls" /> class.
        /// </summary>
        /// <param name="impression">impression.</param>
        /// <param name="click">click.</param>
        /// <param name="engagement">engagement.</param>
        /// <param name="buyableButton">buyableButton.</param>
        /// <param name="audienceVerification">audienceVerification.</param>
        public TrackingUrls(List<string> impression = default(List<string>), List<string> click = default(List<string>), List<string> engagement = default(List<string>), List<string> buyableButton = default(List<string>), List<string> audienceVerification = default(List<string>))
        {
            this.Impression = impression;
            this.Click = click;
            this.Engagement = engagement;
            this.BuyableButton = buyableButton;
            this.AudienceVerification = audienceVerification;
        }

        /// <summary>
        /// Gets or Sets Impression
        /// </summary>
        [DataMember(Name = "impression", EmitDefaultValue = false)]
        public List<string> Impression { get; set; }

        /// <summary>
        /// Gets or Sets Click
        /// </summary>
        [DataMember(Name = "click", EmitDefaultValue = false)]
        public List<string> Click { get; set; }

        /// <summary>
        /// Gets or Sets Engagement
        /// </summary>
        [DataMember(Name = "engagement", EmitDefaultValue = false)]
        public List<string> Engagement { get; set; }

        /// <summary>
        /// Gets or Sets BuyableButton
        /// </summary>
        [DataMember(Name = "buyable_button", EmitDefaultValue = false)]
        public List<string> BuyableButton { get; set; }

        /// <summary>
        /// Gets or Sets AudienceVerification
        /// </summary>
        [DataMember(Name = "audience_verification", EmitDefaultValue = false)]
        public List<string> AudienceVerification { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class TrackingUrls {\n");
            sb.Append("  Impression: ").Append(Impression).Append("\n");
            sb.Append("  Click: ").Append(Click).Append("\n");
            sb.Append("  Engagement: ").Append(Engagement).Append("\n");
            sb.Append("  BuyableButton: ").Append(BuyableButton).Append("\n");
            sb.Append("  AudienceVerification: ").Append(AudienceVerification).Append("\n");
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
            return this.Equals(input as TrackingUrls);
        }

        /// <summary>
        /// Returns true if TrackingUrls instances are equal
        /// </summary>
        /// <param name="input">Instance of TrackingUrls to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(TrackingUrls input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Impression == input.Impression ||
                    this.Impression != null &&
                    input.Impression != null &&
                    this.Impression.SequenceEqual(input.Impression)
                ) && 
                (
                    this.Click == input.Click ||
                    this.Click != null &&
                    input.Click != null &&
                    this.Click.SequenceEqual(input.Click)
                ) && 
                (
                    this.Engagement == input.Engagement ||
                    this.Engagement != null &&
                    input.Engagement != null &&
                    this.Engagement.SequenceEqual(input.Engagement)
                ) && 
                (
                    this.BuyableButton == input.BuyableButton ||
                    this.BuyableButton != null &&
                    input.BuyableButton != null &&
                    this.BuyableButton.SequenceEqual(input.BuyableButton)
                ) && 
                (
                    this.AudienceVerification == input.AudienceVerification ||
                    this.AudienceVerification != null &&
                    input.AudienceVerification != null &&
                    this.AudienceVerification.SequenceEqual(input.AudienceVerification)
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
                if (this.Impression != null)
                    hashCode = hashCode * 59 + this.Impression.GetHashCode();
                if (this.Click != null)
                    hashCode = hashCode * 59 + this.Click.GetHashCode();
                if (this.Engagement != null)
                    hashCode = hashCode * 59 + this.Engagement.GetHashCode();
                if (this.BuyableButton != null)
                    hashCode = hashCode * 59 + this.BuyableButton.GetHashCode();
                if (this.AudienceVerification != null)
                    hashCode = hashCode * 59 + this.AudienceVerification.GetHashCode();
                return hashCode;
            }
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
