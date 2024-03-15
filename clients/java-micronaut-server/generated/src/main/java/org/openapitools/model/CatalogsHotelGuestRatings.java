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
import java.math.BigDecimal;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * If specified, you must provide all properties
 */
@Schema(name = "CatalogsHotelGuestRatings", description = "If specified, you must provide all properties")
@JsonPropertyOrder({
  CatalogsHotelGuestRatings.JSON_PROPERTY_SCORE,
  CatalogsHotelGuestRatings.JSON_PROPERTY_NUMBER_OF_REVIEWERS,
  CatalogsHotelGuestRatings.JSON_PROPERTY_MAX_SCORE,
  CatalogsHotelGuestRatings.JSON_PROPERTY_RATING_SYSTEM
})
@JsonTypeName("CatalogsHotelGuestRatings")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsHotelGuestRatings {
    public static final String JSON_PROPERTY_SCORE = "score";
    private BigDecimal score;

    public static final String JSON_PROPERTY_NUMBER_OF_REVIEWERS = "number_of_reviewers";
    private Integer numberOfReviewers;

    public static final String JSON_PROPERTY_MAX_SCORE = "max_score";
    private BigDecimal maxScore;

    public static final String JSON_PROPERTY_RATING_SYSTEM = "rating_system";
    private String ratingSystem;

    public CatalogsHotelGuestRatings() {
    }

    public CatalogsHotelGuestRatings score(BigDecimal score) {
        this.score = score;
        return this;
    }

    /**
     * Your hotel&#39;s rating.
     * @return score
     **/
    @Nullable
    @Schema(name = "score", description = "Your hotel's rating.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_SCORE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getScore() {
        return score;
    }

    @JsonProperty(JSON_PROPERTY_SCORE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setScore(BigDecimal score) {
        this.score = score;
    }

    public CatalogsHotelGuestRatings numberOfReviewers(Integer numberOfReviewers) {
        this.numberOfReviewers = numberOfReviewers;
        return this;
    }

    /**
     * Total number of people who have rated this hotel.
     * @return numberOfReviewers
     **/
    @Nullable
    @Schema(name = "number_of_reviewers", description = "Total number of people who have rated this hotel.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_NUMBER_OF_REVIEWERS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Integer getNumberOfReviewers() {
        return numberOfReviewers;
    }

    @JsonProperty(JSON_PROPERTY_NUMBER_OF_REVIEWERS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setNumberOfReviewers(Integer numberOfReviewers) {
        this.numberOfReviewers = numberOfReviewers;
    }

    public CatalogsHotelGuestRatings maxScore(BigDecimal maxScore) {
        this.maxScore = maxScore;
        return this;
    }

    /**
     * Max value for the hotel rating score.
     * @return maxScore
     **/
    @Nullable
    @Schema(name = "max_score", description = "Max value for the hotel rating score.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_MAX_SCORE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getMaxScore() {
        return maxScore;
    }

    @JsonProperty(JSON_PROPERTY_MAX_SCORE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setMaxScore(BigDecimal maxScore) {
        this.maxScore = maxScore;
    }

    public CatalogsHotelGuestRatings ratingSystem(String ratingSystem) {
        this.ratingSystem = ratingSystem;
        return this;
    }

    /**
     * System you use for guest reviews.
     * @return ratingSystem
     **/
    @Nullable
    @Schema(name = "rating_system", description = "System you use for guest reviews.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_RATING_SYSTEM)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getRatingSystem() {
        return ratingSystem;
    }

    @JsonProperty(JSON_PROPERTY_RATING_SYSTEM)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setRatingSystem(String ratingSystem) {
        this.ratingSystem = ratingSystem;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsHotelGuestRatings catalogsHotelGuestRatings = (CatalogsHotelGuestRatings) o;
        return Objects.equals(this.score, catalogsHotelGuestRatings.score) &&
            Objects.equals(this.numberOfReviewers, catalogsHotelGuestRatings.numberOfReviewers) &&
            Objects.equals(this.maxScore, catalogsHotelGuestRatings.maxScore) &&
            Objects.equals(this.ratingSystem, catalogsHotelGuestRatings.ratingSystem);
    }

    @Override
    public int hashCode() {
        return Objects.hash(score, numberOfReviewers, maxScore, ratingSystem);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsHotelGuestRatings {\n");
        sb.append("    score: ").append(toIndentedString(score)).append("\n");
        sb.append("    numberOfReviewers: ").append(toIndentedString(numberOfReviewers)).append("\n");
        sb.append("    maxScore: ").append(toIndentedString(maxScore)).append("\n");
        sb.append("    ratingSystem: ").append(toIndentedString(ratingSystem)).append("\n");
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

