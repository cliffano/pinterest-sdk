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

.PARAMETER CatalogType
No description available.
.PARAMETER Id
ID of the catalog product group.
.PARAMETER Name
Name of catalog product group
.PARAMETER Description
No description available.
.PARAMETER Filters
No description available.
.PARAMETER IsFeatured
boolean indicator of whether the product group is being featured or not
.PARAMETER Type
No description available.
.PARAMETER Status
No description available.
.PARAMETER CreatedAt
Unix timestamp in seconds of when catalog product group was created.
.PARAMETER UpdatedAt
Unix timestamp in seconds of last time catalog product group was updated.
.PARAMETER FeedId
No description available.
.OUTPUTS

CatalogsRetailProductGroup<PSCustomObject>
#>

function Initialize-CatalogsRetailProductGroup {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("RETAIL")]
        [String]
        ${CatalogType},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^\d+$")]
        [String]
        ${Id},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Name},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Description},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${Filters},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Boolean]]
        ${IsFeatured},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("MERCHANT_CREATED", "ALL_PRODUCTS", "BEST_DEALS", "PINNER_FAVORITES", "TOP_SELLERS", "BACK_IN_STOCK", "NEW_ARRIVALS", "SHOPIFY_COLLECTIONS", "I2PC")]
        [PSCustomObject]
        ${Type},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("ACTIVE", "INACTIVE")]
        [PSCustomObject]
        ${Status},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${CreatedAt},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${UpdatedAt},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("")]
        [String]
        ${FeedId}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => CatalogsRetailProductGroup' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $CatalogType) {
            throw "invalid value for 'CatalogType', 'CatalogType' cannot be null."
        }

        if ($null -eq $Id) {
            throw "invalid value for 'Id', 'Id' cannot be null."
        }

        if ($null -eq $Filters) {
            throw "invalid value for 'Filters', 'Filters' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "catalog_type" = ${CatalogType}
            "id" = ${Id}
            "name" = ${Name}
            "description" = ${Description}
            "filters" = ${Filters}
            "is_featured" = ${IsFeatured}
            "type" = ${Type}
            "status" = ${Status}
            "created_at" = ${CreatedAt}
            "updated_at" = ${UpdatedAt}
            "feed_id" = ${FeedId}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to CatalogsRetailProductGroup<PSCustomObject>

.DESCRIPTION

Convert from JSON to CatalogsRetailProductGroup<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

CatalogsRetailProductGroup<PSCustomObject>
#>
function ConvertFrom-JsonToCatalogsRetailProductGroup {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => CatalogsRetailProductGroup' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in CatalogsRetailProductGroup
        $AllProperties = ("catalog_type", "id", "name", "description", "filters", "is_featured", "type", "status", "created_at", "updated_at", "feed_id")
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

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "id"))) {
            throw "Error! JSON cannot be serialized due to the required property 'id' missing."
        } else {
            $Id = $JsonParameters.PSobject.Properties["id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "filters"))) {
            throw "Error! JSON cannot be serialized due to the required property 'filters' missing."
        } else {
            $Filters = $JsonParameters.PSobject.Properties["filters"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "feed_id"))) {
            throw "Error! JSON cannot be serialized due to the required property 'feed_id' missing."
        } else {
            $FeedId = $JsonParameters.PSobject.Properties["feed_id"].value
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

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "type"))) { #optional property not found
            $Type = $null
        } else {
            $Type = $JsonParameters.PSobject.Properties["type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "status"))) { #optional property not found
            $Status = $null
        } else {
            $Status = $JsonParameters.PSobject.Properties["status"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "created_at"))) { #optional property not found
            $CreatedAt = $null
        } else {
            $CreatedAt = $JsonParameters.PSobject.Properties["created_at"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "updated_at"))) { #optional property not found
            $UpdatedAt = $null
        } else {
            $UpdatedAt = $JsonParameters.PSobject.Properties["updated_at"].value
        }

        $PSO = [PSCustomObject]@{
            "catalog_type" = ${CatalogType}
            "id" = ${Id}
            "name" = ${Name}
            "description" = ${Description}
            "filters" = ${Filters}
            "is_featured" = ${IsFeatured}
            "type" = ${Type}
            "status" = ${Status}
            "created_at" = ${CreatedAt}
            "updated_at" = ${UpdatedAt}
            "feed_id" = ${FeedId}
        }

        return $PSO
    }

}

