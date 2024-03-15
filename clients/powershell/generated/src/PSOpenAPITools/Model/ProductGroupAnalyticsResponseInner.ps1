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

.PARAMETER PRODUCTGROUPID
The ID of the product group that this metrics belongs to.
.PARAMETER DATE
Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`)
.OUTPUTS

ProductGroupAnalyticsResponseInner<PSCustomObject>
#>

function Initialize-ProductGroupAnalyticsResponseInner {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^\d+$")]
        [String]
        ${PRODUCTGROUPID},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[System.DateTime]]
        ${DATE}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => ProductGroupAnalyticsResponseInner' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $PRODUCTGROUPID) {
            throw "invalid value for 'PRODUCTGROUPID', 'PRODUCTGROUPID' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "PRODUCT_GROUP_ID" = ${PRODUCTGROUPID}
            "DATE" = ${DATE}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to ProductGroupAnalyticsResponseInner<PSCustomObject>

.DESCRIPTION

Convert from JSON to ProductGroupAnalyticsResponseInner<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

ProductGroupAnalyticsResponseInner<PSCustomObject>
#>
function ConvertFrom-JsonToProductGroupAnalyticsResponseInner {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => ProductGroupAnalyticsResponseInner' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json
        $ProductGroupAnalyticsResponseInnerAdditionalProperties = @{}

        # check if Json contains properties not defined in ProductGroupAnalyticsResponseInner
        $AllProperties = ("PRODUCT_GROUP_ID", "DATE")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            # store undefined properties in additionalProperties
            if (!($AllProperties.Contains($name))) {
                $ProductGroupAnalyticsResponseInnerAdditionalProperties[$name] = $JsonParameters.PSobject.Properties[$name].value
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'PRODUCT_GROUP_ID' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "PRODUCT_GROUP_ID"))) {
            throw "Error! JSON cannot be serialized due to the required property 'PRODUCT_GROUP_ID' missing."
        } else {
            $PRODUCTGROUPID = $JsonParameters.PSobject.Properties["PRODUCT_GROUP_ID"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "DATE"))) { #optional property not found
            $DATE = $null
        } else {
            $DATE = $JsonParameters.PSobject.Properties["DATE"].value
        }

        $PSO = [PSCustomObject]@{
            "PRODUCT_GROUP_ID" = ${PRODUCTGROUPID}
            "DATE" = ${DATE}
            "AdditionalProperties" = $ProductGroupAnalyticsResponseInnerAdditionalProperties
        }

        return $PSO
    }

}

