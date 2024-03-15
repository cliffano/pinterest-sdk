/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * HTTP request details included in the log sent by the client.
 */
@JsonPropertyOrder({
  IntegrationLogClientRequest.JSON_PROPERTY_METHOD,
  IntegrationLogClientRequest.JSON_PROPERTY_HOST,
  IntegrationLogClientRequest.JSON_PROPERTY_PATH,
  IntegrationLogClientRequest.JSON_PROPERTY_REQUEST_HEADERS,
  IntegrationLogClientRequest.JSON_PROPERTY_RESPONSE_HEADERS,
  IntegrationLogClientRequest.JSON_PROPERTY_RESPONSE_STATUS_CODE
})
@JsonTypeName("IntegrationLogClientRequest")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class IntegrationLogClientRequest {
    /**
     * Gets or Sets method
     */
    public enum MethodEnum {
        GET("GET"),
        HEAD("HEAD"),
        POST("POST"),
        PUT("PUT"),
        DELETE("DELETE"),
        CONNECT("CONNECT"),
        OPTIONS("OPTIONS"),
        TRACE("TRACE"),
        PATCH("PATCH");

        private String value;

        MethodEnum(String value) {
            this.value = value;
        }

        @JsonValue
        public String getValue() {
            return value;
        }

        @Override
        public String toString() {
            return String.valueOf(value);
        }

        @JsonCreator
        public static MethodEnum fromValue(String value) {
            for (MethodEnum b : MethodEnum.values()) {
                if (b.value.equals(value)) {
                    return b;
                }
            }
            throw new IllegalArgumentException("Unexpected value '" + value + "'");
        }
    }
    public static final String JSON_PROPERTY_METHOD = "method";
    private MethodEnum method;

    public static final String JSON_PROPERTY_HOST = "host";
    private String host;

    public static final String JSON_PROPERTY_PATH = "path";
    private String path;

    public static final String JSON_PROPERTY_REQUEST_HEADERS = "request_headers";
    private Map<String, String> requestHeaders = null;

    public static final String JSON_PROPERTY_RESPONSE_HEADERS = "response_headers";
    private Map<String, String> responseHeaders = null;

    public static final String JSON_PROPERTY_RESPONSE_STATUS_CODE = "response_status_code";
    private Integer responseStatusCode;

    public IntegrationLogClientRequest(MethodEnum method, String host, String path) {
        this.method = method;
        this.host = host;
        this.path = path;
    }

    public IntegrationLogClientRequest method(MethodEnum method) {
        this.method = method;
        return this;
    }

    /**
     * Get method
     * @return method
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_METHOD)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public MethodEnum getMethod() {
        return method;
    }

    @JsonProperty(JSON_PROPERTY_METHOD)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setMethod(MethodEnum method) {
        this.method = method;
    }

    public IntegrationLogClientRequest host(String host) {
        this.host = host;
        return this;
    }

    /**
     * HTTP request host from host header.
     * @return host
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_HOST)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getHost() {
        return host;
    }

    @JsonProperty(JSON_PROPERTY_HOST)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setHost(String host) {
        this.host = host;
    }

    public IntegrationLogClientRequest path(String path) {
        this.path = path;
        return this;
    }

    /**
     * HTTP request path.
     * @return path
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_PATH)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getPath() {
        return path;
    }

    @JsonProperty(JSON_PROPERTY_PATH)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setPath(String path) {
        this.path = path;
    }

    public IntegrationLogClientRequest requestHeaders(Map<String, String> requestHeaders) {
        this.requestHeaders = requestHeaders;
        return this;
    }

    public IntegrationLogClientRequest putRequestHeadersItem(String key, String requestHeadersItem) {
        if (this.requestHeaders == null) {
            this.requestHeaders = new HashMap<>();
        }
        this.requestHeaders.put(key, requestHeadersItem);
        return this;
  }

    /**
     * HTTP request headers as key-value pairs.
     * @return requestHeaders
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_REQUEST_HEADERS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Map<String, String> getRequestHeaders() {
        return requestHeaders;
    }

    @JsonProperty(JSON_PROPERTY_REQUEST_HEADERS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setRequestHeaders(Map<String, String> requestHeaders) {
        this.requestHeaders = requestHeaders;
    }

    public IntegrationLogClientRequest responseHeaders(Map<String, String> responseHeaders) {
        this.responseHeaders = responseHeaders;
        return this;
    }

    public IntegrationLogClientRequest putResponseHeadersItem(String key, String responseHeadersItem) {
        if (this.responseHeaders == null) {
            this.responseHeaders = new HashMap<>();
        }
        this.responseHeaders.put(key, responseHeadersItem);
        return this;
  }

    /**
     * HTTP response headers as key-value pairs.
     * @return responseHeaders
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_RESPONSE_HEADERS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Map<String, String> getResponseHeaders() {
        return responseHeaders;
    }

    @JsonProperty(JSON_PROPERTY_RESPONSE_HEADERS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setResponseHeaders(Map<String, String> responseHeaders) {
        this.responseHeaders = responseHeaders;
    }

    public IntegrationLogClientRequest responseStatusCode(Integer responseStatusCode) {
        this.responseStatusCode = responseStatusCode;
        return this;
    }

    /**
     * Get responseStatusCode
     * @return responseStatusCode
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_RESPONSE_STATUS_CODE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Integer getResponseStatusCode() {
        return responseStatusCode;
    }

    @JsonProperty(JSON_PROPERTY_RESPONSE_STATUS_CODE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setResponseStatusCode(Integer responseStatusCode) {
        this.responseStatusCode = responseStatusCode;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        IntegrationLogClientRequest integrationLogClientRequest = (IntegrationLogClientRequest) o;
        return Objects.equals(this.method, integrationLogClientRequest.method) &&
            Objects.equals(this.host, integrationLogClientRequest.host) &&
            Objects.equals(this.path, integrationLogClientRequest.path) &&
            Objects.equals(this.requestHeaders, integrationLogClientRequest.requestHeaders) &&
            Objects.equals(this.responseHeaders, integrationLogClientRequest.responseHeaders) &&
            Objects.equals(this.responseStatusCode, integrationLogClientRequest.responseStatusCode);
    }

    @Override
    public int hashCode() {
        return Objects.hash(method, host, path, requestHeaders, responseHeaders, responseStatusCode);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class IntegrationLogClientRequest {\n");
        sb.append("    method: ").append(toIndentedString(method)).append("\n");
        sb.append("    host: ").append(toIndentedString(host)).append("\n");
        sb.append("    path: ").append(toIndentedString(path)).append("\n");
        sb.append("    requestHeaders: ").append(toIndentedString(requestHeaders)).append("\n");
        sb.append("    responseHeaders: ").append(toIndentedString(responseHeaders)).append("\n");
        sb.append("    responseStatusCode: ").append(toIndentedString(responseStatusCode)).append("\n");
        sb.append("}");
        return sb.toString();
    }

    /**
     * Convert the given object to string with each line indented by 4 spaces
     * (except the first line).
     */
    private String toIndentedString(Object o) {
        if (o == null) {
            return "null";
        }
        return o.toString().replace("\n", "\n    ");
    }

}

