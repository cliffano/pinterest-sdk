/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * The list of parameter key/value pairs you will need to send with your POST request to upload your media file.
 */
@ApiModel(description = "The list of parameter key/value pairs you will need to send with your POST request to upload your media file.")
@JsonPropertyOrder({
  MediaUploadAllOfUploadParameters.JSON_PROPERTY_X_AMZ_DATE,
  MediaUploadAllOfUploadParameters.JSON_PROPERTY_X_AMZ_SIGNATURE,
  MediaUploadAllOfUploadParameters.JSON_PROPERTY_X_AMZ_SECURITY_TOKEN,
  MediaUploadAllOfUploadParameters.JSON_PROPERTY_X_AMZ_ALGORITHM,
  MediaUploadAllOfUploadParameters.JSON_PROPERTY_KEY,
  MediaUploadAllOfUploadParameters.JSON_PROPERTY_POLICY,
  MediaUploadAllOfUploadParameters.JSON_PROPERTY_X_AMZ_CREDENTIAL,
  MediaUploadAllOfUploadParameters.JSON_PROPERTY_CONTENT_TYPE
})
@JsonTypeName("MediaUpload_allOf_upload_parameters")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-08T00:31:24.314778Z[Etc/UTC]")
@Introspected
public class MediaUploadAllOfUploadParameters {
    public static final String JSON_PROPERTY_X_AMZ_DATE = "x-amz-date";
    private String xAmzDate;

    public static final String JSON_PROPERTY_X_AMZ_SIGNATURE = "x-amz-signature";
    private String xAmzSignature;

    public static final String JSON_PROPERTY_X_AMZ_SECURITY_TOKEN = "x-amz-security-token";
    private String xAmzSecurityToken;

    public static final String JSON_PROPERTY_X_AMZ_ALGORITHM = "x-amz-algorithm";
    private String xAmzAlgorithm;

    public static final String JSON_PROPERTY_KEY = "key";
    private String key;

    public static final String JSON_PROPERTY_POLICY = "policy";
    private String policy;

    public static final String JSON_PROPERTY_X_AMZ_CREDENTIAL = "x-amz-credential";
    private String xAmzCredential;

    public static final String JSON_PROPERTY_CONTENT_TYPE = "Content-Type";
    private String contentType;

    public MediaUploadAllOfUploadParameters() {
    }

    public MediaUploadAllOfUploadParameters xAmzDate(String xAmzDate) {
        this.xAmzDate = xAmzDate;
        return this;
    }

    /**
     * Get xAmzDate
     * @return xAmzDate
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_X_AMZ_DATE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getxAmzDate() {
        return xAmzDate;
    }

    @JsonProperty(JSON_PROPERTY_X_AMZ_DATE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setxAmzDate(String xAmzDate) {
        this.xAmzDate = xAmzDate;
    }

    public MediaUploadAllOfUploadParameters xAmzSignature(String xAmzSignature) {
        this.xAmzSignature = xAmzSignature;
        return this;
    }

    /**
     * Get xAmzSignature
     * @return xAmzSignature
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_X_AMZ_SIGNATURE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getxAmzSignature() {
        return xAmzSignature;
    }

    @JsonProperty(JSON_PROPERTY_X_AMZ_SIGNATURE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setxAmzSignature(String xAmzSignature) {
        this.xAmzSignature = xAmzSignature;
    }

    public MediaUploadAllOfUploadParameters xAmzSecurityToken(String xAmzSecurityToken) {
        this.xAmzSecurityToken = xAmzSecurityToken;
        return this;
    }

    /**
     * Get xAmzSecurityToken
     * @return xAmzSecurityToken
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_X_AMZ_SECURITY_TOKEN)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getxAmzSecurityToken() {
        return xAmzSecurityToken;
    }

    @JsonProperty(JSON_PROPERTY_X_AMZ_SECURITY_TOKEN)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setxAmzSecurityToken(String xAmzSecurityToken) {
        this.xAmzSecurityToken = xAmzSecurityToken;
    }

    public MediaUploadAllOfUploadParameters xAmzAlgorithm(String xAmzAlgorithm) {
        this.xAmzAlgorithm = xAmzAlgorithm;
        return this;
    }

    /**
     * Get xAmzAlgorithm
     * @return xAmzAlgorithm
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_X_AMZ_ALGORITHM)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getxAmzAlgorithm() {
        return xAmzAlgorithm;
    }

    @JsonProperty(JSON_PROPERTY_X_AMZ_ALGORITHM)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setxAmzAlgorithm(String xAmzAlgorithm) {
        this.xAmzAlgorithm = xAmzAlgorithm;
    }

    public MediaUploadAllOfUploadParameters key(String key) {
        this.key = key;
        return this;
    }

    /**
     * Get key
     * @return key
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_KEY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getKey() {
        return key;
    }

    @JsonProperty(JSON_PROPERTY_KEY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setKey(String key) {
        this.key = key;
    }

    public MediaUploadAllOfUploadParameters policy(String policy) {
        this.policy = policy;
        return this;
    }

    /**
     * Get policy
     * @return policy
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_POLICY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getPolicy() {
        return policy;
    }

    @JsonProperty(JSON_PROPERTY_POLICY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setPolicy(String policy) {
        this.policy = policy;
    }

    public MediaUploadAllOfUploadParameters xAmzCredential(String xAmzCredential) {
        this.xAmzCredential = xAmzCredential;
        return this;
    }

    /**
     * Get xAmzCredential
     * @return xAmzCredential
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_X_AMZ_CREDENTIAL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getxAmzCredential() {
        return xAmzCredential;
    }

    @JsonProperty(JSON_PROPERTY_X_AMZ_CREDENTIAL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setxAmzCredential(String xAmzCredential) {
        this.xAmzCredential = xAmzCredential;
    }

    public MediaUploadAllOfUploadParameters contentType(String contentType) {
        this.contentType = contentType;
        return this;
    }

    /**
     * Get contentType
     * @return contentType
     **/
    @Nullable
    @ApiModelProperty(example = "multipart/form-data", value = "")
    @JsonProperty(JSON_PROPERTY_CONTENT_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getContentType() {
        return contentType;
    }

    @JsonProperty(JSON_PROPERTY_CONTENT_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setContentType(String contentType) {
        this.contentType = contentType;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        MediaUploadAllOfUploadParameters mediaUploadAllOfUploadParameters = (MediaUploadAllOfUploadParameters) o;
        return Objects.equals(this.xAmzDate, mediaUploadAllOfUploadParameters.xAmzDate) &&
            Objects.equals(this.xAmzSignature, mediaUploadAllOfUploadParameters.xAmzSignature) &&
            Objects.equals(this.xAmzSecurityToken, mediaUploadAllOfUploadParameters.xAmzSecurityToken) &&
            Objects.equals(this.xAmzAlgorithm, mediaUploadAllOfUploadParameters.xAmzAlgorithm) &&
            Objects.equals(this.key, mediaUploadAllOfUploadParameters.key) &&
            Objects.equals(this.policy, mediaUploadAllOfUploadParameters.policy) &&
            Objects.equals(this.xAmzCredential, mediaUploadAllOfUploadParameters.xAmzCredential) &&
            Objects.equals(this.contentType, mediaUploadAllOfUploadParameters.contentType);
    }

    @Override
    public int hashCode() {
        return Objects.hash(xAmzDate, xAmzSignature, xAmzSecurityToken, xAmzAlgorithm, key, policy, xAmzCredential, contentType);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class MediaUploadAllOfUploadParameters {\n");
        sb.append("    xAmzDate: ").append(toIndentedString(xAmzDate)).append("\n");
        sb.append("    xAmzSignature: ").append(toIndentedString(xAmzSignature)).append("\n");
        sb.append("    xAmzSecurityToken: ").append(toIndentedString(xAmzSecurityToken)).append("\n");
        sb.append("    xAmzAlgorithm: ").append(toIndentedString(xAmzAlgorithm)).append("\n");
        sb.append("    key: ").append(toIndentedString(key)).append("\n");
        sb.append("    policy: ").append(toIndentedString(policy)).append("\n");
        sb.append("    xAmzCredential: ").append(toIndentedString(xAmzCredential)).append("\n");
        sb.append("    contentType: ").append(toIndentedString(contentType)).append("\n");
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
