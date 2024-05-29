/**
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

import java.util.Date;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class Address {
  
  @SerializedName("id")
  private Integer id = null;
  @SerializedName("currency")
  private String currency = null;
  @SerializedName("created")
  private Date created = null;
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

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getCurrency() {
    return currency;
  }
  public void setCurrency(String currency) {
    this.currency = currency;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Date getCreated() {
    return created;
  }
  public void setCreated(Date created) {
    this.created = created;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Double getUserId() {
    return userId;
  }
  public void setUserId(Double userId) {
    this.userId = userId;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getAddress() {
    return address;
  }
  public void setAddress(String address) {
    this.address = address;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getNote() {
    return note;
  }
  public void setNote(String note) {
    this.note = note;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getSkipConfirm() {
    return skipConfirm;
  }
  public void setSkipConfirm(Boolean skipConfirm) {
    this.skipConfirm = skipConfirm;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getSkipConfirmVerified() {
    return skipConfirmVerified;
  }
  public void setSkipConfirmVerified(Boolean skipConfirmVerified) {
    this.skipConfirmVerified = skipConfirmVerified;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getSkip2FA() {
    return skip2FA;
  }
  public void setSkip2FA(Boolean skip2FA) {
    this.skip2FA = skip2FA;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getSkip2FAVerified() {
    return skip2FAVerified;
  }
  public void setSkip2FAVerified(Boolean skip2FAVerified) {
    this.skip2FAVerified = skip2FAVerified;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getNetwork() {
    return network;
  }
  public void setNetwork(String network) {
    this.network = network;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getMemo() {
    return memo;
  }
  public void setMemo(String memo) {
    this.memo = memo;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Address address = (Address) o;
    return (this.id == null ? address.id == null : this.id.equals(address.id)) &&
        (this.currency == null ? address.currency == null : this.currency.equals(address.currency)) &&
        (this.created == null ? address.created == null : this.created.equals(address.created)) &&
        (this.userId == null ? address.userId == null : this.userId.equals(address.userId)) &&
        (this.address == null ? address.address == null : this.address.equals(address.address)) &&
        (this.name == null ? address.name == null : this.name.equals(address.name)) &&
        (this.note == null ? address.note == null : this.note.equals(address.note)) &&
        (this.skipConfirm == null ? address.skipConfirm == null : this.skipConfirm.equals(address.skipConfirm)) &&
        (this.skipConfirmVerified == null ? address.skipConfirmVerified == null : this.skipConfirmVerified.equals(address.skipConfirmVerified)) &&
        (this.skip2FA == null ? address.skip2FA == null : this.skip2FA.equals(address.skip2FA)) &&
        (this.skip2FAVerified == null ? address.skip2FAVerified == null : this.skip2FAVerified.equals(address.skip2FAVerified)) &&
        (this.network == null ? address.network == null : this.network.equals(address.network)) &&
        (this.memo == null ? address.memo == null : this.memo.equals(address.memo));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.currency == null ? 0: this.currency.hashCode());
    result = 31 * result + (this.created == null ? 0: this.created.hashCode());
    result = 31 * result + (this.userId == null ? 0: this.userId.hashCode());
    result = 31 * result + (this.address == null ? 0: this.address.hashCode());
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.note == null ? 0: this.note.hashCode());
    result = 31 * result + (this.skipConfirm == null ? 0: this.skipConfirm.hashCode());
    result = 31 * result + (this.skipConfirmVerified == null ? 0: this.skipConfirmVerified.hashCode());
    result = 31 * result + (this.skip2FA == null ? 0: this.skip2FA.hashCode());
    result = 31 * result + (this.skip2FAVerified == null ? 0: this.skip2FAVerified.hashCode());
    result = 31 * result + (this.network == null ? 0: this.network.hashCode());
    result = 31 * result + (this.memo == null ? 0: this.memo.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Address {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  currency: ").append(currency).append("\n");
    sb.append("  created: ").append(created).append("\n");
    sb.append("  userId: ").append(userId).append("\n");
    sb.append("  address: ").append(address).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  note: ").append(note).append("\n");
    sb.append("  skipConfirm: ").append(skipConfirm).append("\n");
    sb.append("  skipConfirmVerified: ").append(skipConfirmVerified).append("\n");
    sb.append("  skip2FA: ").append(skip2FA).append("\n");
    sb.append("  skip2FAVerified: ").append(skip2FAVerified).append("\n");
    sb.append("  network: ").append(network).append("\n");
    sb.append("  memo: ").append(memo).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
