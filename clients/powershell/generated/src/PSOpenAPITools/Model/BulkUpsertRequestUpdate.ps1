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

Request for creation of entities in bulk.

.PARAMETER Campaigns
No description available.
.PARAMETER AdGroups
No description available.
.PARAMETER Ads
No description available.
.PARAMETER ProductGroups
No description available.
.PARAMETER Keywords
No description available.
.OUTPUTS

BulkUpsertRequestUpdate<PSCustomObject>
#>

function Initialize-BulkUpsertRequestUpdate {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${Campaigns},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${AdGroups},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${Ads},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${ProductGroups},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${Keywords}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => BulkUpsertRequestUpdate' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "campaigns" = ${Campaigns}
            "ad_groups" = ${AdGroups}
            "ads" = ${Ads}
            "product_groups" = ${ProductGroups}
            "keywords" = ${Keywords}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to BulkUpsertRequestUpdate<PSCustomObject>

.DESCRIPTION

Convert from JSON to BulkUpsertRequestUpdate<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

BulkUpsertRequestUpdate<PSCustomObject>
#>
function ConvertFrom-JsonToBulkUpsertRequestUpdate {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => BulkUpsertRequestUpdate' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in BulkUpsertRequestUpdate
        $AllProperties = ("campaigns", "ad_groups", "ads", "product_groups", "keywords")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "campaigns"))) { #optional property not found
            $Campaigns = $null
        } else {
            $Campaigns = $JsonParameters.PSobject.Properties["campaigns"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "ad_groups"))) { #optional property not found
            $AdGroups = $null
        } else {
            $AdGroups = $JsonParameters.PSobject.Properties["ad_groups"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "ads"))) { #optional property not found
            $Ads = $null
        } else {
            $Ads = $JsonParameters.PSobject.Properties["ads"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "product_groups"))) { #optional property not found
            $ProductGroups = $null
        } else {
            $ProductGroups = $JsonParameters.PSobject.Properties["product_groups"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "keywords"))) { #optional property not found
            $Keywords = $null
        } else {
            $Keywords = $JsonParameters.PSobject.Properties["keywords"].value
        }

        $PSO = [PSCustomObject]@{
            "campaigns" = ${Campaigns}
            "ad_groups" = ${AdGroups}
            "ads" = ${Ads}
            "product_groups" = ${ProductGroups}
            "keywords" = ${Keywords}
        }

        return $PSO
    }

}
