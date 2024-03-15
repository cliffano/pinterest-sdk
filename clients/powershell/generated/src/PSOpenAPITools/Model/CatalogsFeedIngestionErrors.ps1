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

.PARAMETER LINELEVELINTERNALERROR
We experienced a technical difficulty and were unable to ingest this some items. The next ingestion will happen in 24 hours.
.PARAMETER LARGEPRODUCTCOUNTDECREASE
The product count has decreased by more than 99% compared to the last successful ingestion.
.PARAMETER ACCOUNTFLAGGED
We detected an issue with your account and are not currently ingesting your items. Please review our policies at policy.pinterest.com/community-guidelines#section-spam or contact us at help.pinterest.com/contact for more information.
.PARAMETER IMAGELEVELINTERNALERROR
We experienced a technical difficulty and were unable to download some images. The next download attempt will happen in 24 hours.
.PARAMETER IMAGEFILENOTACCESSIBLE
Image files are unreadable. Please upload new files to continue.
.PARAMETER IMAGEMALFORMEDURL
Image files are unreadable. Please check your link and upload new files to continue.
.PARAMETER IMAGEFILENOTFOUND
Image files are unreadable. Please upload new files to continue.
.PARAMETER IMAGEINVALIDFILE
Image files are unreadable. Please upload new files to continue.
.OUTPUTS

CatalogsFeedIngestionErrors<PSCustomObject>
#>

function Initialize-CatalogsFeedIngestionErrors {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${LINELEVELINTERNALERROR},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("1")]
        [System.Nullable[Int32]]
        ${LARGEPRODUCTCOUNTDECREASE},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${ACCOUNTFLAGGED},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${IMAGELEVELINTERNALERROR},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${IMAGEFILENOTACCESSIBLE},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${IMAGEMALFORMEDURL},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${IMAGEFILENOTFOUND},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${IMAGEINVALIDFILE}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => CatalogsFeedIngestionErrors' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "LINE_LEVEL_INTERNAL_ERROR" = ${LINELEVELINTERNALERROR}
            "LARGE_PRODUCT_COUNT_DECREASE" = ${LARGEPRODUCTCOUNTDECREASE}
            "ACCOUNT_FLAGGED" = ${ACCOUNTFLAGGED}
            "IMAGE_LEVEL_INTERNAL_ERROR" = ${IMAGELEVELINTERNALERROR}
            "IMAGE_FILE_NOT_ACCESSIBLE" = ${IMAGEFILENOTACCESSIBLE}
            "IMAGE_MALFORMED_URL" = ${IMAGEMALFORMEDURL}
            "IMAGE_FILE_NOT_FOUND" = ${IMAGEFILENOTFOUND}
            "IMAGE_INVALID_FILE" = ${IMAGEINVALIDFILE}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to CatalogsFeedIngestionErrors<PSCustomObject>

.DESCRIPTION

Convert from JSON to CatalogsFeedIngestionErrors<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

CatalogsFeedIngestionErrors<PSCustomObject>
#>
function ConvertFrom-JsonToCatalogsFeedIngestionErrors {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => CatalogsFeedIngestionErrors' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in CatalogsFeedIngestionErrors
        $AllProperties = ("LINE_LEVEL_INTERNAL_ERROR", "LARGE_PRODUCT_COUNT_DECREASE", "ACCOUNT_FLAGGED", "IMAGE_LEVEL_INTERNAL_ERROR", "IMAGE_FILE_NOT_ACCESSIBLE", "IMAGE_MALFORMED_URL", "IMAGE_FILE_NOT_FOUND", "IMAGE_INVALID_FILE")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "LINE_LEVEL_INTERNAL_ERROR"))) { #optional property not found
            $LINELEVELINTERNALERROR = $null
        } else {
            $LINELEVELINTERNALERROR = $JsonParameters.PSobject.Properties["LINE_LEVEL_INTERNAL_ERROR"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "LARGE_PRODUCT_COUNT_DECREASE"))) { #optional property not found
            $LARGEPRODUCTCOUNTDECREASE = $null
        } else {
            $LARGEPRODUCTCOUNTDECREASE = $JsonParameters.PSobject.Properties["LARGE_PRODUCT_COUNT_DECREASE"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "ACCOUNT_FLAGGED"))) { #optional property not found
            $ACCOUNTFLAGGED = $null
        } else {
            $ACCOUNTFLAGGED = $JsonParameters.PSobject.Properties["ACCOUNT_FLAGGED"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "IMAGE_LEVEL_INTERNAL_ERROR"))) { #optional property not found
            $IMAGELEVELINTERNALERROR = $null
        } else {
            $IMAGELEVELINTERNALERROR = $JsonParameters.PSobject.Properties["IMAGE_LEVEL_INTERNAL_ERROR"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "IMAGE_FILE_NOT_ACCESSIBLE"))) { #optional property not found
            $IMAGEFILENOTACCESSIBLE = $null
        } else {
            $IMAGEFILENOTACCESSIBLE = $JsonParameters.PSobject.Properties["IMAGE_FILE_NOT_ACCESSIBLE"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "IMAGE_MALFORMED_URL"))) { #optional property not found
            $IMAGEMALFORMEDURL = $null
        } else {
            $IMAGEMALFORMEDURL = $JsonParameters.PSobject.Properties["IMAGE_MALFORMED_URL"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "IMAGE_FILE_NOT_FOUND"))) { #optional property not found
            $IMAGEFILENOTFOUND = $null
        } else {
            $IMAGEFILENOTFOUND = $JsonParameters.PSobject.Properties["IMAGE_FILE_NOT_FOUND"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "IMAGE_INVALID_FILE"))) { #optional property not found
            $IMAGEINVALIDFILE = $null
        } else {
            $IMAGEINVALIDFILE = $JsonParameters.PSobject.Properties["IMAGE_INVALID_FILE"].value
        }

        $PSO = [PSCustomObject]@{
            "LINE_LEVEL_INTERNAL_ERROR" = ${LINELEVELINTERNALERROR}
            "LARGE_PRODUCT_COUNT_DECREASE" = ${LARGEPRODUCTCOUNTDECREASE}
            "ACCOUNT_FLAGGED" = ${ACCOUNTFLAGGED}
            "IMAGE_LEVEL_INTERNAL_ERROR" = ${IMAGELEVELINTERNALERROR}
            "IMAGE_FILE_NOT_ACCESSIBLE" = ${IMAGEFILENOTACCESSIBLE}
            "IMAGE_MALFORMED_URL" = ${IMAGEMALFORMEDURL}
            "IMAGE_FILE_NOT_FOUND" = ${IMAGEFILENOTFOUND}
            "IMAGE_INVALID_FILE" = ${IMAGEINVALIDFILE}
        }

        return $PSO
    }

}

