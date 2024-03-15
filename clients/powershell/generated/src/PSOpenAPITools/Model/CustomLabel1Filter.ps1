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

.PARAMETER CUSTOMLABEL1
No description available.
.OUTPUTS

CustomLabel1Filter<PSCustomObject>
#>

function Initialize-CustomLabel1Filter {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${CUSTOMLABEL1}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => CustomLabel1Filter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $CUSTOMLABEL1) {
            throw "invalid value for 'CUSTOMLABEL1', 'CUSTOMLABEL1' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "CUSTOM_LABEL_1" = ${CUSTOMLABEL1}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to CustomLabel1Filter<PSCustomObject>

.DESCRIPTION

Convert from JSON to CustomLabel1Filter<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

CustomLabel1Filter<PSCustomObject>
#>
function ConvertFrom-JsonToCustomLabel1Filter {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => CustomLabel1Filter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in CustomLabel1Filter
        $AllProperties = ("CUSTOM_LABEL_1")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'CUSTOM_LABEL_1' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "CUSTOM_LABEL_1"))) {
            throw "Error! JSON cannot be serialized due to the required property 'CUSTOM_LABEL_1' missing."
        } else {
            $CUSTOMLABEL1 = $JsonParameters.PSobject.Properties["CUSTOM_LABEL_1"].value
        }

        $PSO = [PSCustomObject]@{
            "CUSTOM_LABEL_1" = ${CUSTOMLABEL1}
        }

        return $PSO
    }

}

