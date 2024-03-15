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

The list of parameter key/value pairs you will need to send with your POST request to upload your media file.

.PARAMETER XAmzDate
No description available.
.PARAMETER XAmzSignature
No description available.
.PARAMETER XAmzSecurityToken
No description available.
.PARAMETER XAmzAlgorithm
No description available.
.PARAMETER Key
No description available.
.PARAMETER Policy
No description available.
.PARAMETER XAmzCredential
No description available.
.PARAMETER ContentType
No description available.
.OUTPUTS

MediaUploadAllOfUploadParameters<PSCustomObject>
#>

function Initialize-MediaUploadAllOfUploadParameters {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${XAmzDate},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${XAmzSignature},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${XAmzSecurityToken},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${XAmzAlgorithm},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Key},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Policy},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${XAmzCredential},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${ContentType}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => MediaUploadAllOfUploadParameters' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "x-amz-date" = ${XAmzDate}
            "x-amz-signature" = ${XAmzSignature}
            "x-amz-security-token" = ${XAmzSecurityToken}
            "x-amz-algorithm" = ${XAmzAlgorithm}
            "key" = ${Key}
            "policy" = ${Policy}
            "x-amz-credential" = ${XAmzCredential}
            "Content-Type" = ${ContentType}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to MediaUploadAllOfUploadParameters<PSCustomObject>

.DESCRIPTION

Convert from JSON to MediaUploadAllOfUploadParameters<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

MediaUploadAllOfUploadParameters<PSCustomObject>
#>
function ConvertFrom-JsonToMediaUploadAllOfUploadParameters {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => MediaUploadAllOfUploadParameters' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in MediaUploadAllOfUploadParameters
        $AllProperties = ("x-amz-date", "x-amz-signature", "x-amz-security-token", "x-amz-algorithm", "key", "policy", "x-amz-credential", "Content-Type")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "x-amz-date"))) { #optional property not found
            $XAmzDate = $null
        } else {
            $XAmzDate = $JsonParameters.PSobject.Properties["x-amz-date"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "x-amz-signature"))) { #optional property not found
            $XAmzSignature = $null
        } else {
            $XAmzSignature = $JsonParameters.PSobject.Properties["x-amz-signature"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "x-amz-security-token"))) { #optional property not found
            $XAmzSecurityToken = $null
        } else {
            $XAmzSecurityToken = $JsonParameters.PSobject.Properties["x-amz-security-token"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "x-amz-algorithm"))) { #optional property not found
            $XAmzAlgorithm = $null
        } else {
            $XAmzAlgorithm = $JsonParameters.PSobject.Properties["x-amz-algorithm"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "key"))) { #optional property not found
            $Key = $null
        } else {
            $Key = $JsonParameters.PSobject.Properties["key"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "policy"))) { #optional property not found
            $Policy = $null
        } else {
            $Policy = $JsonParameters.PSobject.Properties["policy"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "x-amz-credential"))) { #optional property not found
            $XAmzCredential = $null
        } else {
            $XAmzCredential = $JsonParameters.PSobject.Properties["x-amz-credential"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "Content-Type"))) { #optional property not found
            $ContentType = $null
        } else {
            $ContentType = $JsonParameters.PSobject.Properties["Content-Type"].value
        }

        $PSO = [PSCustomObject]@{
            "x-amz-date" = ${XAmzDate}
            "x-amz-signature" = ${XAmzSignature}
            "x-amz-security-token" = ${XAmzSecurityToken}
            "x-amz-algorithm" = ${XAmzAlgorithm}
            "key" = ${Key}
            "policy" = ${Policy}
            "x-amz-credential" = ${XAmzCredential}
            "Content-Type" = ${ContentType}
        }

        return $PSO
    }

}

