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
.PARAMETER Bookmark
No description available.
.OUTPUTS

CatalogsList200Response<PSCustomObject>
#>

function Initialize-CatalogsList200Response {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${Items},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Bookmark}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => CatalogsList200Response' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $Items) {
            throw "invalid value for 'Items', 'Items' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "items" = ${Items}
            "bookmark" = ${Bookmark}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to CatalogsList200Response<PSCustomObject>

.DESCRIPTION

Convert from JSON to CatalogsList200Response<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

CatalogsList200Response<PSCustomObject>
#>
function ConvertFrom-JsonToCatalogsList200Response {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => CatalogsList200Response' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in CatalogsList200Response
        $AllProperties = ("items", "bookmark")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'items' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "items"))) {
            throw "Error! JSON cannot be serialized due to the required property 'items' missing."
        } else {
            $Items = $JsonParameters.PSobject.Properties["items"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "bookmark"))) { #optional property not found
            $Bookmark = $null
        } else {
            $Bookmark = $JsonParameters.PSobject.Properties["bookmark"].value
        }

        $PSO = [PSCustomObject]@{
            "items" = ${Items}
            "bookmark" = ${Bookmark}
        }

        return $PSO
    }

}

