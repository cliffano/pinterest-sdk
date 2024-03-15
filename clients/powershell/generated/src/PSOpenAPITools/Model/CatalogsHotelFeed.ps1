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

Catalogs Hotel Feed object

.PARAMETER CreatedAt
No description available.
.PARAMETER Id
No description available.
.PARAMETER UpdatedAt
No description available.
.PARAMETER Name
A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
.PARAMETER Format
No description available.
.PARAMETER CatalogType
No description available.
.PARAMETER Credentials
No description available.
.PARAMETER Location
The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
.PARAMETER PreferredProcessingSchedule
No description available.
.PARAMETER Status
No description available.
.PARAMETER DefaultCurrency
No description available.
.PARAMETER DefaultLocale
The locale used within a feed for product descriptions.
.PARAMETER CatalogId
Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type.
.OUTPUTS

CatalogsHotelFeed<PSCustomObject>
#>

function Initialize-CatalogsHotelFeed {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[System.DateTime]]
        ${CreatedAt},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Id},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[System.DateTime]]
        ${UpdatedAt},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Name},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("TSV", "CSV", "XML")]
        [PSCustomObject]
        ${Format},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("RETAIL", "HOTEL")]
        [PSCustomObject]
        ${CatalogType},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${Credentials},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Location},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${PreferredProcessingSchedule},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("ACTIVE", "INACTIVE")]
        [PSCustomObject]
        ${Status},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("AED", "AFN", "ALL", "AMD", "ANG", "AOA", "ARS", "AUD", "AWG", "AZN", "BAM", "BBD", "BDT", "BGN", "BHD", "BIF", "BMD", "BND", "BOB", "BRL", "BSD", "BTN", "BWP", "BYN", "BYR", "BZD", "CAD", "CDF", "CHF", "CLP", "CNY", "COP", "CRC", "CUC", "CUP", "CVE", "CZK", "DJF", "DKK", "DOP", "DZD", "EGP", "ERN", "ETB", "EUR", "FJD", "FKP", "GBP", "GEL", "GGP", "GHS", "GIP", "GMD", "GNF", "GTQ", "GYD", "HKD", "HNL", "HRK", "HTG", "HUF", "IDR", "ILS", "IMP", "INR", "IQD", "IRR", "ISK", "JEP", "JMD", "JOD", "JPY", "KES", "KGS", "KHR", "KMF", "KPW", "KRW", "KWD", "KYD", "KZT", "LAK", "LBP", "LKR", "LRD", "LSL", "LYD", "MAD", "MDL", "MGA", "MKD", "MMK", "MNT", "MOP", "MRO", "MUR", "MVR", "MWK", "MXN", "MYR", "MZN", "NAD", "NGN", "NIO", "NOK", "NPR", "NZD", "OMR", "PAB", "PEN", "PGK", "PHP", "PKR", "PLN", "PYG", "QAR", "RON", "RSD", "RUB", "RWF", "SAR", "SBD", "SCR", "SDG", "SEK", "SGD", "SHP", "SLL", "SOS", "SPL", "SRD", "STD", "SVC", "SYP", "SZL", "THB", "TJS", "TMT", "TND", "TOP", "TRY", "TTD", "TVD", "TWD", "TZS", "UAH", "UGX", "USD", "UYU", "UZS", "VEF", "VND", "VUV", "WST", "XAF", "XCD", "XDR", "XOF", "XPF", "YER", "ZAR", "ZMW", "ZWD", "")]
        [PSCustomObject]
        ${DefaultCurrency},
        [Parameter(Position = 11, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${DefaultLocale},
        [Parameter(Position = 12, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^\d+$")]
        [String]
        ${CatalogId}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => CatalogsHotelFeed' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $Format) {
            throw "invalid value for 'Format', 'Format' cannot be null."
        }

        if ($null -eq $CatalogType) {
            throw "invalid value for 'CatalogType', 'CatalogType' cannot be null."
        }

        if ($null -eq $Location) {
            throw "invalid value for 'Location', 'Location' cannot be null."
        }

        if ($null -eq $Status) {
            throw "invalid value for 'Status', 'Status' cannot be null."
        }

        if ($null -eq $DefaultLocale) {
            throw "invalid value for 'DefaultLocale', 'DefaultLocale' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "created_at" = ${CreatedAt}
            "id" = ${Id}
            "updated_at" = ${UpdatedAt}
            "name" = ${Name}
            "format" = ${Format}
            "catalog_type" = ${CatalogType}
            "credentials" = ${Credentials}
            "location" = ${Location}
            "preferred_processing_schedule" = ${PreferredProcessingSchedule}
            "status" = ${Status}
            "default_currency" = ${DefaultCurrency}
            "default_locale" = ${DefaultLocale}
            "catalog_id" = ${CatalogId}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to CatalogsHotelFeed<PSCustomObject>

.DESCRIPTION

Convert from JSON to CatalogsHotelFeed<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

CatalogsHotelFeed<PSCustomObject>
#>
function ConvertFrom-JsonToCatalogsHotelFeed {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => CatalogsHotelFeed' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in CatalogsHotelFeed
        $AllProperties = ("created_at", "id", "updated_at", "name", "format", "catalog_type", "credentials", "location", "preferred_processing_schedule", "status", "default_currency", "default_locale", "catalog_id")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'name' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "name"))) {
            throw "Error! JSON cannot be serialized due to the required property 'name' missing."
        } else {
            $Name = $JsonParameters.PSobject.Properties["name"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "format"))) {
            throw "Error! JSON cannot be serialized due to the required property 'format' missing."
        } else {
            $Format = $JsonParameters.PSobject.Properties["format"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "catalog_type"))) {
            throw "Error! JSON cannot be serialized due to the required property 'catalog_type' missing."
        } else {
            $CatalogType = $JsonParameters.PSobject.Properties["catalog_type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "credentials"))) {
            throw "Error! JSON cannot be serialized due to the required property 'credentials' missing."
        } else {
            $Credentials = $JsonParameters.PSobject.Properties["credentials"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "location"))) {
            throw "Error! JSON cannot be serialized due to the required property 'location' missing."
        } else {
            $Location = $JsonParameters.PSobject.Properties["location"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "preferred_processing_schedule"))) {
            throw "Error! JSON cannot be serialized due to the required property 'preferred_processing_schedule' missing."
        } else {
            $PreferredProcessingSchedule = $JsonParameters.PSobject.Properties["preferred_processing_schedule"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "status"))) {
            throw "Error! JSON cannot be serialized due to the required property 'status' missing."
        } else {
            $Status = $JsonParameters.PSobject.Properties["status"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "default_currency"))) {
            throw "Error! JSON cannot be serialized due to the required property 'default_currency' missing."
        } else {
            $DefaultCurrency = $JsonParameters.PSobject.Properties["default_currency"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "default_locale"))) {
            throw "Error! JSON cannot be serialized due to the required property 'default_locale' missing."
        } else {
            $DefaultLocale = $JsonParameters.PSobject.Properties["default_locale"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "catalog_id"))) {
            throw "Error! JSON cannot be serialized due to the required property 'catalog_id' missing."
        } else {
            $CatalogId = $JsonParameters.PSobject.Properties["catalog_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "created_at"))) { #optional property not found
            $CreatedAt = $null
        } else {
            $CreatedAt = $JsonParameters.PSobject.Properties["created_at"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "id"))) { #optional property not found
            $Id = $null
        } else {
            $Id = $JsonParameters.PSobject.Properties["id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "updated_at"))) { #optional property not found
            $UpdatedAt = $null
        } else {
            $UpdatedAt = $JsonParameters.PSobject.Properties["updated_at"].value
        }

        $PSO = [PSCustomObject]@{
            "created_at" = ${CreatedAt}
            "id" = ${Id}
            "updated_at" = ${UpdatedAt}
            "name" = ${Name}
            "format" = ${Format}
            "catalog_type" = ${CatalogType}
            "credentials" = ${Credentials}
            "location" = ${Location}
            "preferred_processing_schedule" = ${PreferredProcessingSchedule}
            "status" = ${Status}
            "default_currency" = ${DefaultCurrency}
            "default_locale" = ${DefaultLocale}
            "catalog_id" = ${CatalogId}
        }

        return $PSO
    }

}

