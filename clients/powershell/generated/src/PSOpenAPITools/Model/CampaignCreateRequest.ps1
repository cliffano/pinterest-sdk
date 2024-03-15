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

.PARAMETER AdAccountId
Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
.PARAMETER Name
Campaign name.
.PARAMETER Status
No description available.
.PARAMETER LifetimeSpendCap
Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and ""daily_spend_cap"" cannot be set at the same time.
.PARAMETER DailySpendCap
Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and ""lifetime_spend_cap"" cannot be set at the same time.
.PARAMETER OrderLineId
Order line ID that appears on the invoice.
.PARAMETER TrackingUrls
No description available.
.PARAMETER StartTime
Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
.PARAMETER EndTime
Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
.PARAMETER SummaryStatus
No description available.
.PARAMETER IsFlexibleDailyBudgets
Determine if a campaign has flexible daily budgets setup.
.PARAMETER DefaultAdGroupBudgetInMicroCurrency
When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account.
.PARAMETER IsAutomatedCampaign
Specifies whether the campaign was created in the automated campaign flow
.PARAMETER ObjectiveType
No description available.
.OUTPUTS

CampaignCreateRequest<PSCustomObject>
#>

function Initialize-CampaignCreateRequest {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^\d+$")]
        [String]
        ${AdAccountId},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Name},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("ACTIVE", "PAUSED", "ARCHIVED", "DRAFT", "DELETED_DRAFT")]
        [PSCustomObject]
        ${Status} = "ACTIVE",
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${LifetimeSpendCap},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${DailySpendCap},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^\d+$")]
        [String]
        ${OrderLineId},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${TrackingUrls},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${StartTime},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${EndTime},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("RUNNING", "PAUSED", "NOT_STARTED", "COMPLETED", "ADVERTISER_DISABLED", "ARCHIVED", "DRAFT", "DELETED_DRAFT")]
        [PSCustomObject]
        ${SummaryStatus},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Boolean]]
        ${IsFlexibleDailyBudgets} = $false,
        [Parameter(Position = 11, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${DefaultAdGroupBudgetInMicroCurrency},
        [Parameter(Position = 12, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Boolean]]
        ${IsAutomatedCampaign} = $false,
        [Parameter(Position = 13, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("AWARENESS", "CONSIDERATION", "VIDEO_VIEW", "WEB_CONVERSION", "CATALOG_SALES", "WEB_SESSIONS")]
        [PSCustomObject]
        ${ObjectiveType}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => CampaignCreateRequest' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $AdAccountId) {
            throw "invalid value for 'AdAccountId', 'AdAccountId' cannot be null."
        }

        if ($null -eq $Name) {
            throw "invalid value for 'Name', 'Name' cannot be null."
        }

        if ($null -eq $ObjectiveType) {
            throw "invalid value for 'ObjectiveType', 'ObjectiveType' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "ad_account_id" = ${AdAccountId}
            "name" = ${Name}
            "status" = ${Status}
            "lifetime_spend_cap" = ${LifetimeSpendCap}
            "daily_spend_cap" = ${DailySpendCap}
            "order_line_id" = ${OrderLineId}
            "tracking_urls" = ${TrackingUrls}
            "start_time" = ${StartTime}
            "end_time" = ${EndTime}
            "summary_status" = ${SummaryStatus}
            "is_flexible_daily_budgets" = ${IsFlexibleDailyBudgets}
            "default_ad_group_budget_in_micro_currency" = ${DefaultAdGroupBudgetInMicroCurrency}
            "is_automated_campaign" = ${IsAutomatedCampaign}
            "objective_type" = ${ObjectiveType}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to CampaignCreateRequest<PSCustomObject>

.DESCRIPTION

Convert from JSON to CampaignCreateRequest<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

CampaignCreateRequest<PSCustomObject>
#>
function ConvertFrom-JsonToCampaignCreateRequest {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => CampaignCreateRequest' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in CampaignCreateRequest
        $AllProperties = ("ad_account_id", "name", "status", "lifetime_spend_cap", "daily_spend_cap", "order_line_id", "tracking_urls", "start_time", "end_time", "summary_status", "is_flexible_daily_budgets", "default_ad_group_budget_in_micro_currency", "is_automated_campaign", "objective_type")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'ad_account_id' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "ad_account_id"))) {
            throw "Error! JSON cannot be serialized due to the required property 'ad_account_id' missing."
        } else {
            $AdAccountId = $JsonParameters.PSobject.Properties["ad_account_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "name"))) {
            throw "Error! JSON cannot be serialized due to the required property 'name' missing."
        } else {
            $Name = $JsonParameters.PSobject.Properties["name"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "objective_type"))) {
            throw "Error! JSON cannot be serialized due to the required property 'objective_type' missing."
        } else {
            $ObjectiveType = $JsonParameters.PSobject.Properties["objective_type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "status"))) { #optional property not found
            $Status = $null
        } else {
            $Status = $JsonParameters.PSobject.Properties["status"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "lifetime_spend_cap"))) { #optional property not found
            $LifetimeSpendCap = $null
        } else {
            $LifetimeSpendCap = $JsonParameters.PSobject.Properties["lifetime_spend_cap"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "daily_spend_cap"))) { #optional property not found
            $DailySpendCap = $null
        } else {
            $DailySpendCap = $JsonParameters.PSobject.Properties["daily_spend_cap"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "order_line_id"))) { #optional property not found
            $OrderLineId = $null
        } else {
            $OrderLineId = $JsonParameters.PSobject.Properties["order_line_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "tracking_urls"))) { #optional property not found
            $TrackingUrls = $null
        } else {
            $TrackingUrls = $JsonParameters.PSobject.Properties["tracking_urls"].value
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

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "summary_status"))) { #optional property not found
            $SummaryStatus = $null
        } else {
            $SummaryStatus = $JsonParameters.PSobject.Properties["summary_status"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "is_flexible_daily_budgets"))) { #optional property not found
            $IsFlexibleDailyBudgets = $null
        } else {
            $IsFlexibleDailyBudgets = $JsonParameters.PSobject.Properties["is_flexible_daily_budgets"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "default_ad_group_budget_in_micro_currency"))) { #optional property not found
            $DefaultAdGroupBudgetInMicroCurrency = $null
        } else {
            $DefaultAdGroupBudgetInMicroCurrency = $JsonParameters.PSobject.Properties["default_ad_group_budget_in_micro_currency"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "is_automated_campaign"))) { #optional property not found
            $IsAutomatedCampaign = $null
        } else {
            $IsAutomatedCampaign = $JsonParameters.PSobject.Properties["is_automated_campaign"].value
        }

        $PSO = [PSCustomObject]@{
            "ad_account_id" = ${AdAccountId}
            "name" = ${Name}
            "status" = ${Status}
            "lifetime_spend_cap" = ${LifetimeSpendCap}
            "daily_spend_cap" = ${DailySpendCap}
            "order_line_id" = ${OrderLineId}
            "tracking_urls" = ${TrackingUrls}
            "start_time" = ${StartTime}
            "end_time" = ${EndTime}
            "summary_status" = ${SummaryStatus}
            "is_flexible_daily_budgets" = ${IsFlexibleDailyBudgets}
            "default_ad_group_budget_in_micro_currency" = ${DefaultAdGroupBudgetInMicroCurrency}
            "is_automated_campaign" = ${IsAutomatedCampaign}
            "objective_type" = ${ObjectiveType}
        }

        return $PSO
    }

}
