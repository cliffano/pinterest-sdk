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

.PARAMETER MAXPRICE
No description available.
.OUTPUTS

MaxPriceFilter<PSCustomObject>
#>

function Initialize-MaxPriceFilter {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${MAXPRICE}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => MaxPriceFilter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $MAXPRICE) {
            throw "invalid value for 'MAXPRICE', 'MAXPRICE' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "MAX_PRICE" = ${MAXPRICE}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to MaxPriceFilter<PSCustomObject>

.DESCRIPTION

Convert from JSON to MaxPriceFilter<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

MaxPriceFilter<PSCustomObject>
#>
function ConvertFrom-JsonToMaxPriceFilter {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => MaxPriceFilter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in MaxPriceFilter
        $AllProperties = ("MAX_PRICE")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'MAX_PRICE' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "MAX_PRICE"))) {
            throw "Error! JSON cannot be serialized due to the required property 'MAX_PRICE' missing."
        } else {
            $MAXPRICE = $JsonParameters.PSobject.Properties["MAX_PRICE"].value
        }

        $PSO = [PSCustomObject]@{
            "MAX_PRICE" = ${MAXPRICE}
        }

        return $PSO
    }

}

