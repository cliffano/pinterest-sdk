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

Ad entities to get in bulk request.

.PARAMETER EntityTypes
All entity types specified will be downloaded. Fewer types result in faster downloads.
.PARAMETER EntityIds
All entities specified by these IDs as well as their children and grandchildren will be downloaded if the entity type is one of the types requested to be downloaded.
.PARAMETER UpdatedSince
Unix UTC timestamp to retrieve all entities that have changed since this time.
.PARAMETER CampaignFilter
No description available.
.PARAMETER OutputFormat
No description available.
.OUTPUTS

BulkDownloadRequest<PSCustomObject>
#>

function Initialize-BulkDownloadRequest {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${EntityTypes},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${EntityIds},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^\d+$")]
        [String]
        ${UpdatedSince},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${CampaignFilter},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("CSV", "JSON")]
        [PSCustomObject]
        ${OutputFormat} = "JSON"
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => BulkDownloadRequest' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if (!$EntityTypes -and $EntityTypes.length -gt 5) {
            throw "invalid value for 'EntityTypes', number of items must be less than or equal to 5."
        }

        if (!$EntityTypes -and $EntityTypes.length -lt 1) {
            throw "invalid value for 'EntityTypes', number of items must be greater than or equal to 1."
        }


        $PSO = [PSCustomObject]@{
            "entity_types" = ${EntityTypes}
            "entity_ids" = ${EntityIds}
            "updated_since" = ${UpdatedSince}
            "campaign_filter" = ${CampaignFilter}
            "output_format" = ${OutputFormat}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to BulkDownloadRequest<PSCustomObject>

.DESCRIPTION

Convert from JSON to BulkDownloadRequest<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

BulkDownloadRequest<PSCustomObject>
#>
function ConvertFrom-JsonToBulkDownloadRequest {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => BulkDownloadRequest' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in BulkDownloadRequest
        $AllProperties = ("entity_types", "entity_ids", "updated_since", "campaign_filter", "output_format")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "entity_types"))) { #optional property not found
            $EntityTypes = $null
        } else {
            $EntityTypes = $JsonParameters.PSobject.Properties["entity_types"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "entity_ids"))) { #optional property not found
            $EntityIds = $null
        } else {
            $EntityIds = $JsonParameters.PSobject.Properties["entity_ids"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "updated_since"))) { #optional property not found
            $UpdatedSince = $null
        } else {
            $UpdatedSince = $JsonParameters.PSobject.Properties["updated_since"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "campaign_filter"))) { #optional property not found
            $CampaignFilter = $null
        } else {
            $CampaignFilter = $JsonParameters.PSobject.Properties["campaign_filter"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "output_format"))) { #optional property not found
            $OutputFormat = $null
        } else {
            $OutputFormat = $JsonParameters.PSobject.Properties["output_format"].value
        }

        $PSO = [PSCustomObject]@{
            "entity_types" = ${EntityTypes}
            "entity_ids" = ${EntityIds}
            "updated_since" = ${UpdatedSince}
            "campaign_filter" = ${CampaignFilter}
            "output_format" = ${OutputFormat}
        }

        return $PSO
    }

}
