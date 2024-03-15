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

CatalogsRetailBatchRequestItemsInner<PSCustomObject>
#>
function ConvertFrom-JsonToCatalogsRetailBatchRequestItemsInner {
    [CmdletBinding()]
    Param (
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        $match = 0
        $matchType = $null
        $matchInstance = $null

        $JsonData = ConvertFrom-Json -InputObject $Json
        # check if the discriminator value is 'CREATE'
        if ($JsonData.PSobject.Properties["operation"].value -eq "CREATE") {
            # try to match CatalogsCreateRetailItem defined in the anyOf schemas
            try {
                $matchInstance = ConvertFrom-JsonToCatalogsCreateRetailItem $Json

                foreach($property in $matchInstance.PsObject.Properties) {
                    if ($null -ne $property.Value) {
                        $matchType = "CatalogsCreateRetailItem"
                        return [PSCustomObject]@{
                            "ActualType" = ${matchType}
                            "ActualInstance" = ${matchInstance}
                            "anyOfSchemas" = @("CatalogsCreateRetailItem", "CatalogsDeleteRetailItem", "CatalogsUpdateRetailItem", "CatalogsUpsertRetailItem")
                        }
                    }
                }
            } catch {
                # fail to match the schema defined in anyOf with the discriminator lookup, proceed to the next one
                Write-Debug "Failed to match 'CatalogsCreateRetailItem' defined in anyOf (CatalogsRetailBatchRequestItemsInner) using the discriminator lookup (CREATE). Proceeding with the typical anyOf type matching."
            }
        }

        # check if the discriminator value is 'DELETE'
        if ($JsonData.PSobject.Properties["operation"].value -eq "DELETE") {
            # try to match CatalogsDeleteRetailItem defined in the anyOf schemas
            try {
                $matchInstance = ConvertFrom-JsonToCatalogsDeleteRetailItem $Json

                foreach($property in $matchInstance.PsObject.Properties) {
                    if ($null -ne $property.Value) {
                        $matchType = "CatalogsDeleteRetailItem"
                        return [PSCustomObject]@{
                            "ActualType" = ${matchType}
                            "ActualInstance" = ${matchInstance}
                            "anyOfSchemas" = @("CatalogsCreateRetailItem", "CatalogsDeleteRetailItem", "CatalogsUpdateRetailItem", "CatalogsUpsertRetailItem")
                        }
                    }
                }
            } catch {
                # fail to match the schema defined in anyOf with the discriminator lookup, proceed to the next one
                Write-Debug "Failed to match 'CatalogsDeleteRetailItem' defined in anyOf (CatalogsRetailBatchRequestItemsInner) using the discriminator lookup (DELETE). Proceeding with the typical anyOf type matching."
            }
        }

        # check if the discriminator value is 'UPDATE'
        if ($JsonData.PSobject.Properties["operation"].value -eq "UPDATE") {
            # try to match CatalogsUpdateRetailItem defined in the anyOf schemas
            try {
                $matchInstance = ConvertFrom-JsonToCatalogsUpdateRetailItem $Json

                foreach($property in $matchInstance.PsObject.Properties) {
                    if ($null -ne $property.Value) {
                        $matchType = "CatalogsUpdateRetailItem"
                        return [PSCustomObject]@{
                            "ActualType" = ${matchType}
                            "ActualInstance" = ${matchInstance}
                            "anyOfSchemas" = @("CatalogsCreateRetailItem", "CatalogsDeleteRetailItem", "CatalogsUpdateRetailItem", "CatalogsUpsertRetailItem")
                        }
                    }
                }
            } catch {
                # fail to match the schema defined in anyOf with the discriminator lookup, proceed to the next one
                Write-Debug "Failed to match 'CatalogsUpdateRetailItem' defined in anyOf (CatalogsRetailBatchRequestItemsInner) using the discriminator lookup (UPDATE). Proceeding with the typical anyOf type matching."
            }
        }

        # check if the discriminator value is 'UPSERT'
        if ($JsonData.PSobject.Properties["operation"].value -eq "UPSERT") {
            # try to match CatalogsUpsertRetailItem defined in the anyOf schemas
            try {
                $matchInstance = ConvertFrom-JsonToCatalogsUpsertRetailItem $Json

                foreach($property in $matchInstance.PsObject.Properties) {
                    if ($null -ne $property.Value) {
                        $matchType = "CatalogsUpsertRetailItem"
                        return [PSCustomObject]@{
                            "ActualType" = ${matchType}
                            "ActualInstance" = ${matchInstance}
                            "anyOfSchemas" = @("CatalogsCreateRetailItem", "CatalogsDeleteRetailItem", "CatalogsUpdateRetailItem", "CatalogsUpsertRetailItem")
                        }
                    }
                }
            } catch {
                # fail to match the schema defined in anyOf with the discriminator lookup, proceed to the next one
                Write-Debug "Failed to match 'CatalogsUpsertRetailItem' defined in anyOf (CatalogsRetailBatchRequestItemsInner) using the discriminator lookup (UPSERT). Proceeding with the typical anyOf type matching."
            }
        }

        # check if the discriminator value is 'CatalogsCreateRetailItem'
        if ($JsonData.PSobject.Properties["operation"].value -eq "CatalogsCreateRetailItem") {
            # try to match CatalogsCreateRetailItem defined in the anyOf schemas
            try {
                $matchInstance = ConvertFrom-JsonToCatalogsCreateRetailItem $Json

                foreach($property in $matchInstance.PsObject.Properties) {
                    if ($null -ne $property.Value) {
                        $matchType = "CatalogsCreateRetailItem"
                        return [PSCustomObject]@{
                            "ActualType" = ${matchType}
                            "ActualInstance" = ${matchInstance}
                            "anyOfSchemas" = @("CatalogsCreateRetailItem", "CatalogsDeleteRetailItem", "CatalogsUpdateRetailItem", "CatalogsUpsertRetailItem")
                        }
                    }
                }
            } catch {
                # fail to match the schema defined in anyOf with the discriminator lookup, proceed to the next one
                Write-Debug "Failed to match 'CatalogsCreateRetailItem' defined in anyOf (CatalogsRetailBatchRequestItemsInner) using the discriminator lookup (CatalogsCreateRetailItem). Proceeding with the typical anyOf type matching."
            }
        }

        # check if the discriminator value is 'CatalogsDeleteRetailItem'
        if ($JsonData.PSobject.Properties["operation"].value -eq "CatalogsDeleteRetailItem") {
            # try to match CatalogsDeleteRetailItem defined in the anyOf schemas
            try {
                $matchInstance = ConvertFrom-JsonToCatalogsDeleteRetailItem $Json

                foreach($property in $matchInstance.PsObject.Properties) {
                    if ($null -ne $property.Value) {
                        $matchType = "CatalogsDeleteRetailItem"
                        return [PSCustomObject]@{
                            "ActualType" = ${matchType}
                            "ActualInstance" = ${matchInstance}
                            "anyOfSchemas" = @("CatalogsCreateRetailItem", "CatalogsDeleteRetailItem", "CatalogsUpdateRetailItem", "CatalogsUpsertRetailItem")
                        }
                    }
                }
            } catch {
                # fail to match the schema defined in anyOf with the discriminator lookup, proceed to the next one
                Write-Debug "Failed to match 'CatalogsDeleteRetailItem' defined in anyOf (CatalogsRetailBatchRequestItemsInner) using the discriminator lookup (CatalogsDeleteRetailItem). Proceeding with the typical anyOf type matching."
            }
        }

        # check if the discriminator value is 'CatalogsUpdateRetailItem'
        if ($JsonData.PSobject.Properties["operation"].value -eq "CatalogsUpdateRetailItem") {
            # try to match CatalogsUpdateRetailItem defined in the anyOf schemas
            try {
                $matchInstance = ConvertFrom-JsonToCatalogsUpdateRetailItem $Json

                foreach($property in $matchInstance.PsObject.Properties) {
                    if ($null -ne $property.Value) {
                        $matchType = "CatalogsUpdateRetailItem"
                        return [PSCustomObject]@{
                            "ActualType" = ${matchType}
                            "ActualInstance" = ${matchInstance}
                            "anyOfSchemas" = @("CatalogsCreateRetailItem", "CatalogsDeleteRetailItem", "CatalogsUpdateRetailItem", "CatalogsUpsertRetailItem")
                        }
                    }
                }
            } catch {
                # fail to match the schema defined in anyOf with the discriminator lookup, proceed to the next one
                Write-Debug "Failed to match 'CatalogsUpdateRetailItem' defined in anyOf (CatalogsRetailBatchRequestItemsInner) using the discriminator lookup (CatalogsUpdateRetailItem). Proceeding with the typical anyOf type matching."
            }
        }

        # check if the discriminator value is 'CatalogsUpsertRetailItem'
        if ($JsonData.PSobject.Properties["operation"].value -eq "CatalogsUpsertRetailItem") {
            # try to match CatalogsUpsertRetailItem defined in the anyOf schemas
            try {
                $matchInstance = ConvertFrom-JsonToCatalogsUpsertRetailItem $Json

                foreach($property in $matchInstance.PsObject.Properties) {
                    if ($null -ne $property.Value) {
                        $matchType = "CatalogsUpsertRetailItem"
                        return [PSCustomObject]@{
                            "ActualType" = ${matchType}
                            "ActualInstance" = ${matchInstance}
                            "anyOfSchemas" = @("CatalogsCreateRetailItem", "CatalogsDeleteRetailItem", "CatalogsUpdateRetailItem", "CatalogsUpsertRetailItem")
                        }
                    }
                }
            } catch {
                # fail to match the schema defined in anyOf with the discriminator lookup, proceed to the next one
                Write-Debug "Failed to match 'CatalogsUpsertRetailItem' defined in anyOf (CatalogsRetailBatchRequestItemsInner) using the discriminator lookup (CatalogsUpsertRetailItem). Proceeding with the typical anyOf type matching."
            }
        }

        if ($match -ne 0) { # no match yet
            # try to match CatalogsCreateRetailItem defined in the anyOf schemas
            try {
                $matchInstance = ConvertFrom-JsonToCatalogsCreateRetailItem $Json

                foreach($property in $matchInstance.PsObject.Properties) {
                    if ($null -ne $property.Value) {
                        $matchType = "CatalogsCreateRetailItem"
                        $match++
                        break
                    }
                }
            } catch {
                # fail to match the schema defined in anyOf, proceed to the next one
                Write-Debug "Failed to match 'CatalogsCreateRetailItem' defined in anyOf (CatalogsRetailBatchRequestItemsInner). Proceeding to the next one if any."
            }
        }

        if ($match -ne 0) { # no match yet
            # try to match CatalogsDeleteRetailItem defined in the anyOf schemas
            try {
                $matchInstance = ConvertFrom-JsonToCatalogsDeleteRetailItem $Json

                foreach($property in $matchInstance.PsObject.Properties) {
                    if ($null -ne $property.Value) {
                        $matchType = "CatalogsDeleteRetailItem"
                        $match++
                        break
                    }
                }
            } catch {
                # fail to match the schema defined in anyOf, proceed to the next one
                Write-Debug "Failed to match 'CatalogsDeleteRetailItem' defined in anyOf (CatalogsRetailBatchRequestItemsInner). Proceeding to the next one if any."
            }
        }

        if ($match -ne 0) { # no match yet
            # try to match CatalogsUpdateRetailItem defined in the anyOf schemas
            try {
                $matchInstance = ConvertFrom-JsonToCatalogsUpdateRetailItem $Json

                foreach($property in $matchInstance.PsObject.Properties) {
                    if ($null -ne $property.Value) {
                        $matchType = "CatalogsUpdateRetailItem"
                        $match++
                        break
                    }
                }
            } catch {
                # fail to match the schema defined in anyOf, proceed to the next one
                Write-Debug "Failed to match 'CatalogsUpdateRetailItem' defined in anyOf (CatalogsRetailBatchRequestItemsInner). Proceeding to the next one if any."
            }
        }

        if ($match -ne 0) { # no match yet
            # try to match CatalogsUpsertRetailItem defined in the anyOf schemas
            try {
                $matchInstance = ConvertFrom-JsonToCatalogsUpsertRetailItem $Json

                foreach($property in $matchInstance.PsObject.Properties) {
                    if ($null -ne $property.Value) {
                        $matchType = "CatalogsUpsertRetailItem"
                        $match++
                        break
                    }
                }
            } catch {
                # fail to match the schema defined in anyOf, proceed to the next one
                Write-Debug "Failed to match 'CatalogsUpsertRetailItem' defined in anyOf (CatalogsRetailBatchRequestItemsInner). Proceeding to the next one if any."
            }
        }

        if ($match -eq 1) {
            return [PSCustomObject]@{
                "ActualType" = ${matchType}
                "ActualInstance" = ${matchInstance}
                "anyOfSchemas" = @("CatalogsCreateRetailItem", "CatalogsDeleteRetailItem", "CatalogsUpdateRetailItem", "CatalogsUpsertRetailItem")
            }
        } else {
            throw "Error! The JSON payload doesn't matches any type defined in anyOf schemas ([CatalogsCreateRetailItem, CatalogsDeleteRetailItem, CatalogsUpdateRetailItem, CatalogsUpsertRetailItem]). JSON Payload: $($Json)"
        }
    }
}
