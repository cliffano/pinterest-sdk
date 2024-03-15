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

Request object for creating a hotel product group.

.PARAMETER CatalogType
No description available.
.PARAMETER Name
No description available.
.PARAMETER Description
No description available.
.PARAMETER Filters
No description available.
.PARAMETER CatalogId
Catalog id pertaining to the hotel product group.
.OUTPUTS

CatalogsHotelProductGroupCreateRequest<PSCustomObject>
#>

function Initialize-CatalogsHotelProductGroupCreateRequest {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("HOTEL")]
        [String]
        ${CatalogType},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Name},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Description},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${Filters},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^\d+$")]
        [String]
        ${CatalogId}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => CatalogsHotelProductGroupCreateRequest' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $CatalogType) {
            throw "invalid value for 'CatalogType', 'CatalogType' cannot be null."
        }

        if ($null -eq $Name) {
            throw "invalid value for 'Name', 'Name' cannot be null."
        }

        if ($null -eq $Filters) {
            throw "invalid value for 'Filters', 'Filters' cannot be null."
        }

        if ($null -eq $CatalogId) {
            throw "invalid value for 'CatalogId', 'CatalogId' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "catalog_type" = ${CatalogType}
            "name" = ${Name}
            "description" = ${Description}
            "filters" = ${Filters}
            "catalog_id" = ${CatalogId}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to CatalogsHotelProductGroupCreateRequest<PSCustomObject>

.DESCRIPTION

Convert from JSON to CatalogsHotelProductGroupCreateRequest<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

CatalogsHotelProductGroupCreateRequest<PSCustomObject>
#>
function ConvertFrom-JsonToCatalogsHotelProductGroupCreateRequest {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => CatalogsHotelProductGroupCreateRequest' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in CatalogsHotelProductGroupCreateRequest
        $AllProperties = ("catalog_type", "name", "description", "filters", "catalog_id")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'catalog_type' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "catalog_type"))) {
            throw "Error! JSON cannot be serialized due to the required property 'catalog_type' missing."
        } else {
            $CatalogType = $JsonParameters.PSobject.Properties["catalog_type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "name"))) {
            throw "Error! JSON cannot be serialized due to the required property 'name' missing."
        } else {
            $Name = $JsonParameters.PSobject.Properties["name"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "filters"))) {
            throw "Error! JSON cannot be serialized due to the required property 'filters' missing."
        } else {
            $Filters = $JsonParameters.PSobject.Properties["filters"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "catalog_id"))) {
            throw "Error! JSON cannot be serialized due to the required property 'catalog_id' missing."
        } else {
            $CatalogId = $JsonParameters.PSobject.Properties["catalog_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "description"))) { #optional property not found
            $Description = $null
        } else {
            $Description = $JsonParameters.PSobject.Properties["description"].value
        }

        $PSO = [PSCustomObject]@{
            "catalog_type" = ${CatalogType}
            "name" = ${Name}
            "description" = ${Description}
            "filters" = ${Filters}
            "catalog_id" = ${CatalogId}
        }

        return $PSO
    }

}
