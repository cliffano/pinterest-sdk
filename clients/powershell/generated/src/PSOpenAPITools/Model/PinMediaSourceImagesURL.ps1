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

Multiple images urls-based media source

.PARAMETER SourceType
No description available.
.PARAMETER Items
Array with image objects.
.PARAMETER Index
No description available.
.OUTPUTS

PinMediaSourceImagesURL<PSCustomObject>
#>

function Initialize-PinMediaSourceImagesURL {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [ValidateSet("multiple_image_urls")]
        [String]
        ${SourceType},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${Items},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${Index}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => PinMediaSourceImagesURL' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        if ($null -eq $Items) {
            throw "invalid value for 'Items', 'Items' cannot be null."
        }

        if ($Items.length -gt 5) {
            throw "invalid value for 'Items', number of items must be less than or equal to 5."
        }

        if ($Items.length -lt 2) {
            throw "invalid value for 'Items', number of items must be greater than or equal to 2."
        }

        if ($Index -and $Index -lt 0) {
          throw "invalid value for 'Index', must be greater than or equal to 0."
        }


        $PSO = [PSCustomObject]@{
            "source_type" = ${SourceType}
            "items" = ${Items}
            "index" = ${Index}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to PinMediaSourceImagesURL<PSCustomObject>

.DESCRIPTION

Convert from JSON to PinMediaSourceImagesURL<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

PinMediaSourceImagesURL<PSCustomObject>
#>
function ConvertFrom-JsonToPinMediaSourceImagesURL {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => PinMediaSourceImagesURL' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in PinMediaSourceImagesURL
        $AllProperties = ("source_type", "items", "index")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        If ([string]::IsNullOrEmpty($Json) -or $Json -eq "{}") { # empty json
            throw "Error! Empty JSON cannot be serialized due to the required property 'items' missing."
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "items"))) {
            throw "Error! JSON cannot be serialized due to the required property 'items' missing."
        } else {
            $Items = $JsonParameters.PSobject.Properties["items"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "source_type"))) { #optional property not found
            $SourceType = $null
        } else {
            $SourceType = $JsonParameters.PSobject.Properties["source_type"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "index"))) { #optional property not found
            $Index = $null
        } else {
            $Index = $JsonParameters.PSobject.Properties["index"].value
        }

        $PSO = [PSCustomObject]@{
            "source_type" = ${SourceType}
            "items" = ${Items}
            "index" = ${Index}
        }

        return $PSO
    }

}
