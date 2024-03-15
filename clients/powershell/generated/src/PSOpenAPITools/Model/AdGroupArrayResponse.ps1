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

.PARAMETER Items
No description available.
.OUTPUTS

AdGroupArrayResponse<PSCustomObject>
#>

function Initialize-AdGroupArrayResponse {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${Items}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => AdGroupArrayResponse' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "items" = ${Items}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to AdGroupArrayResponse<PSCustomObject>

.DESCRIPTION

Convert from JSON to AdGroupArrayResponse<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

AdGroupArrayResponse<PSCustomObject>
#>
function ConvertFrom-JsonToAdGroupArrayResponse {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => AdGroupArrayResponse' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in AdGroupArrayResponse
        $AllProperties = ("items")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "items"))) { #optional property not found
            $Items = $null
        } else {
            $Items = $JsonParameters.PSobject.Properties["items"].value
        }

        $PSO = [PSCustomObject]@{
            "items" = ${Items}
        }

        return $PSO
    }

}

