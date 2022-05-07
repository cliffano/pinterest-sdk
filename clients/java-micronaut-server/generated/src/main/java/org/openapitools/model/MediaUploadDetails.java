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
import org.openapitools.model.MediaUploadStatus;
import org.openapitools.model.MediaUploadType;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Media upload details
 */
@ApiModel(description = "Media upload details")
@JsonPropertyOrder({
  MediaUploadDetails.JSON_PROPERTY_MEDIA_ID,
  MediaUploadDetails.JSON_PROPERTY_MEDIA_TYPE,
  MediaUploadDetails.JSON_PROPERTY_STATUS
})
@JsonTypeName("MediaUploadDetails")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-07T06:38:54.481854Z[Etc/UTC]")
@Introspected
public class MediaUploadDetails {
    public static final String JSON_PROPERTY_MEDIA_ID = "media_id";
    private String mediaId;

    public static final String JSON_PROPERTY_MEDIA_TYPE = "media_type";
    private MediaUploadType mediaType;

    public static final String JSON_PROPERTY_STATUS = "status";
    private MediaUploadStatus status;

    public MediaUploadDetails() {
    }

    /**
     * Get mediaId
     * @return mediaId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_MEDIA_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getMediaId() {
        return mediaId;
    }

    /**
     * Get mediaType
     * @return mediaType
     **/
    @Valid
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_MEDIA_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public MediaUploadType getMediaType() {
        return mediaType;
    }

    /**
     * Get status
     * @return status
     **/
    @Valid
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public MediaUploadStatus getStatus() {
        return status;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        MediaUploadDetails mediaUploadDetails = (MediaUploadDetails) o;
        return Objects.equals(this.mediaId, mediaUploadDetails.mediaId) &&
            Objects.equals(this.mediaType, mediaUploadDetails.mediaType) &&
            Objects.equals(this.status, mediaUploadDetails.status);
    }

    @Override
    public int hashCode() {
        return Objects.hash(mediaId, mediaType, status);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class MediaUploadDetails {\n");
        sb.append("    mediaId: ").append(toIndentedString(mediaId)).append("\n");
        sb.append("    mediaType: ").append(toIndentedString(mediaType)).append("\n");
        sb.append("    status: ").append(toIndentedString(status)).append("\n");
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
