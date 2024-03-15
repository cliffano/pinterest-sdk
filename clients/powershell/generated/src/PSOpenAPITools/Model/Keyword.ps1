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

.PARAMETER Archived
No description available.
.PARAMETER Id
Keyword ID .
.PARAMETER ParentId
Keyword parent entity ID (advertiser, campaign, ad group).
.PARAMETER ParentType
Parent entity type
.PARAMETER Type
Always keyword
.PARAMETER Bid
Keyword custom bid in microcurrency - null if inherited from parent ad group.
.PARAMETER MatchType
No description available.
.PARAMETER Value
Keyword value (120 chars max).
.OUTPUTS

Keyword<PSCustomObject>
#>

function Initialize-Keyword {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Boolean]]
        ${Archived},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^\d+$")]
        [String]
        ${Id},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^\d+$")]
        [String]
        ${ParentId},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${ParentType},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Type},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${Bid},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("BROAD", "PHRASE", "EXACT", "EXACT_NEGATIVE", "PHRASE_NEGATIVE", "")]
        [PSCustomObject]
        ${MatchType},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Value}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => Keyword' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $Value) {
            throw "invalid value for 'Value', 'Value' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "archived" = ${Archived}
            "id" = ${Id}
            "parent_id" = ${ParentId}
            "parent_type" = ${ParentType}
            "type" = ${Type}
            "bid" = ${Bid}
            "match_type" = ${MatchType}
            "value" = ${Value}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to Keyword<PSCustomObject>

.DESCRIPTION

Convert from JSON to Keyword<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

Keyword<PSCustomObject>
#>
function ConvertFrom-JsonToKeyword {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => Keyword' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in Keyword
        $AllProperties = ("archived", "id", "parent_id", "parent_type", "type", "bid", "match_type", "value")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'match_type' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "match_type"))) {
            throw "Error! JSON cannot be serialized due to the required property 'match_type' missing."
        } else {
            $MatchType = $JsonParameters.PSobject.Properties["match_type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "value"))) {
            throw "Error! JSON cannot be serialized due to the required property 'value' missing."
        } else {
            $Value = $JsonParameters.PSobject.Properties["value"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "archived"))) { #optional property not found
            $Archived = $null
        } else {
            $Archived = $JsonParameters.PSobject.Properties["archived"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "id"))) { #optional property not found
            $Id = $null
        } else {
            $Id = $JsonParameters.PSobject.Properties["id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "parent_id"))) { #optional property not found
            $ParentId = $null
        } else {
            $ParentId = $JsonParameters.PSobject.Properties["parent_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "parent_type"))) { #optional property not found
            $ParentType = $null
        } else {
            $ParentType = $JsonParameters.PSobject.Properties["parent_type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "type"))) { #optional property not found
            $Type = $null
        } else {
            $Type = $JsonParameters.PSobject.Properties["type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "bid"))) { #optional property not found
            $Bid = $null
        } else {
            $Bid = $JsonParameters.PSobject.Properties["bid"].value
        }

        $PSO = [PSCustomObject]@{
            "archived" = ${Archived}
            "id" = ${Id}
            "parent_id" = ${ParentId}
            "parent_type" = ${ParentType}
            "type" = ${Type}
            "bid" = ${Bid}
            "match_type" = ${MatchType}
            "value" = ${Value}
        }

        return $PSO
    }

}

