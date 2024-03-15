#
# Pinterest REST API
# Pinterest's REST API
# Version: 5.12.0
# Contact: blah+oapicf@cliffano.com
# Generated by OpenAPI Generator: https://openapi-generator.tech
#

<#
.SYNOPSIS

No summary available.

.DESCRIPTION

No description available.

.PARAMETER Name
Ad group name.
.PARAMETER Status
Ad group/entity status.
.PARAMETER BudgetInMicroCurrency
Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
.PARAMETER BidInMicroCurrency
Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
.PARAMETER OptimizationGoalMetadata
No description available.
.PARAMETER BudgetType
No description available.
.PARAMETER StartTime
Ad group start time. Unix timestamp in seconds. Defaults to current time.
.PARAMETER EndTime
Ad group end time. Unix timestamp in seconds.
.PARAMETER TargetingSpec
No description available.
.PARAMETER LifetimeFrequencyCap
Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=""https://developers.pinterest.com/docs/redoc/#section/Billable-event"">billable_event</a> value. This field **REQUIRES** the `end_time` field.
.PARAMETER TrackingUrls
No description available.
.PARAMETER AutoTargetingEnabled
Enable auto-targeting for ad group. Also known as <a href=""https://help.pinterest.com/en/business/article/expanded-targeting"" target=""_blank"">""expanded targeting""</a>.
.PARAMETER PlacementGroup
<a href=""https://developers.pinterest.com/docs/redoc/#section/Placement-group"">Placement group</a>.
.PARAMETER PacingDeliveryType
No description available.
.PARAMETER CampaignId
Campaign ID of the ad group.
.PARAMETER BillableEvent
No description available.
.PARAMETER BidStrategyType
Bid strategy type
.PARAMETER Id
Ad group ID.
.PARAMETER AdAccountId
Advertiser ID.
.PARAMETER CreatedTime
Ad group creation time. Unix timestamp in seconds.
.PARAMETER UpdatedTime
Ad group last update time. Unix timestamp in seconds.
.PARAMETER Type
Always ""adgroup"".
.PARAMETER ConversionLearningModeType
oCPM learn mode
.PARAMETER SummaryStatus
Ad group summary status.
.PARAMETER FeedProfileId
Feed Profile ID associated to the adgroup.
.PARAMETER DcaAssets
[DCA] The Dynamic creative assets to use for DCA. Dynamic Creative Assembly (DCA) accepts basic creative assets of an ad (image, video, title, call to action, logo etc). Then it automatically generates optimized ad combinations based on these assets.
.OUTPUTS

AdGroupResponse<PSCustomObject>
#>

function Initialize-AdGroupResponse {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Name},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("ACTIVE", "PAUSED", "ARCHIVED", "DRAFT", "DELETED_DRAFT")]
        [PSCustomObject]
        ${Status},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${BudgetInMicroCurrency},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${BidInMicroCurrency},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${OptimizationGoalMetadata},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("DAILY", "LIFETIME", "CBO_ADGROUP")]
        [PSCustomObject]
        ${BudgetType},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${StartTime},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${EndTime},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${TargetingSpec},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${LifetimeFrequencyCap},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${TrackingUrls},
        [Parameter(Position = 11, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Boolean]]
        ${AutoTargetingEnabled},
        [Parameter(Position = 12, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("ALL", "SEARCH", "BROWSE", "OTHER")]
        [PSCustomObject]
        ${PlacementGroup},
        [Parameter(Position = 13, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("STANDARD", "ACCELERATED")]
        [PSCustomObject]
        ${PacingDeliveryType},
        [Parameter(Position = 14, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^[C]?\d+$")]
        [String]
        ${CampaignId},
        [Parameter(Position = 15, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("CLICKTHROUGH", "IMPRESSION", "VIDEO_V_50_MRC")]
        [PSCustomObject]
        ${BillableEvent},
        [Parameter(Position = 16, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("AUTOMATIC_BID", "MAX_BID", "TARGET_AVG", "")]
        [String]
        ${BidStrategyType},
        [Parameter(Position = 17, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^\d+$")]
        [String]
        ${Id},
        [Parameter(Position = 18, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^\d+$")]
        [String]
        ${AdAccountId},
        [Parameter(Position = 19, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${CreatedTime},
        [Parameter(Position = 20, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${UpdatedTime},
        [Parameter(Position = 21, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Type} = "adgroup",
        [Parameter(Position = 22, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("NOT_ACTIVE", "ACTIVE", "")]
        [String]
        ${ConversionLearningModeType},
        [Parameter(Position = 23, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("RUNNING", "PAUSED", "NOT_STARTED", "COMPLETED", "ADVERTISER_DISABLED", "ARCHIVED", "DRAFT", "DELETED_DRAFT")]
        [PSCustomObject]
        ${SummaryStatus},
        [Parameter(Position = 24, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${FeedProfileId},
        [Parameter(Position = 25, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${DcaAssets}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => AdGroupResponse' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "name" = ${Name}
            "status" = ${Status}
            "budget_in_micro_currency" = ${BudgetInMicroCurrency}
            "bid_in_micro_currency" = ${BidInMicroCurrency}
            "optimization_goal_metadata" = ${OptimizationGoalMetadata}
            "budget_type" = ${BudgetType}
            "start_time" = ${StartTime}
            "end_time" = ${EndTime}
            "targeting_spec" = ${TargetingSpec}
            "lifetime_frequency_cap" = ${LifetimeFrequencyCap}
            "tracking_urls" = ${TrackingUrls}
            "auto_targeting_enabled" = ${AutoTargetingEnabled}
            "placement_group" = ${PlacementGroup}
            "pacing_delivery_type" = ${PacingDeliveryType}
            "campaign_id" = ${CampaignId}
            "billable_event" = ${BillableEvent}
            "bid_strategy_type" = ${BidStrategyType}
            "id" = ${Id}
            "ad_account_id" = ${AdAccountId}
            "created_time" = ${CreatedTime}
            "updated_time" = ${UpdatedTime}
            "type" = ${Type}
            "conversion_learning_mode_type" = ${ConversionLearningModeType}
            "summary_status" = ${SummaryStatus}
            "feed_profile_id" = ${FeedProfileId}
            "dca_assets" = ${DcaAssets}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to AdGroupResponse<PSCustomObject>

.DESCRIPTION

Convert from JSON to AdGroupResponse<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

AdGroupResponse<PSCustomObject>
#>
function ConvertFrom-JsonToAdGroupResponse {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => AdGroupResponse' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in AdGroupResponse
        $AllProperties = ("name", "status", "budget_in_micro_currency", "bid_in_micro_currency", "optimization_goal_metadata", "budget_type", "start_time", "end_time", "targeting_spec", "lifetime_frequency_cap", "tracking_urls", "auto_targeting_enabled", "placement_group", "pacing_delivery_type", "campaign_id", "billable_event", "bid_strategy_type", "id", "ad_account_id", "created_time", "updated_time", "type", "conversion_learning_mode_type", "summary_status", "feed_profile_id", "dca_assets")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "name"))) { #optional property not found
            $Name = $null
        } else {
            $Name = $JsonParameters.PSobject.Properties["name"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "status"))) { #optional property not found
            $Status = $null
        } else {
            $Status = $JsonParameters.PSobject.Properties["status"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "budget_in_micro_currency"))) { #optional property not found
            $BudgetInMicroCurrency = $null
        } else {
            $BudgetInMicroCurrency = $JsonParameters.PSobject.Properties["budget_in_micro_currency"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "bid_in_micro_currency"))) { #optional property not found
            $BidInMicroCurrency = $null
        } else {
            $BidInMicroCurrency = $JsonParameters.PSobject.Properties["bid_in_micro_currency"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "optimization_goal_metadata"))) { #optional property not found
            $OptimizationGoalMetadata = $null
        } else {
            $OptimizationGoalMetadata = $JsonParameters.PSobject.Properties["optimization_goal_metadata"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "budget_type"))) { #optional property not found
            $BudgetType = $null
        } else {
            $BudgetType = $JsonParameters.PSobject.Properties["budget_type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "start_time"))) { #optional property not found
            $StartTime = $null
        } else {
            $StartTime = $JsonParameters.PSobject.Properties["start_time"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "end_time"))) { #optional property not found
            $EndTime = $null
        } else {
            $EndTime = $JsonParameters.PSobject.Properties["end_time"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "targeting_spec"))) { #optional property not found
            $TargetingSpec = $null
        } else {
            $TargetingSpec = $JsonParameters.PSobject.Properties["targeting_spec"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "lifetime_frequency_cap"))) { #optional property not found
            $LifetimeFrequencyCap = $null
        } else {
            $LifetimeFrequencyCap = $JsonParameters.PSobject.Properties["lifetime_frequency_cap"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "tracking_urls"))) { #optional property not found
            $TrackingUrls = $null
        } else {
            $TrackingUrls = $JsonParameters.PSobject.Properties["tracking_urls"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "auto_targeting_enabled"))) { #optional property not found
            $AutoTargetingEnabled = $null
        } else {
            $AutoTargetingEnabled = $JsonParameters.PSobject.Properties["auto_targeting_enabled"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "placement_group"))) { #optional property not found
            $PlacementGroup = $null
        } else {
            $PlacementGroup = $JsonParameters.PSobject.Properties["placement_group"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "pacing_delivery_type"))) { #optional property not found
            $PacingDeliveryType = $null
        } else {
            $PacingDeliveryType = $JsonParameters.PSobject.Properties["pacing_delivery_type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "campaign_id"))) { #optional property not found
            $CampaignId = $null
        } else {
            $CampaignId = $JsonParameters.PSobject.Properties["campaign_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "billable_event"))) { #optional property not found
            $BillableEvent = $null
        } else {
            $BillableEvent = $JsonParameters.PSobject.Properties["billable_event"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "bid_strategy_type"))) { #optional property not found
            $BidStrategyType = $null
        } else {
            $BidStrategyType = $JsonParameters.PSobject.Properties["bid_strategy_type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "id"))) { #optional property not found
            $Id = $null
        } else {
            $Id = $JsonParameters.PSobject.Properties["id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "ad_account_id"))) { #optional property not found
            $AdAccountId = $null
        } else {
            $AdAccountId = $JsonParameters.PSobject.Properties["ad_account_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "created_time"))) { #optional property not found
            $CreatedTime = $null
        } else {
            $CreatedTime = $JsonParameters.PSobject.Properties["created_time"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "updated_time"))) { #optional property not found
            $UpdatedTime = $null
        } else {
            $UpdatedTime = $JsonParameters.PSobject.Properties["updated_time"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "type"))) { #optional property not found
            $Type = $null
        } else {
            $Type = $JsonParameters.PSobject.Properties["type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "conversion_learning_mode_type"))) { #optional property not found
            $ConversionLearningModeType = $null
        } else {
            $ConversionLearningModeType = $JsonParameters.PSobject.Properties["conversion_learning_mode_type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "summary_status"))) { #optional property not found
            $SummaryStatus = $null
        } else {
            $SummaryStatus = $JsonParameters.PSobject.Properties["summary_status"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "feed_profile_id"))) { #optional property not found
            $FeedProfileId = $null
        } else {
            $FeedProfileId = $JsonParameters.PSobject.Properties["feed_profile_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "dca_assets"))) { #optional property not found
            $DcaAssets = $null
        } else {
            $DcaAssets = $JsonParameters.PSobject.Properties["dca_assets"].value
        }

        $PSO = [PSCustomObject]@{
            "name" = ${Name}
            "status" = ${Status}
            "budget_in_micro_currency" = ${BudgetInMicroCurrency}
            "bid_in_micro_currency" = ${BidInMicroCurrency}
            "optimization_goal_metadata" = ${OptimizationGoalMetadata}
            "budget_type" = ${BudgetType}
            "start_time" = ${StartTime}
            "end_time" = ${EndTime}
            "targeting_spec" = ${TargetingSpec}
            "lifetime_frequency_cap" = ${LifetimeFrequencyCap}
            "tracking_urls" = ${TrackingUrls}
            "auto_targeting_enabled" = ${AutoTargetingEnabled}
            "placement_group" = ${PlacementGroup}
            "pacing_delivery_type" = ${PacingDeliveryType}
            "campaign_id" = ${CampaignId}
            "billable_event" = ${BillableEvent}
            "bid_strategy_type" = ${BidStrategyType}
            "id" = ${Id}
            "ad_account_id" = ${AdAccountId}
            "created_time" = ${CreatedTime}
            "updated_time" = ${UpdatedTime}
            "type" = ${Type}
            "conversion_learning_mode_type" = ${ConversionLearningModeType}
            "summary_status" = ${SummaryStatus}
            "feed_profile_id" = ${FeedProfileId}
            "dca_assets" = ${DcaAssets}
        }

        return $PSO
    }

}

