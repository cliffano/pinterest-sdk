# AdsAnalyticsMetricsFilter

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Field** | [**AdsAnalyticsFilterColumn**](AdsAnalyticsFilterColumn.md) |  | 
**Operator** | [**AdsAnalyticsFilterOperator**](AdsAnalyticsFilterOperator.md) |  | 
**Values** | **[]float32** | List of values for filtering | 

## Methods

### NewAdsAnalyticsMetricsFilter

`func NewAdsAnalyticsMetricsFilter(field AdsAnalyticsFilterColumn, operator AdsAnalyticsFilterOperator, values []float32, ) *AdsAnalyticsMetricsFilter`

NewAdsAnalyticsMetricsFilter instantiates a new AdsAnalyticsMetricsFilter object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAdsAnalyticsMetricsFilterWithDefaults

`func NewAdsAnalyticsMetricsFilterWithDefaults() *AdsAnalyticsMetricsFilter`

NewAdsAnalyticsMetricsFilterWithDefaults instantiates a new AdsAnalyticsMetricsFilter object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetField

`func (o *AdsAnalyticsMetricsFilter) GetField() AdsAnalyticsFilterColumn`

GetField returns the Field field if non-nil, zero value otherwise.

### GetFieldOk

`func (o *AdsAnalyticsMetricsFilter) GetFieldOk() (*AdsAnalyticsFilterColumn, bool)`

GetFieldOk returns a tuple with the Field field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetField

`func (o *AdsAnalyticsMetricsFilter) SetField(v AdsAnalyticsFilterColumn)`

SetField sets Field field to given value.


### GetOperator

`func (o *AdsAnalyticsMetricsFilter) GetOperator() AdsAnalyticsFilterOperator`

GetOperator returns the Operator field if non-nil, zero value otherwise.

### GetOperatorOk

`func (o *AdsAnalyticsMetricsFilter) GetOperatorOk() (*AdsAnalyticsFilterOperator, bool)`

GetOperatorOk returns a tuple with the Operator field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOperator

`func (o *AdsAnalyticsMetricsFilter) SetOperator(v AdsAnalyticsFilterOperator)`

SetOperator sets Operator field to given value.


### GetValues

`func (o *AdsAnalyticsMetricsFilter) GetValues() []float32`

GetValues returns the Values field if non-nil, zero value otherwise.

### GetValuesOk

`func (o *AdsAnalyticsMetricsFilter) GetValuesOk() (*[]float32, bool)`

GetValuesOk returns a tuple with the Values field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValues

`func (o *AdsAnalyticsMetricsFilter) SetValues(v []float32)`

SetValues sets Values field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


