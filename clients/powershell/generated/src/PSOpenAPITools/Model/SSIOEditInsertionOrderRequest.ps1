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

.PARAMETER StartDate
Starting date of time period. Format: YYYY-MM-DD
.PARAMETER EndDate
End date of time period. Format: YYYY-MM-DD
.PARAMETER PoNumber
The po number
.PARAMETER BudgetAmount
If Budget order line, the budget amount.
.PARAMETER BillingContactFirstname
The billing contact first name
.PARAMETER BillingContactLastname
The billing contact last name
.PARAMETER BillingContactEmail
The billing contact email
.PARAMETER MediaContactFirstname
The media contact first name
.PARAMETER MediaContactLastname
The media contact last name
.PARAMETER MediaContactEmail
The media contact email
.PARAMETER AgencyLink
URL link for agency
.PARAMETER UserEmail
The email of user submitting the insertion order
.PARAMETER OracleLineId
LineId in the Oracle DB
.PARAMETER SalesforceOrderId
OrderId in SFDC
.PARAMETER SalesforceOrderLineId
OrderLineId in SFDC
.PARAMETER AdsManagerOrderLineId
Ads manager OrderLineId
.OUTPUTS

SSIOEditInsertionOrderRequest<PSCustomObject>
#>

function Initialize-SSIOEditInsertionOrderRequest {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^(\d{4})-(\d{2})-(\d{2})$")]
        [String]
        ${StartDate},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [ValidatePattern("^(\d{4})-(\d{2})-(\d{2})$")]
        [String]
        ${EndDate},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${PoNumber},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Decimal]]
        ${BudgetAmount},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${BillingContactFirstname},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${BillingContactLastname},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${BillingContactEmail},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${MediaContactFirstname},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${MediaContactLastname},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${MediaContactEmail},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${AgencyLink},
        [Parameter(Position = 11, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${UserEmail},
        [Parameter(Position = 12, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${OracleLineId},
        [Parameter(Position = 13, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${SalesforceOrderId},
        [Parameter(Position = 14, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${SalesforceOrderLineId},
        [Parameter(Position = 15, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${AdsManagerOrderLineId}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => SSIOEditInsertionOrderRequest' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "start_date" = ${StartDate}
            "end_date" = ${EndDate}
            "po_number" = ${PoNumber}
            "budget_amount" = ${BudgetAmount}
            "billing_contact_firstname" = ${BillingContactFirstname}
            "billing_contact_lastname" = ${BillingContactLastname}
            "billing_contact_email" = ${BillingContactEmail}
            "media_contact_firstname" = ${MediaContactFirstname}
            "media_contact_lastname" = ${MediaContactLastname}
            "media_contact_email" = ${MediaContactEmail}
            "agency_link" = ${AgencyLink}
            "user_email" = ${UserEmail}
            "oracle_line_id" = ${OracleLineId}
            "salesforce_order_id" = ${SalesforceOrderId}
            "salesforce_order_line_id" = ${SalesforceOrderLineId}
            "ads_manager_order_line_id" = ${AdsManagerOrderLineId}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to SSIOEditInsertionOrderRequest<PSCustomObject>

.DESCRIPTION

Convert from JSON to SSIOEditInsertionOrderRequest<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

SSIOEditInsertionOrderRequest<PSCustomObject>
#>
function ConvertFrom-JsonToSSIOEditInsertionOrderRequest {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => SSIOEditInsertionOrderRequest' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in SSIOEditInsertionOrderRequest
        $AllProperties = ("start_date", "end_date", "po_number", "budget_amount", "billing_contact_firstname", "billing_contact_lastname", "billing_contact_email", "media_contact_firstname", "media_contact_lastname", "media_contact_email", "agency_link", "user_email", "oracle_line_id", "salesforce_order_id", "salesforce_order_line_id", "ads_manager_order_line_id")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "start_date"))) { #optional property not found
            $StartDate = $null
        } else {
            $StartDate = $JsonParameters.PSobject.Properties["start_date"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "end_date"))) { #optional property not found
            $EndDate = $null
        } else {
            $EndDate = $JsonParameters.PSobject.Properties["end_date"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "po_number"))) { #optional property not found
            $PoNumber = $null
        } else {
            $PoNumber = $JsonParameters.PSobject.Properties["po_number"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "budget_amount"))) { #optional property not found
            $BudgetAmount = $null
        } else {
            $BudgetAmount = $JsonParameters.PSobject.Properties["budget_amount"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "billing_contact_firstname"))) { #optional property not found
            $BillingContactFirstname = $null
        } else {
            $BillingContactFirstname = $JsonParameters.PSobject.Properties["billing_contact_firstname"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "billing_contact_lastname"))) { #optional property not found
            $BillingContactLastname = $null
        } else {
            $BillingContactLastname = $JsonParameters.PSobject.Properties["billing_contact_lastname"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "billing_contact_email"))) { #optional property not found
            $BillingContactEmail = $null
        } else {
            $BillingContactEmail = $JsonParameters.PSobject.Properties["billing_contact_email"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "media_contact_firstname"))) { #optional property not found
            $MediaContactFirstname = $null
        } else {
            $MediaContactFirstname = $JsonParameters.PSobject.Properties["media_contact_firstname"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "media_contact_lastname"))) { #optional property not found
            $MediaContactLastname = $null
        } else {
            $MediaContactLastname = $JsonParameters.PSobject.Properties["media_contact_lastname"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "media_contact_email"))) { #optional property not found
            $MediaContactEmail = $null
        } else {
            $MediaContactEmail = $JsonParameters.PSobject.Properties["media_contact_email"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "agency_link"))) { #optional property not found
            $AgencyLink = $null
        } else {
            $AgencyLink = $JsonParameters.PSobject.Properties["agency_link"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "user_email"))) { #optional property not found
            $UserEmail = $null
        } else {
            $UserEmail = $JsonParameters.PSobject.Properties["user_email"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "oracle_line_id"))) { #optional property not found
            $OracleLineId = $null
        } else {
            $OracleLineId = $JsonParameters.PSobject.Properties["oracle_line_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "salesforce_order_id"))) { #optional property not found
            $SalesforceOrderId = $null
        } else {
            $SalesforceOrderId = $JsonParameters.PSobject.Properties["salesforce_order_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "salesforce_order_line_id"))) { #optional property not found
            $SalesforceOrderLineId = $null
        } else {
            $SalesforceOrderLineId = $JsonParameters.PSobject.Properties["salesforce_order_line_id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "ads_manager_order_line_id"))) { #optional property not found
            $AdsManagerOrderLineId = $null
        } else {
            $AdsManagerOrderLineId = $JsonParameters.PSobject.Properties["ads_manager_order_line_id"].value
        }

        $PSO = [PSCustomObject]@{
            "start_date" = ${StartDate}
            "end_date" = ${EndDate}
            "po_number" = ${PoNumber}
            "budget_amount" = ${BudgetAmount}
            "billing_contact_firstname" = ${BillingContactFirstname}
            "billing_contact_lastname" = ${BillingContactLastname}
            "billing_contact_email" = ${BillingContactEmail}
            "media_contact_firstname" = ${MediaContactFirstname}
            "media_contact_lastname" = ${MediaContactLastname}
            "media_contact_email" = ${MediaContactEmail}
            "agency_link" = ${AgencyLink}
            "user_email" = ${UserEmail}
            "oracle_line_id" = ${OracleLineId}
            "salesforce_order_id" = ${SalesforceOrderId}
            "salesforce_order_line_id" = ${SalesforceOrderLineId}
            "ads_manager_order_line_id" = ${AdsManagerOrderLineId}
        }

        return $PSO
    }

}

