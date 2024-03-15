/**
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

package org.openapitools.client.model;

import java.util.Map;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * HTTP request details included in the log sent by the client.
 **/
@ApiModel(description = "HTTP request details included in the log sent by the client.")
public class IntegrationLogClientRequest {
  
  public enum MethodEnum {
     GET,  HEAD,  POST,  PUT,  DELETE,  CONNECT,  OPTIONS,  TRACE,  PATCH, 
  };
  @SerializedName("method")
  private MethodEnum method = null;
  @SerializedName("host")
  private String host = null;
  @SerializedName("path")
  private String path = null;
  @SerializedName("request_headers")
  private Map<String, String> requestHeaders = null;
  @SerializedName("response_headers")
  private Map<String, String> responseHeaders = null;
  @SerializedName("response_status_code")
  private Integer responseStatusCode = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public MethodEnum getMethod() {
    return method;
  }
  public void setMethod(MethodEnum method) {
    this.method = method;
  }

  /**
   * HTTP request host from host header.
   **/
  @ApiModelProperty(required = true, value = "HTTP request host from host header.")
  public String getHost() {
    return host;
  }
  public void setHost(String host) {
    this.host = host;
  }

  /**
   * HTTP request path.
   **/
  @ApiModelProperty(required = true, value = "HTTP request path.")
  public String getPath() {
    return path;
  }
  public void setPath(String path) {
    this.path = path;
  }

  /**
   * HTTP request headers as key-value pairs.
   **/
  @ApiModelProperty(value = "HTTP request headers as key-value pairs.")
  public Map<String, String> getRequestHeaders() {
    return requestHeaders;
  }
  public void setRequestHeaders(Map<String, String> requestHeaders) {
    this.requestHeaders = requestHeaders;
  }

  /**
   * HTTP response headers as key-value pairs.
   **/
  @ApiModelProperty(value = "HTTP response headers as key-value pairs.")
  public Map<String, String> getResponseHeaders() {
    return responseHeaders;
  }
  public void setResponseHeaders(Map<String, String> responseHeaders) {
    this.responseHeaders = responseHeaders;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getResponseStatusCode() {
    return responseStatusCode;
  }
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
    return (this.method == null ? integrationLogClientRequest.method == null : this.method.equals(integrationLogClientRequest.method)) &&
        (this.host == null ? integrationLogClientRequest.host == null : this.host.equals(integrationLogClientRequest.host)) &&
        (this.path == null ? integrationLogClientRequest.path == null : this.path.equals(integrationLogClientRequest.path)) &&
        (this.requestHeaders == null ? integrationLogClientRequest.requestHeaders == null : this.requestHeaders.equals(integrationLogClientRequest.requestHeaders)) &&
        (this.responseHeaders == null ? integrationLogClientRequest.responseHeaders == null : this.responseHeaders.equals(integrationLogClientRequest.responseHeaders)) &&
        (this.responseStatusCode == null ? integrationLogClientRequest.responseStatusCode == null : this.responseStatusCode.equals(integrationLogClientRequest.responseStatusCode));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.method == null ? 0: this.method.hashCode());
    result = 31 * result + (this.host == null ? 0: this.host.hashCode());
    result = 31 * result + (this.path == null ? 0: this.path.hashCode());
    result = 31 * result + (this.requestHeaders == null ? 0: this.requestHeaders.hashCode());
    result = 31 * result + (this.responseHeaders == null ? 0: this.responseHeaders.hashCode());
    result = 31 * result + (this.responseStatusCode == null ? 0: this.responseStatusCode.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class IntegrationLogClientRequest {\n");
    
    sb.append("  method: ").append(method).append("\n");
    sb.append("  host: ").append(host).append("\n");
    sb.append("  path: ").append(path).append("\n");
    sb.append("  requestHeaders: ").append(requestHeaders).append("\n");
    sb.append("  responseHeaders: ").append(responseHeaders).append("\n");
    sb.append("  responseStatusCode: ").append(responseStatusCode).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
