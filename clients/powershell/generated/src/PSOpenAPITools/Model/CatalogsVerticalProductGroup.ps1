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

.PARAMETER Json

JSON object

.OUTPUTS

CatalogsVerticalProductGroup<PSCustomObject>
#>
function ConvertFrom-JsonToCatalogsVerticalProductGroup {
    [CmdletBinding()]
    Param (
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        $match = 0
        $matchType = $null
        $matchInstance = $null

        # try to match CatalogsHotelProductGroup defined in the oneOf schemas
        try {
            $matchInstance = ConvertFrom-JsonToCatalogsHotelProductGroup $Json

            foreach($property in $matchInstance.PsObject.Properties) {
                if ($null -ne $property.Value) {
                    $matchType = "CatalogsHotelProductGroup"
                    $match++
                    break
                }
            }
        } catch {
            # fail to match the schema defined in oneOf, proceed to the next one
            Write-Debug "Failed to match 'CatalogsHotelProductGroup' defined in oneOf (CatalogsVerticalProductGroup). Proceeding to the next one if any."
        }

        # try to match CatalogsRetailProductGroup defined in the oneOf schemas
        try {
            $matchInstance = ConvertFrom-JsonToCatalogsRetailProductGroup $Json

            foreach($property in $matchInstance.PsObject.Properties) {
                if ($null -ne $property.Value) {
                    $matchType = "CatalogsRetailProductGroup"
                    $match++
                    break
                }
            }
        } catch {
            # fail to match the schema defined in oneOf, proceed to the next one
            Write-Debug "Failed to match 'CatalogsRetailProductGroup' defined in oneOf (CatalogsVerticalProductGroup). Proceeding to the next one if any."
        }

        if ($match -gt 1) {
            throw "Error! The JSON payload matches more than one type defined in oneOf schemas ([CatalogsHotelProductGroup, CatalogsRetailProductGroup]). JSON Payload: $($Json)"
        } elseif ($match -eq 1) {
            return [PSCustomObject]@{
                "ActualType" = ${matchType}
                "ActualInstance" = ${matchInstance}
                "OneOfSchemas" = @("CatalogsHotelProductGroup", "CatalogsRetailProductGroup")
            }
        } else {
            throw "Error! The JSON payload doesn't matches any type defined in oneOf schemas ([CatalogsHotelProductGroup, CatalogsRetailProductGroup]). JSON Payload: $($Json)"
        }
    }
}

