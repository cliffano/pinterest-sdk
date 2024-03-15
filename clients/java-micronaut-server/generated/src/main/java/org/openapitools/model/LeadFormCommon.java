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
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.LeadFormQuestion;
import org.openapitools.model.LeadFormStatus;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * Creation fields
 */
@Schema(name = "LeadFormCommon", description = "Creation fields")
@JsonPropertyOrder({
  LeadFormCommon.JSON_PROPERTY_NAME,
  LeadFormCommon.JSON_PROPERTY_PRIVACY_POLICY_LINK,
  LeadFormCommon.JSON_PROPERTY_HAS_ACCEPTED_TERMS,
  LeadFormCommon.JSON_PROPERTY_COMPLETION_MESSAGE,
  LeadFormCommon.JSON_PROPERTY_STATUS,
  LeadFormCommon.JSON_PROPERTY_DISCLOSURE_LANGUAGE,
  LeadFormCommon.JSON_PROPERTY_QUESTIONS
})
@JsonTypeName("LeadFormCommon")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class LeadFormCommon {
    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public static final String JSON_PROPERTY_PRIVACY_POLICY_LINK = "privacy_policy_link";
    private String privacyPolicyLink;

    public static final String JSON_PROPERTY_HAS_ACCEPTED_TERMS = "has_accepted_terms";
    private Boolean hasAcceptedTerms;

    public static final String JSON_PROPERTY_COMPLETION_MESSAGE = "completion_message";
    private String completionMessage;

    public static final String JSON_PROPERTY_STATUS = "status";
    private LeadFormStatus status;

    public static final String JSON_PROPERTY_DISCLOSURE_LANGUAGE = "disclosure_language";
    private String disclosureLanguage;

    public static final String JSON_PROPERTY_QUESTIONS = "questions";
    private List<@Valid LeadFormQuestion> questions = null;

    public LeadFormCommon() {
    }

    public LeadFormCommon name(String name) {
        this.name = name;
        return this;
    }

    /**
     * Internal name of the lead form.
     * @return name
     **/
    @Nullable
    @Schema(name = "name", example = "Lead Form 3/14/2023", description = "Internal name of the lead form.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getName() {
        return name;
    }

    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setName(String name) {
        this.name = name;
    }

    public LeadFormCommon privacyPolicyLink(String privacyPolicyLink) {
        this.privacyPolicyLink = privacyPolicyLink;
        return this;
    }

    /**
     * A link to the advertiser&#39;s privacy policy. This will be included in the lead form&#39;s disclosure language.
     * @return privacyPolicyLink
     **/
    @Nullable
    @Schema(name = "privacy_policy_link", example = "https://www.advertisername.com/privacy-policy", description = "A link to the advertiser's privacy policy. This will be included in the lead form's disclosure language.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_PRIVACY_POLICY_LINK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getPrivacyPolicyLink() {
        return privacyPolicyLink;
    }

    @JsonProperty(JSON_PROPERTY_PRIVACY_POLICY_LINK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setPrivacyPolicyLink(String privacyPolicyLink) {
        this.privacyPolicyLink = privacyPolicyLink;
    }

    public LeadFormCommon hasAcceptedTerms(Boolean hasAcceptedTerms) {
        this.hasAcceptedTerms = hasAcceptedTerms;
        return this;
    }

    /**
     * Whether the advertiser has accepted Pinterest&#39;s terms of service for creating a lead ad.
     * @return hasAcceptedTerms
     **/
    @Nullable
    @Schema(name = "has_accepted_terms", example = "false", description = "Whether the advertiser has accepted Pinterest's terms of service for creating a lead ad.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_HAS_ACCEPTED_TERMS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Boolean getHasAcceptedTerms() {
        return hasAcceptedTerms;
    }

    @JsonProperty(JSON_PROPERTY_HAS_ACCEPTED_TERMS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setHasAcceptedTerms(Boolean hasAcceptedTerms) {
        this.hasAcceptedTerms = hasAcceptedTerms;
    }

    public LeadFormCommon completionMessage(String completionMessage) {
        this.completionMessage = completionMessage;
        return this;
    }

    /**
     * A message for people who complete the form to let them know what happens next.
     * @return completionMessage
     **/
    @Nullable
    @Schema(name = "completion_message", example = "Thank you for submitting. We will contact you soon.", description = "A message for people who complete the form to let them know what happens next.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_COMPLETION_MESSAGE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getCompletionMessage() {
        return completionMessage;
    }

    @JsonProperty(JSON_PROPERTY_COMPLETION_MESSAGE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCompletionMessage(String completionMessage) {
        this.completionMessage = completionMessage;
    }

    public LeadFormCommon status(LeadFormStatus status) {
        this.status = status;
        return this;
    }

    /**
     * Get status
     * @return status
     **/
    @Nullable
    @Schema(name = "status", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public LeadFormStatus getStatus() {
        return status;
    }

    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setStatus(LeadFormStatus status) {
        this.status = status;
    }

    public LeadFormCommon disclosureLanguage(String disclosureLanguage) {
        this.disclosureLanguage = disclosureLanguage;
        return this;
    }

    /**
     * Additional disclosure language to be included in the lead form.
     * @return disclosureLanguage
     **/
    @Nullable
    @Schema(name = "disclosure_language", example = "By entering your personal information, you agree that your data will be collected and used.", description = "Additional disclosure language to be included in the lead form.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_DISCLOSURE_LANGUAGE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getDisclosureLanguage() {
        return disclosureLanguage;
    }

    @JsonProperty(JSON_PROPERTY_DISCLOSURE_LANGUAGE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDisclosureLanguage(String disclosureLanguage) {
        this.disclosureLanguage = disclosureLanguage;
    }

    public LeadFormCommon questions(List<@Valid LeadFormQuestion> questions) {
        this.questions = questions;
        return this;
    }

    public LeadFormCommon addQuestionsItem(LeadFormQuestion questionsItem) {
        if (this.questions == null) {
            this.questions = new ArrayList<>();
        }
        this.questions.add(questionsItem);
        return this;
    }

    /**
     * List of questions to be displayed on the lead form.
     * @return questions
     **/
    @Nullable
    @Size(min=0, max=10)
    @Schema(name = "questions", example = "[{\"question_type\":\"CUSTOM\",\"custom_question_field_type\":\"CHECKBOX\",\"custom_question_label\":\"What is your favorite animal?\",\"custom_question_options\":[\"Dog\",\"Cat\",\"Bird\",\"Turtle\"]}]", description = "List of questions to be displayed on the lead form.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_QUESTIONS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Valid LeadFormQuestion> getQuestions() {
        return questions;
    }

    @JsonProperty(JSON_PROPERTY_QUESTIONS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setQuestions(List<@Valid LeadFormQuestion> questions) {
        this.questions = questions;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        LeadFormCommon leadFormCommon = (LeadFormCommon) o;
        return Objects.equals(this.name, leadFormCommon.name) &&
            Objects.equals(this.privacyPolicyLink, leadFormCommon.privacyPolicyLink) &&
            Objects.equals(this.hasAcceptedTerms, leadFormCommon.hasAcceptedTerms) &&
            Objects.equals(this.completionMessage, leadFormCommon.completionMessage) &&
            Objects.equals(this.status, leadFormCommon.status) &&
            Objects.equals(this.disclosureLanguage, leadFormCommon.disclosureLanguage) &&
            Objects.equals(this.questions, leadFormCommon.questions);
    }

    @Override
    public int hashCode() {
        return Objects.hash(name, privacyPolicyLink, hasAcceptedTerms, completionMessage, status, disclosureLanguage, questions);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class LeadFormCommon {\n");
        sb.append("    name: ").append(toIndentedString(name)).append("\n");
        sb.append("    privacyPolicyLink: ").append(toIndentedString(privacyPolicyLink)).append("\n");
        sb.append("    hasAcceptedTerms: ").append(toIndentedString(hasAcceptedTerms)).append("\n");
        sb.append("    completionMessage: ").append(toIndentedString(completionMessage)).append("\n");
        sb.append("    status: ").append(toIndentedString(status)).append("\n");
        sb.append("    disclosureLanguage: ").append(toIndentedString(disclosureLanguage)).append("\n");
        sb.append("    questions: ").append(toIndentedString(questions)).append("\n");
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

