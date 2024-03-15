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

import java.util.*;
import org.openapitools.client.model.LeadFormQuestion;
import org.openapitools.client.model.LeadFormStatus;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class LeadFormResponse {
  
  @SerializedName("name")
  private String name = null;
  @SerializedName("privacy_policy_link")
  private String privacyPolicyLink = null;
  @SerializedName("has_accepted_terms")
  private Boolean hasAcceptedTerms = null;
  @SerializedName("completion_message")
  private String completionMessage = null;
  @SerializedName("status")
  private LeadFormStatus status = null;
  @SerializedName("disclosure_language")
  private String disclosureLanguage = null;
  @SerializedName("questions")
  private List<LeadFormQuestion> questions = null;
  @SerializedName("id")
  private String id = null;
  @SerializedName("ad_account_id")
  private String adAccountId = null;
  @SerializedName("created_time")
  private Integer createdTime = null;
  @SerializedName("updated_time")
  private Integer updatedTime = null;

  /**
   * Internal name of the lead form.
   **/
  @ApiModelProperty(value = "Internal name of the lead form.")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   * A link to the advertiser's privacy policy. This will be included in the lead form's disclosure language.
   **/
  @ApiModelProperty(value = "A link to the advertiser's privacy policy. This will be included in the lead form's disclosure language.")
  public String getPrivacyPolicyLink() {
    return privacyPolicyLink;
  }
  public void setPrivacyPolicyLink(String privacyPolicyLink) {
    this.privacyPolicyLink = privacyPolicyLink;
  }

  /**
   * Whether the advertiser has accepted Pinterest's terms of service for creating a lead ad.
   **/
  @ApiModelProperty(value = "Whether the advertiser has accepted Pinterest's terms of service for creating a lead ad.")
  public Boolean getHasAcceptedTerms() {
    return hasAcceptedTerms;
  }
  public void setHasAcceptedTerms(Boolean hasAcceptedTerms) {
    this.hasAcceptedTerms = hasAcceptedTerms;
  }

  /**
   * A message for people who complete the form to let them know what happens next.
   **/
  @ApiModelProperty(value = "A message for people who complete the form to let them know what happens next.")
  public String getCompletionMessage() {
    return completionMessage;
  }
  public void setCompletionMessage(String completionMessage) {
    this.completionMessage = completionMessage;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public LeadFormStatus getStatus() {
    return status;
  }
  public void setStatus(LeadFormStatus status) {
    this.status = status;
  }

  /**
   * Additional disclosure language to be included in the lead form.
   **/
  @ApiModelProperty(value = "Additional disclosure language to be included in the lead form.")
  public String getDisclosureLanguage() {
    return disclosureLanguage;
  }
  public void setDisclosureLanguage(String disclosureLanguage) {
    this.disclosureLanguage = disclosureLanguage;
  }

  /**
   * List of questions to be displayed on the lead form.
   **/
  @ApiModelProperty(value = "List of questions to be displayed on the lead form.")
  public List<LeadFormQuestion> getQuestions() {
    return questions;
  }
  public void setQuestions(List<LeadFormQuestion> questions) {
    this.questions = questions;
  }

  /**
   * The ID of this lead form
   **/
  @ApiModelProperty(value = "The ID of this lead form")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * The Ad Account ID that this lead form belongs to.
   **/
  @ApiModelProperty(value = "The Ad Account ID that this lead form belongs to.")
  public String getAdAccountId() {
    return adAccountId;
  }
  public void setAdAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
  }

  /**
   * Lead form creation time. Unix timestamp in seconds.
   **/
  @ApiModelProperty(value = "Lead form creation time. Unix timestamp in seconds.")
  public Integer getCreatedTime() {
    return createdTime;
  }
  public void setCreatedTime(Integer createdTime) {
    this.createdTime = createdTime;
  }

  /**
   * Last update time. Unix timestamp in seconds.
   **/
  @ApiModelProperty(value = "Last update time. Unix timestamp in seconds.")
  public Integer getUpdatedTime() {
    return updatedTime;
  }
  public void setUpdatedTime(Integer updatedTime) {
    this.updatedTime = updatedTime;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LeadFormResponse leadFormResponse = (LeadFormResponse) o;
    return (this.name == null ? leadFormResponse.name == null : this.name.equals(leadFormResponse.name)) &&
        (this.privacyPolicyLink == null ? leadFormResponse.privacyPolicyLink == null : this.privacyPolicyLink.equals(leadFormResponse.privacyPolicyLink)) &&
        (this.hasAcceptedTerms == null ? leadFormResponse.hasAcceptedTerms == null : this.hasAcceptedTerms.equals(leadFormResponse.hasAcceptedTerms)) &&
        (this.completionMessage == null ? leadFormResponse.completionMessage == null : this.completionMessage.equals(leadFormResponse.completionMessage)) &&
        (this.status == null ? leadFormResponse.status == null : this.status.equals(leadFormResponse.status)) &&
        (this.disclosureLanguage == null ? leadFormResponse.disclosureLanguage == null : this.disclosureLanguage.equals(leadFormResponse.disclosureLanguage)) &&
        (this.questions == null ? leadFormResponse.questions == null : this.questions.equals(leadFormResponse.questions)) &&
        (this.id == null ? leadFormResponse.id == null : this.id.equals(leadFormResponse.id)) &&
        (this.adAccountId == null ? leadFormResponse.adAccountId == null : this.adAccountId.equals(leadFormResponse.adAccountId)) &&
        (this.createdTime == null ? leadFormResponse.createdTime == null : this.createdTime.equals(leadFormResponse.createdTime)) &&
        (this.updatedTime == null ? leadFormResponse.updatedTime == null : this.updatedTime.equals(leadFormResponse.updatedTime));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.privacyPolicyLink == null ? 0: this.privacyPolicyLink.hashCode());
    result = 31 * result + (this.hasAcceptedTerms == null ? 0: this.hasAcceptedTerms.hashCode());
    result = 31 * result + (this.completionMessage == null ? 0: this.completionMessage.hashCode());
    result = 31 * result + (this.status == null ? 0: this.status.hashCode());
    result = 31 * result + (this.disclosureLanguage == null ? 0: this.disclosureLanguage.hashCode());
    result = 31 * result + (this.questions == null ? 0: this.questions.hashCode());
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.adAccountId == null ? 0: this.adAccountId.hashCode());
    result = 31 * result + (this.createdTime == null ? 0: this.createdTime.hashCode());
    result = 31 * result + (this.updatedTime == null ? 0: this.updatedTime.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class LeadFormResponse {\n");
    
    sb.append("  name: ").append(name).append("\n");
    sb.append("  privacyPolicyLink: ").append(privacyPolicyLink).append("\n");
    sb.append("  hasAcceptedTerms: ").append(hasAcceptedTerms).append("\n");
    sb.append("  completionMessage: ").append(completionMessage).append("\n");
    sb.append("  status: ").append(status).append("\n");
    sb.append("  disclosureLanguage: ").append(disclosureLanguage).append("\n");
    sb.append("  questions: ").append(questions).append("\n");
    sb.append("  id: ").append(id).append("\n");
    sb.append("  adAccountId: ").append(adAccountId).append("\n");
    sb.append("  createdTime: ").append(createdTime).append("\n");
    sb.append("  updatedTime: ").append(updatedTime).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
