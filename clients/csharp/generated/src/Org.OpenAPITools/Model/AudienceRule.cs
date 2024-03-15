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
    /// JSON object defining targeted audience users. Example rule formats per audience type:&lt;br&gt;CUSTOMER_LIST: { \&quot;customer_list_id\&quot;: \&quot;&amp;lt;customer list ID&amp;gt;\&quot;}&lt;br&gt;ACTALIKE: { \&quot;seed_id\&quot;: [\&quot;&amp;lt;audience ID&amp;gt;\&quot;], \&quot;country\&quot;: \&quot;US\&quot;, \&quot;percentage\&quot;: \&quot;10\&quot; }&lt;br&gt;(Valid countries include: \&quot;US\&quot;, \&quot;CA\&quot;, and \&quot;GB\&quot;. Percentage should be 1-10.&lt;br&gt;The targeted audience should be this % size across Pinterest.)&lt;br&gt;VISITOR: { \&quot;visitor_source_id\&quot;: [\&quot;&amp;lt;conversion tag ID&amp;gt;\&quot;], \&quot;retention_days\&quot;: \&quot;180\&quot;, \&quot;event_source\&quot;: {\&quot;&#x3D;\&quot;: [\&quot;web\&quot;, \&quot;mobile\&quot;]}, \&quot;ingestion_source\&quot;: {\&quot;&#x3D;\&quot;: [\&quot;tag\&quot;]}}&lt;br&gt;(Retention days should be 1-540. Retention applies to specific customers.)&lt;br&gt;ENGAGEMENT: {\&quot;engagement_domain\&quot;: [\&quot;www.entomi.com\&quot;], \&quot;engager_type\&quot;: 1}&lt;br&gt;For more details on engagement audiences, see &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/adtech_ads_v4/#section/November-2021\&quot; target&#x3D;\&quot;_blank\&quot;&gt;November 2021 changelog&lt;/a&gt;.
    /// </summary>
    [DataContract(Name = "AudienceRule")]
    public partial class AudienceRule : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="AudienceRule" /> class.
        /// </summary>
        /// <param name="country">Valid countries include: \&quot;US\&quot;, \&quot;CA\&quot;, and \&quot;GB\&quot;..</param>
        /// <param name="customerListId">Customer list ID. For CUSTOMER_LIST &#x60;audience_type&#x60;..</param>
        /// <param name="engagementDomain">The audience account&#39;s verified domain. **Required** for ENGAGEMENT &#x60;audience_type&#x60;..</param>
        /// <param name="engagementType">Engagement type enum. Optional for ENGAGEMENT &#x60;audience_type&#x60;. Supported values are &#x60;click&#x60;, &#x60;save&#x60;, &#x60;closeup&#x60;, &#x60;comment&#x60; and &#x60;like&#x60;. All engagements are included if this field is not set. .</param>
        /// <param name="varEvent">A Pinterest tag event. Optional for VISITOR &#x60;audience_type&#x60;. Possible values are &#x60;pagevisit&#x60;, &#x60;signup&#x60;, &#x60;checkout&#x60;, &#x60;viewcategory&#x60;, &#x60;search&#x60;, &#x60;addtocart&#x60;, &#x60;watchvideo&#x60;, &#x60;lead&#x60;, and &#x60;custom&#x60;. This field also accepts a partner-defined Pinterest tag event..</param>
        /// <param name="eventData">eventData.</param>
        /// <param name="percentage">Percentage should be 1-10. The targeted audience should be this % size across Pinterest..</param>
        /// <param name="pinId">IDs of engaged organic pins. Optional for ENGAGEMENT &#x60;audience_type&#x60;. For example, \&quot;pin_id:\&quot;: [\&quot;34567\&quot;].</param>
        /// <param name="prefill">Optional for VISITOR &#x60;audience_type&#x60;. If &#x60;true&#x60;, the specified rule on existing engagement data is applied to pre-populate the audience. If &#x60;false&#x60;, the audience is empty at creation time. The default is &#x60;true&#x60;..</param>
        /// <param name="retentionDays">Number of days a Pinterest user remains in the audience. Optional for ENGAGEMENT and VISITOR &#x60;audience_type&#x60;. Accepted range is 1-540. Defaults to 180 if not specified..</param>
        /// <param name="seedId">Audience ID(s). For ACTALIKE &#x60;audience_type&#x60;. .</param>
        /// <param name="url">Optional for ENGAGEMENT or VISITOR &#x60;audience_type&#x60;. For ENGAGEMENT, it is the engaged pin&#39;s URL. For VISITOR, you can use it as a string or a {operator: value} object for filtering visitors based on conversion tag event URLs. Supported operators are [ &#x3D;, !&#x3D;, contains, not_contains].&lt;br&gt;Example 1:  \&quot;url\&quot;: \&quot;http://www.myonlinestore123.com/view_item/shoe\&quot;&lt;br&gt;Example 2: \&quot;url\&quot;: {\&quot;contains\&quot;: \&quot;/view_item/shoe\&quot;}.</param>
        /// <param name="visitorSourceId">The conversion tag ID, or the Pinterest tag ID, that you use on your website. For VISITOR &#x60;audience_type&#x60;..</param>
        /// <param name="eventSource">Optional for VISITOR. You can use it as a {&#39;&#x3D;&#39;: [value]}. Supported values are: web, mobile, offline.</param>
        /// <param name="ingestionSource">Optional for VISITOR. You can use it as a {&#39;&#x3D;&#39;: [value]}. Supported values are: tag, mmp, file_upload, conversions_api.</param>
        /// <param name="engagerType">Optional for ENGAGEMENT. Engager type value should be 1-2..</param>
        /// <param name="campaignId">Campaign ID for engagement audience filter..</param>
        /// <param name="adId">Ad ID for engagement audience filter..</param>
        /// <param name="objectiveType">Objective for engagement audience filter..</param>
        /// <param name="adAccountId">Ad account ID..</param>
        public AudienceRule(string country = default(string), string customerListId = default(string), List<string> engagementDomain = default(List<string>), string engagementType = default(string), string varEvent = default(string), PinterestTagEventData eventData = default(PinterestTagEventData), int percentage = default(int), List<string> pinId = default(List<string>), bool prefill = default(bool), int retentionDays = default(int), List<string> seedId = default(List<string>), List<string> url = default(List<string>), string visitorSourceId = default(string), Object eventSource = default(Object), Object ingestionSource = default(Object), int engagerType = default(int), List<string> campaignId = default(List<string>), List<string> adId = default(List<string>), List<ObjectiveType> objectiveType = default(List<ObjectiveType>), string adAccountId = default(string))
        {
            this.Country = country;
            this.CustomerListId = customerListId;
            this.EngagementDomain = engagementDomain;
            this.EngagementType = engagementType;
            this.VarEvent = varEvent;
            this.EventData = eventData;
            this.Percentage = percentage;
            this.PinId = pinId;
            this.Prefill = prefill;
            this.RetentionDays = retentionDays;
            this.SeedId = seedId;
            this.Url = url;
            this.VisitorSourceId = visitorSourceId;
            this.EventSource = eventSource;
            this.IngestionSource = ingestionSource;
            this.EngagerType = engagerType;
            this.CampaignId = campaignId;
            this.AdId = adId;
            this.ObjectiveType = objectiveType;
            this.AdAccountId = adAccountId;
        }

        /// <summary>
        /// Valid countries include: \&quot;US\&quot;, \&quot;CA\&quot;, and \&quot;GB\&quot;.
        /// </summary>
        /// <value>Valid countries include: \&quot;US\&quot;, \&quot;CA\&quot;, and \&quot;GB\&quot;.</value>
        /// <example>US</example>
        [DataMember(Name = "country", EmitDefaultValue = false)]
        public string Country { get; set; }

        /// <summary>
        /// Customer list ID. For CUSTOMER_LIST &#x60;audience_type&#x60;.
        /// </summary>
        /// <value>Customer list ID. For CUSTOMER_LIST &#x60;audience_type&#x60;.</value>
        /// <example>5497558859876</example>
        [DataMember(Name = "customer_list_id", EmitDefaultValue = false)]
        public string CustomerListId { get; set; }

        /// <summary>
        /// The audience account&#39;s verified domain. **Required** for ENGAGEMENT &#x60;audience_type&#x60;.
        /// </summary>
        /// <value>The audience account&#39;s verified domain. **Required** for ENGAGEMENT &#x60;audience_type&#x60;.</value>
        /// <example>[&quot;www.somedomain.com&quot;]</example>
        [DataMember(Name = "engagement_domain", EmitDefaultValue = false)]
        public List<string> EngagementDomain { get; set; }

        /// <summary>
        /// Engagement type enum. Optional for ENGAGEMENT &#x60;audience_type&#x60;. Supported values are &#x60;click&#x60;, &#x60;save&#x60;, &#x60;closeup&#x60;, &#x60;comment&#x60; and &#x60;like&#x60;. All engagements are included if this field is not set. 
        /// </summary>
        /// <value>Engagement type enum. Optional for ENGAGEMENT &#x60;audience_type&#x60;. Supported values are &#x60;click&#x60;, &#x60;save&#x60;, &#x60;closeup&#x60;, &#x60;comment&#x60; and &#x60;like&#x60;. All engagements are included if this field is not set. </value>
        /// <example>click</example>
        [DataMember(Name = "engagement_type", EmitDefaultValue = false)]
        public string EngagementType { get; set; }

        /// <summary>
        /// A Pinterest tag event. Optional for VISITOR &#x60;audience_type&#x60;. Possible values are &#x60;pagevisit&#x60;, &#x60;signup&#x60;, &#x60;checkout&#x60;, &#x60;viewcategory&#x60;, &#x60;search&#x60;, &#x60;addtocart&#x60;, &#x60;watchvideo&#x60;, &#x60;lead&#x60;, and &#x60;custom&#x60;. This field also accepts a partner-defined Pinterest tag event.
        /// </summary>
        /// <value>A Pinterest tag event. Optional for VISITOR &#x60;audience_type&#x60;. Possible values are &#x60;pagevisit&#x60;, &#x60;signup&#x60;, &#x60;checkout&#x60;, &#x60;viewcategory&#x60;, &#x60;search&#x60;, &#x60;addtocart&#x60;, &#x60;watchvideo&#x60;, &#x60;lead&#x60;, and &#x60;custom&#x60;. This field also accepts a partner-defined Pinterest tag event.</value>
        /// <example>checkout</example>
        [DataMember(Name = "event", EmitDefaultValue = false)]
        public string VarEvent { get; set; }

        /// <summary>
        /// Gets or Sets EventData
        /// </summary>
        [DataMember(Name = "event_data", EmitDefaultValue = false)]
        public PinterestTagEventData EventData { get; set; }

        /// <summary>
        /// Percentage should be 1-10. The targeted audience should be this % size across Pinterest.
        /// </summary>
        /// <value>Percentage should be 1-10. The targeted audience should be this % size across Pinterest.</value>
        /// <example>3</example>
        [DataMember(Name = "percentage", EmitDefaultValue = false)]
        public int Percentage { get; set; }

        /// <summary>
        /// IDs of engaged organic pins. Optional for ENGAGEMENT &#x60;audience_type&#x60;. For example, \&quot;pin_id:\&quot;: [\&quot;34567\&quot;]
        /// </summary>
        /// <value>IDs of engaged organic pins. Optional for ENGAGEMENT &#x60;audience_type&#x60;. For example, \&quot;pin_id:\&quot;: [\&quot;34567\&quot;]</value>
        /// <example>[&quot;34567&quot;]</example>
        [DataMember(Name = "pin_id", EmitDefaultValue = false)]
        public List<string> PinId { get; set; }

        /// <summary>
        /// Optional for VISITOR &#x60;audience_type&#x60;. If &#x60;true&#x60;, the specified rule on existing engagement data is applied to pre-populate the audience. If &#x60;false&#x60;, the audience is empty at creation time. The default is &#x60;true&#x60;.
        /// </summary>
        /// <value>Optional for VISITOR &#x60;audience_type&#x60;. If &#x60;true&#x60;, the specified rule on existing engagement data is applied to pre-populate the audience. If &#x60;false&#x60;, the audience is empty at creation time. The default is &#x60;true&#x60;.</value>
        /// <example>true</example>
        [DataMember(Name = "prefill", EmitDefaultValue = true)]
        public bool Prefill { get; set; }

        /// <summary>
        /// Number of days a Pinterest user remains in the audience. Optional for ENGAGEMENT and VISITOR &#x60;audience_type&#x60;. Accepted range is 1-540. Defaults to 180 if not specified.
        /// </summary>
        /// <value>Number of days a Pinterest user remains in the audience. Optional for ENGAGEMENT and VISITOR &#x60;audience_type&#x60;. Accepted range is 1-540. Defaults to 180 if not specified.</value>
        /// <example>30</example>
        [DataMember(Name = "retention_days", EmitDefaultValue = false)]
        public int RetentionDays { get; set; }

        /// <summary>
        /// Audience ID(s). For ACTALIKE &#x60;audience_type&#x60;. 
        /// </summary>
        /// <value>Audience ID(s). For ACTALIKE &#x60;audience_type&#x60;. </value>
        /// <example>[&quot;2542620639259&quot;,&quot;2542620639261&quot;]</example>
        [DataMember(Name = "seed_id", EmitDefaultValue = false)]
        public List<string> SeedId { get; set; }

        /// <summary>
        /// Optional for ENGAGEMENT or VISITOR &#x60;audience_type&#x60;. For ENGAGEMENT, it is the engaged pin&#39;s URL. For VISITOR, you can use it as a string or a {operator: value} object for filtering visitors based on conversion tag event URLs. Supported operators are [ &#x3D;, !&#x3D;, contains, not_contains].&lt;br&gt;Example 1:  \&quot;url\&quot;: \&quot;http://www.myonlinestore123.com/view_item/shoe\&quot;&lt;br&gt;Example 2: \&quot;url\&quot;: {\&quot;contains\&quot;: \&quot;/view_item/shoe\&quot;}
        /// </summary>
        /// <value>Optional for ENGAGEMENT or VISITOR &#x60;audience_type&#x60;. For ENGAGEMENT, it is the engaged pin&#39;s URL. For VISITOR, you can use it as a string or a {operator: value} object for filtering visitors based on conversion tag event URLs. Supported operators are [ &#x3D;, !&#x3D;, contains, not_contains].&lt;br&gt;Example 1:  \&quot;url\&quot;: \&quot;http://www.myonlinestore123.com/view_item/shoe\&quot;&lt;br&gt;Example 2: \&quot;url\&quot;: {\&quot;contains\&quot;: \&quot;/view_item/shoe\&quot;}</value>
        [DataMember(Name = "url", EmitDefaultValue = false)]
        public List<string> Url { get; set; }

        /// <summary>
        /// The conversion tag ID, or the Pinterest tag ID, that you use on your website. For VISITOR &#x60;audience_type&#x60;.
        /// </summary>
        /// <value>The conversion tag ID, or the Pinterest tag ID, that you use on your website. For VISITOR &#x60;audience_type&#x60;.</value>
        /// <example>549755885175</example>
        [DataMember(Name = "visitor_source_id", EmitDefaultValue = false)]
        public string VisitorSourceId { get; set; }

        /// <summary>
        /// Optional for VISITOR. You can use it as a {&#39;&#x3D;&#39;: [value]}. Supported values are: web, mobile, offline
        /// </summary>
        /// <value>Optional for VISITOR. You can use it as a {&#39;&#x3D;&#39;: [value]}. Supported values are: web, mobile, offline</value>
        /// <example>{&quot;&#x3D;&quot;:[&quot;web&quot;,&quot;mobile&quot;]}</example>
        [DataMember(Name = "event_source", EmitDefaultValue = false)]
        public Object EventSource { get; set; }

        /// <summary>
        /// Optional for VISITOR. You can use it as a {&#39;&#x3D;&#39;: [value]}. Supported values are: tag, mmp, file_upload, conversions_api
        /// </summary>
        /// <value>Optional for VISITOR. You can use it as a {&#39;&#x3D;&#39;: [value]}. Supported values are: tag, mmp, file_upload, conversions_api</value>
        /// <example>{&quot;&#x3D;&quot;:[&quot;tag&quot;]}</example>
        [DataMember(Name = "ingestion_source", EmitDefaultValue = false)]
        public Object IngestionSource { get; set; }

        /// <summary>
        /// Optional for ENGAGEMENT. Engager type value should be 1-2.
        /// </summary>
        /// <value>Optional for ENGAGEMENT. Engager type value should be 1-2.</value>
        /// <example>1</example>
        [DataMember(Name = "engager_type", EmitDefaultValue = false)]
        public int EngagerType { get; set; }

        /// <summary>
        /// Campaign ID for engagement audience filter.
        /// </summary>
        /// <value>Campaign ID for engagement audience filter.</value>
        /// <example>[&quot;626744528398&quot;]</example>
        [DataMember(Name = "campaign_id", EmitDefaultValue = false)]
        public List<string> CampaignId { get; set; }

        /// <summary>
        /// Ad ID for engagement audience filter.
        /// </summary>
        /// <value>Ad ID for engagement audience filter.</value>
        /// <example>[&quot;687201361754&quot;]</example>
        [DataMember(Name = "ad_id", EmitDefaultValue = false)]
        public List<string> AdId { get; set; }

        /// <summary>
        /// Objective for engagement audience filter.
        /// </summary>
        /// <value>Objective for engagement audience filter.</value>
        /// <example>[&quot;AWARENESS&quot;]</example>
        [DataMember(Name = "objective_type", EmitDefaultValue = false)]
        public List<ObjectiveType> ObjectiveType { get; set; }

        /// <summary>
        /// Ad account ID.
        /// </summary>
        /// <value>Ad account ID.</value>
        /// <example>549755885175</example>
        [DataMember(Name = "ad_account_id", EmitDefaultValue = false)]
        public string AdAccountId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class AudienceRule {\n");
            sb.Append("  Country: ").Append(Country).Append("\n");
            sb.Append("  CustomerListId: ").Append(CustomerListId).Append("\n");
            sb.Append("  EngagementDomain: ").Append(EngagementDomain).Append("\n");
            sb.Append("  EngagementType: ").Append(EngagementType).Append("\n");
            sb.Append("  VarEvent: ").Append(VarEvent).Append("\n");
            sb.Append("  EventData: ").Append(EventData).Append("\n");
            sb.Append("  Percentage: ").Append(Percentage).Append("\n");
            sb.Append("  PinId: ").Append(PinId).Append("\n");
            sb.Append("  Prefill: ").Append(Prefill).Append("\n");
            sb.Append("  RetentionDays: ").Append(RetentionDays).Append("\n");
            sb.Append("  SeedId: ").Append(SeedId).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("  VisitorSourceId: ").Append(VisitorSourceId).Append("\n");
            sb.Append("  EventSource: ").Append(EventSource).Append("\n");
            sb.Append("  IngestionSource: ").Append(IngestionSource).Append("\n");
            sb.Append("  EngagerType: ").Append(EngagerType).Append("\n");
            sb.Append("  CampaignId: ").Append(CampaignId).Append("\n");
            sb.Append("  AdId: ").Append(AdId).Append("\n");
            sb.Append("  ObjectiveType: ").Append(ObjectiveType).Append("\n");
            sb.Append("  AdAccountId: ").Append(AdAccountId).Append("\n");
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
            if (this.CustomerListId != null) {
                // CustomerListId (string) pattern
                Regex regexCustomerListId = new Regex(@"^\d+$", RegexOptions.CultureInvariant);
                if (!regexCustomerListId.Match(this.CustomerListId).Success)
                {
                    yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for CustomerListId, must match a pattern of " + regexCustomerListId, new [] { "CustomerListId" });
                }
            }

            if (this.VisitorSourceId != null) {
                // VisitorSourceId (string) pattern
                Regex regexVisitorSourceId = new Regex(@"^\d+$", RegexOptions.CultureInvariant);
                if (!regexVisitorSourceId.Match(this.VisitorSourceId).Success)
                {
                    yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for VisitorSourceId, must match a pattern of " + regexVisitorSourceId, new [] { "VisitorSourceId" });
                }
            }

            if (this.AdAccountId != null) {
                // AdAccountId (string) pattern
                Regex regexAdAccountId = new Regex(@"^\d+$", RegexOptions.CultureInvariant);
                if (!regexAdAccountId.Match(this.AdAccountId).Success)
                {
                    yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for AdAccountId, must match a pattern of " + regexAdAccountId, new [] { "AdAccountId" });
                }
            }

            yield break;
        }
    }

}