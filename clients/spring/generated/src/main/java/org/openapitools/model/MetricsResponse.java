package org.openapitools.model;

import java.net.URI;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import java.time.OffsetDateTime;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;


import java.util.*;
import javax.annotation.Generated;

/**
 * MetricsResponse
 */

@Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2024-03-14T23:15:39.458648915Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class MetricsResponse {

  @Valid
  private List<Object> data;

  public MetricsResponse data(List<Object> data) {
    this.data = data;
    return this;
  }

  public MetricsResponse addDataItem(Object dataItem) {
    if (this.data == null) {
      this.data = new ArrayList<>();
    }
    this.data.add(dataItem);
    return this;
  }

  /**
   * Get data
   * @return data
  */
  
  @Schema(name = "data", example = "[{\"targeting_type\":\"KEYWORD\",\"targeting_value\":\"christmas decor ideas\",\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"APPTYPE\",\"targeting_value\":\"iphone\",\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"APPTYPE\",\"targeting_value\":\"ipad\",\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"APPTYPE\",\"targeting_value\":\"web\",\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"APPTYPE\",\"targeting_value\":\"web_mobile\",\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"APPTYPE\",\"targeting_value\":\"android_mobile\",\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"APPTYPE\",\"targeting_value\":\"android_tablet\",\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"GENDER\",\"targeting_value\":\"female\",\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"LOCATION\",\"targeting_value\":500,\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"PLACEMENT\",\"targeting_value\":\"SEARCH\",\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"COUNTRY\",\"targeting_value\":\"US\",\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"TARGETED_INTEREST\",\"targeting_value\":\"Food and Drinks\",\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"PINNER_INTEREST\",\"targeting_value\":\"Chocolate Cookies\",\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"AUDIENCE_INCLUDE\",\"targeting_value\":254261234567,\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"GEO\",\"targeting_value\":\"US:94102\",\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"AGE_BUCKET\",\"targeting_value\":\"45-49\",\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}},{\"targeting_type\":\"REGION\",\"targeting_value\":\"US-CA\",\"metrics\":{\"AD_GROUP_ID\":2680067996745,\"DATE\":\"2022-04-26\",\"SPEND_IN_DOLLAR\":240}}]", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("data")
  public List<Object> getData() {
    return data;
  }

  public void setData(List<Object> data) {
    this.data = data;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MetricsResponse metricsResponse = (MetricsResponse) o;
    return Objects.equals(this.data, metricsResponse.data);
  }

  @Override
  public int hashCode() {
    return Objects.hash(data);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MetricsResponse {\n");
    sb.append("    data: ").append(toIndentedString(data)).append("\n");
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

