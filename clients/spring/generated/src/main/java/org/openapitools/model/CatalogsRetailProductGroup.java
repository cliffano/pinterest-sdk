package org.openapitools.model;

import java.net.URI;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import java.util.Arrays;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.CatalogsProductGroupFilters;
import org.openapitools.model.CatalogsProductGroupStatus;
import org.openapitools.model.CatalogsProductGroupType;
import java.util.NoSuchElementException;
import com.fasterxml.jackson.annotation.JsonIgnoreProperties;
import com.fasterxml.jackson.annotation.JsonSubTypes;
import com.fasterxml.jackson.annotation.JsonTypeInfo;
import org.openapitools.jackson.nullable.JsonNullable;
import java.time.OffsetDateTime;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;


import java.util.*;
import javax.annotation.Generated;

/**
 * CatalogsRetailProductGroup
 */

@Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2024-03-14T23:15:39.458648915Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsRetailProductGroup implements CatalogsVerticalProductGroup {

  /**
   * Gets or Sets catalogType
   */
  public enum CatalogTypeEnum {
    RETAIL("RETAIL");

    private String value;

    CatalogTypeEnum(String value) {
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
    public static CatalogTypeEnum fromValue(String value) {
      for (CatalogTypeEnum b : CatalogTypeEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
  }

  private CatalogTypeEnum catalogType;

  private String id;

  private String name;

  private JsonNullable<String> description = JsonNullable.<String>undefined();

  private CatalogsProductGroupFilters filters;

  private Boolean isFeatured;

  private CatalogsProductGroupType type;

  private CatalogsProductGroupStatus status;

  private Integer createdAt;

  private Integer updatedAt;

  /**
   * Gets or Sets feedId
   */
  public enum FeedIdEnum {
    NULL("null");

    private String value;

    FeedIdEnum(String value) {
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
    public static FeedIdEnum fromValue(String value) {
      for (FeedIdEnum b : FeedIdEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      return null;
    }
  }

  private JsonNullable<FeedIdEnum> feedId = JsonNullable.<FeedIdEnum>undefined();

  public CatalogsRetailProductGroup() {
    super();
  }

  /**
   * Constructor with only required parameters
   */
  public CatalogsRetailProductGroup(CatalogTypeEnum catalogType, String id, CatalogsProductGroupFilters filters, FeedIdEnum feedId) {
    this.catalogType = catalogType;
    this.id = id;
    this.filters = filters;
    this.feedId = JsonNullable.of(feedId);
  }

  public CatalogsRetailProductGroup catalogType(CatalogTypeEnum catalogType) {
    this.catalogType = catalogType;
    return this;
  }

  /**
   * Get catalogType
   * @return catalogType
  */
  @NotNull 
  @Schema(name = "catalog_type", requiredMode = Schema.RequiredMode.REQUIRED)
  @JsonProperty("catalog_type")
  public CatalogTypeEnum getCatalogType() {
    return catalogType;
  }

  public void setCatalogType(CatalogTypeEnum catalogType) {
    this.catalogType = catalogType;
  }

  public CatalogsRetailProductGroup id(String id) {
    this.id = id;
    return this;
  }

  /**
   * ID of the catalog product group.
   * @return id
  */
  @NotNull @Pattern(regexp = "^\\d+$") 
  @Schema(name = "id", example = "443727193917", description = "ID of the catalog product group.", requiredMode = Schema.RequiredMode.REQUIRED)
  @JsonProperty("id")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public CatalogsRetailProductGroup name(String name) {
    this.name = name;
    return this;
  }

  /**
   * Name of catalog product group
   * @return name
  */
  
  @Schema(name = "name", example = "Most Popular", description = "Name of catalog product group", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public CatalogsRetailProductGroup description(String description) {
    this.description = JsonNullable.of(description);
    return this;
  }

  /**
   * Get description
   * @return description
  */
  
  @Schema(name = "description", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("description")
  public JsonNullable<String> getDescription() {
    return description;
  }

  public void setDescription(JsonNullable<String> description) {
    this.description = description;
  }

  public CatalogsRetailProductGroup filters(CatalogsProductGroupFilters filters) {
    this.filters = filters;
    return this;
  }

  /**
   * Get filters
   * @return filters
  */
  @NotNull @Valid 
  @Schema(name = "filters", requiredMode = Schema.RequiredMode.REQUIRED)
  @JsonProperty("filters")
  public CatalogsProductGroupFilters getFilters() {
    return filters;
  }

  public void setFilters(CatalogsProductGroupFilters filters) {
    this.filters = filters;
  }

  public CatalogsRetailProductGroup isFeatured(Boolean isFeatured) {
    this.isFeatured = isFeatured;
    return this;
  }

  /**
   * boolean indicator of whether the product group is being featured or not
   * @return isFeatured
  */
  
  @Schema(name = "is_featured", description = "boolean indicator of whether the product group is being featured or not", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("is_featured")
  public Boolean getIsFeatured() {
    return isFeatured;
  }

  public void setIsFeatured(Boolean isFeatured) {
    this.isFeatured = isFeatured;
  }

  public CatalogsRetailProductGroup type(CatalogsProductGroupType type) {
    this.type = type;
    return this;
  }

  /**
   * Get type
   * @return type
  */
  @Valid 
  @Schema(name = "type", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("type")
  public CatalogsProductGroupType getType() {
    return type;
  }

  public void setType(CatalogsProductGroupType type) {
    this.type = type;
  }

  public CatalogsRetailProductGroup status(CatalogsProductGroupStatus status) {
    this.status = status;
    return this;
  }

  /**
   * Get status
   * @return status
  */
  @Valid 
  @Schema(name = "status", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("status")
  public CatalogsProductGroupStatus getStatus() {
    return status;
  }

  public void setStatus(CatalogsProductGroupStatus status) {
    this.status = status;
  }

  public CatalogsRetailProductGroup createdAt(Integer createdAt) {
    this.createdAt = createdAt;
    return this;
  }

  /**
   * Unix timestamp in seconds of when catalog product group was created.
   * @return createdAt
  */
  
  @Schema(name = "created_at", example = "1621350033000", description = "Unix timestamp in seconds of when catalog product group was created.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("created_at")
  public Integer getCreatedAt() {
    return createdAt;
  }

  public void setCreatedAt(Integer createdAt) {
    this.createdAt = createdAt;
  }

  public CatalogsRetailProductGroup updatedAt(Integer updatedAt) {
    this.updatedAt = updatedAt;
    return this;
  }

  /**
   * Unix timestamp in seconds of last time catalog product group was updated.
   * @return updatedAt
  */
  
  @Schema(name = "updated_at", example = "1622742155000", description = "Unix timestamp in seconds of last time catalog product group was updated.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("updated_at")
  public Integer getUpdatedAt() {
    return updatedAt;
  }

  public void setUpdatedAt(Integer updatedAt) {
    this.updatedAt = updatedAt;
  }

  public CatalogsRetailProductGroup feedId(FeedIdEnum feedId) {
    this.feedId = JsonNullable.of(feedId);
    return this;
  }

  /**
   * Get feedId
   * @return feedId
  */
  @NotNull 
  @Schema(name = "feed_id", requiredMode = Schema.RequiredMode.REQUIRED)
  @JsonProperty("feed_id")
  public JsonNullable<FeedIdEnum> getFeedId() {
    return feedId;
  }

  public void setFeedId(JsonNullable<FeedIdEnum> feedId) {
    this.feedId = feedId;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsRetailProductGroup catalogsRetailProductGroup = (CatalogsRetailProductGroup) o;
    return Objects.equals(this.catalogType, catalogsRetailProductGroup.catalogType) &&
        Objects.equals(this.id, catalogsRetailProductGroup.id) &&
        Objects.equals(this.name, catalogsRetailProductGroup.name) &&
        equalsNullable(this.description, catalogsRetailProductGroup.description) &&
        Objects.equals(this.filters, catalogsRetailProductGroup.filters) &&
        Objects.equals(this.isFeatured, catalogsRetailProductGroup.isFeatured) &&
        Objects.equals(this.type, catalogsRetailProductGroup.type) &&
        Objects.equals(this.status, catalogsRetailProductGroup.status) &&
        Objects.equals(this.createdAt, catalogsRetailProductGroup.createdAt) &&
        Objects.equals(this.updatedAt, catalogsRetailProductGroup.updatedAt) &&
        Objects.equals(this.feedId, catalogsRetailProductGroup.feedId);
  }

  private static <T> boolean equalsNullable(JsonNullable<T> a, JsonNullable<T> b) {
    return a == b || (a != null && b != null && a.isPresent() && b.isPresent() && Objects.deepEquals(a.get(), b.get()));
  }

  @Override
  public int hashCode() {
    return Objects.hash(catalogType, id, name, hashCodeNullable(description), filters, isFeatured, type, status, createdAt, updatedAt, feedId);
  }

  private static <T> int hashCodeNullable(JsonNullable<T> a) {
    if (a == null) {
      return 1;
    }
    return a.isPresent() ? Arrays.deepHashCode(new Object[]{a.get()}) : 31;
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsRetailProductGroup {\n");
    sb.append("    catalogType: ").append(toIndentedString(catalogType)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    filters: ").append(toIndentedString(filters)).append("\n");
    sb.append("    isFeatured: ").append(toIndentedString(isFeatured)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    createdAt: ").append(toIndentedString(createdAt)).append("\n");
    sb.append("    updatedAt: ").append(toIndentedString(updatedAt)).append("\n");
    sb.append("    feedId: ").append(toIndentedString(feedId)).append("\n");
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

