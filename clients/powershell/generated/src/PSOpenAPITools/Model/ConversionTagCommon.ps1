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

.PARAMETER AdAccountId
Ad account ID.
.PARAMETER CodeSnippet
Tag code snippet.
.PARAMETER EnhancedMatchStatus
No description available.
.PARAMETER Id
Tag ID.
.PARAMETER LastFiredTimeMs
Time for the last event fired.
.PARAMETER Name
Conversion tag name.
.PARAMETER Status
No description available.
.PARAMETER Version
Version number.
.PARAMETER Configs
No description available.
.OUTPUTS

ConversionTagCommon<PSCustomObject>
#>

function Initialize-ConversionTagCommon {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${AdAccountId},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${CodeSnippet},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("UNKNOWN", "NOT_VALIDATED", "VALIDATING_IN_PROGRESS", "VALIDATION_COMPLETE", "")]
        [PSCustomObject]
        ${EnhancedMatchStatus},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Id},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Decimal]]
        ${LastFiredTimeMs},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Name},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("ACTIVE", "PAUSED", "ARCHIVED", "DRAFT", "DELETED_DRAFT")]
        [PSCustomObject]
        ${Status},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Version},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${Configs}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => ConversionTagCommon' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "ad_account_id" = ${AdAccountId}
            "code_snippet" = ${CodeSnippet}
            "enhanced_match_status" = ${EnhancedMatchStatus}
            "id" = ${Id}
            "last_fired_time_ms" = ${LastFiredTimeMs}
            "name" = ${Name}
            "status" = ${Status}
            "version" = ${Version}
            "configs" = ${Configs}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to ConversionTagCommon<PSCustomObject>

.DESCRIPTION

Convert from JSON to ConversionTagCommon<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

ConversionTagCommon<PSCustomObject>
#>
function ConvertFrom-JsonToConversionTagCommon {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => ConversionTagCommon' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in ConversionTagCommon
        $AllProperties = ("ad_account_id", "code_snippet", "enhanced_match_status", "id", "last_fired_time_ms", "name", "status", "version", "configs")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "ad_account_id"))) { #optional property not found
            $AdAccountId = $null
        } else {
            $AdAccountId = $JsonParameters.PSobject.Properties["ad_account_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "code_snippet"))) { #optional property not found
            $CodeSnippet = $null
        } else {
            $CodeSnippet = $JsonParameters.PSobject.Properties["code_snippet"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "enhanced_match_status"))) { #optional property not found
            $EnhancedMatchStatus = $null
        } else {
            $EnhancedMatchStatus = $JsonParameters.PSobject.Properties["enhanced_match_status"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "id"))) { #optional property not found
            $Id = $null
        } else {
            $Id = $JsonParameters.PSobject.Properties["id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "last_fired_time_ms"))) { #optional property not found
            $LastFiredTimeMs = $null
        } else {
            $LastFiredTimeMs = $JsonParameters.PSobject.Properties["last_fired_time_ms"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "name"))) { #optional property not found
            $Name = $null
        } else {
            $Name = $JsonParameters.PSobject.Properties["name"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "status"))) { #optional property not found
            $Status = $null
        } else {
            $Status = $JsonParameters.PSobject.Properties["status"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "version"))) { #optional property not found
            $Version = $null
        } else {
            $Version = $JsonParameters.PSobject.Properties["version"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "configs"))) { #optional property not found
            $Configs = $null
        } else {
            $Configs = $JsonParameters.PSobject.Properties["configs"].value
        }

        $PSO = [PSCustomObject]@{
            "ad_account_id" = ${AdAccountId}
            "code_snippet" = ${CodeSnippet}
            "enhanced_match_status" = ${EnhancedMatchStatus}
            "id" = ${Id}
            "last_fired_time_ms" = ${LastFiredTimeMs}
            "name" = ${Name}
            "status" = ${Status}
            "version" = ${Version}
            "configs" = ${Configs}
        }

        return $PSO
    }

}
