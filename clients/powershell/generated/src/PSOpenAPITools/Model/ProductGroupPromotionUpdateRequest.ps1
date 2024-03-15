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

.PARAMETER AdGroupId
ID of the ad group the product group belongs to.
.PARAMETER ProductGroupPromotion
No description available.
.OUTPUTS

ProductGroupPromotionUpdateRequest<PSCustomObject>
#>

function Initialize-ProductGroupPromotionUpdateRequest {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^(AG)?\d+$")]
        [String]
        ${AdGroupId},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${ProductGroupPromotion}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => ProductGroupPromotionUpdateRequest' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $AdGroupId) {
            throw "invalid value for 'AdGroupId', 'AdGroupId' cannot be null."
        }

        if ($null -eq $ProductGroupPromotion) {
            throw "invalid value for 'ProductGroupPromotion', 'ProductGroupPromotion' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "ad_group_id" = ${AdGroupId}
            "product_group_promotion" = ${ProductGroupPromotion}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to ProductGroupPromotionUpdateRequest<PSCustomObject>

.DESCRIPTION

Convert from JSON to ProductGroupPromotionUpdateRequest<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

ProductGroupPromotionUpdateRequest<PSCustomObject>
#>
function ConvertFrom-JsonToProductGroupPromotionUpdateRequest {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => ProductGroupPromotionUpdateRequest' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in ProductGroupPromotionUpdateRequest
        $AllProperties = ("ad_group_id", "product_group_promotion")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'ad_group_id' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "ad_group_id"))) {
            throw "Error! JSON cannot be serialized due to the required property 'ad_group_id' missing."
        } else {
            $AdGroupId = $JsonParameters.PSobject.Properties["ad_group_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "product_group_promotion"))) {
            throw "Error! JSON cannot be serialized due to the required property 'product_group_promotion' missing."
        } else {
            $ProductGroupPromotion = $JsonParameters.PSobject.Properties["product_group_promotion"].value
        }

        $PSO = [PSCustomObject]@{
            "ad_group_id" = ${AdGroupId}
            "product_group_promotion" = ${ProductGroupPromotion}
        }

        return $PSO
    }

}
