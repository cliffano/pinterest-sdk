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

This field includes all quiz data including questions, options, and results.

.PARAMETER Questions
No description available.
.PARAMETER Results
No description available.
.OUTPUTS

QuizPinData<PSCustomObject>
#>

function Initialize-QuizPinData {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${Questions},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject[]]
        ${Results}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => QuizPinData' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "questions" = ${Questions}
            "results" = ${Results}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to QuizPinData<PSCustomObject>

.DESCRIPTION

Convert from JSON to QuizPinData<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

QuizPinData<PSCustomObject>
#>
function ConvertFrom-JsonToQuizPinData {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => QuizPinData' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in QuizPinData
        $AllProperties = ("questions", "results")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "questions"))) { #optional property not found
            $Questions = $null
        } else {
            $Questions = $JsonParameters.PSobject.Properties["questions"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "results"))) { #optional property not found
            $Results = $null
        } else {
            $Results = $JsonParameters.PSobject.Properties["results"].value
        }

        $PSO = [PSCustomObject]@{
            "questions" = ${Questions}
            "results" = ${Results}
        }

        return $PSO
    }

}

