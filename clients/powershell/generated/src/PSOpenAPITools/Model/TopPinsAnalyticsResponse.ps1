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

.PARAMETER DateAvailability
No description available.
.PARAMETER Pins
No description available.
.PARAMETER SortBy
No description available.
.OUTPUTS

TopPinsAnalyticsResponse<PSCustomObject>
#>

function Initialize-TopPinsAnalyticsResponse {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${DateAvailability},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${Pins},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("ENGAGEMENT", "SAVE", "IMPRESSION", "OUTBOUND_CLICK", "PIN_CLICK")]
        [String]
        ${SortBy}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => TopPinsAnalyticsResponse' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "date_availability" = ${DateAvailability}
            "pins" = ${Pins}
            "sort_by" = ${SortBy}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to TopPinsAnalyticsResponse<PSCustomObject>

.DESCRIPTION

Convert from JSON to TopPinsAnalyticsResponse<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

TopPinsAnalyticsResponse<PSCustomObject>
#>
function ConvertFrom-JsonToTopPinsAnalyticsResponse {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => TopPinsAnalyticsResponse' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in TopPinsAnalyticsResponse
        $AllProperties = ("date_availability", "pins", "sort_by")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "date_availability"))) { #optional property not found
            $DateAvailability = $null
        } else {
            $DateAvailability = $JsonParameters.PSobject.Properties["date_availability"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "pins"))) { #optional property not found
            $Pins = $null
        } else {
            $Pins = $JsonParameters.PSobject.Properties["pins"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "sort_by"))) { #optional property not found
            $SortBy = $null
        } else {
            $SortBy = $JsonParameters.PSobject.Properties["sort_by"].value
        }

        $PSO = [PSCustomObject]@{
            "date_availability" = ${DateAvailability}
            "pins" = ${Pins}
            "sort_by" = ${SortBy}
        }

        return $PSO
    }

}

