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

/**
 * CollateralSupportAgreement
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2024-05-28T18:24:26.857+08:00")
public class CollateralSupportAgreement {
  @SerializedName("csaID")
  private String csaID = null;

  @SerializedName("account")
  private Long account = null;

  @SerializedName("currency")
  private String currency = null;

  @SerializedName("amount")
  private Long amount = null;

  @SerializedName("minAmount")
  private Long minAmount = null;

  @SerializedName("threshold")
  private Long threshold = null;

  @SerializedName("mmRatioMarginCall")
  private Long mmRatioMarginCall = null;

  @SerializedName("mmRatioLiquidation")
  private Long mmRatioLiquidation = null;

  @SerializedName("startTime")
  private String startTime = null;

  @SerializedName("maturityTime")
  private String maturityTime = null;

  @SerializedName("maturityInstruction")
  private String maturityInstruction = null;

  @SerializedName("csaStatus")
  private String csaStatus = null;

  @SerializedName("requester")
  private String requester = null;

  @SerializedName("clientDetails")
  private String clientDetails = null;

  @SerializedName("text")
  private String text = null;

  @SerializedName("timestamp")
  private String timestamp = null;

  public CollateralSupportAgreement csaID(String csaID) {
    this.csaID = csaID;
    return this;
  }

   /**
   * Get csaID
   * @return csaID
  **/
  @ApiModelProperty(required = true, value = "")
  public String getCsaID() {
    return csaID;
  }

  public void setCsaID(String csaID) {
    this.csaID = csaID;
  }

  public CollateralSupportAgreement account(Long account) {
    this.account = account;
    return this;
  }

   /**
   * Get account
   * @return account
  **/
  @ApiModelProperty(value = "")
  public Long getAccount() {
    return account;
  }

  public void setAccount(Long account) {
    this.account = account;
  }

  public CollateralSupportAgreement currency(String currency) {
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

  public CollateralSupportAgreement amount(Long amount) {
    this.amount = amount;
    return this;
  }

   /**
   * Get amount
   * @return amount
  **/
  @ApiModelProperty(value = "")
  public Long getAmount() {
    return amount;
  }

  public void setAmount(Long amount) {
    this.amount = amount;
  }

  public CollateralSupportAgreement minAmount(Long minAmount) {
    this.minAmount = minAmount;
    return this;
  }

   /**
   * Get minAmount
   * @return minAmount
  **/
  @ApiModelProperty(value = "")
  public Long getMinAmount() {
    return minAmount;
  }

  public void setMinAmount(Long minAmount) {
    this.minAmount = minAmount;
  }

  public CollateralSupportAgreement threshold(Long threshold) {
    this.threshold = threshold;
    return this;
  }

   /**
   * Get threshold
   * @return threshold
  **/
  @ApiModelProperty(value = "")
  public Long getThreshold() {
    return threshold;
  }

  public void setThreshold(Long threshold) {
    this.threshold = threshold;
  }

  public CollateralSupportAgreement mmRatioMarginCall(Long mmRatioMarginCall) {
    this.mmRatioMarginCall = mmRatioMarginCall;
    return this;
  }

   /**
   * Get mmRatioMarginCall
   * @return mmRatioMarginCall
  **/
  @ApiModelProperty(value = "")
  public Long getMmRatioMarginCall() {
    return mmRatioMarginCall;
  }

  public void setMmRatioMarginCall(Long mmRatioMarginCall) {
    this.mmRatioMarginCall = mmRatioMarginCall;
  }

  public CollateralSupportAgreement mmRatioLiquidation(Long mmRatioLiquidation) {
    this.mmRatioLiquidation = mmRatioLiquidation;
    return this;
  }

   /**
   * Get mmRatioLiquidation
   * @return mmRatioLiquidation
  **/
  @ApiModelProperty(value = "")
  public Long getMmRatioLiquidation() {
    return mmRatioLiquidation;
  }

  public void setMmRatioLiquidation(Long mmRatioLiquidation) {
    this.mmRatioLiquidation = mmRatioLiquidation;
  }

  public CollateralSupportAgreement startTime(String startTime) {
    this.startTime = startTime;
    return this;
  }

   /**
   * Get startTime
   * @return startTime
  **/
  @ApiModelProperty(value = "")
  public String getStartTime() {
    return startTime;
  }

  public void setStartTime(String startTime) {
    this.startTime = startTime;
  }

  public CollateralSupportAgreement maturityTime(String maturityTime) {
    this.maturityTime = maturityTime;
    return this;
  }

   /**
   * Get maturityTime
   * @return maturityTime
  **/
  @ApiModelProperty(value = "")
  public String getMaturityTime() {
    return maturityTime;
  }

  public void setMaturityTime(String maturityTime) {
    this.maturityTime = maturityTime;
  }

  public CollateralSupportAgreement maturityInstruction(String maturityInstruction) {
    this.maturityInstruction = maturityInstruction;
    return this;
  }

   /**
   * Get maturityInstruction
   * @return maturityInstruction
  **/
  @ApiModelProperty(value = "")
  public String getMaturityInstruction() {
    return maturityInstruction;
  }

  public void setMaturityInstruction(String maturityInstruction) {
    this.maturityInstruction = maturityInstruction;
  }

  public CollateralSupportAgreement csaStatus(String csaStatus) {
    this.csaStatus = csaStatus;
    return this;
  }

   /**
   * Get csaStatus
   * @return csaStatus
  **/
  @ApiModelProperty(value = "")
  public String getCsaStatus() {
    return csaStatus;
  }

  public void setCsaStatus(String csaStatus) {
    this.csaStatus = csaStatus;
  }

  public CollateralSupportAgreement requester(String requester) {
    this.requester = requester;
    return this;
  }

   /**
   * Get requester
   * @return requester
  **/
  @ApiModelProperty(value = "")
  public String getRequester() {
    return requester;
  }

  public void setRequester(String requester) {
    this.requester = requester;
  }

  public CollateralSupportAgreement clientDetails(String clientDetails) {
    this.clientDetails = clientDetails;
    return this;
  }

   /**
   * Get clientDetails
   * @return clientDetails
  **/
  @ApiModelProperty(value = "")
  public String getClientDetails() {
    return clientDetails;
  }

  public void setClientDetails(String clientDetails) {
    this.clientDetails = clientDetails;
  }

  public CollateralSupportAgreement text(String text) {
    this.text = text;
    return this;
  }

   /**
   * Get text
   * @return text
  **/
  @ApiModelProperty(value = "")
  public String getText() {
    return text;
  }

  public void setText(String text) {
    this.text = text;
  }

  public CollateralSupportAgreement timestamp(String timestamp) {
    this.timestamp = timestamp;
    return this;
  }

   /**
   * Get timestamp
   * @return timestamp
  **/
  @ApiModelProperty(value = "")
  public String getTimestamp() {
    return timestamp;
  }

  public void setTimestamp(String timestamp) {
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
    CollateralSupportAgreement collateralSupportAgreement = (CollateralSupportAgreement) o;
    return Objects.equals(this.csaID, collateralSupportAgreement.csaID) &&
        Objects.equals(this.account, collateralSupportAgreement.account) &&
        Objects.equals(this.currency, collateralSupportAgreement.currency) &&
        Objects.equals(this.amount, collateralSupportAgreement.amount) &&
        Objects.equals(this.minAmount, collateralSupportAgreement.minAmount) &&
        Objects.equals(this.threshold, collateralSupportAgreement.threshold) &&
        Objects.equals(this.mmRatioMarginCall, collateralSupportAgreement.mmRatioMarginCall) &&
        Objects.equals(this.mmRatioLiquidation, collateralSupportAgreement.mmRatioLiquidation) &&
        Objects.equals(this.startTime, collateralSupportAgreement.startTime) &&
        Objects.equals(this.maturityTime, collateralSupportAgreement.maturityTime) &&
        Objects.equals(this.maturityInstruction, collateralSupportAgreement.maturityInstruction) &&
        Objects.equals(this.csaStatus, collateralSupportAgreement.csaStatus) &&
        Objects.equals(this.requester, collateralSupportAgreement.requester) &&
        Objects.equals(this.clientDetails, collateralSupportAgreement.clientDetails) &&
        Objects.equals(this.text, collateralSupportAgreement.text) &&
        Objects.equals(this.timestamp, collateralSupportAgreement.timestamp);
  }

  @Override
  public int hashCode() {
    return Objects.hash(csaID, account, currency, amount, minAmount, threshold, mmRatioMarginCall, mmRatioLiquidation, startTime, maturityTime, maturityInstruction, csaStatus, requester, clientDetails, text, timestamp);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CollateralSupportAgreement {\n");
    
    sb.append("    csaID: ").append(toIndentedString(csaID)).append("\n");
    sb.append("    account: ").append(toIndentedString(account)).append("\n");
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
    sb.append("    amount: ").append(toIndentedString(amount)).append("\n");
    sb.append("    minAmount: ").append(toIndentedString(minAmount)).append("\n");
    sb.append("    threshold: ").append(toIndentedString(threshold)).append("\n");
    sb.append("    mmRatioMarginCall: ").append(toIndentedString(mmRatioMarginCall)).append("\n");
    sb.append("    mmRatioLiquidation: ").append(toIndentedString(mmRatioLiquidation)).append("\n");
    sb.append("    startTime: ").append(toIndentedString(startTime)).append("\n");
    sb.append("    maturityTime: ").append(toIndentedString(maturityTime)).append("\n");
    sb.append("    maturityInstruction: ").append(toIndentedString(maturityInstruction)).append("\n");
    sb.append("    csaStatus: ").append(toIndentedString(csaStatus)).append("\n");
    sb.append("    requester: ").append(toIndentedString(requester)).append("\n");
    sb.append("    clientDetails: ").append(toIndentedString(clientDetails)).append("\n");
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
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

