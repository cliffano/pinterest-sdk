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

Object containing customer information data. Note, It is required at least one of 1) em, 2) hashed_maids or 3) pair client_ip_address + client_user_agent.

.PARAMETER Ph
Sha256 hashes of user's phone numbers, only digits with country code, area code, and number. Remove any symbols, letters, spaces and leading zeros. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
.PARAMETER Ge
Sha256 hashes of user's gender, in lowercase. Either ""f"" or ""m"" or ""n"" for non-binary gender.
.PARAMETER Db
Sha256 hashes of user's date of birthday, given as year, month, and day.
.PARAMETER Ln
Sha256 hashes of user's last name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
.PARAMETER Fn
Sha256 hashes of user's first name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
.PARAMETER Ct
Sha256 hashes of user's city, in lowercase, and without spaces or punctuation. User residency city (mostly billing).
.PARAMETER St
Sha256 hashes of user's state, given as a two-letter code in lowercase. User residency state (mostly billing).
.PARAMETER Zp
Sha256 hashes of user's zipcode, only digits. User residency zipcode (mostly billing).
.PARAMETER Country
Sha256 hashes of two-character ISO-3166 country code indicating the user's country, in lowercase.
.PARAMETER ExternalId
Sha256 hashes of the unique id from the advertiser that identifies a user in their space, e.g. user id, loyalty id, etc. We highly recommend this on all events. It may improve reporting performance such as ROAS/CPA.
.PARAMETER ClickId
The unique identifier stored in _epik cookie on your domain or &epik= query parameter in the URL. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
.PARAMETER PartnerId
A unique identifier of visitors' information defined by third party partners. e.g RampID
.OUTPUTS

ConversionEventsUserData<PSCustomObject>
#>

function Initialize-ConversionEventsUserData {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${Ph},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${Ge},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${Db},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${Ln},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${Fn},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${Ct},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${St},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${Zp},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${Country},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true)]
        [String[]]
        ${ExternalId},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${ClickId},
        [Parameter(Position = 11, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${PartnerId}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => ConversionEventsUserData' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "ph" = ${Ph}
            "ge" = ${Ge}
            "db" = ${Db}
            "ln" = ${Ln}
            "fn" = ${Fn}
            "ct" = ${Ct}
            "st" = ${St}
            "zp" = ${Zp}
            "country" = ${Country}
            "external_id" = ${ExternalId}
            "click_id" = ${ClickId}
            "partner_id" = ${PartnerId}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to ConversionEventsUserData<PSCustomObject>

.DESCRIPTION

Convert from JSON to ConversionEventsUserData<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

ConversionEventsUserData<PSCustomObject>
#>
function ConvertFrom-JsonToConversionEventsUserData {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => ConversionEventsUserData' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in ConversionEventsUserData
        $AllProperties = ("ph", "ge", "db", "ln", "fn", "ct", "st", "zp", "country", "external_id", "click_id", "partner_id")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "ph"))) { #optional property not found
            $Ph = $null
        } else {
            $Ph = $JsonParameters.PSobject.Properties["ph"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "ge"))) { #optional property not found
            $Ge = $null
        } else {
            $Ge = $JsonParameters.PSobject.Properties["ge"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "db"))) { #optional property not found
            $Db = $null
        } else {
            $Db = $JsonParameters.PSobject.Properties["db"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "ln"))) { #optional property not found
            $Ln = $null
        } else {
            $Ln = $JsonParameters.PSobject.Properties["ln"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "fn"))) { #optional property not found
            $Fn = $null
        } else {
            $Fn = $JsonParameters.PSobject.Properties["fn"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "ct"))) { #optional property not found
            $Ct = $null
        } else {
            $Ct = $JsonParameters.PSobject.Properties["ct"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "st"))) { #optional property not found
            $St = $null
        } else {
            $St = $JsonParameters.PSobject.Properties["st"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "zp"))) { #optional property not found
            $Zp = $null
        } else {
            $Zp = $JsonParameters.PSobject.Properties["zp"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "country"))) { #optional property not found
            $Country = $null
        } else {
            $Country = $JsonParameters.PSobject.Properties["country"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "external_id"))) { #optional property not found
            $ExternalId = $null
        } else {
            $ExternalId = $JsonParameters.PSobject.Properties["external_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "click_id"))) { #optional property not found
            $ClickId = $null
        } else {
            $ClickId = $JsonParameters.PSobject.Properties["click_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "partner_id"))) { #optional property not found
            $PartnerId = $null
        } else {
            $PartnerId = $JsonParameters.PSobject.Properties["partner_id"].value
        }

        $PSO = [PSCustomObject]@{
            "ph" = ${Ph}
            "ge" = ${Ge}
            "db" = ${Db}
            "ln" = ${Ln}
            "fn" = ${Fn}
            "ct" = ${Ct}
            "st" = ${St}
            "zp" = ${Zp}
            "country" = ${Country}
            "external_id" = ${ExternalId}
            "click_id" = ${ClickId}
            "partner_id" = ${PartnerId}
        }

        return $PSO
    }

}
