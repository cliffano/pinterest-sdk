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
    /// AdGroupCommon
    /// </summary>
    [DataContract(Name = "AdGroupCommon")]
    public partial class AdGroupCommon : IValidatableObject
    {

        /// <summary>
        /// Ad group/entity status.
        /// </summary>
        /// <value>Ad group/entity status.</value>
        [DataMember(Name = "status", EmitDefaultValue = false)]
        public EntityStatus? Status { get; set; }

        /// <summary>
        /// Gets or Sets BudgetType
        /// </summary>
        [DataMember(Name = "budget_type", EmitDefaultValue = false)]
        public BudgetType? BudgetType { get; set; }

        /// <summary>
        /// &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Placement-group\&quot;&gt;Placement group&lt;/a&gt;.
        /// </summary>
        /// <value>&lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Placement-group\&quot;&gt;Placement group&lt;/a&gt;.</value>
        [DataMember(Name = "placement_group", EmitDefaultValue = false)]
        public PlacementGroupType? PlacementGroup { get; set; }

        /// <summary>
        /// Gets or Sets PacingDeliveryType
        /// </summary>
        [DataMember(Name = "pacing_delivery_type", EmitDefaultValue = false)]
        public PacingDeliveryType? PacingDeliveryType { get; set; }

        /// <summary>
        /// Gets or Sets BillableEvent
        /// </summary>
        [DataMember(Name = "billable_event", EmitDefaultValue = false)]
        public ActionType? BillableEvent { get; set; }
        /// <summary>
        /// Bid strategy type
        /// </summary>
        /// <value>Bid strategy type</value>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum BidStrategyTypeEnum
        {
            /// <summary>
            /// Enum AUTOMATICBID for value: AUTOMATIC_BID
            /// </summary>
            [EnumMember(Value = "AUTOMATIC_BID")]
            AUTOMATICBID = 1,

            /// <summary>
            /// Enum MAXBID for value: MAX_BID
            /// </summary>
            [EnumMember(Value = "MAX_BID")]
            MAXBID = 2,

            /// <summary>
            /// Enum TARGETAVG for value: TARGET_AVG
            /// </summary>
            [EnumMember(Value = "TARGET_AVG")]
            TARGETAVG = 3,

            /// <summary>
            /// Enum Null for value: null
            /// </summary>
            [EnumMember(Value = "null")]
            Null = 4
        }


        /// <summary>
        /// Bid strategy type
        /// </summary>
        /// <value>Bid strategy type</value>
        /// <example>MAX_BID</example>
        [DataMember(Name = "bid_strategy_type", EmitDefaultValue = true)]
        public BidStrategyTypeEnum? BidStrategyType { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="AdGroupCommon" /> class.
        /// </summary>
        /// <param name="name">Ad group name..</param>
        /// <param name="status">Ad group/entity status..</param>
        /// <param name="budgetInMicroCurrency">Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups..</param>
        /// <param name="bidInMicroCurrency">Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC..</param>
        /// <param name="optimizationGoalMetadata">optimizationGoalMetadata.</param>
        /// <param name="budgetType">budgetType.</param>
        /// <param name="startTime">Ad group start time. Unix timestamp in seconds. Defaults to current time..</param>
        /// <param name="endTime">Ad group end time. Unix timestamp in seconds..</param>
        /// <param name="targetingSpec">targetingSpec.</param>
        /// <param name="lifetimeFrequencyCap">Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Billable-event\&quot;&gt;billable_event&lt;/a&gt; value. This field **REQUIRES** the &#x60;end_time&#x60; field..</param>
        /// <param name="trackingUrls">trackingUrls.</param>
        /// <param name="autoTargetingEnabled">Enable auto-targeting for ad group. Also known as &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/expanded-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;\&quot;expanded targeting\&quot;&lt;/a&gt;..</param>
        /// <param name="placementGroup">&lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Placement-group\&quot;&gt;Placement group&lt;/a&gt;..</param>
        /// <param name="pacingDeliveryType">pacingDeliveryType.</param>
        /// <param name="campaignId">Campaign ID of the ad group..</param>
        /// <param name="billableEvent">billableEvent.</param>
        /// <param name="bidStrategyType">Bid strategy type.</param>
        public AdGroupCommon(string name = default(string), EntityStatus? status = default(EntityStatus?), int? budgetInMicroCurrency = default(int?), int? bidInMicroCurrency = default(int?), AdGroupCommonOptimizationGoalMetadata optimizationGoalMetadata = default(AdGroupCommonOptimizationGoalMetadata), BudgetType? budgetType = default(BudgetType?), int? startTime = default(int?), int? endTime = default(int?), TargetingSpec targetingSpec = default(TargetingSpec), int lifetimeFrequencyCap = default(int), AdGroupCommonTrackingUrls trackingUrls = default(AdGroupCommonTrackingUrls), bool? autoTargetingEnabled = default(bool?), PlacementGroupType? placementGroup = default(PlacementGroupType?), PacingDeliveryType? pacingDeliveryType = default(PacingDeliveryType?), string campaignId = default(string), ActionType? billableEvent = default(ActionType?), BidStrategyTypeEnum? bidStrategyType = default(BidStrategyTypeEnum?))
        {
            this.Name = name;
            this.Status = status;
            this.BudgetInMicroCurrency = budgetInMicroCurrency;
            this.BidInMicroCurrency = bidInMicroCurrency;
            this.OptimizationGoalMetadata = optimizationGoalMetadata;
            this.BudgetType = budgetType;
            this.StartTime = startTime;
            this.EndTime = endTime;
            this.TargetingSpec = targetingSpec;
            this.LifetimeFrequencyCap = lifetimeFrequencyCap;
            this.TrackingUrls = trackingUrls;
            this.AutoTargetingEnabled = autoTargetingEnabled;
            this.PlacementGroup = placementGroup;
            this.PacingDeliveryType = pacingDeliveryType;
            this.CampaignId = campaignId;
            this.BillableEvent = billableEvent;
            this.BidStrategyType = bidStrategyType;
        }

        /// <summary>
        /// Ad group name.
        /// </summary>
        /// <value>Ad group name.</value>
        /// <example>Ad Group For Pin: 687195905986</example>
        [DataMember(Name = "name", EmitDefaultValue = false)]
        public string Name { get; set; }

        /// <summary>
        /// Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
        /// </summary>
        /// <value>Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.</value>
        /// <example>5000000</example>
        [DataMember(Name = "budget_in_micro_currency", EmitDefaultValue = true)]
        public int? BudgetInMicroCurrency { get; set; }

        /// <summary>
        /// Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
        /// </summary>
        /// <value>Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.</value>
        /// <example>5000000</example>
        [DataMember(Name = "bid_in_micro_currency", EmitDefaultValue = true)]
        public int? BidInMicroCurrency { get; set; }

        /// <summary>
        /// Gets or Sets OptimizationGoalMetadata
        /// </summary>
        [DataMember(Name = "optimization_goal_metadata", EmitDefaultValue = true)]
        public AdGroupCommonOptimizationGoalMetadata OptimizationGoalMetadata { get; set; }

        /// <summary>
        /// Ad group start time. Unix timestamp in seconds. Defaults to current time.
        /// </summary>
        /// <value>Ad group start time. Unix timestamp in seconds. Defaults to current time.</value>
        /// <example>5686848000</example>
        [DataMember(Name = "start_time", EmitDefaultValue = true)]
        public int? StartTime { get; set; }

        /// <summary>
        /// Ad group end time. Unix timestamp in seconds.
        /// </summary>
        /// <value>Ad group end time. Unix timestamp in seconds.</value>
        /// <example>5705424000</example>
        [DataMember(Name = "end_time", EmitDefaultValue = true)]
        public int? EndTime { get; set; }

        /// <summary>
        /// Gets or Sets TargetingSpec
        /// </summary>
        [DataMember(Name = "targeting_spec", EmitDefaultValue = false)]
        public TargetingSpec TargetingSpec { get; set; }

        /// <summary>
        /// Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Billable-event\&quot;&gt;billable_event&lt;/a&gt; value. This field **REQUIRES** the &#x60;end_time&#x60; field.
        /// </summary>
        /// <value>Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Billable-event\&quot;&gt;billable_event&lt;/a&gt; value. This field **REQUIRES** the &#x60;end_time&#x60; field.</value>
        /// <example>100</example>
        [DataMember(Name = "lifetime_frequency_cap", EmitDefaultValue = false)]
        public int LifetimeFrequencyCap { get; set; }

        /// <summary>
        /// Gets or Sets TrackingUrls
        /// </summary>
        [DataMember(Name = "tracking_urls", EmitDefaultValue = true)]
        public AdGroupCommonTrackingUrls TrackingUrls { get; set; }

        /// <summary>
        /// Enable auto-targeting for ad group. Also known as &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/expanded-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;\&quot;expanded targeting\&quot;&lt;/a&gt;.
        /// </summary>
        /// <value>Enable auto-targeting for ad group. Also known as &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/expanded-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;\&quot;expanded targeting\&quot;&lt;/a&gt;.</value>
        /// <example>true</example>
        [DataMember(Name = "auto_targeting_enabled", EmitDefaultValue = true)]
        public bool? AutoTargetingEnabled { get; set; }

        /// <summary>
        /// Campaign ID of the ad group.
        /// </summary>
        /// <value>Campaign ID of the ad group.</value>
        /// <example>626736533506</example>
        [DataMember(Name = "campaign_id", EmitDefaultValue = false)]
        public string CampaignId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class AdGroupCommon {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  BudgetInMicroCurrency: ").Append(BudgetInMicroCurrency).Append("\n");
            sb.Append("  BidInMicroCurrency: ").Append(BidInMicroCurrency).Append("\n");
            sb.Append("  OptimizationGoalMetadata: ").Append(OptimizationGoalMetadata).Append("\n");
            sb.Append("  BudgetType: ").Append(BudgetType).Append("\n");
            sb.Append("  StartTime: ").Append(StartTime).Append("\n");
            sb.Append("  EndTime: ").Append(EndTime).Append("\n");
            sb.Append("  TargetingSpec: ").Append(TargetingSpec).Append("\n");
            sb.Append("  LifetimeFrequencyCap: ").Append(LifetimeFrequencyCap).Append("\n");
            sb.Append("  TrackingUrls: ").Append(TrackingUrls).Append("\n");
            sb.Append("  AutoTargetingEnabled: ").Append(AutoTargetingEnabled).Append("\n");
            sb.Append("  PlacementGroup: ").Append(PlacementGroup).Append("\n");
            sb.Append("  PacingDeliveryType: ").Append(PacingDeliveryType).Append("\n");
            sb.Append("  CampaignId: ").Append(CampaignId).Append("\n");
            sb.Append("  BillableEvent: ").Append(BillableEvent).Append("\n");
            sb.Append("  BidStrategyType: ").Append(BidStrategyType).Append("\n");
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
            if (this.CampaignId != null) {
                // CampaignId (string) pattern
                Regex regexCampaignId = new Regex(@"^[C]?\d+$", RegexOptions.CultureInvariant);
                if (!regexCampaignId.Match(this.CampaignId).Success)
                {
                    yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for CampaignId, must match a pattern of " + regexCampaignId, new [] { "CampaignId" });
                }
            }

            yield break;
        }
    }

}