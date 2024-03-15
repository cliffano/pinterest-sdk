package models

// IntegrationLogClientRequest - HTTP request details included in the log sent by the client.
type IntegrationLogClientRequest struct {

	Method string `json:"method"`

	// HTTP request host from host header.
	Host string `json:"host"`

	// HTTP request path.
	Path string `json:"path"`

	// HTTP request headers as key-value pairs.
	RequestHeaders map[string]string `json:"request_headers,omitempty"`

	// HTTP response headers as key-value pairs.
	ResponseHeaders map[string]string `json:"response_headers,omitempty"`

	ResponseStatusCode int32 `json:"response_status_code,omitempty"`
}
