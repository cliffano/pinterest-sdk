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

.PARAMETER VarData
No description available.
.PARAMETER Exceptions
No description available.
.OUTPUTS

AdArrayResponseElement<PSCustomObject>
#>

function Initialize-AdArrayResponseElement {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${VarData},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${Exceptions}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => AdArrayResponseElement' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "data" = ${VarData}
            "exceptions" = ${Exceptions}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to AdArrayResponseElement<PSCustomObject>

.DESCRIPTION

Convert from JSON to AdArrayResponseElement<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

AdArrayResponseElement<PSCustomObject>
#>
function ConvertFrom-JsonToAdArrayResponseElement {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => AdArrayResponseElement' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in AdArrayResponseElement
        $AllProperties = ("data", "exceptions")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "data"))) { #optional property not found
            $VarData = $null
        } else {
            $VarData = $JsonParameters.PSobject.Properties["data"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "exceptions"))) { #optional property not found
            $Exceptions = $null
        } else {
            $Exceptions = $JsonParameters.PSobject.Properties["exceptions"].value
        }

        $PSO = [PSCustomObject]@{
            "data" = ${VarData}
            "exceptions" = ${Exceptions}
        }

        return $PSO
    }

}

