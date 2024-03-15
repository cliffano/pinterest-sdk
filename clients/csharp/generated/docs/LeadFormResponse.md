# Org.OpenAPITools.Model.LeadFormResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | **string** | Internal name of the lead form. | [optional] 
**PrivacyPolicyLink** | **string** | A link to the advertiser&#39;s privacy policy. This will be included in the lead form&#39;s disclosure language. | [optional] 
**HasAcceptedTerms** | **bool** | Whether the advertiser has accepted Pinterest&#39;s terms of service for creating a lead ad. | [optional] 
**CompletionMessage** | **string** | A message for people who complete the form to let them know what happens next. | [optional] 
**Status** | **LeadFormStatus** |  | [optional] 
**DisclosureLanguage** | **string** | Additional disclosure language to be included in the lead form. | [optional] 
**Questions** | [**List&lt;LeadFormQuestion&gt;**](LeadFormQuestion.md) | List of questions to be displayed on the lead form. | [optional] 
**Id** | **string** | The ID of this lead form | [optional] 
**AdAccountId** | **string** | The Ad Account ID that this lead form belongs to. | [optional] 
**CreatedTime** | **int** | Lead form creation time. Unix timestamp in seconds. | [optional] 
**UpdatedTime** | **int** | Last update time. Unix timestamp in seconds. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)
