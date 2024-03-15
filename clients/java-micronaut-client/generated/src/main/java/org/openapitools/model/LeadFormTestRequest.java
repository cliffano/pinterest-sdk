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
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Request to create test data for lead data test API.
 */
@JsonPropertyOrder({
  LeadFormTestRequest.JSON_PROPERTY_ANSWERS
})
@JsonTypeName("LeadFormTestRequest")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class LeadFormTestRequest {
    public static final String JSON_PROPERTY_ANSWERS = "answers";
    private List<String> answers = new ArrayList<>();

    public LeadFormTestRequest(List<String> answers) {
        this.answers = answers;
    }

    public LeadFormTestRequest answers(List<String> answers) {
        this.answers = answers;
        return this;
    }

    public LeadFormTestRequest addAnswersItem(String answersItem) {
        this.answers.add(answersItem);
        return this;
    }

    /**
     * Test lead answers. Should follow the creation order.
     * @return answers
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_ANSWERS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public List<String> getAnswers() {
        return answers;
    }

    @JsonProperty(JSON_PROPERTY_ANSWERS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setAnswers(List<String> answers) {
        this.answers = answers;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        LeadFormTestRequest leadFormTestRequest = (LeadFormTestRequest) o;
        return Objects.equals(this.answers, leadFormTestRequest.answers);
    }

    @Override
    public int hashCode() {
        return Objects.hash(answers);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class LeadFormTestRequest {\n");
        sb.append("    answers: ").append(toIndentedString(answers)).append("\n");
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
