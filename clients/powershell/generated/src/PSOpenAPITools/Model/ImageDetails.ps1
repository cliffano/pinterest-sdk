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

.PARAMETER Width
No description available.
.PARAMETER Height
No description available.
.PARAMETER Url
No description available.
.OUTPUTS

ImageDetails<PSCustomObject>
#>

function Initialize-ImageDetails {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [Int32]
        ${Width},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${Height},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Url}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => ImageDetails' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $Width) {
            throw "invalid value for 'Width', 'Width' cannot be null."
        }

        if ($Width -lt 100) {
          throw "invalid value for 'Width', must be greater than or equal to 100."
        }

        if ($Height -lt 100) {
          throw "invalid value for 'Height', must be greater than or equal to 100."
        }

        if ($null -eq $Url) {
            throw "invalid value for 'Url', 'Url' cannot be null."
        }


        $PSO = [PSCustomObject]@{
            "width" = ${Width}
            "height" = ${Height}
            "url" = ${Url}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to ImageDetails<PSCustomObject>

.DESCRIPTION

Convert from JSON to ImageDetails<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

ImageDetails<PSCustomObject>
#>
function ConvertFrom-JsonToImageDetails {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => ImageDetails' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in ImageDetails
        $AllProperties = ("width", "height", "url")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'width' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "width"))) {
            throw "Error! JSON cannot be serialized due to the required property 'width' missing."
        } else {
            $Width = $JsonParameters.PSobject.Properties["width"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "height"))) {
            throw "Error! JSON cannot be serialized due to the required property 'height' missing."
        } else {
            $Height = $JsonParameters.PSobject.Properties["height"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "url"))) {
            throw "Error! JSON cannot be serialized due to the required property 'url' missing."
        } else {
            $Url = $JsonParameters.PSobject.Properties["url"].value
        }

        $PSO = [PSCustomObject]@{
            "width" = ${Width}
            "height" = ${Height}
            "url" = ${Url}
        }

        return $PSO
    }

}

