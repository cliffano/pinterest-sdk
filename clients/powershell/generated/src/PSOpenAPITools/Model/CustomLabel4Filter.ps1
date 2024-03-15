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

.PARAMETER CUSTOMLABEL4
No description available.
.OUTPUTS

CustomLabel4Filter<PSCustomObject>
#>

function Initialize-CustomLabel4Filter {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${CUSTOMLABEL4}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => CustomLabel4Filter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $CUSTOMLABEL4) {
            throw "invalid value for 'CUSTOMLABEL4', 'CUSTOMLABEL4' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "CUSTOM_LABEL_4" = ${CUSTOMLABEL4}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to CustomLabel4Filter<PSCustomObject>

.DESCRIPTION

Convert from JSON to CustomLabel4Filter<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

CustomLabel4Filter<PSCustomObject>
#>
function ConvertFrom-JsonToCustomLabel4Filter {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => CustomLabel4Filter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in CustomLabel4Filter
        $AllProperties = ("CUSTOM_LABEL_4")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'CUSTOM_LABEL_4' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "CUSTOM_LABEL_4"))) {
            throw "Error! JSON cannot be serialized due to the required property 'CUSTOM_LABEL_4' missing."
        } else {
            $CUSTOMLABEL4 = $JsonParameters.PSobject.Properties["CUSTOM_LABEL_4"].value
        }

        $PSO = [PSCustomObject]@{
            "CUSTOM_LABEL_4" = ${CUSTOMLABEL4}
        }

        return $PSO
    }

}

