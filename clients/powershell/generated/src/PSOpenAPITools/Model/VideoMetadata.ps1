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

.PARAMETER ItemType
No description available.
.PARAMETER CoverImageUrl
No description available.
.PARAMETER VideoUrl
Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps.
.PARAMETER Duration
Duration (in milliseconds)
.PARAMETER Height
Height (in pixels)
.PARAMETER Width
Width (in pixels)
.OUTPUTS

VideoMetadata<PSCustomObject>
#>

function Initialize-VideoMetadata {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${ItemType},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${CoverImageUrl},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${VideoUrl},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Decimal]]
        ${Duration},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${Height},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${Width}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => VideoMetadata' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "item_type" = ${ItemType}
            "cover_image_url" = ${CoverImageUrl}
            "video_url" = ${VideoUrl}
            "duration" = ${Duration}
            "height" = ${Height}
            "width" = ${Width}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to VideoMetadata<PSCustomObject>

.DESCRIPTION

Convert from JSON to VideoMetadata<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

VideoMetadata<PSCustomObject>
#>
function ConvertFrom-JsonToVideoMetadata {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => VideoMetadata' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in VideoMetadata
        $AllProperties = ("item_type", "cover_image_url", "video_url", "duration", "height", "width")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "item_type"))) { #optional property not found
            $ItemType = $null
        } else {
            $ItemType = $JsonParameters.PSobject.Properties["item_type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "cover_image_url"))) { #optional property not found
            $CoverImageUrl = $null
        } else {
            $CoverImageUrl = $JsonParameters.PSobject.Properties["cover_image_url"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "video_url"))) { #optional property not found
            $VideoUrl = $null
        } else {
            $VideoUrl = $JsonParameters.PSobject.Properties["video_url"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "duration"))) { #optional property not found
            $Duration = $null
        } else {
            $Duration = $JsonParameters.PSobject.Properties["duration"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "height"))) { #optional property not found
            $Height = $null
        } else {
            $Height = $JsonParameters.PSobject.Properties["height"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "width"))) { #optional property not found
            $Width = $null
        } else {
            $Width = $JsonParameters.PSobject.Properties["width"].value
        }

        $PSO = [PSCustomObject]@{
            "item_type" = ${ItemType}
            "cover_image_url" = ${CoverImageUrl}
            "video_url" = ${VideoUrl}
            "duration" = ${Duration}
            "height" = ${Height}
            "width" = ${Width}
        }

        return $PSO
    }

}
