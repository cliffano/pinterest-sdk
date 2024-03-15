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

.PARAMETER AnyOf
No description available.
.OUTPUTS

CatalogsProductGroupFiltersRequestAnyOf<PSCustomObject>
#>

function Initialize-CatalogsProductGroupFiltersRequestAnyOf {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${AnyOf}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => CatalogsProductGroupFiltersRequestAnyOf' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $AnyOf) {
            throw "invalid value for 'AnyOf', 'AnyOf' cannot be null."
        }

        if ($AnyOf.length -lt 1) {
            throw "invalid value for 'AnyOf', number of items must be greater than or equal to 1."
        }


        $PSO = [PSCustomObject]@{
            "any_of" = ${AnyOf}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to CatalogsProductGroupFiltersRequestAnyOf<PSCustomObject>

.DESCRIPTION

Convert from JSON to CatalogsProductGroupFiltersRequestAnyOf<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

CatalogsProductGroupFiltersRequestAnyOf<PSCustomObject>
#>
function ConvertFrom-JsonToCatalogsProductGroupFiltersRequestAnyOf {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => CatalogsProductGroupFiltersRequestAnyOf' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in CatalogsProductGroupFiltersRequestAnyOf
        $AllProperties = ("any_of")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'any_of' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "any_of"))) {
            throw "Error! JSON cannot be serialized due to the required property 'any_of' missing."
        } else {
            $AnyOf = $JsonParameters.PSobject.Properties["any_of"].value
        }

        $PSO = [PSCustomObject]@{
            "any_of" = ${AnyOf}
        }

        return $PSO
    }

}

