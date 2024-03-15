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

.PARAMETER AVAILABILITY
No description available.
.OUTPUTS

AvailabilityFilter<PSCustomObject>
#>

function Initialize-AvailabilityFilter {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${AVAILABILITY}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => AvailabilityFilter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $AVAILABILITY) {
            throw "invalid value for 'AVAILABILITY', 'AVAILABILITY' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "AVAILABILITY" = ${AVAILABILITY}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to AvailabilityFilter<PSCustomObject>

.DESCRIPTION

Convert from JSON to AvailabilityFilter<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

AvailabilityFilter<PSCustomObject>
#>
function ConvertFrom-JsonToAvailabilityFilter {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => AvailabilityFilter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in AvailabilityFilter
        $AllProperties = ("AVAILABILITY")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'AVAILABILITY' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "AVAILABILITY"))) {
            throw "Error! JSON cannot be serialized due to the required property 'AVAILABILITY' missing."
        } else {
            $AVAILABILITY = $JsonParameters.PSobject.Properties["AVAILABILITY"].value
        }

        $PSO = [PSCustomObject]@{
            "AVAILABILITY" = ${AVAILABILITY}
        }

        return $PSO
    }

}

