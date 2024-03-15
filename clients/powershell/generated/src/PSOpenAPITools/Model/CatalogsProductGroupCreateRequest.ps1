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

Request object for creating a product group.

.PARAMETER Name
No description available.
.PARAMETER Description
No description available.
.PARAMETER IsFeatured
boolean indicator of whether the product group is being featured or not
.PARAMETER Filters
No description available.
.PARAMETER FeedId
Catalog Feed id pertaining to the catalog product group.
.OUTPUTS

CatalogsProductGroupCreateRequest<PSCustomObject>
#>

function Initialize-CatalogsProductGroupCreateRequest {
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
        ${IsFeatured} = $false,
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${Filters},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^\d+$")]
        [String]
        ${FeedId}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => CatalogsProductGroupCreateRequest' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $Name) {
            throw "invalid value for 'Name', 'Name' cannot be null."
        }

        if ($null -eq $Filters) {
            throw "invalid value for 'Filters', 'Filters' cannot be null."
        }

        if ($null -eq $FeedId) {
            throw "invalid value for 'FeedId', 'FeedId' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "name" = ${Name}
            "description" = ${Description}
            "is_featured" = ${IsFeatured}
            "filters" = ${Filters}
            "feed_id" = ${FeedId}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to CatalogsProductGroupCreateRequest<PSCustomObject>

.DESCRIPTION

Convert from JSON to CatalogsProductGroupCreateRequest<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

CatalogsProductGroupCreateRequest<PSCustomObject>
#>
function ConvertFrom-JsonToCatalogsProductGroupCreateRequest {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => CatalogsProductGroupCreateRequest' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in CatalogsProductGroupCreateRequest
        $AllProperties = ("name", "description", "is_featured", "filters", "feed_id")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'name' missing."
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

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "feed_id"))) {
            throw "Error! JSON cannot be serialized due to the required property 'feed_id' missing."
        } else {
            $FeedId = $JsonParameters.PSobject.Properties["feed_id"].value
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

        $PSO = [PSCustomObject]@{
            "name" = ${Name}
            "description" = ${Description}
            "is_featured" = ${IsFeatured}
            "filters" = ${Filters}
            "feed_id" = ${FeedId}
        }

        return $PSO
    }

}
