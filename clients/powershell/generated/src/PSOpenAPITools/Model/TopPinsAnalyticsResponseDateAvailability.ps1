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

.PARAMETER LatestAvailableTimestamp
No description available.
.PARAMETER IsRealtime
No description available.
.OUTPUTS

TopPinsAnalyticsResponseDateAvailability<PSCustomObject>
#>

function Initialize-TopPinsAnalyticsResponseDateAvailability {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Decimal]]
        ${LatestAvailableTimestamp},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Boolean]]
        ${IsRealtime}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => TopPinsAnalyticsResponseDateAvailability' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "latest_available_timestamp" = ${LatestAvailableTimestamp}
            "is_realtime" = ${IsRealtime}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to TopPinsAnalyticsResponseDateAvailability<PSCustomObject>

.DESCRIPTION

Convert from JSON to TopPinsAnalyticsResponseDateAvailability<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

TopPinsAnalyticsResponseDateAvailability<PSCustomObject>
#>
function ConvertFrom-JsonToTopPinsAnalyticsResponseDateAvailability {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => TopPinsAnalyticsResponseDateAvailability' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in TopPinsAnalyticsResponseDateAvailability
        $AllProperties = ("latest_available_timestamp", "is_realtime")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "latest_available_timestamp"))) { #optional property not found
            $LatestAvailableTimestamp = $null
        } else {
            $LatestAvailableTimestamp = $JsonParameters.PSobject.Properties["latest_available_timestamp"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "is_realtime"))) { #optional property not found
            $IsRealtime = $null
        } else {
            $IsRealtime = $JsonParameters.PSobject.Properties["is_realtime"].value
        }

        $PSO = [PSCustomObject]@{
            "latest_available_timestamp" = ${LatestAvailableTimestamp}
            "is_realtime" = ${IsRealtime}
        }

        return $PSO
    }

}
