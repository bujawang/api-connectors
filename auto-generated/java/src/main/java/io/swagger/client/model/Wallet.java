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
import java.math.BigDecimal;
import org.threeten.bp.OffsetDateTime;

/**
 * Assets and Networks Data
 */
@ApiModel(description = "Assets and Networks Data")
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2024-05-28T17:02:46.897+08:00")
public class Wallet {
  @SerializedName("account")
  private BigDecimal account = null;

  @SerializedName("currency")
  private String currency = null;

  @SerializedName("deposited")
  private BigDecimal deposited = null;

  @SerializedName("withdrawn")
  private BigDecimal withdrawn = null;

  @SerializedName("transferIn")
  private BigDecimal transferIn = null;

  @SerializedName("transferOut")
  private BigDecimal transferOut = null;

  @SerializedName("amount")
  private BigDecimal amount = null;

  @SerializedName("pendingCredit")
  private BigDecimal pendingCredit = null;

  @SerializedName("pendingDebit")
  private BigDecimal pendingDebit = null;

  @SerializedName("confirmedDebit")
  private BigDecimal confirmedDebit = null;

  @SerializedName("timestamp")
  private OffsetDateTime timestamp = null;

  public Wallet account(BigDecimal account) {
    this.account = account;
    return this;
  }

   /**
   * Get account
   * @return account
  **/
  @ApiModelProperty(required = true, value = "")
  public BigDecimal getAccount() {
    return account;
  }

  public void setAccount(BigDecimal account) {
    this.account = account;
  }

  public Wallet currency(String currency) {
    this.currency = currency;
    return this;
  }

   /**
   * Get currency
   * @return currency
  **/
  @ApiModelProperty(required = true, value = "")
  public String getCurrency() {
    return currency;
  }

  public void setCurrency(String currency) {
    this.currency = currency;
  }

  public Wallet deposited(BigDecimal deposited) {
    this.deposited = deposited;
    return this;
  }

   /**
   * Get deposited
   * @return deposited
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getDeposited() {
    return deposited;
  }

  public void setDeposited(BigDecimal deposited) {
    this.deposited = deposited;
  }

  public Wallet withdrawn(BigDecimal withdrawn) {
    this.withdrawn = withdrawn;
    return this;
  }

   /**
   * Get withdrawn
   * @return withdrawn
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getWithdrawn() {
    return withdrawn;
  }

  public void setWithdrawn(BigDecimal withdrawn) {
    this.withdrawn = withdrawn;
  }

  public Wallet transferIn(BigDecimal transferIn) {
    this.transferIn = transferIn;
    return this;
  }

   /**
   * Get transferIn
   * @return transferIn
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getTransferIn() {
    return transferIn;
  }

  public void setTransferIn(BigDecimal transferIn) {
    this.transferIn = transferIn;
  }

  public Wallet transferOut(BigDecimal transferOut) {
    this.transferOut = transferOut;
    return this;
  }

   /**
   * Get transferOut
   * @return transferOut
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getTransferOut() {
    return transferOut;
  }

  public void setTransferOut(BigDecimal transferOut) {
    this.transferOut = transferOut;
  }

  public Wallet amount(BigDecimal amount) {
    this.amount = amount;
    return this;
  }

   /**
   * Get amount
   * @return amount
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getAmount() {
    return amount;
  }

  public void setAmount(BigDecimal amount) {
    this.amount = amount;
  }

  public Wallet pendingCredit(BigDecimal pendingCredit) {
    this.pendingCredit = pendingCredit;
    return this;
  }

   /**
   * Get pendingCredit
   * @return pendingCredit
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getPendingCredit() {
    return pendingCredit;
  }

  public void setPendingCredit(BigDecimal pendingCredit) {
    this.pendingCredit = pendingCredit;
  }

  public Wallet pendingDebit(BigDecimal pendingDebit) {
    this.pendingDebit = pendingDebit;
    return this;
  }

   /**
   * Get pendingDebit
   * @return pendingDebit
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getPendingDebit() {
    return pendingDebit;
  }

  public void setPendingDebit(BigDecimal pendingDebit) {
    this.pendingDebit = pendingDebit;
  }

  public Wallet confirmedDebit(BigDecimal confirmedDebit) {
    this.confirmedDebit = confirmedDebit;
    return this;
  }

   /**
   * Get confirmedDebit
   * @return confirmedDebit
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getConfirmedDebit() {
    return confirmedDebit;
  }

  public void setConfirmedDebit(BigDecimal confirmedDebit) {
    this.confirmedDebit = confirmedDebit;
  }

  public Wallet timestamp(OffsetDateTime timestamp) {
    this.timestamp = timestamp;
    return this;
  }

   /**
   * Get timestamp
   * @return timestamp
  **/
  @ApiModelProperty(value = "")
  public OffsetDateTime getTimestamp() {
    return timestamp;
  }

  public void setTimestamp(OffsetDateTime timestamp) {
    this.timestamp = timestamp;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Wallet wallet = (Wallet) o;
    return Objects.equals(this.account, wallet.account) &&
        Objects.equals(this.currency, wallet.currency) &&
        Objects.equals(this.deposited, wallet.deposited) &&
        Objects.equals(this.withdrawn, wallet.withdrawn) &&
        Objects.equals(this.transferIn, wallet.transferIn) &&
        Objects.equals(this.transferOut, wallet.transferOut) &&
        Objects.equals(this.amount, wallet.amount) &&
        Objects.equals(this.pendingCredit, wallet.pendingCredit) &&
        Objects.equals(this.pendingDebit, wallet.pendingDebit) &&
        Objects.equals(this.confirmedDebit, wallet.confirmedDebit) &&
        Objects.equals(this.timestamp, wallet.timestamp);
  }

  @Override
  public int hashCode() {
    return Objects.hash(account, currency, deposited, withdrawn, transferIn, transferOut, amount, pendingCredit, pendingDebit, confirmedDebit, timestamp);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Wallet {\n");
    
    sb.append("    account: ").append(toIndentedString(account)).append("\n");
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
    sb.append("    deposited: ").append(toIndentedString(deposited)).append("\n");
    sb.append("    withdrawn: ").append(toIndentedString(withdrawn)).append("\n");
    sb.append("    transferIn: ").append(toIndentedString(transferIn)).append("\n");
    sb.append("    transferOut: ").append(toIndentedString(transferOut)).append("\n");
    sb.append("    amount: ").append(toIndentedString(amount)).append("\n");
    sb.append("    pendingCredit: ").append(toIndentedString(pendingCredit)).append("\n");
    sb.append("    pendingDebit: ").append(toIndentedString(pendingDebit)).append("\n");
    sb.append("    confirmedDebit: ").append(toIndentedString(confirmedDebit)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
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

