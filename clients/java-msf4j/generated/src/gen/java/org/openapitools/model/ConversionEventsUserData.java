package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;

/**
 * Object containing customer information data. Note, It is required at least one of 1) em, 2) hashed_maids or 3) pair client_ip_address + client_user_agent.
 */
@ApiModel(description = "Object containing customer information data. Note, It is required at least one of 1) em, 2) hashed_maids or 3) pair client_ip_address + client_user_agent.")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2024-03-14T23:02:29.393275857Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class ConversionEventsUserData   {
  @JsonProperty("ph")
  private List<String> ph = null;

  @JsonProperty("ge")
  private List<String> ge = null;

  @JsonProperty("db")
  private List<String> db = null;

  @JsonProperty("ln")
  private List<String> ln = null;

  @JsonProperty("fn")
  private List<String> fn = null;

  @JsonProperty("ct")
  private List<String> ct = null;

  @JsonProperty("st")
  private List<String> st = null;

  @JsonProperty("zp")
  private List<String> zp = null;

  @JsonProperty("country")
  private List<String> country = null;

  @JsonProperty("external_id")
  private List<String> externalId = null;

  @JsonProperty("click_id")
  private String clickId;

  @JsonProperty("partner_id")
  private String partnerId;

  public ConversionEventsUserData ph(List<String> ph) {
    this.ph = ph;
    return this;
  }

  public ConversionEventsUserData addPhItem(String phItem) {
    if (this.ph == null) {
      this.ph = ;
    }
    this.ph.add(phItem);
    return this;
  }

   /**
   * Sha256 hashes of user's phone numbers, only digits with country code, area code, and number. Remove any symbols, letters, spaces and leading zeros. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
   * @return ph
  **/
  @ApiModelProperty(example = "[\"45df139772a81b6011bdc1c9cc3d1cb408fc0b10ec0c5cb9d4d4e107f0ddc49d\"]", value = "Sha256 hashes of user's phone numbers, only digits with country code, area code, and number. Remove any symbols, letters, spaces and leading zeros. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.")
  public List<String> getPh() {
    return ph;
  }

  public void setPh(List<String> ph) {
    this.ph = ph;
  }

  public ConversionEventsUserData ge(List<String> ge) {
    this.ge = ge;
    return this;
  }

  public ConversionEventsUserData addGeItem(String geItem) {
    if (this.ge == null) {
      this.ge = ;
    }
    this.ge.add(geItem);
    return this;
  }

   /**
   * Sha256 hashes of user's gender, in lowercase. Either \"f\" or \"m\" or \"n\" for non-binary gender.
   * @return ge
  **/
  @ApiModelProperty(example = "[\"0d248e82c62c9386878327d491c762a002152d42ab2c391a31c44d9f62675ddf\"]", value = "Sha256 hashes of user's gender, in lowercase. Either \"f\" or \"m\" or \"n\" for non-binary gender.")
  public List<String> getGe() {
    return ge;
  }

  public void setGe(List<String> ge) {
    this.ge = ge;
  }

  public ConversionEventsUserData db(List<String> db) {
    this.db = db;
    return this;
  }

  public ConversionEventsUserData addDbItem(String dbItem) {
    if (this.db == null) {
      this.db = ;
    }
    this.db.add(dbItem);
    return this;
  }

   /**
   * Sha256 hashes of user's date of birthday, given as year, month, and day.
   * @return db
  **/
  @ApiModelProperty(example = "[\"d4426a0086d10f12ad265539ae8d54221dc67786053d511407204b76e99d7739\"]", value = "Sha256 hashes of user's date of birthday, given as year, month, and day.")
  public List<String> getDb() {
    return db;
  }

  public void setDb(List<String> db) {
    this.db = db;
  }

  public ConversionEventsUserData ln(List<String> ln) {
    this.ln = ln;
    return this;
  }

  public ConversionEventsUserData addLnItem(String lnItem) {
    if (this.ln == null) {
      this.ln = ;
    }
    this.ln.add(lnItem);
    return this;
  }

   /**
   * Sha256 hashes of user's last name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
   * @return ln
  **/
  @ApiModelProperty(example = "[\"7e546b3aa43f989dd359672e6c3409d4f9d4e8f155ae1e9b90ee060985468c19\"]", value = "Sha256 hashes of user's last name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.")
  public List<String> getLn() {
    return ln;
  }

  public void setLn(List<String> ln) {
    this.ln = ln;
  }

  public ConversionEventsUserData fn(List<String> fn) {
    this.fn = fn;
    return this;
  }

  public ConversionEventsUserData addFnItem(String fnItem) {
    if (this.fn == null) {
      this.fn = ;
    }
    this.fn.add(fnItem);
    return this;
  }

   /**
   * Sha256 hashes of user's first name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
   * @return fn
  **/
  @ApiModelProperty(example = "[\"ec1e6a072231703f1bc41429052fff8c00a7e0c6aaec2e7107241ca8f3ceb6b2\"]", value = "Sha256 hashes of user's first name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.")
  public List<String> getFn() {
    return fn;
  }

  public void setFn(List<String> fn) {
    this.fn = fn;
  }

  public ConversionEventsUserData ct(List<String> ct) {
    this.ct = ct;
    return this;
  }

  public ConversionEventsUserData addCtItem(String ctItem) {
    if (this.ct == null) {
      this.ct = ;
    }
    this.ct.add(ctItem);
    return this;
  }

   /**
   * Sha256 hashes of user's city, in lowercase, and without spaces or punctuation. User residency city (mostly billing).
   * @return ct
  **/
  @ApiModelProperty(example = "[\"4ac01a129bfd10385c9278c2cf2c46fac5ab57350841234f587c8522a2e4ce36\"]", value = "Sha256 hashes of user's city, in lowercase, and without spaces or punctuation. User residency city (mostly billing).")
  public List<String> getCt() {
    return ct;
  }

  public void setCt(List<String> ct) {
    this.ct = ct;
  }

  public ConversionEventsUserData st(List<String> st) {
    this.st = st;
    return this;
  }

  public ConversionEventsUserData addStItem(String stItem) {
    if (this.st == null) {
      this.st = ;
    }
    this.st.add(stItem);
    return this;
  }

   /**
   * Sha256 hashes of user's state, given as a two-letter code in lowercase. User residency state (mostly billing).
   * @return st
  **/
  @ApiModelProperty(example = "[\"49a6d05b8e4b516656e464271d9dd38d0a7e0142f7f49546f4dabd2720cafc34\"]", value = "Sha256 hashes of user's state, given as a two-letter code in lowercase. User residency state (mostly billing).")
  public List<String> getSt() {
    return st;
  }

  public void setSt(List<String> st) {
    this.st = st;
  }

  public ConversionEventsUserData zp(List<String> zp) {
    this.zp = zp;
    return this;
  }

  public ConversionEventsUserData addZpItem(String zpItem) {
    if (this.zp == null) {
      this.zp = ;
    }
    this.zp.add(zpItem);
    return this;
  }

   /**
   * Sha256 hashes of user's zipcode, only digits. User residency zipcode (mostly billing).
   * @return zp
  **/
  @ApiModelProperty(example = "[\"fd5f56b40a79a385708428e7b32ab996a681080a166a2206e750eb4819186145\"]", value = "Sha256 hashes of user's zipcode, only digits. User residency zipcode (mostly billing).")
  public List<String> getZp() {
    return zp;
  }

  public void setZp(List<String> zp) {
    this.zp = zp;
  }

  public ConversionEventsUserData country(List<String> country) {
    this.country = country;
    return this;
  }

  public ConversionEventsUserData addCountryItem(String countryItem) {
    if (this.country == null) {
      this.country = ;
    }
    this.country.add(countryItem);
    return this;
  }

   /**
   * Sha256 hashes of two-character ISO-3166 country code indicating the user's country, in lowercase.
   * @return country
  **/
  @ApiModelProperty(example = "[\"9b202ecbc6d45c6d8901d989a918878397a3eb9d00e8f48022fc051b19d21a1d\"]", value = "Sha256 hashes of two-character ISO-3166 country code indicating the user's country, in lowercase.")
  public List<String> getCountry() {
    return country;
  }

  public void setCountry(List<String> country) {
    this.country = country;
  }

  public ConversionEventsUserData externalId(List<String> externalId) {
    this.externalId = externalId;
    return this;
  }

  public ConversionEventsUserData addExternalIdItem(String externalIdItem) {
    if (this.externalId == null) {
      this.externalId = ;
    }
    this.externalId.add(externalIdItem);
    return this;
  }

   /**
   * Sha256 hashes of the unique id from the advertiser that identifies a user in their space, e.g. user id, loyalty id, etc. We highly recommend this on all events. It may improve reporting performance such as ROAS/CPA.
   * @return externalId
  **/
  @ApiModelProperty(example = "[\"6a7a73766627eb611720883d5a11cc62b5bfee237b00a6658d78c50032ec4aee\"]", value = "Sha256 hashes of the unique id from the advertiser that identifies a user in their space, e.g. user id, loyalty id, etc. We highly recommend this on all events. It may improve reporting performance such as ROAS/CPA.")
  public List<String> getExternalId() {
    return externalId;
  }

  public void setExternalId(List<String> externalId) {
    this.externalId = externalId;
  }

  public ConversionEventsUserData clickId(String clickId) {
    this.clickId = clickId;
    return this;
  }

   /**
   * The unique identifier stored in _epik cookie on your domain or &epik= query parameter in the URL. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
   * @return clickId
  **/
  @ApiModelProperty(example = "dj0yJnU9b2JDcFFHekV4SHJNcmVrbFBkUEdqakh0akdUT1VjVVUmcD0yJm49cnNBQ3F2Q2dOVDBXWWhkWklrUGxBUSZ0PUFBQUFBR1BaY3Bv", value = "The unique identifier stored in _epik cookie on your domain or &epik= query parameter in the URL. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.")
  public String getClickId() {
    return clickId;
  }

  public void setClickId(String clickId) {
    this.clickId = clickId;
  }

  public ConversionEventsUserData partnerId(String partnerId) {
    this.partnerId = partnerId;
    return this;
  }

   /**
   * A unique identifier of visitors' information defined by third party partners. e.g RampID
   * @return partnerId
  **/
  @ApiModelProperty(example = "BUJrTlRRzGJmWhRXFZdkioV6wKPBve7Lom__GU9J74hq2NIQj4O3nOZJrp3mcUr5MptkXsI14juMOIM9mNZnM4zEUFT2JLVaFhcOfuuWz3IWEDtBf6I0DPc", value = "A unique identifier of visitors' information defined by third party partners. e.g RampID")
  public String getPartnerId() {
    return partnerId;
  }

  public void setPartnerId(String partnerId) {
    this.partnerId = partnerId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ConversionEventsUserData conversionEventsUserData = (ConversionEventsUserData) o;
    return Objects.equals(this.ph, conversionEventsUserData.ph) &&
        Objects.equals(this.ge, conversionEventsUserData.ge) &&
        Objects.equals(this.db, conversionEventsUserData.db) &&
        Objects.equals(this.ln, conversionEventsUserData.ln) &&
        Objects.equals(this.fn, conversionEventsUserData.fn) &&
        Objects.equals(this.ct, conversionEventsUserData.ct) &&
        Objects.equals(this.st, conversionEventsUserData.st) &&
        Objects.equals(this.zp, conversionEventsUserData.zp) &&
        Objects.equals(this.country, conversionEventsUserData.country) &&
        Objects.equals(this.externalId, conversionEventsUserData.externalId) &&
        Objects.equals(this.clickId, conversionEventsUserData.clickId) &&
        Objects.equals(this.partnerId, conversionEventsUserData.partnerId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ph, ge, db, ln, fn, ct, st, zp, country, externalId, clickId, partnerId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ConversionEventsUserData {\n");
    
    sb.append("    ph: ").append(toIndentedString(ph)).append("\n");
    sb.append("    ge: ").append(toIndentedString(ge)).append("\n");
    sb.append("    db: ").append(toIndentedString(db)).append("\n");
    sb.append("    ln: ").append(toIndentedString(ln)).append("\n");
    sb.append("    fn: ").append(toIndentedString(fn)).append("\n");
    sb.append("    ct: ").append(toIndentedString(ct)).append("\n");
    sb.append("    st: ").append(toIndentedString(st)).append("\n");
    sb.append("    zp: ").append(toIndentedString(zp)).append("\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    externalId: ").append(toIndentedString(externalId)).append("\n");
    sb.append("    clickId: ").append(toIndentedString(clickId)).append("\n");
    sb.append("    partnerId: ").append(toIndentedString(partnerId)).append("\n");
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

