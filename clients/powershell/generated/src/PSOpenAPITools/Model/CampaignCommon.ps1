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

Campaign Data

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
.OUTPUTS

CampaignCommon<PSCustomObject>
#>

function Initialize-CampaignCommon {
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
        ${Status},
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
        ${SummaryStatus}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => CampaignCommon' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


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
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to CampaignCommon<PSCustomObject>

.DESCRIPTION

Convert from JSON to CampaignCommon<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

CampaignCommon<PSCustomObject>
#>
function ConvertFrom-JsonToCampaignCommon {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => CampaignCommon' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in CampaignCommon
        $AllProperties = ("ad_account_id", "name", "status", "lifetime_spend_cap", "daily_spend_cap", "order_line_id", "tracking_urls", "start_time", "end_time", "summary_status")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "ad_account_id"))) { #optional property not found
            $AdAccountId = $null
        } else {
            $AdAccountId = $JsonParameters.PSobject.Properties["ad_account_id"].value
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
        }

        return $PSO
    }

}

