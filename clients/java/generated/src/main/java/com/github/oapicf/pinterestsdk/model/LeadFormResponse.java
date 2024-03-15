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


package com.github.oapicf.pinterestsdk.model;

import java.util.Objects;
import com.github.oapicf.pinterestsdk.model.LeadFormQuestion;
import com.github.oapicf.pinterestsdk.model.LeadFormStatus;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonArray;
import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParseException;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.reflect.TypeToken;
import com.google.gson.TypeAdapter;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;

import java.lang.reflect.Type;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

import com.github.oapicf.pinterestsdk.JSON;

/**
 * LeadFormResponse
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2024-03-14T23:01:05.225954683Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class LeadFormResponse {
  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_PRIVACY_POLICY_LINK = "privacy_policy_link";
  @SerializedName(SERIALIZED_NAME_PRIVACY_POLICY_LINK)
  private String privacyPolicyLink;

  public static final String SERIALIZED_NAME_HAS_ACCEPTED_TERMS = "has_accepted_terms";
  @SerializedName(SERIALIZED_NAME_HAS_ACCEPTED_TERMS)
  private Boolean hasAcceptedTerms;

  public static final String SERIALIZED_NAME_COMPLETION_MESSAGE = "completion_message";
  @SerializedName(SERIALIZED_NAME_COMPLETION_MESSAGE)
  private String completionMessage;

  public static final String SERIALIZED_NAME_STATUS = "status";
  @SerializedName(SERIALIZED_NAME_STATUS)
  private LeadFormStatus status;

  public static final String SERIALIZED_NAME_DISCLOSURE_LANGUAGE = "disclosure_language";
  @SerializedName(SERIALIZED_NAME_DISCLOSURE_LANGUAGE)
  private String disclosureLanguage;

  public static final String SERIALIZED_NAME_QUESTIONS = "questions";
  @SerializedName(SERIALIZED_NAME_QUESTIONS)
  private List<LeadFormQuestion> questions;

  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private String id;

  public static final String SERIALIZED_NAME_AD_ACCOUNT_ID = "ad_account_id";
  @SerializedName(SERIALIZED_NAME_AD_ACCOUNT_ID)
  private String adAccountId;

  public static final String SERIALIZED_NAME_CREATED_TIME = "created_time";
  @SerializedName(SERIALIZED_NAME_CREATED_TIME)
  private Integer createdTime;

  public static final String SERIALIZED_NAME_UPDATED_TIME = "updated_time";
  @SerializedName(SERIALIZED_NAME_UPDATED_TIME)
  private Integer updatedTime;

  public LeadFormResponse() {
  }

  public LeadFormResponse name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Internal name of the lead form.
   * @return name
  **/
  @javax.annotation.Nullable
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }


  public LeadFormResponse privacyPolicyLink(String privacyPolicyLink) {
    this.privacyPolicyLink = privacyPolicyLink;
    return this;
  }

   /**
   * A link to the advertiser&#39;s privacy policy. This will be included in the lead form&#39;s disclosure language.
   * @return privacyPolicyLink
  **/
  @javax.annotation.Nullable
  public String getPrivacyPolicyLink() {
    return privacyPolicyLink;
  }

  public void setPrivacyPolicyLink(String privacyPolicyLink) {
    this.privacyPolicyLink = privacyPolicyLink;
  }


  public LeadFormResponse hasAcceptedTerms(Boolean hasAcceptedTerms) {
    this.hasAcceptedTerms = hasAcceptedTerms;
    return this;
  }

   /**
   * Whether the advertiser has accepted Pinterest&#39;s terms of service for creating a lead ad.
   * @return hasAcceptedTerms
  **/
  @javax.annotation.Nullable
  public Boolean getHasAcceptedTerms() {
    return hasAcceptedTerms;
  }

  public void setHasAcceptedTerms(Boolean hasAcceptedTerms) {
    this.hasAcceptedTerms = hasAcceptedTerms;
  }


  public LeadFormResponse completionMessage(String completionMessage) {
    this.completionMessage = completionMessage;
    return this;
  }

   /**
   * A message for people who complete the form to let them know what happens next.
   * @return completionMessage
  **/
  @javax.annotation.Nullable
  public String getCompletionMessage() {
    return completionMessage;
  }

  public void setCompletionMessage(String completionMessage) {
    this.completionMessage = completionMessage;
  }


  public LeadFormResponse status(LeadFormStatus status) {
    this.status = status;
    return this;
  }

   /**
   * Get status
   * @return status
  **/
  @javax.annotation.Nullable
  public LeadFormStatus getStatus() {
    return status;
  }

  public void setStatus(LeadFormStatus status) {
    this.status = status;
  }


  public LeadFormResponse disclosureLanguage(String disclosureLanguage) {
    this.disclosureLanguage = disclosureLanguage;
    return this;
  }

   /**
   * Additional disclosure language to be included in the lead form.
   * @return disclosureLanguage
  **/
  @javax.annotation.Nullable
  public String getDisclosureLanguage() {
    return disclosureLanguage;
  }

  public void setDisclosureLanguage(String disclosureLanguage) {
    this.disclosureLanguage = disclosureLanguage;
  }


  public LeadFormResponse questions(List<LeadFormQuestion> questions) {
    this.questions = questions;
    return this;
  }

  public LeadFormResponse addQuestionsItem(LeadFormQuestion questionsItem) {
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
  @javax.annotation.Nullable
  public List<LeadFormQuestion> getQuestions() {
    return questions;
  }

  public void setQuestions(List<LeadFormQuestion> questions) {
    this.questions = questions;
  }


  public LeadFormResponse id(String id) {
    this.id = id;
    return this;
  }

   /**
   * The ID of this lead form
   * @return id
  **/
  @javax.annotation.Nullable
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }


  public LeadFormResponse adAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
    return this;
  }

   /**
   * The Ad Account ID that this lead form belongs to.
   * @return adAccountId
  **/
  @javax.annotation.Nullable
  public String getAdAccountId() {
    return adAccountId;
  }

  public void setAdAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
  }


  public LeadFormResponse createdTime(Integer createdTime) {
    this.createdTime = createdTime;
    return this;
  }

   /**
   * Lead form creation time. Unix timestamp in seconds.
   * @return createdTime
  **/
  @javax.annotation.Nullable
  public Integer getCreatedTime() {
    return createdTime;
  }

  public void setCreatedTime(Integer createdTime) {
    this.createdTime = createdTime;
  }


  public LeadFormResponse updatedTime(Integer updatedTime) {
    this.updatedTime = updatedTime;
    return this;
  }

   /**
   * Last update time. Unix timestamp in seconds.
   * @return updatedTime
  **/
  @javax.annotation.Nullable
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
    return Objects.equals(this.name, leadFormResponse.name) &&
        Objects.equals(this.privacyPolicyLink, leadFormResponse.privacyPolicyLink) &&
        Objects.equals(this.hasAcceptedTerms, leadFormResponse.hasAcceptedTerms) &&
        Objects.equals(this.completionMessage, leadFormResponse.completionMessage) &&
        Objects.equals(this.status, leadFormResponse.status) &&
        Objects.equals(this.disclosureLanguage, leadFormResponse.disclosureLanguage) &&
        Objects.equals(this.questions, leadFormResponse.questions) &&
        Objects.equals(this.id, leadFormResponse.id) &&
        Objects.equals(this.adAccountId, leadFormResponse.adAccountId) &&
        Objects.equals(this.createdTime, leadFormResponse.createdTime) &&
        Objects.equals(this.updatedTime, leadFormResponse.updatedTime);
  }

  private static <T> boolean equalsNullable(JsonNullable<T> a, JsonNullable<T> b) {
    return a == b || (a != null && b != null && a.isPresent() && b.isPresent() && Objects.deepEquals(a.get(), b.get()));
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, privacyPolicyLink, hasAcceptedTerms, completionMessage, status, disclosureLanguage, questions, id, adAccountId, createdTime, updatedTime);
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
    sb.append("class LeadFormResponse {\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    privacyPolicyLink: ").append(toIndentedString(privacyPolicyLink)).append("\n");
    sb.append("    hasAcceptedTerms: ").append(toIndentedString(hasAcceptedTerms)).append("\n");
    sb.append("    completionMessage: ").append(toIndentedString(completionMessage)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    disclosureLanguage: ").append(toIndentedString(disclosureLanguage)).append("\n");
    sb.append("    questions: ").append(toIndentedString(questions)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    adAccountId: ").append(toIndentedString(adAccountId)).append("\n");
    sb.append("    createdTime: ").append(toIndentedString(createdTime)).append("\n");
    sb.append("    updatedTime: ").append(toIndentedString(updatedTime)).append("\n");
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


  public static HashSet<String> openapiFields;
  public static HashSet<String> openapiRequiredFields;

  static {
    // a set of all properties/fields (JSON key names)
    openapiFields = new HashSet<String>();
    openapiFields.add("name");
    openapiFields.add("privacy_policy_link");
    openapiFields.add("has_accepted_terms");
    openapiFields.add("completion_message");
    openapiFields.add("status");
    openapiFields.add("disclosure_language");
    openapiFields.add("questions");
    openapiFields.add("id");
    openapiFields.add("ad_account_id");
    openapiFields.add("created_time");
    openapiFields.add("updated_time");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
  }

 /**
  * Validates the JSON Element and throws an exception if issues found
  *
  * @param jsonElement JSON Element
  * @throws IOException if the JSON Element is invalid with respect to LeadFormResponse
  */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!LeadFormResponse.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in LeadFormResponse is not found in the empty JSON string", LeadFormResponse.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!LeadFormResponse.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `LeadFormResponse` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("name") != null && !jsonObj.get("name").isJsonNull()) && !jsonObj.get("name").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `name` to be a primitive type in the JSON string but got `%s`", jsonObj.get("name").toString()));
      }
      if ((jsonObj.get("privacy_policy_link") != null && !jsonObj.get("privacy_policy_link").isJsonNull()) && !jsonObj.get("privacy_policy_link").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `privacy_policy_link` to be a primitive type in the JSON string but got `%s`", jsonObj.get("privacy_policy_link").toString()));
      }
      if ((jsonObj.get("completion_message") != null && !jsonObj.get("completion_message").isJsonNull()) && !jsonObj.get("completion_message").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `completion_message` to be a primitive type in the JSON string but got `%s`", jsonObj.get("completion_message").toString()));
      }
      // validate the optional field `status`
      if (jsonObj.get("status") != null && !jsonObj.get("status").isJsonNull()) {
        LeadFormStatus.validateJsonElement(jsonObj.get("status"));
      }
      if ((jsonObj.get("disclosure_language") != null && !jsonObj.get("disclosure_language").isJsonNull()) && !jsonObj.get("disclosure_language").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `disclosure_language` to be a primitive type in the JSON string but got `%s`", jsonObj.get("disclosure_language").toString()));
      }
      if (jsonObj.get("questions") != null && !jsonObj.get("questions").isJsonNull()) {
        JsonArray jsonArrayquestions = jsonObj.getAsJsonArray("questions");
        if (jsonArrayquestions != null) {
          // ensure the json data is an array
          if (!jsonObj.get("questions").isJsonArray()) {
            throw new IllegalArgumentException(String.format("Expected the field `questions` to be an array in the JSON string but got `%s`", jsonObj.get("questions").toString()));
          }

          // validate the optional field `questions` (array)
          for (int i = 0; i < jsonArrayquestions.size(); i++) {
            LeadFormQuestion.validateJsonElement(jsonArrayquestions.get(i));
          };
        }
      }
      if ((jsonObj.get("id") != null && !jsonObj.get("id").isJsonNull()) && !jsonObj.get("id").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `id` to be a primitive type in the JSON string but got `%s`", jsonObj.get("id").toString()));
      }
      if ((jsonObj.get("ad_account_id") != null && !jsonObj.get("ad_account_id").isJsonNull()) && !jsonObj.get("ad_account_id").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `ad_account_id` to be a primitive type in the JSON string but got `%s`", jsonObj.get("ad_account_id").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!LeadFormResponse.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'LeadFormResponse' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<LeadFormResponse> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(LeadFormResponse.class));

       return (TypeAdapter<T>) new TypeAdapter<LeadFormResponse>() {
           @Override
           public void write(JsonWriter out, LeadFormResponse value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public LeadFormResponse read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

 /**
  * Create an instance of LeadFormResponse given an JSON string
  *
  * @param jsonString JSON string
  * @return An instance of LeadFormResponse
  * @throws IOException if the JSON string is invalid with respect to LeadFormResponse
  */
  public static LeadFormResponse fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, LeadFormResponse.class);
  }

 /**
  * Convert an instance of LeadFormResponse to an JSON string
  *
  * @return JSON string
  */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

