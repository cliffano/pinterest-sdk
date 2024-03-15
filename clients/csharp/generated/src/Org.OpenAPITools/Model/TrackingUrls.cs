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
    /// Third-party tracking URLs. Up to three tracking URLs - with a max length of 2,000 - are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Third-party and dynamic tracking&lt;/a&gt;.
    /// </summary>
    [DataContract(Name = "TrackingUrls")]
    public partial class TrackingUrls : IValidatableObject
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
            StringBuilder sb = new StringBuilder();
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
