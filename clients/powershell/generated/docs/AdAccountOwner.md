# AdAccountOwner
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Username** | **String** | Public username for the user account | [optional] 
**Id** | **String** | The owning account&#39;s user ID. | [optional] 

## Examples

- Prepare the resource
```powershell
$AdAccountOwner = Initialize-PSOpenAPIToolsAdAccountOwner  -Username null `
 -Id null
```

- Convert the resource to JSON
```powershell
$AdAccountOwner | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

