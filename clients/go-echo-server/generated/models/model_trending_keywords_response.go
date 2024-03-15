package models

type TrendingKeywordsResponse struct {

	// The top trending keywords for the specified trend type in the requested region.<br /> Results are ordered, with the first element in the array representing the #1 top trend.
	Trends []TrendingKeywordsResponseTrendsInner `json:"trends,omitempty"`
}
