package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * If specified, you must provide all properties
 **/

import io.swagger.annotations.*;
import java.util.Objects;


@ApiModel(description = "If specified, you must provide all properties")
public class CatalogsHotelGuestRatings   {
  
  private BigDecimal score;

  private Integer numberOfReviewers;

  private BigDecimal maxScore;

  private String ratingSystem;

  /**
   * Your hotel&#39;s rating.
   **/
  public CatalogsHotelGuestRatings score(BigDecimal score) {
    this.score = score;
    return this;
  }

  
  @ApiModelProperty(value = "Your hotel's rating.")
  @JsonProperty("score")
  public BigDecimal getScore() {
    return score;
  }
  public void setScore(BigDecimal score) {
    this.score = score;
  }


  /**
   * Total number of people who have rated this hotel.
   **/
  public CatalogsHotelGuestRatings numberOfReviewers(Integer numberOfReviewers) {
    this.numberOfReviewers = numberOfReviewers;
    return this;
  }

  
  @ApiModelProperty(value = "Total number of people who have rated this hotel.")
  @JsonProperty("number_of_reviewers")
  public Integer getNumberOfReviewers() {
    return numberOfReviewers;
  }
  public void setNumberOfReviewers(Integer numberOfReviewers) {
    this.numberOfReviewers = numberOfReviewers;
  }


  /**
   * Max value for the hotel rating score.
   **/
  public CatalogsHotelGuestRatings maxScore(BigDecimal maxScore) {
    this.maxScore = maxScore;
    return this;
  }

  
  @ApiModelProperty(value = "Max value for the hotel rating score.")
  @JsonProperty("max_score")
  public BigDecimal getMaxScore() {
    return maxScore;
  }
  public void setMaxScore(BigDecimal maxScore) {
    this.maxScore = maxScore;
  }


  /**
   * System you use for guest reviews.
   **/
  public CatalogsHotelGuestRatings ratingSystem(String ratingSystem) {
    this.ratingSystem = ratingSystem;
    return this;
  }

  
  @ApiModelProperty(value = "System you use for guest reviews.")
  @JsonProperty("rating_system")
  public String getRatingSystem() {
    return ratingSystem;
  }
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

