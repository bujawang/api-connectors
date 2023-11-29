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

import java.math.BigDecimal;
import java.util.Date;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Assets and Networks Data
 **/
@ApiModel(description = "Assets and Networks Data")
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
  private Date timestamp = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public BigDecimal getAccount() {
    return account;
  }
  public void setAccount(BigDecimal account) {
    this.account = account;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getCurrency() {
    return currency;
  }
  public void setCurrency(String currency) {
    this.currency = currency;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getDeposited() {
    return deposited;
  }
  public void setDeposited(BigDecimal deposited) {
    this.deposited = deposited;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getWithdrawn() {
    return withdrawn;
  }
  public void setWithdrawn(BigDecimal withdrawn) {
    this.withdrawn = withdrawn;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getTransferIn() {
    return transferIn;
  }
  public void setTransferIn(BigDecimal transferIn) {
    this.transferIn = transferIn;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getTransferOut() {
    return transferOut;
  }
  public void setTransferOut(BigDecimal transferOut) {
    this.transferOut = transferOut;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getAmount() {
    return amount;
  }
  public void setAmount(BigDecimal amount) {
    this.amount = amount;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getPendingCredit() {
    return pendingCredit;
  }
  public void setPendingCredit(BigDecimal pendingCredit) {
    this.pendingCredit = pendingCredit;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getPendingDebit() {
    return pendingDebit;
  }
  public void setPendingDebit(BigDecimal pendingDebit) {
    this.pendingDebit = pendingDebit;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getConfirmedDebit() {
    return confirmedDebit;
  }
  public void setConfirmedDebit(BigDecimal confirmedDebit) {
    this.confirmedDebit = confirmedDebit;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Date getTimestamp() {
    return timestamp;
  }
  public void setTimestamp(Date timestamp) {
    this.timestamp = timestamp;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Wallet wallet = (Wallet) o;
    return (this.account == null ? wallet.account == null : this.account.equals(wallet.account)) &&
        (this.currency == null ? wallet.currency == null : this.currency.equals(wallet.currency)) &&
        (this.deposited == null ? wallet.deposited == null : this.deposited.equals(wallet.deposited)) &&
        (this.withdrawn == null ? wallet.withdrawn == null : this.withdrawn.equals(wallet.withdrawn)) &&
        (this.transferIn == null ? wallet.transferIn == null : this.transferIn.equals(wallet.transferIn)) &&
        (this.transferOut == null ? wallet.transferOut == null : this.transferOut.equals(wallet.transferOut)) &&
        (this.amount == null ? wallet.amount == null : this.amount.equals(wallet.amount)) &&
        (this.pendingCredit == null ? wallet.pendingCredit == null : this.pendingCredit.equals(wallet.pendingCredit)) &&
        (this.pendingDebit == null ? wallet.pendingDebit == null : this.pendingDebit.equals(wallet.pendingDebit)) &&
        (this.confirmedDebit == null ? wallet.confirmedDebit == null : this.confirmedDebit.equals(wallet.confirmedDebit)) &&
        (this.timestamp == null ? wallet.timestamp == null : this.timestamp.equals(wallet.timestamp));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.account == null ? 0: this.account.hashCode());
    result = 31 * result + (this.currency == null ? 0: this.currency.hashCode());
    result = 31 * result + (this.deposited == null ? 0: this.deposited.hashCode());
    result = 31 * result + (this.withdrawn == null ? 0: this.withdrawn.hashCode());
    result = 31 * result + (this.transferIn == null ? 0: this.transferIn.hashCode());
    result = 31 * result + (this.transferOut == null ? 0: this.transferOut.hashCode());
    result = 31 * result + (this.amount == null ? 0: this.amount.hashCode());
    result = 31 * result + (this.pendingCredit == null ? 0: this.pendingCredit.hashCode());
    result = 31 * result + (this.pendingDebit == null ? 0: this.pendingDebit.hashCode());
    result = 31 * result + (this.confirmedDebit == null ? 0: this.confirmedDebit.hashCode());
    result = 31 * result + (this.timestamp == null ? 0: this.timestamp.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Wallet {\n");
    
    sb.append("  account: ").append(account).append("\n");
    sb.append("  currency: ").append(currency).append("\n");
    sb.append("  deposited: ").append(deposited).append("\n");
    sb.append("  withdrawn: ").append(withdrawn).append("\n");
    sb.append("  transferIn: ").append(transferIn).append("\n");
    sb.append("  transferOut: ").append(transferOut).append("\n");
    sb.append("  amount: ").append(amount).append("\n");
    sb.append("  pendingCredit: ").append(pendingCredit).append("\n");
    sb.append("  pendingDebit: ").append(pendingDebit).append("\n");
    sb.append("  confirmedDebit: ").append(confirmedDebit).append("\n");
    sb.append("  timestamp: ").append(timestamp).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
