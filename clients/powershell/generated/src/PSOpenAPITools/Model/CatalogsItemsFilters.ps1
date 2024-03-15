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

CatalogsItemsFilters<PSCustomObject>
#>
function ConvertFrom-JsonToCatalogsItemsFilters {
    [CmdletBinding()]
    Param (
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        $match = 0
        $matchType = $null
        $matchInstance = $null

        # try to match CatalogsHotelItemsFilter defined in the oneOf schemas
        try {
            $matchInstance = ConvertFrom-JsonToCatalogsHotelItemsFilter $Json

            foreach($property in $matchInstance.PsObject.Properties) {
                if ($null -ne $property.Value) {
                    $matchType = "CatalogsHotelItemsFilter"
                    $match++
                    break
                }
            }
        } catch {
            # fail to match the schema defined in oneOf, proceed to the next one
            Write-Debug "Failed to match 'CatalogsHotelItemsFilter' defined in oneOf (CatalogsItemsFilters). Proceeding to the next one if any."
        }

        # try to match CatalogsRetailItemsFilter defined in the oneOf schemas
        try {
            $matchInstance = ConvertFrom-JsonToCatalogsRetailItemsFilter $Json

            foreach($property in $matchInstance.PsObject.Properties) {
                if ($null -ne $property.Value) {
                    $matchType = "CatalogsRetailItemsFilter"
                    $match++
                    break
                }
            }
        } catch {
            # fail to match the schema defined in oneOf, proceed to the next one
            Write-Debug "Failed to match 'CatalogsRetailItemsFilter' defined in oneOf (CatalogsItemsFilters). Proceeding to the next one if any."
        }

        if ($match -gt 1) {
            throw "Error! The JSON payload matches more than one type defined in oneOf schemas ([CatalogsHotelItemsFilter, CatalogsRetailItemsFilter]). JSON Payload: $($Json)"
        } elseif ($match -eq 1) {
            return [PSCustomObject]@{
                "ActualType" = ${matchType}
                "ActualInstance" = ${matchInstance}
                "OneOfSchemas" = @("CatalogsHotelItemsFilter", "CatalogsRetailItemsFilter")
            }
        } else {
            throw "Error! The JSON payload doesn't matches any type defined in oneOf schemas ([CatalogsHotelItemsFilter, CatalogsRetailItemsFilter]). JSON Payload: $($Json)"
        }
    }
}

