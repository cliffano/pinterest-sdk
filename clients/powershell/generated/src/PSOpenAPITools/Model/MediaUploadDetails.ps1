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

Media upload details

.PARAMETER MediaId
No description available.
.PARAMETER MediaType
No description available.
.PARAMETER Status
No description available.
.OUTPUTS

MediaUploadDetails<PSCustomObject>
#>

function Initialize-MediaUploadDetails {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^\d+$")]
        [String]
        ${MediaId},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("video")]
        [PSCustomObject]
        ${MediaType},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("registered", "processing", "succeeded", "failed")]
        [PSCustomObject]
        ${Status}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => MediaUploadDetails' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "media_id" = ${MediaId}
            "media_type" = ${MediaType}
            "status" = ${Status}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to MediaUploadDetails<PSCustomObject>

.DESCRIPTION

Convert from JSON to MediaUploadDetails<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

MediaUploadDetails<PSCustomObject>
#>
function ConvertFrom-JsonToMediaUploadDetails {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => MediaUploadDetails' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in MediaUploadDetails
        $AllProperties = ("media_id", "media_type", "status")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "media_id"))) { #optional property not found
            $MediaId = $null
        } else {
            $MediaId = $JsonParameters.PSobject.Properties["media_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "media_type"))) { #optional property not found
            $MediaType = $null
        } else {
            $MediaType = $JsonParameters.PSobject.Properties["media_type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "status"))) { #optional property not found
            $Status = $null
        } else {
            $Status = $JsonParameters.PSobject.Properties["status"].value
        }

        $PSO = [PSCustomObject]@{
            "media_id" = ${MediaId}
            "media_type" = ${MediaType}
            "status" = ${Status}
        }

        return $PSO
    }

}

