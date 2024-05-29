/*
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  _If you are building automated tools, please subscribe to the_ _[BitMEX API RSS Feed](https://blog.bitmex.com/api_announcement/feed/) for changes. The feed will be updated_ _regularly and is the most reliable way to get downtime and update announcements._  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


package io.swagger.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import org.threeten.bp.OffsetDateTime;

/**
 * Address
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2024-05-28T18:24:26.857+08:00")
public class Address {
  @SerializedName("id")
  private Integer id = null;

  @SerializedName("currency")
  private String currency = null;

  @SerializedName("created")
  private OffsetDateTime created = null;

  @SerializedName("userId")
  private Double userId = null;

  @SerializedName("address")
  private String address = null;

  @SerializedName("name")
  private String name = null;

  @SerializedName("note")
  private String note = null;

  @SerializedName("skipConfirm")
  private Boolean skipConfirm = null;

  @SerializedName("skipConfirmVerified")
  private Boolean skipConfirmVerified = null;

  @SerializedName("skip2FA")
  private Boolean skip2FA = null;

  @SerializedName("skip2FAVerified")
  private Boolean skip2FAVerified = null;

  @SerializedName("network")
  private String network = null;

  @SerializedName("memo")
  private String memo = null;

  public Address id(Integer id) {
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @ApiModelProperty(value = "")
  public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public Address currency(String currency) {
    this.currency = currency;
    return this;
  }

   /**
   * Get currency
   * @return currency
  **/
  @ApiModelProperty(value = "")
  public String getCurrency() {
    return currency;
  }

  public void setCurrency(String currency) {
    this.currency = currency;
  }

  public Address created(OffsetDateTime created) {
    this.created = created;
    return this;
  }

   /**
   * Get created
   * @return created
  **/
  @ApiModelProperty(value = "")
  public OffsetDateTime getCreated() {
    return created;
  }

  public void setCreated(OffsetDateTime created) {
    this.created = created;
  }

  public Address userId(Double userId) {
    this.userId = userId;
    return this;
  }

   /**
   * Get userId
   * @return userId
  **/
  @ApiModelProperty(value = "")
  public Double getUserId() {
    return userId;
  }

  public void setUserId(Double userId) {
    this.userId = userId;
  }

  public Address address(String address) {
    this.address = address;
    return this;
  }

   /**
   * Get address
   * @return address
  **/
  @ApiModelProperty(required = true, value = "")
  public String getAddress() {
    return address;
  }

  public void setAddress(String address) {
    this.address = address;
  }

  public Address name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Get name
   * @return name
  **/
  @ApiModelProperty(required = true, value = "")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public Address note(String note) {
    this.note = note;
    return this;
  }

   /**
   * Get note
   * @return note
  **/
  @ApiModelProperty(value = "")
  public String getNote() {
    return note;
  }

  public void setNote(String note) {
    this.note = note;
  }

  public Address skipConfirm(Boolean skipConfirm) {
    this.skipConfirm = skipConfirm;
    return this;
  }

   /**
   * Get skipConfirm
   * @return skipConfirm
  **/
  @ApiModelProperty(value = "")
  public Boolean isSkipConfirm() {
    return skipConfirm;
  }

  public void setSkipConfirm(Boolean skipConfirm) {
    this.skipConfirm = skipConfirm;
  }

  public Address skipConfirmVerified(Boolean skipConfirmVerified) {
    this.skipConfirmVerified = skipConfirmVerified;
    return this;
  }

   /**
   * Get skipConfirmVerified
   * @return skipConfirmVerified
  **/
  @ApiModelProperty(value = "")
  public Boolean isSkipConfirmVerified() {
    return skipConfirmVerified;
  }

  public void setSkipConfirmVerified(Boolean skipConfirmVerified) {
    this.skipConfirmVerified = skipConfirmVerified;
  }

  public Address skip2FA(Boolean skip2FA) {
    this.skip2FA = skip2FA;
    return this;
  }

   /**
   * Get skip2FA
   * @return skip2FA
  **/
  @ApiModelProperty(value = "")
  public Boolean isSkip2FA() {
    return skip2FA;
  }

  public void setSkip2FA(Boolean skip2FA) {
    this.skip2FA = skip2FA;
  }

  public Address skip2FAVerified(Boolean skip2FAVerified) {
    this.skip2FAVerified = skip2FAVerified;
    return this;
  }

   /**
   * Get skip2FAVerified
   * @return skip2FAVerified
  **/
  @ApiModelProperty(value = "")
  public Boolean isSkip2FAVerified() {
    return skip2FAVerified;
  }

  public void setSkip2FAVerified(Boolean skip2FAVerified) {
    this.skip2FAVerified = skip2FAVerified;
  }

  public Address network(String network) {
    this.network = network;
    return this;
  }

   /**
   * Get network
   * @return network
  **/
  @ApiModelProperty(required = true, value = "")
  public String getNetwork() {
    return network;
  }

  public void setNetwork(String network) {
    this.network = network;
  }

  public Address memo(String memo) {
    this.memo = memo;
    return this;
  }

   /**
   * Get memo
   * @return memo
  **/
  @ApiModelProperty(value = "")
  public String getMemo() {
    return memo;
  }

  public void setMemo(String memo) {
    this.memo = memo;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Address address = (Address) o;
    return Objects.equals(this.id, address.id) &&
        Objects.equals(this.currency, address.currency) &&
        Objects.equals(this.created, address.created) &&
        Objects.equals(this.userId, address.userId) &&
        Objects.equals(this.address, address.address) &&
        Objects.equals(this.name, address.name) &&
        Objects.equals(this.note, address.note) &&
        Objects.equals(this.skipConfirm, address.skipConfirm) &&
        Objects.equals(this.skipConfirmVerified, address.skipConfirmVerified) &&
        Objects.equals(this.skip2FA, address.skip2FA) &&
        Objects.equals(this.skip2FAVerified, address.skip2FAVerified) &&
        Objects.equals(this.network, address.network) &&
        Objects.equals(this.memo, address.memo);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, currency, created, userId, address, name, note, skipConfirm, skipConfirmVerified, skip2FA, skip2FAVerified, network, memo);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Address {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
    sb.append("    created: ").append(toIndentedString(created)).append("\n");
    sb.append("    userId: ").append(toIndentedString(userId)).append("\n");
    sb.append("    address: ").append(toIndentedString(address)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    note: ").append(toIndentedString(note)).append("\n");
    sb.append("    skipConfirm: ").append(toIndentedString(skipConfirm)).append("\n");
    sb.append("    skipConfirmVerified: ").append(toIndentedString(skipConfirmVerified)).append("\n");
    sb.append("    skip2FA: ").append(toIndentedString(skip2FA)).append("\n");
    sb.append("    skip2FAVerified: ").append(toIndentedString(skip2FAVerified)).append("\n");
    sb.append("    network: ").append(toIndentedString(network)).append("\n");
    sb.append("    memo: ").append(toIndentedString(memo)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

