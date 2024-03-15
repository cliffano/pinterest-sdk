package com.prokarma.pkmst.model;

import java.util.Objects;
import io.swagger.annotations.ApiModel;
import com.fasterxml.jackson.annotation.JsonValue;
/**
 * Response class to be returned by Api
 * @author pkmst
 *
 */
import com.fasterxml.jackson.annotation.JsonCreator;

/**
 * Lead form question field type
 */
public enum LeadFormQuestionFieldType {
  
  TEXT_FIELD("TEXT_FIELD"),
  
  TEXT_AREA("TEXT_AREA"),
  
  RADIO_LIST("RADIO_LIST"),
  
  CHECKBOX("CHECKBOX"),
  
  NULL("null");

  private String value;

  LeadFormQuestionFieldType(String value) {
    this.value = value;
  }

  @Override
  @JsonValue
  public String toString() {
    return String.valueOf(value);
  }

  @JsonCreator
  public static LeadFormQuestionFieldType fromValue(String text) {
    for (LeadFormQuestionFieldType b : LeadFormQuestionFieldType.values()) {
      if (String.valueOf(b.value).equals(text)) {
        return b;
      }
    }
    return null;
  }
}

