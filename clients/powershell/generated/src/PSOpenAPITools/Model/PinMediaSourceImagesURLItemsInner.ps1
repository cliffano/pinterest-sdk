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

.PARAMETER Title
No description available.
.PARAMETER Description
No description available.
.PARAMETER Link
Destination link for the image.
.PARAMETER Url
URL of image to upload.
.OUTPUTS

PinMediaSourceImagesURLItemsInner<PSCustomObject>
#>

function Initialize-PinMediaSourceImagesURLItemsInner {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Title},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Description},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Link},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Url}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => PinMediaSourceImagesURLItemsInner' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $Url) {
            throw "invalid value for 'Url', 'Url' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "title" = ${Title}
            "description" = ${Description}
            "link" = ${Link}
            "url" = ${Url}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to PinMediaSourceImagesURLItemsInner<PSCustomObject>

.DESCRIPTION

Convert from JSON to PinMediaSourceImagesURLItemsInner<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

PinMediaSourceImagesURLItemsInner<PSCustomObject>
#>
function ConvertFrom-JsonToPinMediaSourceImagesURLItemsInner {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => PinMediaSourceImagesURLItemsInner' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in PinMediaSourceImagesURLItemsInner
        $AllProperties = ("title", "description", "link", "url")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'url' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "url"))) {
            throw "Error! JSON cannot be serialized due to the required property 'url' missing."
        } else {
            $Url = $JsonParameters.PSobject.Properties["url"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "title"))) { #optional property not found
            $Title = $null
        } else {
            $Title = $JsonParameters.PSobject.Properties["title"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "description"))) { #optional property not found
            $Description = $null
        } else {
            $Description = $JsonParameters.PSobject.Properties["description"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "link"))) { #optional property not found
            $Link = $null
        } else {
            $Link = $JsonParameters.PSobject.Properties["link"].value
        }

        $PSO = [PSCustomObject]@{
            "title" = ${Title}
            "description" = ${Description}
            "link" = ${Link}
            "url" = ${Url}
        }

        return $PSO
    }

}
