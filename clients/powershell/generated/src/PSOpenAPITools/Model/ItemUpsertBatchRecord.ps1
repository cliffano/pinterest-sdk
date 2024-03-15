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

Object describing an item batch record to upsert items

.PARAMETER ItemId
The catalog item id in the merchant namespace
.PARAMETER Attributes
No description available.
.OUTPUTS

ItemUpsertBatchRecord<PSCustomObject>
#>

function Initialize-ItemUpsertBatchRecord {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${ItemId},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${Attributes}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => ItemUpsertBatchRecord' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "item_id" = ${ItemId}
            "attributes" = ${Attributes}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to ItemUpsertBatchRecord<PSCustomObject>

.DESCRIPTION

Convert from JSON to ItemUpsertBatchRecord<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

ItemUpsertBatchRecord<PSCustomObject>
#>
function ConvertFrom-JsonToItemUpsertBatchRecord {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => ItemUpsertBatchRecord' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in ItemUpsertBatchRecord
        $AllProperties = ("item_id", "attributes")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "item_id"))) { #optional property not found
            $ItemId = $null
        } else {
            $ItemId = $JsonParameters.PSobject.Properties["item_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "attributes"))) { #optional property not found
            $Attributes = $null
        } else {
            $Attributes = $JsonParameters.PSobject.Properties["attributes"].value
        }

        $PSO = [PSCustomObject]@{
            "item_id" = ${ItemId}
            "attributes" = ${Attributes}
        }

        return $PSO
    }

}
