# CatalogsHotelProductGroupUpdateRequest
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**CatalogType** | **String** |  | [optional] 
**Name** | **String** |  | [optional] 
**Description** | **String** |  | [optional] 
**Filters** | [**CatalogsHotelProductGroupFilters**](CatalogsHotelProductGroupFilters.md) |  | [optional] 

## Examples

- Prepare the resource
```powershell
$CatalogsHotelProductGroupUpdateRequest = Initialize-PSOpenAPIToolsCatalogsHotelProductGroupUpdateRequest  -CatalogType null `
 -Name null `
 -Description null `
 -Filters null
```

- Convert the resource to JSON
```powershell
$CatalogsHotelProductGroupUpdateRequest | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

