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
 * Daily Quote Fill Ratio Statistic
 */
@ApiModel(description = "Daily Quote Fill Ratio Statistic")
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2024-05-28T17:02:46.897+08:00")
public class QuoteFillRatio {
  @SerializedName("date")
  private OffsetDateTime date = null;

  @SerializedName("account")
  private Double account = null;

  @SerializedName("quoteCount")
  private Double quoteCount = null;

  @SerializedName("dealtCount")
  private Double dealtCount = null;

  @SerializedName("quotesMavg7")
  private Double quotesMavg7 = null;

  @SerializedName("dealtMavg7")
  private Double dealtMavg7 = null;

  @SerializedName("quoteFillRatioMavg7")
  private Double quoteFillRatioMavg7 = null;

  public QuoteFillRatio date(OffsetDateTime date) {
    this.date = date;
    return this;
  }

   /**
   * Get date
   * @return date
  **/
  @ApiModelProperty(required = true, value = "")
  public OffsetDateTime getDate() {
    return date;
  }

  public void setDate(OffsetDateTime date) {
    this.date = date;
  }

  public QuoteFillRatio account(Double account) {
    this.account = account;
    return this;
  }

   /**
   * Get account
   * @return account
  **/
  @ApiModelProperty(value = "")
  public Double getAccount() {
    return account;
  }

  public void setAccount(Double account) {
    this.account = account;
  }

  public QuoteFillRatio quoteCount(Double quoteCount) {
    this.quoteCount = quoteCount;
    return this;
  }

   /**
   * Get quoteCount
   * @return quoteCount
  **/
  @ApiModelProperty(value = "")
  public Double getQuoteCount() {
    return quoteCount;
  }

  public void setQuoteCount(Double quoteCount) {
    this.quoteCount = quoteCount;
  }

  public QuoteFillRatio dealtCount(Double dealtCount) {
    this.dealtCount = dealtCount;
    return this;
  }

   /**
   * Get dealtCount
   * @return dealtCount
  **/
  @ApiModelProperty(value = "")
  public Double getDealtCount() {
    return dealtCount;
  }

  public void setDealtCount(Double dealtCount) {
    this.dealtCount = dealtCount;
  }

  public QuoteFillRatio quotesMavg7(Double quotesMavg7) {
    this.quotesMavg7 = quotesMavg7;
    return this;
  }

   /**
   * Get quotesMavg7
   * @return quotesMavg7
  **/
  @ApiModelProperty(value = "")
  public Double getQuotesMavg7() {
    return quotesMavg7;
  }

  public void setQuotesMavg7(Double quotesMavg7) {
    this.quotesMavg7 = quotesMavg7;
  }

  public QuoteFillRatio dealtMavg7(Double dealtMavg7) {
    this.dealtMavg7 = dealtMavg7;
    return this;
  }

   /**
   * Get dealtMavg7
   * @return dealtMavg7
  **/
  @ApiModelProperty(value = "")
  public Double getDealtMavg7() {
    return dealtMavg7;
  }

  public void setDealtMavg7(Double dealtMavg7) {
    this.dealtMavg7 = dealtMavg7;
  }

  public QuoteFillRatio quoteFillRatioMavg7(Double quoteFillRatioMavg7) {
    this.quoteFillRatioMavg7 = quoteFillRatioMavg7;
    return this;
  }

   /**
   * Get quoteFillRatioMavg7
   * @return quoteFillRatioMavg7
  **/
  @ApiModelProperty(value = "")
  public Double getQuoteFillRatioMavg7() {
    return quoteFillRatioMavg7;
  }

  public void setQuoteFillRatioMavg7(Double quoteFillRatioMavg7) {
    this.quoteFillRatioMavg7 = quoteFillRatioMavg7;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuoteFillRatio quoteFillRatio = (QuoteFillRatio) o;
    return Objects.equals(this.date, quoteFillRatio.date) &&
        Objects.equals(this.account, quoteFillRatio.account) &&
        Objects.equals(this.quoteCount, quoteFillRatio.quoteCount) &&
        Objects.equals(this.dealtCount, quoteFillRatio.dealtCount) &&
        Objects.equals(this.quotesMavg7, quoteFillRatio.quotesMavg7) &&
        Objects.equals(this.dealtMavg7, quoteFillRatio.dealtMavg7) &&
        Objects.equals(this.quoteFillRatioMavg7, quoteFillRatio.quoteFillRatioMavg7);
  }

  @Override
  public int hashCode() {
    return Objects.hash(date, account, quoteCount, dealtCount, quotesMavg7, dealtMavg7, quoteFillRatioMavg7);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuoteFillRatio {\n");
    
    sb.append("    date: ").append(toIndentedString(date)).append("\n");
    sb.append("    account: ").append(toIndentedString(account)).append("\n");
    sb.append("    quoteCount: ").append(toIndentedString(quoteCount)).append("\n");
    sb.append("    dealtCount: ").append(toIndentedString(dealtCount)).append("\n");
    sb.append("    quotesMavg7: ").append(toIndentedString(quotesMavg7)).append("\n");
    sb.append("    dealtMavg7: ").append(toIndentedString(dealtMavg7)).append("\n");
    sb.append("    quoteFillRatioMavg7: ").append(toIndentedString(quoteFillRatioMavg7)).append("\n");
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

