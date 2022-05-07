package models
// AdGroupSummaryStatus : Summary status for ad group
type AdGroupSummaryStatus string

// List of AdGroupSummaryStatus
const (
	RUNNING AdGroupSummaryStatus = "RUNNING"
	PAUSED AdGroupSummaryStatus = "PAUSED"
	NOT_STARTED AdGroupSummaryStatus = "NOT_STARTED"
	COMPLETED AdGroupSummaryStatus = "COMPLETED"
	ADVERTISER_DISABLED AdGroupSummaryStatus = "ADVERTISER_DISABLED"
	ARCHIVED AdGroupSummaryStatus = "ARCHIVED"
)
