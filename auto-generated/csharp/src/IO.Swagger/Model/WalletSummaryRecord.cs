/* 
 * BitMEX API
 *
 * ## REST API for the BitMEX Trading Platform  _If you are building automated tools, please subscribe to the_ _[BitMEX API RSS Feed](https://blog.bitmex.com/api_announcement/feed/) for changes. The feed will be updated_ _regularly and is the most reliable way to get downtime and update announcements._  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using SwaggerDateConverter = IO.Swagger.Client.SwaggerDateConverter;

namespace IO.Swagger.Model
{
    /// <summary>
    /// WalletSummaryRecord
    /// </summary>
    [DataContract]
    public partial class WalletSummaryRecord :  IEquatable<WalletSummaryRecord>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="WalletSummaryRecord" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected WalletSummaryRecord() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="WalletSummaryRecord" /> class.
        /// </summary>
        /// <param name="account">account (required).</param>
        /// <param name="currency">currency (default to &quot;XBt&quot;).</param>
        /// <param name="transactType">transactType.</param>
        /// <param name="symbol">symbol (default to &quot;XBTUSD&quot;).</param>
        /// <param name="amount">amount (default to 0.0).</param>
        /// <param name="pendingDebit">pendingDebit (default to 0.0).</param>
        /// <param name="realisedPnl">realisedPnl (default to 0.0).</param>
        /// <param name="walletBalance">walletBalance (default to 0.0).</param>
        /// <param name="unrealisedPnl">unrealisedPnl (default to 0.0).</param>
        /// <param name="marginBalance">marginBalance (default to 0.0).</param>
        public WalletSummaryRecord(double? account = default(double?), string currency = "XBt", string transactType = default(string), string symbol = "XBTUSD", double? amount = 0.0, double? pendingDebit = 0.0, double? realisedPnl = 0.0, double? walletBalance = 0.0, double? unrealisedPnl = 0.0, double? marginBalance = 0.0)
        {
            // to ensure "account" is required (not null)
            if (account == null)
            {
                throw new InvalidDataException("account is a required property for WalletSummaryRecord and cannot be null");
            }
            else
            {
                this.Account = account;
            }
            // use default value if no "currency" provided
            if (currency == null)
            {
                this.Currency = "XBt";
            }
            else
            {
                this.Currency = currency;
            }
            this.TransactType = transactType;
            // use default value if no "symbol" provided
            if (symbol == null)
            {
                this.Symbol = "XBTUSD";
            }
            else
            {
                this.Symbol = symbol;
            }
            // use default value if no "amount" provided
            if (amount == null)
            {
                this.Amount = 0.0;
            }
            else
            {
                this.Amount = amount;
            }
            // use default value if no "pendingDebit" provided
            if (pendingDebit == null)
            {
                this.PendingDebit = 0.0;
            }
            else
            {
                this.PendingDebit = pendingDebit;
            }
            // use default value if no "realisedPnl" provided
            if (realisedPnl == null)
            {
                this.RealisedPnl = 0.0;
            }
            else
            {
                this.RealisedPnl = realisedPnl;
            }
            // use default value if no "walletBalance" provided
            if (walletBalance == null)
            {
                this.WalletBalance = 0.0;
            }
            else
            {
                this.WalletBalance = walletBalance;
            }
            // use default value if no "unrealisedPnl" provided
            if (unrealisedPnl == null)
            {
                this.UnrealisedPnl = 0.0;
            }
            else
            {
                this.UnrealisedPnl = unrealisedPnl;
            }
            // use default value if no "marginBalance" provided
            if (marginBalance == null)
            {
                this.MarginBalance = 0.0;
            }
            else
            {
                this.MarginBalance = marginBalance;
            }
        }
        
        /// <summary>
        /// Gets or Sets Account
        /// </summary>
        [DataMember(Name="account", EmitDefaultValue=false)]
        public double? Account { get; set; }

        /// <summary>
        /// Gets or Sets Currency
        /// </summary>
        [DataMember(Name="currency", EmitDefaultValue=false)]
        public string Currency { get; set; }

        /// <summary>
        /// Gets or Sets TransactType
        /// </summary>
        [DataMember(Name="transactType", EmitDefaultValue=false)]
        public string TransactType { get; set; }

        /// <summary>
        /// Gets or Sets Symbol
        /// </summary>
        [DataMember(Name="symbol", EmitDefaultValue=false)]
        public string Symbol { get; set; }

        /// <summary>
        /// Gets or Sets Amount
        /// </summary>
        [DataMember(Name="amount", EmitDefaultValue=false)]
        public double? Amount { get; set; }

        /// <summary>
        /// Gets or Sets PendingDebit
        /// </summary>
        [DataMember(Name="pendingDebit", EmitDefaultValue=false)]
        public double? PendingDebit { get; set; }

        /// <summary>
        /// Gets or Sets RealisedPnl
        /// </summary>
        [DataMember(Name="realisedPnl", EmitDefaultValue=false)]
        public double? RealisedPnl { get; set; }

        /// <summary>
        /// Gets or Sets WalletBalance
        /// </summary>
        [DataMember(Name="walletBalance", EmitDefaultValue=false)]
        public double? WalletBalance { get; set; }

        /// <summary>
        /// Gets or Sets UnrealisedPnl
        /// </summary>
        [DataMember(Name="unrealisedPnl", EmitDefaultValue=false)]
        public double? UnrealisedPnl { get; set; }

        /// <summary>
        /// Gets or Sets MarginBalance
        /// </summary>
        [DataMember(Name="marginBalance", EmitDefaultValue=false)]
        public double? MarginBalance { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class WalletSummaryRecord {\n");
            sb.Append("  Account: ").Append(Account).Append("\n");
            sb.Append("  Currency: ").Append(Currency).Append("\n");
            sb.Append("  TransactType: ").Append(TransactType).Append("\n");
            sb.Append("  Symbol: ").Append(Symbol).Append("\n");
            sb.Append("  Amount: ").Append(Amount).Append("\n");
            sb.Append("  PendingDebit: ").Append(PendingDebit).Append("\n");
            sb.Append("  RealisedPnl: ").Append(RealisedPnl).Append("\n");
            sb.Append("  WalletBalance: ").Append(WalletBalance).Append("\n");
            sb.Append("  UnrealisedPnl: ").Append(UnrealisedPnl).Append("\n");
            sb.Append("  MarginBalance: ").Append(MarginBalance).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as WalletSummaryRecord);
        }

        /// <summary>
        /// Returns true if WalletSummaryRecord instances are equal
        /// </summary>
        /// <param name="input">Instance of WalletSummaryRecord to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(WalletSummaryRecord input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Account == input.Account ||
                    (this.Account != null &&
                    this.Account.Equals(input.Account))
                ) && 
                (
                    this.Currency == input.Currency ||
                    (this.Currency != null &&
                    this.Currency.Equals(input.Currency))
                ) && 
                (
                    this.TransactType == input.TransactType ||
                    (this.TransactType != null &&
                    this.TransactType.Equals(input.TransactType))
                ) && 
                (
                    this.Symbol == input.Symbol ||
                    (this.Symbol != null &&
                    this.Symbol.Equals(input.Symbol))
                ) && 
                (
                    this.Amount == input.Amount ||
                    (this.Amount != null &&
                    this.Amount.Equals(input.Amount))
                ) && 
                (
                    this.PendingDebit == input.PendingDebit ||
                    (this.PendingDebit != null &&
                    this.PendingDebit.Equals(input.PendingDebit))
                ) && 
                (
                    this.RealisedPnl == input.RealisedPnl ||
                    (this.RealisedPnl != null &&
                    this.RealisedPnl.Equals(input.RealisedPnl))
                ) && 
                (
                    this.WalletBalance == input.WalletBalance ||
                    (this.WalletBalance != null &&
                    this.WalletBalance.Equals(input.WalletBalance))
                ) && 
                (
                    this.UnrealisedPnl == input.UnrealisedPnl ||
                    (this.UnrealisedPnl != null &&
                    this.UnrealisedPnl.Equals(input.UnrealisedPnl))
                ) && 
                (
                    this.MarginBalance == input.MarginBalance ||
                    (this.MarginBalance != null &&
                    this.MarginBalance.Equals(input.MarginBalance))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.Account != null)
                    hashCode = hashCode * 59 + this.Account.GetHashCode();
                if (this.Currency != null)
                    hashCode = hashCode * 59 + this.Currency.GetHashCode();
                if (this.TransactType != null)
                    hashCode = hashCode * 59 + this.TransactType.GetHashCode();
                if (this.Symbol != null)
                    hashCode = hashCode * 59 + this.Symbol.GetHashCode();
                if (this.Amount != null)
                    hashCode = hashCode * 59 + this.Amount.GetHashCode();
                if (this.PendingDebit != null)
                    hashCode = hashCode * 59 + this.PendingDebit.GetHashCode();
                if (this.RealisedPnl != null)
                    hashCode = hashCode * 59 + this.RealisedPnl.GetHashCode();
                if (this.WalletBalance != null)
                    hashCode = hashCode * 59 + this.WalletBalance.GetHashCode();
                if (this.UnrealisedPnl != null)
                    hashCode = hashCode * 59 + this.UnrealisedPnl.GetHashCode();
                if (this.MarginBalance != null)
                    hashCode = hashCode * 59 + this.MarginBalance.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
