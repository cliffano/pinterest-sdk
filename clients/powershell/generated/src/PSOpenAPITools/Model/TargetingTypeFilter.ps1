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

.PARAMETER TargetingTypes
List of targeting types. Requires `level` to be a value ending in `_TARGETING`.
.OUTPUTS

TargetingTypeFilter<PSCustomObject>
#>

function Initialize-TargetingTypeFilter {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${TargetingTypes}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => TargetingTypeFilter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if (!$TargetingTypes -and $TargetingTypes.length -gt 5) {
            throw "invalid value for 'TargetingTypes', number of items must be less than or equal to 5."
        }

        if (!$TargetingTypes -and $TargetingTypes.length -lt 1) {
            throw "invalid value for 'TargetingTypes', number of items must be greater than or equal to 1."
        }


        $PSO = [PSCustomObject]@{
            "targeting_types" = ${TargetingTypes}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to TargetingTypeFilter<PSCustomObject>

.DESCRIPTION

Convert from JSON to TargetingTypeFilter<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

TargetingTypeFilter<PSCustomObject>
#>
function ConvertFrom-JsonToTargetingTypeFilter {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => TargetingTypeFilter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in TargetingTypeFilter
        $AllProperties = ("targeting_types")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "targeting_types"))) { #optional property not found
            $TargetingTypes = $null
        } else {
            $TargetingTypes = $JsonParameters.PSobject.Properties["targeting_types"].value
        }

        $PSO = [PSCustomObject]@{
            "targeting_types" = ${TargetingTypes}
        }

        return $PSO
    }

}

