package models

// KeywordMetrics - Keyword metrics JSON
type KeywordMetrics struct {

	// Average cost per click
	AvgCpcInMicroCurrency float32 `json:"avg_cpc_in_micro_currency,omitempty"`

	// Keyword's search frequency. This value is based on keyword frequency in pepsi client response
	KeywordQueryVolume string `json:"keyword_query_volume,omitempty"`
}
