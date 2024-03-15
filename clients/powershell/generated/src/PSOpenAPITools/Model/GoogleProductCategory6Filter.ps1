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

.PARAMETER GOOGLEPRODUCTCATEGORY6
No description available.
.OUTPUTS

GoogleProductCategory6Filter<PSCustomObject>
#>

function Initialize-GoogleProductCategory6Filter {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${GOOGLEPRODUCTCATEGORY6}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => GoogleProductCategory6Filter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $GOOGLEPRODUCTCATEGORY6) {
            throw "invalid value for 'GOOGLEPRODUCTCATEGORY6', 'GOOGLEPRODUCTCATEGORY6' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "GOOGLE_PRODUCT_CATEGORY_6" = ${GOOGLEPRODUCTCATEGORY6}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to GoogleProductCategory6Filter<PSCustomObject>

.DESCRIPTION

Convert from JSON to GoogleProductCategory6Filter<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

GoogleProductCategory6Filter<PSCustomObject>
#>
function ConvertFrom-JsonToGoogleProductCategory6Filter {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => GoogleProductCategory6Filter' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in GoogleProductCategory6Filter
        $AllProperties = ("GOOGLE_PRODUCT_CATEGORY_6")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'GOOGLE_PRODUCT_CATEGORY_6' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "GOOGLE_PRODUCT_CATEGORY_6"))) {
            throw "Error! JSON cannot be serialized due to the required property 'GOOGLE_PRODUCT_CATEGORY_6' missing."
        } else {
            $GOOGLEPRODUCTCATEGORY6 = $JsonParameters.PSobject.Properties["GOOGLE_PRODUCT_CATEGORY_6"].value
        }

        $PSO = [PSCustomObject]@{
            "GOOGLE_PRODUCT_CATEGORY_6" = ${GOOGLEPRODUCTCATEGORY6}
        }

        return $PSO
    }

}

