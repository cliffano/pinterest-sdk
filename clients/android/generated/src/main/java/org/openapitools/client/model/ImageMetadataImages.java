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

import org.openapitools.client.model.ImageDetails;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ImageMetadataImages {
  
  @SerializedName("150x150")
  private ImageDetails _150x150 = null;
  @SerializedName("400x300")
  private ImageDetails _400x300 = null;
  @SerializedName("600x")
  private ImageDetails _600x = null;
  @SerializedName("1200x")
  private ImageDetails _1200x = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ImageDetails get150x150() {
    return _150x150;
  }
  public void set150x150(ImageDetails _150x150) {
    this._150x150 = _150x150;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ImageDetails get400x300() {
    return _400x300;
  }
  public void set400x300(ImageDetails _400x300) {
    this._400x300 = _400x300;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ImageDetails get600x() {
    return _600x;
  }
  public void set600x(ImageDetails _600x) {
    this._600x = _600x;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ImageDetails get1200x() {
    return _1200x;
  }
  public void set1200x(ImageDetails _1200x) {
    this._1200x = _1200x;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ImageMetadataImages imageMetadataImages = (ImageMetadataImages) o;
    return (this._150x150 == null ? imageMetadataImages._150x150 == null : this._150x150.equals(imageMetadataImages._150x150)) &&
        (this._400x300 == null ? imageMetadataImages._400x300 == null : this._400x300.equals(imageMetadataImages._400x300)) &&
        (this._600x == null ? imageMetadataImages._600x == null : this._600x.equals(imageMetadataImages._600x)) &&
        (this._1200x == null ? imageMetadataImages._1200x == null : this._1200x.equals(imageMetadataImages._1200x));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._150x150 == null ? 0: this._150x150.hashCode());
    result = 31 * result + (this._400x300 == null ? 0: this._400x300.hashCode());
    result = 31 * result + (this._600x == null ? 0: this._600x.hashCode());
    result = 31 * result + (this._1200x == null ? 0: this._1200x.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ImageMetadataImages {\n");
    
    sb.append("  _150x150: ").append(_150x150).append("\n");
    sb.append("  _400x300: ").append(_400x300).append("\n");
    sb.append("  _600x: ").append(_600x).append("\n");
    sb.append("  _1200x: ").append(_1200x).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
