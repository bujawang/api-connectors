/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  _If you are building automated tools, please subscribe to the_ _[BitMEX API RSS Feed](https://blog.bitmex.com/api_announcement/feed/) for changes. The feed will be updated_ _regularly and is the most reliable way to get downtime and update announcements._  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.38-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "Margin.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Margin::Margin()
{
    m_Account = 0.0;
    m_Currency = utility::conversions::to_string_t("");
    m_RiskLimit = 0.0;
    m_RiskLimitIsSet = false;
    m_State = utility::conversions::to_string_t("");
    m_StateIsSet = false;
    m_Amount = 0.0;
    m_AmountIsSet = false;
    m_PrevRealisedPnl = 0.0;
    m_PrevRealisedPnlIsSet = false;
    m_GrossComm = 0.0;
    m_GrossCommIsSet = false;
    m_GrossOpenCost = 0.0;
    m_GrossOpenCostIsSet = false;
    m_GrossOpenPremium = 0.0;
    m_GrossOpenPremiumIsSet = false;
    m_GrossExecCost = 0.0;
    m_GrossExecCostIsSet = false;
    m_GrossMarkValue = 0.0;
    m_GrossMarkValueIsSet = false;
    m_RiskValue = 0.0;
    m_RiskValueIsSet = false;
    m_InitMargin = 0.0;
    m_InitMarginIsSet = false;
    m_MaintMargin = 0.0;
    m_MaintMarginIsSet = false;
    m_TargetExcessMargin = 0.0;
    m_TargetExcessMarginIsSet = false;
    m_RealisedPnl = 0.0;
    m_RealisedPnlIsSet = false;
    m_UnrealisedPnl = 0.0;
    m_UnrealisedPnlIsSet = false;
    m_WalletBalance = 0.0;
    m_WalletBalanceIsSet = false;
    m_MarginBalance = 0.0;
    m_MarginBalanceIsSet = false;
    m_MarginLeverage = 0.0;
    m_MarginLeverageIsSet = false;
    m_MarginUsedPcnt = 0.0;
    m_MarginUsedPcntIsSet = false;
    m_ExcessMargin = 0.0;
    m_ExcessMarginIsSet = false;
    m_AvailableMargin = 0.0;
    m_AvailableMarginIsSet = false;
    m_WithdrawableMargin = 0.0;
    m_WithdrawableMarginIsSet = false;
    m_MakerFeeDiscount = 0.0;
    m_MakerFeeDiscountIsSet = false;
    m_TakerFeeDiscount = 0.0;
    m_TakerFeeDiscountIsSet = false;
    m_Timestamp = utility::datetime();
    m_TimestampIsSet = false;
}

Margin::~Margin()
{
}

void Margin::validate()
{
    // TODO: implement validation
}

web::json::value Margin::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("account")] = ModelBase::toJson(m_Account);
    val[utility::conversions::to_string_t("currency")] = ModelBase::toJson(m_Currency);
    if(m_RiskLimitIsSet)
    {
        val[utility::conversions::to_string_t("riskLimit")] = ModelBase::toJson(m_RiskLimit);
    }
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(m_State);
    }
    if(m_AmountIsSet)
    {
        val[utility::conversions::to_string_t("amount")] = ModelBase::toJson(m_Amount);
    }
    if(m_PrevRealisedPnlIsSet)
    {
        val[utility::conversions::to_string_t("prevRealisedPnl")] = ModelBase::toJson(m_PrevRealisedPnl);
    }
    if(m_GrossCommIsSet)
    {
        val[utility::conversions::to_string_t("grossComm")] = ModelBase::toJson(m_GrossComm);
    }
    if(m_GrossOpenCostIsSet)
    {
        val[utility::conversions::to_string_t("grossOpenCost")] = ModelBase::toJson(m_GrossOpenCost);
    }
    if(m_GrossOpenPremiumIsSet)
    {
        val[utility::conversions::to_string_t("grossOpenPremium")] = ModelBase::toJson(m_GrossOpenPremium);
    }
    if(m_GrossExecCostIsSet)
    {
        val[utility::conversions::to_string_t("grossExecCost")] = ModelBase::toJson(m_GrossExecCost);
    }
    if(m_GrossMarkValueIsSet)
    {
        val[utility::conversions::to_string_t("grossMarkValue")] = ModelBase::toJson(m_GrossMarkValue);
    }
    if(m_RiskValueIsSet)
    {
        val[utility::conversions::to_string_t("riskValue")] = ModelBase::toJson(m_RiskValue);
    }
    if(m_InitMarginIsSet)
    {
        val[utility::conversions::to_string_t("initMargin")] = ModelBase::toJson(m_InitMargin);
    }
    if(m_MaintMarginIsSet)
    {
        val[utility::conversions::to_string_t("maintMargin")] = ModelBase::toJson(m_MaintMargin);
    }
    if(m_TargetExcessMarginIsSet)
    {
        val[utility::conversions::to_string_t("targetExcessMargin")] = ModelBase::toJson(m_TargetExcessMargin);
    }
    if(m_RealisedPnlIsSet)
    {
        val[utility::conversions::to_string_t("realisedPnl")] = ModelBase::toJson(m_RealisedPnl);
    }
    if(m_UnrealisedPnlIsSet)
    {
        val[utility::conversions::to_string_t("unrealisedPnl")] = ModelBase::toJson(m_UnrealisedPnl);
    }
    if(m_WalletBalanceIsSet)
    {
        val[utility::conversions::to_string_t("walletBalance")] = ModelBase::toJson(m_WalletBalance);
    }
    if(m_MarginBalanceIsSet)
    {
        val[utility::conversions::to_string_t("marginBalance")] = ModelBase::toJson(m_MarginBalance);
    }
    if(m_MarginLeverageIsSet)
    {
        val[utility::conversions::to_string_t("marginLeverage")] = ModelBase::toJson(m_MarginLeverage);
    }
    if(m_MarginUsedPcntIsSet)
    {
        val[utility::conversions::to_string_t("marginUsedPcnt")] = ModelBase::toJson(m_MarginUsedPcnt);
    }
    if(m_ExcessMarginIsSet)
    {
        val[utility::conversions::to_string_t("excessMargin")] = ModelBase::toJson(m_ExcessMargin);
    }
    if(m_AvailableMarginIsSet)
    {
        val[utility::conversions::to_string_t("availableMargin")] = ModelBase::toJson(m_AvailableMargin);
    }
    if(m_WithdrawableMarginIsSet)
    {
        val[utility::conversions::to_string_t("withdrawableMargin")] = ModelBase::toJson(m_WithdrawableMargin);
    }
    if(m_MakerFeeDiscountIsSet)
    {
        val[utility::conversions::to_string_t("makerFeeDiscount")] = ModelBase::toJson(m_MakerFeeDiscount);
    }
    if(m_TakerFeeDiscountIsSet)
    {
        val[utility::conversions::to_string_t("takerFeeDiscount")] = ModelBase::toJson(m_TakerFeeDiscount);
    }
    if(m_TimestampIsSet)
    {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(m_Timestamp);
    }

    return val;
}

void Margin::fromJson(web::json::value& val)
{
    setAccount(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("account")]));
    setCurrency(ModelBase::stringFromJson(val[utility::conversions::to_string_t("currency")]));
    if(val.has_field(utility::conversions::to_string_t("riskLimit")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("riskLimit")];
        if(!fieldValue.is_null())
        {
            setRiskLimit(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("state")];
        if(!fieldValue.is_null())
        {
            setState(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("amount")];
        if(!fieldValue.is_null())
        {
            setAmount(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prevRealisedPnl")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("prevRealisedPnl")];
        if(!fieldValue.is_null())
        {
            setPrevRealisedPnl(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grossComm")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("grossComm")];
        if(!fieldValue.is_null())
        {
            setGrossComm(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grossOpenCost")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("grossOpenCost")];
        if(!fieldValue.is_null())
        {
            setGrossOpenCost(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grossOpenPremium")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("grossOpenPremium")];
        if(!fieldValue.is_null())
        {
            setGrossOpenPremium(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grossExecCost")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("grossExecCost")];
        if(!fieldValue.is_null())
        {
            setGrossExecCost(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grossMarkValue")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("grossMarkValue")];
        if(!fieldValue.is_null())
        {
            setGrossMarkValue(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("riskValue")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("riskValue")];
        if(!fieldValue.is_null())
        {
            setRiskValue(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initMargin")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("initMargin")];
        if(!fieldValue.is_null())
        {
            setInitMargin(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maintMargin")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("maintMargin")];
        if(!fieldValue.is_null())
        {
            setMaintMargin(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("targetExcessMargin")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("targetExcessMargin")];
        if(!fieldValue.is_null())
        {
            setTargetExcessMargin(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("realisedPnl")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("realisedPnl")];
        if(!fieldValue.is_null())
        {
            setRealisedPnl(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unrealisedPnl")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("unrealisedPnl")];
        if(!fieldValue.is_null())
        {
            setUnrealisedPnl(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("walletBalance")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("walletBalance")];
        if(!fieldValue.is_null())
        {
            setWalletBalance(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marginBalance")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("marginBalance")];
        if(!fieldValue.is_null())
        {
            setMarginBalance(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marginLeverage")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("marginLeverage")];
        if(!fieldValue.is_null())
        {
            setMarginLeverage(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marginUsedPcnt")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("marginUsedPcnt")];
        if(!fieldValue.is_null())
        {
            setMarginUsedPcnt(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("excessMargin")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("excessMargin")];
        if(!fieldValue.is_null())
        {
            setExcessMargin(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availableMargin")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("availableMargin")];
        if(!fieldValue.is_null())
        {
            setAvailableMargin(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("withdrawableMargin")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("withdrawableMargin")];
        if(!fieldValue.is_null())
        {
            setWithdrawableMargin(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("makerFeeDiscount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("makerFeeDiscount")];
        if(!fieldValue.is_null())
        {
            setMakerFeeDiscount(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("takerFeeDiscount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("takerFeeDiscount")];
        if(!fieldValue.is_null())
        {
            setTakerFeeDiscount(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("timestamp")];
        if(!fieldValue.is_null())
        {
            setTimestamp(ModelBase::dateFromJson(fieldValue));
        }
    }
}

void Margin::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("account"), m_Account));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currency"), m_Currency));
    if(m_RiskLimitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("riskLimit"), m_RiskLimit));
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("state"), m_State));
        
    }
    if(m_AmountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("amount"), m_Amount));
    }
    if(m_PrevRealisedPnlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("prevRealisedPnl"), m_PrevRealisedPnl));
    }
    if(m_GrossCommIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("grossComm"), m_GrossComm));
    }
    if(m_GrossOpenCostIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("grossOpenCost"), m_GrossOpenCost));
    }
    if(m_GrossOpenPremiumIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("grossOpenPremium"), m_GrossOpenPremium));
    }
    if(m_GrossExecCostIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("grossExecCost"), m_GrossExecCost));
    }
    if(m_GrossMarkValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("grossMarkValue"), m_GrossMarkValue));
    }
    if(m_RiskValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("riskValue"), m_RiskValue));
    }
    if(m_InitMarginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("initMargin"), m_InitMargin));
    }
    if(m_MaintMarginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("maintMargin"), m_MaintMargin));
    }
    if(m_TargetExcessMarginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("targetExcessMargin"), m_TargetExcessMargin));
    }
    if(m_RealisedPnlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("realisedPnl"), m_RealisedPnl));
    }
    if(m_UnrealisedPnlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("unrealisedPnl"), m_UnrealisedPnl));
    }
    if(m_WalletBalanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("walletBalance"), m_WalletBalance));
    }
    if(m_MarginBalanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("marginBalance"), m_MarginBalance));
    }
    if(m_MarginLeverageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("marginLeverage"), m_MarginLeverage));
    }
    if(m_MarginUsedPcntIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("marginUsedPcnt"), m_MarginUsedPcnt));
    }
    if(m_ExcessMarginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("excessMargin"), m_ExcessMargin));
    }
    if(m_AvailableMarginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("availableMargin"), m_AvailableMargin));
    }
    if(m_WithdrawableMarginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("withdrawableMargin"), m_WithdrawableMargin));
    }
    if(m_MakerFeeDiscountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("makerFeeDiscount"), m_MakerFeeDiscount));
    }
    if(m_TakerFeeDiscountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("takerFeeDiscount"), m_TakerFeeDiscount));
    }
    if(m_TimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timestamp"), m_Timestamp));
        
    }
}

void Margin::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setAccount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("account"))));
    setCurrency(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("currency"))));
    if(multipart->hasContent(utility::conversions::to_string_t("riskLimit")))
    {
        setRiskLimit(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("riskLimit"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("state")))
    {
        setState(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("state"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("amount")))
    {
        setAmount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("amount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("prevRealisedPnl")))
    {
        setPrevRealisedPnl(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("prevRealisedPnl"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("grossComm")))
    {
        setGrossComm(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("grossComm"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("grossOpenCost")))
    {
        setGrossOpenCost(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("grossOpenCost"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("grossOpenPremium")))
    {
        setGrossOpenPremium(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("grossOpenPremium"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("grossExecCost")))
    {
        setGrossExecCost(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("grossExecCost"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("grossMarkValue")))
    {
        setGrossMarkValue(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("grossMarkValue"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("riskValue")))
    {
        setRiskValue(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("riskValue"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("initMargin")))
    {
        setInitMargin(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("initMargin"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maintMargin")))
    {
        setMaintMargin(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("maintMargin"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("targetExcessMargin")))
    {
        setTargetExcessMargin(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("targetExcessMargin"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("realisedPnl")))
    {
        setRealisedPnl(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("realisedPnl"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("unrealisedPnl")))
    {
        setUnrealisedPnl(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("unrealisedPnl"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("walletBalance")))
    {
        setWalletBalance(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("walletBalance"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("marginBalance")))
    {
        setMarginBalance(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("marginBalance"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("marginLeverage")))
    {
        setMarginLeverage(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("marginLeverage"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("marginUsedPcnt")))
    {
        setMarginUsedPcnt(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("marginUsedPcnt"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("excessMargin")))
    {
        setExcessMargin(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("excessMargin"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("availableMargin")))
    {
        setAvailableMargin(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("availableMargin"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("withdrawableMargin")))
    {
        setWithdrawableMargin(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("withdrawableMargin"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("makerFeeDiscount")))
    {
        setMakerFeeDiscount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("makerFeeDiscount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("takerFeeDiscount")))
    {
        setTakerFeeDiscount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("takerFeeDiscount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("timestamp")))
    {
        setTimestamp(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timestamp"))));
    }
}

double Margin::getAccount() const
{
    return m_Account;
}


void Margin::setAccount(double value)
{
    m_Account = value;
    
}
utility::string_t Margin::getCurrency() const
{
    return m_Currency;
}


void Margin::setCurrency(utility::string_t value)
{
    m_Currency = value;
    
}
double Margin::getRiskLimit() const
{
    return m_RiskLimit;
}


void Margin::setRiskLimit(double value)
{
    m_RiskLimit = value;
    m_RiskLimitIsSet = true;
}
bool Margin::riskLimitIsSet() const
{
    return m_RiskLimitIsSet;
}

void Margin::unsetRiskLimit()
{
    m_RiskLimitIsSet = false;
}

utility::string_t Margin::getState() const
{
    return m_State;
}


void Margin::setState(utility::string_t value)
{
    m_State = value;
    m_StateIsSet = true;
}
bool Margin::stateIsSet() const
{
    return m_StateIsSet;
}

void Margin::unsetState()
{
    m_StateIsSet = false;
}

double Margin::getAmount() const
{
    return m_Amount;
}


void Margin::setAmount(double value)
{
    m_Amount = value;
    m_AmountIsSet = true;
}
bool Margin::amountIsSet() const
{
    return m_AmountIsSet;
}

void Margin::unsetAmount()
{
    m_AmountIsSet = false;
}

double Margin::getPrevRealisedPnl() const
{
    return m_PrevRealisedPnl;
}


void Margin::setPrevRealisedPnl(double value)
{
    m_PrevRealisedPnl = value;
    m_PrevRealisedPnlIsSet = true;
}
bool Margin::prevRealisedPnlIsSet() const
{
    return m_PrevRealisedPnlIsSet;
}

void Margin::unsetPrevRealisedPnl()
{
    m_PrevRealisedPnlIsSet = false;
}

double Margin::getGrossComm() const
{
    return m_GrossComm;
}


void Margin::setGrossComm(double value)
{
    m_GrossComm = value;
    m_GrossCommIsSet = true;
}
bool Margin::grossCommIsSet() const
{
    return m_GrossCommIsSet;
}

void Margin::unsetGrossComm()
{
    m_GrossCommIsSet = false;
}

double Margin::getGrossOpenCost() const
{
    return m_GrossOpenCost;
}


void Margin::setGrossOpenCost(double value)
{
    m_GrossOpenCost = value;
    m_GrossOpenCostIsSet = true;
}
bool Margin::grossOpenCostIsSet() const
{
    return m_GrossOpenCostIsSet;
}

void Margin::unsetGrossOpenCost()
{
    m_GrossOpenCostIsSet = false;
}

double Margin::getGrossOpenPremium() const
{
    return m_GrossOpenPremium;
}


void Margin::setGrossOpenPremium(double value)
{
    m_GrossOpenPremium = value;
    m_GrossOpenPremiumIsSet = true;
}
bool Margin::grossOpenPremiumIsSet() const
{
    return m_GrossOpenPremiumIsSet;
}

void Margin::unsetGrossOpenPremium()
{
    m_GrossOpenPremiumIsSet = false;
}

double Margin::getGrossExecCost() const
{
    return m_GrossExecCost;
}


void Margin::setGrossExecCost(double value)
{
    m_GrossExecCost = value;
    m_GrossExecCostIsSet = true;
}
bool Margin::grossExecCostIsSet() const
{
    return m_GrossExecCostIsSet;
}

void Margin::unsetGrossExecCost()
{
    m_GrossExecCostIsSet = false;
}

double Margin::getGrossMarkValue() const
{
    return m_GrossMarkValue;
}


void Margin::setGrossMarkValue(double value)
{
    m_GrossMarkValue = value;
    m_GrossMarkValueIsSet = true;
}
bool Margin::grossMarkValueIsSet() const
{
    return m_GrossMarkValueIsSet;
}

void Margin::unsetGrossMarkValue()
{
    m_GrossMarkValueIsSet = false;
}

double Margin::getRiskValue() const
{
    return m_RiskValue;
}


void Margin::setRiskValue(double value)
{
    m_RiskValue = value;
    m_RiskValueIsSet = true;
}
bool Margin::riskValueIsSet() const
{
    return m_RiskValueIsSet;
}

void Margin::unsetRiskValue()
{
    m_RiskValueIsSet = false;
}

double Margin::getInitMargin() const
{
    return m_InitMargin;
}


void Margin::setInitMargin(double value)
{
    m_InitMargin = value;
    m_InitMarginIsSet = true;
}
bool Margin::initMarginIsSet() const
{
    return m_InitMarginIsSet;
}

void Margin::unsetInitMargin()
{
    m_InitMarginIsSet = false;
}

double Margin::getMaintMargin() const
{
    return m_MaintMargin;
}


void Margin::setMaintMargin(double value)
{
    m_MaintMargin = value;
    m_MaintMarginIsSet = true;
}
bool Margin::maintMarginIsSet() const
{
    return m_MaintMarginIsSet;
}

void Margin::unsetMaintMargin()
{
    m_MaintMarginIsSet = false;
}

double Margin::getTargetExcessMargin() const
{
    return m_TargetExcessMargin;
}


void Margin::setTargetExcessMargin(double value)
{
    m_TargetExcessMargin = value;
    m_TargetExcessMarginIsSet = true;
}
bool Margin::targetExcessMarginIsSet() const
{
    return m_TargetExcessMarginIsSet;
}

void Margin::unsetTargetExcessMargin()
{
    m_TargetExcessMarginIsSet = false;
}

double Margin::getRealisedPnl() const
{
    return m_RealisedPnl;
}


void Margin::setRealisedPnl(double value)
{
    m_RealisedPnl = value;
    m_RealisedPnlIsSet = true;
}
bool Margin::realisedPnlIsSet() const
{
    return m_RealisedPnlIsSet;
}

void Margin::unsetRealisedPnl()
{
    m_RealisedPnlIsSet = false;
}

double Margin::getUnrealisedPnl() const
{
    return m_UnrealisedPnl;
}


void Margin::setUnrealisedPnl(double value)
{
    m_UnrealisedPnl = value;
    m_UnrealisedPnlIsSet = true;
}
bool Margin::unrealisedPnlIsSet() const
{
    return m_UnrealisedPnlIsSet;
}

void Margin::unsetUnrealisedPnl()
{
    m_UnrealisedPnlIsSet = false;
}

double Margin::getWalletBalance() const
{
    return m_WalletBalance;
}


void Margin::setWalletBalance(double value)
{
    m_WalletBalance = value;
    m_WalletBalanceIsSet = true;
}
bool Margin::walletBalanceIsSet() const
{
    return m_WalletBalanceIsSet;
}

void Margin::unsetWalletBalance()
{
    m_WalletBalanceIsSet = false;
}

double Margin::getMarginBalance() const
{
    return m_MarginBalance;
}


void Margin::setMarginBalance(double value)
{
    m_MarginBalance = value;
    m_MarginBalanceIsSet = true;
}
bool Margin::marginBalanceIsSet() const
{
    return m_MarginBalanceIsSet;
}

void Margin::unsetMarginBalance()
{
    m_MarginBalanceIsSet = false;
}

double Margin::getMarginLeverage() const
{
    return m_MarginLeverage;
}


void Margin::setMarginLeverage(double value)
{
    m_MarginLeverage = value;
    m_MarginLeverageIsSet = true;
}
bool Margin::marginLeverageIsSet() const
{
    return m_MarginLeverageIsSet;
}

void Margin::unsetMarginLeverage()
{
    m_MarginLeverageIsSet = false;
}

double Margin::getMarginUsedPcnt() const
{
    return m_MarginUsedPcnt;
}


void Margin::setMarginUsedPcnt(double value)
{
    m_MarginUsedPcnt = value;
    m_MarginUsedPcntIsSet = true;
}
bool Margin::marginUsedPcntIsSet() const
{
    return m_MarginUsedPcntIsSet;
}

void Margin::unsetMarginUsedPcnt()
{
    m_MarginUsedPcntIsSet = false;
}

double Margin::getExcessMargin() const
{
    return m_ExcessMargin;
}


void Margin::setExcessMargin(double value)
{
    m_ExcessMargin = value;
    m_ExcessMarginIsSet = true;
}
bool Margin::excessMarginIsSet() const
{
    return m_ExcessMarginIsSet;
}

void Margin::unsetExcessMargin()
{
    m_ExcessMarginIsSet = false;
}

double Margin::getAvailableMargin() const
{
    return m_AvailableMargin;
}


void Margin::setAvailableMargin(double value)
{
    m_AvailableMargin = value;
    m_AvailableMarginIsSet = true;
}
bool Margin::availableMarginIsSet() const
{
    return m_AvailableMarginIsSet;
}

void Margin::unsetAvailableMargin()
{
    m_AvailableMarginIsSet = false;
}

double Margin::getWithdrawableMargin() const
{
    return m_WithdrawableMargin;
}


void Margin::setWithdrawableMargin(double value)
{
    m_WithdrawableMargin = value;
    m_WithdrawableMarginIsSet = true;
}
bool Margin::withdrawableMarginIsSet() const
{
    return m_WithdrawableMarginIsSet;
}

void Margin::unsetWithdrawableMargin()
{
    m_WithdrawableMarginIsSet = false;
}

double Margin::getMakerFeeDiscount() const
{
    return m_MakerFeeDiscount;
}


void Margin::setMakerFeeDiscount(double value)
{
    m_MakerFeeDiscount = value;
    m_MakerFeeDiscountIsSet = true;
}
bool Margin::makerFeeDiscountIsSet() const
{
    return m_MakerFeeDiscountIsSet;
}

void Margin::unsetMakerFeeDiscount()
{
    m_MakerFeeDiscountIsSet = false;
}

double Margin::getTakerFeeDiscount() const
{
    return m_TakerFeeDiscount;
}


void Margin::setTakerFeeDiscount(double value)
{
    m_TakerFeeDiscount = value;
    m_TakerFeeDiscountIsSet = true;
}
bool Margin::takerFeeDiscountIsSet() const
{
    return m_TakerFeeDiscountIsSet;
}

void Margin::unsetTakerFeeDiscount()
{
    m_TakerFeeDiscountIsSet = false;
}

utility::datetime Margin::getTimestamp() const
{
    return m_Timestamp;
}


void Margin::setTimestamp(utility::datetime value)
{
    m_Timestamp = value;
    m_TimestampIsSet = true;
}
bool Margin::timestampIsSet() const
{
    return m_TimestampIsSet;
}

void Margin::unsetTimestamp()
{
    m_TimestampIsSet = false;
}

}
}
}
}

