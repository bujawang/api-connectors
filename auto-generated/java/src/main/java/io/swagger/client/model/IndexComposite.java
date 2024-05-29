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
 * IndexComposite
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2024-05-28T18:24:26.857+08:00")
public class IndexComposite {
  @SerializedName("timestamp")
  private OffsetDateTime timestamp = null;

  @SerializedName("symbol")
  private String symbol = null;

  @SerializedName("indexSymbol")
  private String indexSymbol = null;

  @SerializedName("indexMultiplier")
  private Double indexMultiplier = null;

  @SerializedName("reference")
  private String reference = null;

  @SerializedName("lastPrice")
  private Double lastPrice = null;

  @SerializedName("sourcePrice")
  private Double sourcePrice = null;

  @SerializedName("conversionIndex")
  private String conversionIndex = null;

  @SerializedName("conversionIndexPrice")
  private Double conversionIndexPrice = null;

  @SerializedName("weight")
  private Double weight = null;

  @SerializedName("logged")
  private OffsetDateTime logged = null;

  public IndexComposite timestamp(OffsetDateTime timestamp) {
    this.timestamp = timestamp;
    return this;
  }

   /**
   * Get timestamp
   * @return timestamp
  **/
  @ApiModelProperty(required = true, value = "")
  public OffsetDateTime getTimestamp() {
    return timestamp;
  }

  public void setTimestamp(OffsetDateTime timestamp) {
    this.timestamp = timestamp;
  }

  public IndexComposite symbol(String symbol) {
    this.symbol = symbol;
    return this;
  }

   /**
   * Get symbol
   * @return symbol
  **/
  @ApiModelProperty(value = "")
  public String getSymbol() {
    return symbol;
  }

  public void setSymbol(String symbol) {
    this.symbol = symbol;
  }

  public IndexComposite indexSymbol(String indexSymbol) {
    this.indexSymbol = indexSymbol;
    return this;
  }

   /**
   * Get indexSymbol
   * @return indexSymbol
  **/
  @ApiModelProperty(value = "")
  public String getIndexSymbol() {
    return indexSymbol;
  }

  public void setIndexSymbol(String indexSymbol) {
    this.indexSymbol = indexSymbol;
  }

  public IndexComposite indexMultiplier(Double indexMultiplier) {
    this.indexMultiplier = indexMultiplier;
    return this;
  }

   /**
   * Get indexMultiplier
   * @return indexMultiplier
  **/
  @ApiModelProperty(value = "")
  public Double getIndexMultiplier() {
    return indexMultiplier;
  }

  public void setIndexMultiplier(Double indexMultiplier) {
    this.indexMultiplier = indexMultiplier;
  }

  public IndexComposite reference(String reference) {
    this.reference = reference;
    return this;
  }

   /**
   * Get reference
   * @return reference
  **/
  @ApiModelProperty(value = "")
  public String getReference() {
    return reference;
  }

  public void setReference(String reference) {
    this.reference = reference;
  }

  public IndexComposite lastPrice(Double lastPrice) {
    this.lastPrice = lastPrice;
    return this;
  }

   /**
   * Get lastPrice
   * @return lastPrice
  **/
  @ApiModelProperty(value = "")
  public Double getLastPrice() {
    return lastPrice;
  }

  public void setLastPrice(Double lastPrice) {
    this.lastPrice = lastPrice;
  }

  public IndexComposite sourcePrice(Double sourcePrice) {
    this.sourcePrice = sourcePrice;
    return this;
  }

   /**
   * Get sourcePrice
   * @return sourcePrice
  **/
  @ApiModelProperty(value = "")
  public Double getSourcePrice() {
    return sourcePrice;
  }

  public void setSourcePrice(Double sourcePrice) {
    this.sourcePrice = sourcePrice;
  }

  public IndexComposite conversionIndex(String conversionIndex) {
    this.conversionIndex = conversionIndex;
    return this;
  }

   /**
   * Get conversionIndex
   * @return conversionIndex
  **/
  @ApiModelProperty(value = "")
  public String getConversionIndex() {
    return conversionIndex;
  }

  public void setConversionIndex(String conversionIndex) {
    this.conversionIndex = conversionIndex;
  }

  public IndexComposite conversionIndexPrice(Double conversionIndexPrice) {
    this.conversionIndexPrice = conversionIndexPrice;
    return this;
  }

   /**
   * Get conversionIndexPrice
   * @return conversionIndexPrice
  **/
  @ApiModelProperty(value = "")
  public Double getConversionIndexPrice() {
    return conversionIndexPrice;
  }

  public void setConversionIndexPrice(Double conversionIndexPrice) {
    this.conversionIndexPrice = conversionIndexPrice;
  }

  public IndexComposite weight(Double weight) {
    this.weight = weight;
    return this;
  }

   /**
   * Get weight
   * @return weight
  **/
  @ApiModelProperty(value = "")
  public Double getWeight() {
    return weight;
  }

  public void setWeight(Double weight) {
    this.weight = weight;
  }

  public IndexComposite logged(OffsetDateTime logged) {
    this.logged = logged;
    return this;
  }

   /**
   * Get logged
   * @return logged
  **/
  @ApiModelProperty(value = "")
  public OffsetDateTime getLogged() {
    return logged;
  }

  public void setLogged(OffsetDateTime logged) {
    this.logged = logged;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    IndexComposite indexComposite = (IndexComposite) o;
    return Objects.equals(this.timestamp, indexComposite.timestamp) &&
        Objects.equals(this.symbol, indexComposite.symbol) &&
        Objects.equals(this.indexSymbol, indexComposite.indexSymbol) &&
        Objects.equals(this.indexMultiplier, indexComposite.indexMultiplier) &&
        Objects.equals(this.reference, indexComposite.reference) &&
        Objects.equals(this.lastPrice, indexComposite.lastPrice) &&
        Objects.equals(this.sourcePrice, indexComposite.sourcePrice) &&
        Objects.equals(this.conversionIndex, indexComposite.conversionIndex) &&
        Objects.equals(this.conversionIndexPrice, indexComposite.conversionIndexPrice) &&
        Objects.equals(this.weight, indexComposite.weight) &&
        Objects.equals(this.logged, indexComposite.logged);
  }

  @Override
  public int hashCode() {
    return Objects.hash(timestamp, symbol, indexSymbol, indexMultiplier, reference, lastPrice, sourcePrice, conversionIndex, conversionIndexPrice, weight, logged);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IndexComposite {\n");
    
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
    sb.append("    symbol: ").append(toIndentedString(symbol)).append("\n");
    sb.append("    indexSymbol: ").append(toIndentedString(indexSymbol)).append("\n");
    sb.append("    indexMultiplier: ").append(toIndentedString(indexMultiplier)).append("\n");
    sb.append("    reference: ").append(toIndentedString(reference)).append("\n");
    sb.append("    lastPrice: ").append(toIndentedString(lastPrice)).append("\n");
    sb.append("    sourcePrice: ").append(toIndentedString(sourcePrice)).append("\n");
    sb.append("    conversionIndex: ").append(toIndentedString(conversionIndex)).append("\n");
    sb.append("    conversionIndexPrice: ").append(toIndentedString(conversionIndexPrice)).append("\n");
    sb.append("    weight: ").append(toIndentedString(weight)).append("\n");
    sb.append("    logged: ").append(toIndentedString(logged)).append("\n");
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

