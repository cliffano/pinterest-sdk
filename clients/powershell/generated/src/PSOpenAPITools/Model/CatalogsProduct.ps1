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

.PARAMETER Metadata
No description available.
.PARAMETER Pin
No description available.
.OUTPUTS

CatalogsProduct<PSCustomObject>
#>

function Initialize-CatalogsProduct {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${Metadata},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${Pin}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => CatalogsProduct' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $Metadata) {
            throw "invalid value for 'Metadata', 'Metadata' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "metadata" = ${Metadata}
            "pin" = ${Pin}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to CatalogsProduct<PSCustomObject>

.DESCRIPTION

Convert from JSON to CatalogsProduct<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

CatalogsProduct<PSCustomObject>
#>
function ConvertFrom-JsonToCatalogsProduct {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => CatalogsProduct' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in CatalogsProduct
        $AllProperties = ("metadata", "pin")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'metadata' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "metadata"))) {
            throw "Error! JSON cannot be serialized due to the required property 'metadata' missing."
        } else {
            $Metadata = $JsonParameters.PSobject.Properties["metadata"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "pin"))) {
            throw "Error! JSON cannot be serialized due to the required property 'pin' missing."
        } else {
            $Pin = $JsonParameters.PSobject.Properties["pin"].value
        }

        $PSO = [PSCustomObject]@{
            "metadata" = ${Metadata}
            "pin" = ${Pin}
        }

        return $PSO
    }

}

