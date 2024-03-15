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

Request object for updating a product group.

.PARAMETER Name
No description available.
.PARAMETER Description
No description available.
.PARAMETER IsFeatured
boolean indicator of whether the product group is being featured or not
.PARAMETER Filters
No description available.
.OUTPUTS

CatalogsProductGroupUpdateRequest<PSCustomObject>
#>

function Initialize-CatalogsProductGroupUpdateRequest {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Name},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Description},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Boolean]]
        ${IsFeatured},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${Filters}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => CatalogsProductGroupUpdateRequest' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "name" = ${Name}
            "description" = ${Description}
            "is_featured" = ${IsFeatured}
            "filters" = ${Filters}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to CatalogsProductGroupUpdateRequest<PSCustomObject>

.DESCRIPTION

Convert from JSON to CatalogsProductGroupUpdateRequest<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

CatalogsProductGroupUpdateRequest<PSCustomObject>
#>
function ConvertFrom-JsonToCatalogsProductGroupUpdateRequest {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => CatalogsProductGroupUpdateRequest' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in CatalogsProductGroupUpdateRequest
        $AllProperties = ("name", "description", "is_featured", "filters")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "name"))) { #optional property not found
            $Name = $null
        } else {
            $Name = $JsonParameters.PSobject.Properties["name"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "description"))) { #optional property not found
            $Description = $null
        } else {
            $Description = $JsonParameters.PSobject.Properties["description"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "is_featured"))) { #optional property not found
            $IsFeatured = $null
        } else {
            $IsFeatured = $JsonParameters.PSobject.Properties["is_featured"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "filters"))) { #optional property not found
            $Filters = $null
        } else {
            $Filters = $JsonParameters.PSobject.Properties["filters"].value
        }

        $PSO = [PSCustomObject]@{
            "name" = ${Name}
            "description" = ${Description}
            "is_featured" = ${IsFeatured}
            "filters" = ${Filters}
        }

        return $PSO
    }

}

