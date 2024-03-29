<?php
/**
 * AdGroupResponse
 *
 * PHP version 8.1.1
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\Accessor;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the AdGroupResponse model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class AdGroupResponse 
{
        /**
     * Ad group name.
     *
     * @var string|null
     * @SerializedName("name")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $name = null;

    /**
     * Ad group/entity status.
     *
     * @var EntityStatus|null
     * @SerializedName("status")
        * @Accessor(getter="getSerializedStatus")
        * @Type("string")
     */
    protected ?EntityStatus $status = null;

    /**
     * Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
     *
     * @var int|null
     * @SerializedName("budget_in_micro_currency")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected ?int $budgetInMicroCurrency = null;

    /**
     * Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
     *
     * @var int|null
     * @SerializedName("bid_in_micro_currency")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected ?int $bidInMicroCurrency = null;

    /**
     * @var AdGroupCommonOptimizationGoalMetadata|null
     * @SerializedName("optimization_goal_metadata")
     * @Assert\Type("OpenAPI\Server\Model\AdGroupCommonOptimizationGoalMetadata")
     * @Type("OpenAPI\Server\Model\AdGroupCommonOptimizationGoalMetadata")
     */
    protected ?AdGroupCommonOptimizationGoalMetadata $optimizationGoalMetadata = null;

    /**
     * @var BudgetType|null
     * @SerializedName("budget_type")
        * @Accessor(getter="getSerializedBudgetType")
        * @Type("string")
     */
    protected ?BudgetType $budgetType = null;

    /**
     * Ad group start time. Unix timestamp in seconds. Defaults to current time.
     *
     * @var int|null
     * @SerializedName("start_time")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected ?int $startTime = null;

    /**
     * Ad group end time. Unix timestamp in seconds.
     *
     * @var int|null
     * @SerializedName("end_time")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected ?int $endTime = null;

    /**
     * @var TargetingSpec|null
     * @SerializedName("targeting_spec")
     * @Assert\Type("OpenAPI\Server\Model\TargetingSpec")
     * @Type("OpenAPI\Server\Model\TargetingSpec")
     */
    protected ?TargetingSpec $targetingSpec = null;

    /**
     * Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Billable-event\&quot;&gt;billable_event&lt;/a&gt; value. This field **REQUIRES** the &#x60;end_time&#x60; field.
     *
     * @var int|null
     * @SerializedName("lifetime_frequency_cap")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected ?int $lifetimeFrequencyCap = null;

    /**
     * @var AdGroupCommonTrackingUrls|null
     * @SerializedName("tracking_urls")
     * @Assert\Type("OpenAPI\Server\Model\AdGroupCommonTrackingUrls")
     * @Type("OpenAPI\Server\Model\AdGroupCommonTrackingUrls")
     */
    protected ?AdGroupCommonTrackingUrls $trackingUrls = null;

    /**
     * Enable auto-targeting for ad group. Also known as &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/expanded-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;\&quot;expanded targeting\&quot;&lt;/a&gt;.
     *
     * @var bool|null
     * @SerializedName("auto_targeting_enabled")
     * @Assert\Type("bool")
     * @Type("bool")
     */
    protected ?bool $autoTargetingEnabled = null;

    /**
     * &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Placement-group\&quot;&gt;Placement group&lt;/a&gt;.
     *
     * @var PlacementGroupType|null
     * @SerializedName("placement_group")
        * @Accessor(getter="getSerializedPlacementGroup")
        * @Type("string")
     */
    protected ?PlacementGroupType $placementGroup = null;

    /**
     * @var PacingDeliveryType|null
     * @SerializedName("pacing_delivery_type")
        * @Accessor(getter="getSerializedPacingDeliveryType")
        * @Type("string")
     */
    protected ?PacingDeliveryType $pacingDeliveryType = null;

    /**
     * Campaign ID of the ad group.
     *
     * @var string|null
     * @SerializedName("campaign_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^[C]?\\d+$/")
     */
    protected ?string $campaignId = null;

    /**
     * @var ActionType|null
     * @SerializedName("billable_event")
        * @Accessor(getter="getSerializedBillableEvent")
        * @Type("string")
     */
    protected ?ActionType $billableEvent = null;

    /**
     * Bid strategy type
     *
     * @var string|null
     * @SerializedName("bid_strategy_type")
     * @Assert\Choice({ "AUTOMATIC_BID", "MAX_BID", "TARGET_AVG", "null" })
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $bidStrategyType = null;

    /**
     * Ad group ID.
     *
     * @var string|null
     * @SerializedName("id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected ?string $id = null;

    /**
     * Advertiser ID.
     *
     * @var string|null
     * @SerializedName("ad_account_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected ?string $adAccountId = null;

    /**
     * Ad group creation time. Unix timestamp in seconds.
     *
     * @var int|null
     * @SerializedName("created_time")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected ?int $createdTime = null;

    /**
     * Ad group last update time. Unix timestamp in seconds.
     *
     * @var int|null
     * @SerializedName("updated_time")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected ?int $updatedTime = null;

    /**
     * Always \&quot;adgroup\&quot;.
     *
     * @var string|null
     * @SerializedName("type")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $type = 'adgroup';

    /**
     * oCPM learn mode
     *
     * @var string|null
     * @SerializedName("conversion_learning_mode_type")
     * @Assert\Choice({ "NOT_ACTIVE", "ACTIVE", "null" })
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $conversionLearningModeType = null;

    /**
     * Ad group summary status.
     *
     * @var AdGroupSummaryStatus|null
     * @SerializedName("summary_status")
        * @Accessor(getter="getSerializedSummaryStatus")
        * @Type("string")
     */
    protected ?AdGroupSummaryStatus $summaryStatus = null;

    /**
     * Feed Profile ID associated to the adgroup.
     *
     * @var string|null
     * @SerializedName("feed_profile_id")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $feedProfileId = null;

    /**
     * [DCA] The Dynamic creative assets to use for DCA. Dynamic Creative Assembly (DCA) accepts basic creative assets of an ad (image, video, title, call to action, logo etc). Then it automatically generates optimized ad combinations based on these assets.
     *
     * @var 
     * @SerializedName("dca_assets")
     * @Assert\Type("AnyType")
     * @Type("AnyType")
     */
    protected  $dcaAssets = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->name = array_key_exists('name', $data) ? $data['name'] : $this->name;
            $this->status = array_key_exists('status', $data) ? $data['status'] : $this->status;
            $this->budgetInMicroCurrency = array_key_exists('budgetInMicroCurrency', $data) ? $data['budgetInMicroCurrency'] : $this->budgetInMicroCurrency;
            $this->bidInMicroCurrency = array_key_exists('bidInMicroCurrency', $data) ? $data['bidInMicroCurrency'] : $this->bidInMicroCurrency;
            $this->optimizationGoalMetadata = array_key_exists('optimizationGoalMetadata', $data) ? $data['optimizationGoalMetadata'] : $this->optimizationGoalMetadata;
            $this->budgetType = array_key_exists('budgetType', $data) ? $data['budgetType'] : $this->budgetType;
            $this->startTime = array_key_exists('startTime', $data) ? $data['startTime'] : $this->startTime;
            $this->endTime = array_key_exists('endTime', $data) ? $data['endTime'] : $this->endTime;
            $this->targetingSpec = array_key_exists('targetingSpec', $data) ? $data['targetingSpec'] : $this->targetingSpec;
            $this->lifetimeFrequencyCap = array_key_exists('lifetimeFrequencyCap', $data) ? $data['lifetimeFrequencyCap'] : $this->lifetimeFrequencyCap;
            $this->trackingUrls = array_key_exists('trackingUrls', $data) ? $data['trackingUrls'] : $this->trackingUrls;
            $this->autoTargetingEnabled = array_key_exists('autoTargetingEnabled', $data) ? $data['autoTargetingEnabled'] : $this->autoTargetingEnabled;
            $this->placementGroup = array_key_exists('placementGroup', $data) ? $data['placementGroup'] : $this->placementGroup;
            $this->pacingDeliveryType = array_key_exists('pacingDeliveryType', $data) ? $data['pacingDeliveryType'] : $this->pacingDeliveryType;
            $this->campaignId = array_key_exists('campaignId', $data) ? $data['campaignId'] : $this->campaignId;
            $this->billableEvent = array_key_exists('billableEvent', $data) ? $data['billableEvent'] : $this->billableEvent;
            $this->bidStrategyType = array_key_exists('bidStrategyType', $data) ? $data['bidStrategyType'] : $this->bidStrategyType;
            $this->id = array_key_exists('id', $data) ? $data['id'] : $this->id;
            $this->adAccountId = array_key_exists('adAccountId', $data) ? $data['adAccountId'] : $this->adAccountId;
            $this->createdTime = array_key_exists('createdTime', $data) ? $data['createdTime'] : $this->createdTime;
            $this->updatedTime = array_key_exists('updatedTime', $data) ? $data['updatedTime'] : $this->updatedTime;
            $this->type = array_key_exists('type', $data) ? $data['type'] : $this->type;
            $this->conversionLearningModeType = array_key_exists('conversionLearningModeType', $data) ? $data['conversionLearningModeType'] : $this->conversionLearningModeType;
            $this->summaryStatus = array_key_exists('summaryStatus', $data) ? $data['summaryStatus'] : $this->summaryStatus;
            $this->feedProfileId = array_key_exists('feedProfileId', $data) ? $data['feedProfileId'] : $this->feedProfileId;
            $this->dcaAssets = array_key_exists('dcaAssets', $data) ? $data['dcaAssets'] : $this->dcaAssets;
        }
    }

    /**
     * Gets name.
     *
     * @return string|null
     */
    public function getName(): ?string
    {
        return $this->name;
    }



    /**
     * Sets name.
     *
     * @param string|null $name  Ad group name.
     *
     * @return $this
     */
    public function setName(?string $name = null): self
    {
        $this->name = $name;

        return $this;
    }

    /**
     * Gets status.
     *
     * @return EntityStatus|null
     */
    public function getStatus(): ?EntityStatus
    {
        return $this->status;
    }

    /**
    * Gets status for serialization.
    *
    * @return string|null
    */
    public function getSerializedStatus(): string|null
    {
        return $this->status?->value ? (string) $this->status->value : null;
    }


    /**
     * Sets status.
     *
     * @param EntityStatus|null $status  Ad group/entity status.
     *
     * @return $this
     */
    public function setStatus(?EntityStatus $status = null): self
    {
        $this->status = $status;

        return $this;
    }

    /**
     * Gets budgetInMicroCurrency.
     *
     * @return int|null
     */
    public function getBudgetInMicroCurrency(): ?int
    {
        return $this->budgetInMicroCurrency;
    }



    /**
     * Sets budgetInMicroCurrency.
     *
     * @param int|null $budgetInMicroCurrency  Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
     *
     * @return $this
     */
    public function setBudgetInMicroCurrency(?int $budgetInMicroCurrency = null): self
    {
        $this->budgetInMicroCurrency = $budgetInMicroCurrency;

        return $this;
    }

    /**
     * Gets bidInMicroCurrency.
     *
     * @return int|null
     */
    public function getBidInMicroCurrency(): ?int
    {
        return $this->bidInMicroCurrency;
    }



    /**
     * Sets bidInMicroCurrency.
     *
     * @param int|null $bidInMicroCurrency  Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
     *
     * @return $this
     */
    public function setBidInMicroCurrency(?int $bidInMicroCurrency = null): self
    {
        $this->bidInMicroCurrency = $bidInMicroCurrency;

        return $this;
    }

    /**
     * Gets optimizationGoalMetadata.
     *
     * @return AdGroupCommonOptimizationGoalMetadata|null
     */
    public function getOptimizationGoalMetadata(): ?AdGroupCommonOptimizationGoalMetadata
    {
        return $this->optimizationGoalMetadata;
    }



    /**
     * Sets optimizationGoalMetadata.
     *
     * @param AdGroupCommonOptimizationGoalMetadata|null $optimizationGoalMetadata
     *
     * @return $this
     */
    public function setOptimizationGoalMetadata(?AdGroupCommonOptimizationGoalMetadata $optimizationGoalMetadata = null): self
    {
        $this->optimizationGoalMetadata = $optimizationGoalMetadata;

        return $this;
    }

    /**
     * Gets budgetType.
     *
     * @return BudgetType|null
     */
    public function getBudgetType(): ?BudgetType
    {
        return $this->budgetType;
    }

    /**
    * Gets budgetType for serialization.
    *
    * @return string|null
    */
    public function getSerializedBudgetType(): string|null
    {
        return $this->budgetType?->value ? (string) $this->budgetType->value : null;
    }


    /**
     * Sets budgetType.
     *
     * @param BudgetType|null $budgetType
     *
     * @return $this
     */
    public function setBudgetType(?BudgetType $budgetType = null): self
    {
        $this->budgetType = $budgetType;

        return $this;
    }

    /**
     * Gets startTime.
     *
     * @return int|null
     */
    public function getStartTime(): ?int
    {
        return $this->startTime;
    }



    /**
     * Sets startTime.
     *
     * @param int|null $startTime  Ad group start time. Unix timestamp in seconds. Defaults to current time.
     *
     * @return $this
     */
    public function setStartTime(?int $startTime = null): self
    {
        $this->startTime = $startTime;

        return $this;
    }

    /**
     * Gets endTime.
     *
     * @return int|null
     */
    public function getEndTime(): ?int
    {
        return $this->endTime;
    }



    /**
     * Sets endTime.
     *
     * @param int|null $endTime  Ad group end time. Unix timestamp in seconds.
     *
     * @return $this
     */
    public function setEndTime(?int $endTime = null): self
    {
        $this->endTime = $endTime;

        return $this;
    }

    /**
     * Gets targetingSpec.
     *
     * @return TargetingSpec|null
     */
    public function getTargetingSpec(): ?TargetingSpec
    {
        return $this->targetingSpec;
    }



    /**
     * Sets targetingSpec.
     *
     * @param TargetingSpec|null $targetingSpec
     *
     * @return $this
     */
    public function setTargetingSpec(?TargetingSpec $targetingSpec = null): self
    {
        $this->targetingSpec = $targetingSpec;

        return $this;
    }

    /**
     * Gets lifetimeFrequencyCap.
     *
     * @return int|null
     */
    public function getLifetimeFrequencyCap(): ?int
    {
        return $this->lifetimeFrequencyCap;
    }



    /**
     * Sets lifetimeFrequencyCap.
     *
     * @param int|null $lifetimeFrequencyCap  Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field.
     *
     * @return $this
     */
    public function setLifetimeFrequencyCap(?int $lifetimeFrequencyCap = null): self
    {
        $this->lifetimeFrequencyCap = $lifetimeFrequencyCap;

        return $this;
    }

    /**
     * Gets trackingUrls.
     *
     * @return AdGroupCommonTrackingUrls|null
     */
    public function getTrackingUrls(): ?AdGroupCommonTrackingUrls
    {
        return $this->trackingUrls;
    }



    /**
     * Sets trackingUrls.
     *
     * @param AdGroupCommonTrackingUrls|null $trackingUrls
     *
     * @return $this
     */
    public function setTrackingUrls(?AdGroupCommonTrackingUrls $trackingUrls = null): self
    {
        $this->trackingUrls = $trackingUrls;

        return $this;
    }

    /**
     * Gets autoTargetingEnabled.
     *
     * @return bool|null
     */
    public function isAutoTargetingEnabled(): ?bool
    {
        return $this->autoTargetingEnabled;
    }



    /**
     * Sets autoTargetingEnabled.
     *
     * @param bool|null $autoTargetingEnabled  Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
     *
     * @return $this
     */
    public function setAutoTargetingEnabled(?bool $autoTargetingEnabled = null): self
    {
        $this->autoTargetingEnabled = $autoTargetingEnabled;

        return $this;
    }

    /**
     * Gets placementGroup.
     *
     * @return PlacementGroupType|null
     */
    public function getPlacementGroup(): ?PlacementGroupType
    {
        return $this->placementGroup;
    }

    /**
    * Gets placementGroup for serialization.
    *
    * @return string|null
    */
    public function getSerializedPlacementGroup(): string|null
    {
        return $this->placementGroup?->value ? (string) $this->placementGroup->value : null;
    }


    /**
     * Sets placementGroup.
     *
     * @param PlacementGroupType|null $placementGroup  <a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>.
     *
     * @return $this
     */
    public function setPlacementGroup(?PlacementGroupType $placementGroup = null): self
    {
        $this->placementGroup = $placementGroup;

        return $this;
    }

    /**
     * Gets pacingDeliveryType.
     *
     * @return PacingDeliveryType|null
     */
    public function getPacingDeliveryType(): ?PacingDeliveryType
    {
        return $this->pacingDeliveryType;
    }

    /**
    * Gets pacingDeliveryType for serialization.
    *
    * @return string|null
    */
    public function getSerializedPacingDeliveryType(): string|null
    {
        return $this->pacingDeliveryType?->value ? (string) $this->pacingDeliveryType->value : null;
    }


    /**
     * Sets pacingDeliveryType.
     *
     * @param PacingDeliveryType|null $pacingDeliveryType
     *
     * @return $this
     */
    public function setPacingDeliveryType(?PacingDeliveryType $pacingDeliveryType = null): self
    {
        $this->pacingDeliveryType = $pacingDeliveryType;

        return $this;
    }

    /**
     * Gets campaignId.
     *
     * @return string|null
     */
    public function getCampaignId(): ?string
    {
        return $this->campaignId;
    }



    /**
     * Sets campaignId.
     *
     * @param string|null $campaignId  Campaign ID of the ad group.
     *
     * @return $this
     */
    public function setCampaignId(?string $campaignId = null): self
    {
        $this->campaignId = $campaignId;

        return $this;
    }

    /**
     * Gets billableEvent.
     *
     * @return ActionType|null
     */
    public function getBillableEvent(): ?ActionType
    {
        return $this->billableEvent;
    }

    /**
    * Gets billableEvent for serialization.
    *
    * @return string|null
    */
    public function getSerializedBillableEvent(): string|null
    {
        return $this->billableEvent?->value ? (string) $this->billableEvent->value : null;
    }


    /**
     * Sets billableEvent.
     *
     * @param ActionType|null $billableEvent
     *
     * @return $this
     */
    public function setBillableEvent(?ActionType $billableEvent = null): self
    {
        $this->billableEvent = $billableEvent;

        return $this;
    }

    /**
     * Gets bidStrategyType.
     *
     * @return string|null
     */
    public function getBidStrategyType(): ?string
    {
        return $this->bidStrategyType;
    }



    /**
     * Sets bidStrategyType.
     *
     * @param string|null $bidStrategyType  Bid strategy type
     *
     * @return $this
     */
    public function setBidStrategyType(?string $bidStrategyType = null): self
    {
        $this->bidStrategyType = $bidStrategyType;

        return $this;
    }

    /**
     * Gets id.
     *
     * @return string|null
     */
    public function getId(): ?string
    {
        return $this->id;
    }



    /**
     * Sets id.
     *
     * @param string|null $id  Ad group ID.
     *
     * @return $this
     */
    public function setId(?string $id = null): self
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets adAccountId.
     *
     * @return string|null
     */
    public function getAdAccountId(): ?string
    {
        return $this->adAccountId;
    }



    /**
     * Sets adAccountId.
     *
     * @param string|null $adAccountId  Advertiser ID.
     *
     * @return $this
     */
    public function setAdAccountId(?string $adAccountId = null): self
    {
        $this->adAccountId = $adAccountId;

        return $this;
    }

    /**
     * Gets createdTime.
     *
     * @return int|null
     */
    public function getCreatedTime(): ?int
    {
        return $this->createdTime;
    }



    /**
     * Sets createdTime.
     *
     * @param int|null $createdTime  Ad group creation time. Unix timestamp in seconds.
     *
     * @return $this
     */
    public function setCreatedTime(?int $createdTime = null): self
    {
        $this->createdTime = $createdTime;

        return $this;
    }

    /**
     * Gets updatedTime.
     *
     * @return int|null
     */
    public function getUpdatedTime(): ?int
    {
        return $this->updatedTime;
    }



    /**
     * Sets updatedTime.
     *
     * @param int|null $updatedTime  Ad group last update time. Unix timestamp in seconds.
     *
     * @return $this
     */
    public function setUpdatedTime(?int $updatedTime = null): self
    {
        $this->updatedTime = $updatedTime;

        return $this;
    }

    /**
     * Gets type.
     *
     * @return string|null
     */
    public function getType(): ?string
    {
        return $this->type;
    }



    /**
     * Sets type.
     *
     * @param string|null $type  Always \"adgroup\".
     *
     * @return $this
     */
    public function setType(?string $type = null): self
    {
        $this->type = $type;

        return $this;
    }

    /**
     * Gets conversionLearningModeType.
     *
     * @return string|null
     */
    public function getConversionLearningModeType(): ?string
    {
        return $this->conversionLearningModeType;
    }



    /**
     * Sets conversionLearningModeType.
     *
     * @param string|null $conversionLearningModeType  oCPM learn mode
     *
     * @return $this
     */
    public function setConversionLearningModeType(?string $conversionLearningModeType = null): self
    {
        $this->conversionLearningModeType = $conversionLearningModeType;

        return $this;
    }

    /**
     * Gets summaryStatus.
     *
     * @return AdGroupSummaryStatus|null
     */
    public function getSummaryStatus(): ?AdGroupSummaryStatus
    {
        return $this->summaryStatus;
    }

    /**
    * Gets summaryStatus for serialization.
    *
    * @return string|null
    */
    public function getSerializedSummaryStatus(): string|null
    {
        return $this->summaryStatus?->value ? (string) $this->summaryStatus->value : null;
    }


    /**
     * Sets summaryStatus.
     *
     * @param AdGroupSummaryStatus|null $summaryStatus  Ad group summary status.
     *
     * @return $this
     */
    public function setSummaryStatus(?AdGroupSummaryStatus $summaryStatus = null): self
    {
        $this->summaryStatus = $summaryStatus;

        return $this;
    }

    /**
     * Gets feedProfileId.
     *
     * @return string|null
     */
    public function getFeedProfileId(): ?string
    {
        return $this->feedProfileId;
    }



    /**
     * Sets feedProfileId.
     *
     * @param string|null $feedProfileId  Feed Profile ID associated to the adgroup.
     *
     * @return $this
     */
    public function setFeedProfileId(?string $feedProfileId = null): self
    {
        $this->feedProfileId = $feedProfileId;

        return $this;
    }

    /**
     * Gets dcaAssets.
     *
     * @return 
     */
    public function getDcaAssets(): 
    {
        return $this->dcaAssets;
    }



    /**
     * Sets dcaAssets.
     *
     * @param  $dcaAssets  [DCA] The Dynamic creative assets to use for DCA. Dynamic Creative Assembly (DCA) accepts basic creative assets of an ad (image, video, title, call to action, logo etc). Then it automatically generates optimized ad combinations based on these assets.
     *
     * @return $this
     */
    public function setDcaAssets( $dcaAssets = null): self
    {
        $this->dcaAssets = $dcaAssets;

        return $this;
    }
}


