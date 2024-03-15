package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonTypeName;

/**
 * Object containing customer information data. Note, It is required at least one of 1) em, 2) hashed_maids or 3) pair client_ip_address + client_user_agent.
 **/
@ApiModel(description = "Object containing customer information data. Note, It is required at least one of 1) em, 2) hashed_maids or 3) pair client_ip_address + client_user_agent.")
@JsonTypeName("ConversionEventsUserData")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2024-03-14T23:05:05.545684373Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class ConversionEventsUserData   {
  private @Valid List<String> ph;
  private @Valid List<String> ge;
  private @Valid List<String> db;
  private @Valid List<String> ln;
  private @Valid List<String> fn;
  private @Valid List<String> ct;
  private @Valid List<String> st;
  private @Valid List<String> zp;
  private @Valid List<String> country;
  private @Valid List<String> externalId;
  private @Valid String clickId;
  private @Valid String partnerId;

  /**
   * Sha256 hashes of user&#39;s phone numbers, only digits with country code, area code, and number. Remove any symbols, letters, spaces and leading zeros. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
   **/
  public ConversionEventsUserData ph(List<String> ph) {
    this.ph = ph;
    return this;
  }

  
  @ApiModelProperty(example = "[\"45df139772a81b6011bdc1c9cc3d1cb408fc0b10ec0c5cb9d4d4e107f0ddc49d\"]", value = "Sha256 hashes of user's phone numbers, only digits with country code, area code, and number. Remove any symbols, letters, spaces and leading zeros. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.")
  @JsonProperty("ph")
  public List<String> getPh() {
    return ph;
  }

  @JsonProperty("ph")
  public void setPh(List<String> ph) {
    this.ph = ph;
  }

  public ConversionEventsUserData addPhItem(String phItem) {
    if (this.ph == null) {
      this.ph = new ArrayList<>();
    }

    this.ph.add(phItem);
    return this;
  }

  public ConversionEventsUserData removePhItem(String phItem) {
    if (phItem != null && this.ph != null) {
      this.ph.remove(phItem);
    }

    return this;
  }
  /**
   * Sha256 hashes of user&#39;s gender, in lowercase. Either \&quot;f\&quot; or \&quot;m\&quot; or \&quot;n\&quot; for non-binary gender.
   **/
  public ConversionEventsUserData ge(List<String> ge) {
    this.ge = ge;
    return this;
  }

  
  @ApiModelProperty(example = "[\"0d248e82c62c9386878327d491c762a002152d42ab2c391a31c44d9f62675ddf\"]", value = "Sha256 hashes of user's gender, in lowercase. Either \"f\" or \"m\" or \"n\" for non-binary gender.")
  @JsonProperty("ge")
  public List<String> getGe() {
    return ge;
  }

  @JsonProperty("ge")
  public void setGe(List<String> ge) {
    this.ge = ge;
  }

  public ConversionEventsUserData addGeItem(String geItem) {
    if (this.ge == null) {
      this.ge = new ArrayList<>();
    }

    this.ge.add(geItem);
    return this;
  }

  public ConversionEventsUserData removeGeItem(String geItem) {
    if (geItem != null && this.ge != null) {
      this.ge.remove(geItem);
    }

    return this;
  }
  /**
   * Sha256 hashes of user&#39;s date of birthday, given as year, month, and day.
   **/
  public ConversionEventsUserData db(List<String> db) {
    this.db = db;
    return this;
  }

  
  @ApiModelProperty(example = "[\"d4426a0086d10f12ad265539ae8d54221dc67786053d511407204b76e99d7739\"]", value = "Sha256 hashes of user's date of birthday, given as year, month, and day.")
  @JsonProperty("db")
  public List<String> getDb() {
    return db;
  }

  @JsonProperty("db")
  public void setDb(List<String> db) {
    this.db = db;
  }

  public ConversionEventsUserData addDbItem(String dbItem) {
    if (this.db == null) {
      this.db = new ArrayList<>();
    }

    this.db.add(dbItem);
    return this;
  }

  public ConversionEventsUserData removeDbItem(String dbItem) {
    if (dbItem != null && this.db != null) {
      this.db.remove(dbItem);
    }

    return this;
  }
  /**
   * Sha256 hashes of user&#39;s last name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
   **/
  public ConversionEventsUserData ln(List<String> ln) {
    this.ln = ln;
    return this;
  }

  
  @ApiModelProperty(example = "[\"7e546b3aa43f989dd359672e6c3409d4f9d4e8f155ae1e9b90ee060985468c19\"]", value = "Sha256 hashes of user's last name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.")
  @JsonProperty("ln")
  public List<String> getLn() {
    return ln;
  }

  @JsonProperty("ln")
  public void setLn(List<String> ln) {
    this.ln = ln;
  }

  public ConversionEventsUserData addLnItem(String lnItem) {
    if (this.ln == null) {
      this.ln = new ArrayList<>();
    }

    this.ln.add(lnItem);
    return this;
  }

  public ConversionEventsUserData removeLnItem(String lnItem) {
    if (lnItem != null && this.ln != null) {
      this.ln.remove(lnItem);
    }

    return this;
  }
  /**
   * Sha256 hashes of user&#39;s first name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
   **/
  public ConversionEventsUserData fn(List<String> fn) {
    this.fn = fn;
    return this;
  }

  
  @ApiModelProperty(example = "[\"ec1e6a072231703f1bc41429052fff8c00a7e0c6aaec2e7107241ca8f3ceb6b2\"]", value = "Sha256 hashes of user's first name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.")
  @JsonProperty("fn")
  public List<String> getFn() {
    return fn;
  }

  @JsonProperty("fn")
  public void setFn(List<String> fn) {
    this.fn = fn;
  }

  public ConversionEventsUserData addFnItem(String fnItem) {
    if (this.fn == null) {
      this.fn = new ArrayList<>();
    }

    this.fn.add(fnItem);
    return this;
  }

  public ConversionEventsUserData removeFnItem(String fnItem) {
    if (fnItem != null && this.fn != null) {
      this.fn.remove(fnItem);
    }

    return this;
  }
  /**
   * Sha256 hashes of user&#39;s city, in lowercase, and without spaces or punctuation. User residency city (mostly billing).
   **/
  public ConversionEventsUserData ct(List<String> ct) {
    this.ct = ct;
    return this;
  }

  
  @ApiModelProperty(example = "[\"4ac01a129bfd10385c9278c2cf2c46fac5ab57350841234f587c8522a2e4ce36\"]", value = "Sha256 hashes of user's city, in lowercase, and without spaces or punctuation. User residency city (mostly billing).")
  @JsonProperty("ct")
  public List<String> getCt() {
    return ct;
  }

  @JsonProperty("ct")
  public void setCt(List<String> ct) {
    this.ct = ct;
  }

  public ConversionEventsUserData addCtItem(String ctItem) {
    if (this.ct == null) {
      this.ct = new ArrayList<>();
    }

    this.ct.add(ctItem);
    return this;
  }

  public ConversionEventsUserData removeCtItem(String ctItem) {
    if (ctItem != null && this.ct != null) {
      this.ct.remove(ctItem);
    }

    return this;
  }
  /**
   * Sha256 hashes of user&#39;s state, given as a two-letter code in lowercase. User residency state (mostly billing).
   **/
  public ConversionEventsUserData st(List<String> st) {
    this.st = st;
    return this;
  }

  
  @ApiModelProperty(example = "[\"49a6d05b8e4b516656e464271d9dd38d0a7e0142f7f49546f4dabd2720cafc34\"]", value = "Sha256 hashes of user's state, given as a two-letter code in lowercase. User residency state (mostly billing).")
  @JsonProperty("st")
  public List<String> getSt() {
    return st;
  }

  @JsonProperty("st")
  public void setSt(List<String> st) {
    this.st = st;
  }

  public ConversionEventsUserData addStItem(String stItem) {
    if (this.st == null) {
      this.st = new ArrayList<>();
    }

    this.st.add(stItem);
    return this;
  }

  public ConversionEventsUserData removeStItem(String stItem) {
    if (stItem != null && this.st != null) {
      this.st.remove(stItem);
    }

    return this;
  }
  /**
   * Sha256 hashes of user&#39;s zipcode, only digits. User residency zipcode (mostly billing).
   **/
  public ConversionEventsUserData zp(List<String> zp) {
    this.zp = zp;
    return this;
  }

  
  @ApiModelProperty(example = "[\"fd5f56b40a79a385708428e7b32ab996a681080a166a2206e750eb4819186145\"]", value = "Sha256 hashes of user's zipcode, only digits. User residency zipcode (mostly billing).")
  @JsonProperty("zp")
  public List<String> getZp() {
    return zp;
  }

  @JsonProperty("zp")
  public void setZp(List<String> zp) {
    this.zp = zp;
  }

  public ConversionEventsUserData addZpItem(String zpItem) {
    if (this.zp == null) {
      this.zp = new ArrayList<>();
    }

    this.zp.add(zpItem);
    return this;
  }

  public ConversionEventsUserData removeZpItem(String zpItem) {
    if (zpItem != null && this.zp != null) {
      this.zp.remove(zpItem);
    }

    return this;
  }
  /**
   * Sha256 hashes of two-character ISO-3166 country code indicating the user&#39;s country, in lowercase.
   **/
  public ConversionEventsUserData country(List<String> country) {
    this.country = country;
    return this;
  }

  
  @ApiModelProperty(example = "[\"9b202ecbc6d45c6d8901d989a918878397a3eb9d00e8f48022fc051b19d21a1d\"]", value = "Sha256 hashes of two-character ISO-3166 country code indicating the user's country, in lowercase.")
  @JsonProperty("country")
  public List<String> getCountry() {
    return country;
  }

  @JsonProperty("country")
  public void setCountry(List<String> country) {
    this.country = country;
  }

  public ConversionEventsUserData addCountryItem(String countryItem) {
    if (this.country == null) {
      this.country = new ArrayList<>();
    }

    this.country.add(countryItem);
    return this;
  }

  public ConversionEventsUserData removeCountryItem(String countryItem) {
    if (countryItem != null && this.country != null) {
      this.country.remove(countryItem);
    }

    return this;
  }
  /**
   * Sha256 hashes of the unique id from the advertiser that identifies a user in their space, e.g. user id, loyalty id, etc. We highly recommend this on all events. It may improve reporting performance such as ROAS/CPA.
   **/
  public ConversionEventsUserData externalId(List<String> externalId) {
    this.externalId = externalId;
    return this;
  }

  
  @ApiModelProperty(example = "[\"6a7a73766627eb611720883d5a11cc62b5bfee237b00a6658d78c50032ec4aee\"]", value = "Sha256 hashes of the unique id from the advertiser that identifies a user in their space, e.g. user id, loyalty id, etc. We highly recommend this on all events. It may improve reporting performance such as ROAS/CPA.")
  @JsonProperty("external_id")
  public List<String> getExternalId() {
    return externalId;
  }

  @JsonProperty("external_id")
  public void setExternalId(List<String> externalId) {
    this.externalId = externalId;
  }

  public ConversionEventsUserData addExternalIdItem(String externalIdItem) {
    if (this.externalId == null) {
      this.externalId = new ArrayList<>();
    }

    this.externalId.add(externalIdItem);
    return this;
  }

  public ConversionEventsUserData removeExternalIdItem(String externalIdItem) {
    if (externalIdItem != null && this.externalId != null) {
      this.externalId.remove(externalIdItem);
    }

    return this;
  }
  /**
   * The unique identifier stored in _epik cookie on your domain or &amp;epik&#x3D; query parameter in the URL. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
   **/
  public ConversionEventsUserData clickId(String clickId) {
    this.clickId = clickId;
    return this;
  }

  
  @ApiModelProperty(example = "dj0yJnU9b2JDcFFHekV4SHJNcmVrbFBkUEdqakh0akdUT1VjVVUmcD0yJm49cnNBQ3F2Q2dOVDBXWWhkWklrUGxBUSZ0PUFBQUFBR1BaY3Bv", value = "The unique identifier stored in _epik cookie on your domain or &epik= query parameter in the URL. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.")
  @JsonProperty("click_id")
  public String getClickId() {
    return clickId;
  }

  @JsonProperty("click_id")
  public void setClickId(String clickId) {
    this.clickId = clickId;
  }

  /**
   * A unique identifier of visitors&#39; information defined by third party partners. e.g RampID
   **/
  public ConversionEventsUserData partnerId(String partnerId) {
    this.partnerId = partnerId;
    return this;
  }

  
  @ApiModelProperty(example = "BUJrTlRRzGJmWhRXFZdkioV6wKPBve7Lom__GU9J74hq2NIQj4O3nOZJrp3mcUr5MptkXsI14juMOIM9mNZnM4zEUFT2JLVaFhcOfuuWz3IWEDtBf6I0DPc", value = "A unique identifier of visitors' information defined by third party partners. e.g RampID")
  @JsonProperty("partner_id")
  public String getPartnerId() {
    return partnerId;
  }

  @JsonProperty("partner_id")
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

