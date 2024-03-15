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

.PARAMETER CURRENCY
No description available.
.OUTPUTS

CurrencyFilter<PSCustomObject>
#>

function Initialize-CurrencyFilter {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${CURRENCY}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => CurrencyFilter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $CURRENCY) {
            throw "invalid value for 'CURRENCY', 'CURRENCY' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "CURRENCY" = ${CURRENCY}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to CurrencyFilter<PSCustomObject>

.DESCRIPTION

Convert from JSON to CurrencyFilter<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

CurrencyFilter<PSCustomObject>
#>
function ConvertFrom-JsonToCurrencyFilter {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => CurrencyFilter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in CurrencyFilter
        $AllProperties = ("CURRENCY")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'CURRENCY' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "CURRENCY"))) {
            throw "Error! JSON cannot be serialized due to the required property 'CURRENCY' missing."
        } else {
            $CURRENCY = $JsonParameters.PSobject.Properties["CURRENCY"].value
        }

        $PSO = [PSCustomObject]@{
            "CURRENCY" = ${CURRENCY}
        }

        return $PSO
    }

}
