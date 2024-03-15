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

.PARAMETER GOOGLEPRODUCTCATEGORY2
No description available.
.OUTPUTS

GoogleProductCategory2Filter<PSCustomObject>
#>

function Initialize-GoogleProductCategory2Filter {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${GOOGLEPRODUCTCATEGORY2}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => GoogleProductCategory2Filter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $GOOGLEPRODUCTCATEGORY2) {
            throw "invalid value for 'GOOGLEPRODUCTCATEGORY2', 'GOOGLEPRODUCTCATEGORY2' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "GOOGLE_PRODUCT_CATEGORY_2" = ${GOOGLEPRODUCTCATEGORY2}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to GoogleProductCategory2Filter<PSCustomObject>

.DESCRIPTION

Convert from JSON to GoogleProductCategory2Filter<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

GoogleProductCategory2Filter<PSCustomObject>
#>
function ConvertFrom-JsonToGoogleProductCategory2Filter {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => GoogleProductCategory2Filter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in GoogleProductCategory2Filter
        $AllProperties = ("GOOGLE_PRODUCT_CATEGORY_2")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'GOOGLE_PRODUCT_CATEGORY_2' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "GOOGLE_PRODUCT_CATEGORY_2"))) {
            throw "Error! JSON cannot be serialized due to the required property 'GOOGLE_PRODUCT_CATEGORY_2' missing."
        } else {
            $GOOGLEPRODUCTCATEGORY2 = $JsonParameters.PSobject.Properties["GOOGLE_PRODUCT_CATEGORY_2"].value
        }

        $PSO = [PSCustomObject]@{
            "GOOGLE_PRODUCT_CATEGORY_2" = ${GOOGLEPRODUCTCATEGORY2}
        }

        return $PSO
    }

}

