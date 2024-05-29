/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  _If you are building automated tools, please subscribe to the_ _[BitMEX API RSS Feed](https://blog.bitmex.com/api_announcement/feed/) for changes. The feed will be updated_ _regularly and is the most reliable way to get downtime and update announcements._  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.42-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "StatsHistory.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

StatsHistory::StatsHistory()
{
    m_date = utility::datetime();
    m_RootSymbol = utility::conversions::to_string_t("");
    m_Currency = utility::conversions::to_string_t("");
    m_CurrencyIsSet = false;
    m_Volume = 0L;
    m_VolumeIsSet = false;
    m_Turnover = 0L;
    m_TurnoverIsSet = false;
}

StatsHistory::~StatsHistory()
{
}

void StatsHistory::validate()
{
    // TODO: implement validation
}

web::json::value StatsHistory::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("date")] = ModelBase::toJson(m_date);
    val[utility::conversions::to_string_t("rootSymbol")] = ModelBase::toJson(m_RootSymbol);
    if(m_CurrencyIsSet)
    {
        val[utility::conversions::to_string_t("currency")] = ModelBase::toJson(m_Currency);
    }
    if(m_VolumeIsSet)
    {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(m_Volume);
    }
    if(m_TurnoverIsSet)
    {
        val[utility::conversions::to_string_t("turnover")] = ModelBase::toJson(m_Turnover);
    }

    return val;
}

void StatsHistory::fromJson(web::json::value& val)
{
    setDate
    (ModelBase::dateFromJson(val[utility::conversions::to_string_t("date")]));
    setRootSymbol(ModelBase::stringFromJson(val[utility::conversions::to_string_t("rootSymbol")]));
    if(val.has_field(utility::conversions::to_string_t("currency")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("currency")];
        if(!fieldValue.is_null())
        {
            setCurrency(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("volume")];
        if(!fieldValue.is_null())
        {
            setVolume(ModelBase::int64_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("turnover")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("turnover")];
        if(!fieldValue.is_null())
        {
            setTurnover(ModelBase::int64_tFromJson(fieldValue));
        }
    }
}

void StatsHistory::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("date"), m_date));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rootSymbol"), m_RootSymbol));
    if(m_CurrencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currency"), m_Currency));
        
    }
    if(m_VolumeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("volume"), m_Volume));
    }
    if(m_TurnoverIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("turnover"), m_Turnover));
    }
}

void StatsHistory::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setDate(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("date"))));
    setRootSymbol(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("rootSymbol"))));
    if(multipart->hasContent(utility::conversions::to_string_t("currency")))
    {
        setCurrency(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("currency"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("volume")))
    {
        setVolume(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("volume"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("turnover")))
    {
        setTurnover(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("turnover"))));
    }
}

utility::datetime StatsHistory::getDate() const
{
    return m_date;
}


void StatsHistory::setDate(utility::datetime value)
{
    m_date = value;
    
}
utility::string_t StatsHistory::getRootSymbol() const
{
    return m_RootSymbol;
}


void StatsHistory::setRootSymbol(utility::string_t value)
{
    m_RootSymbol = value;
    
}
utility::string_t StatsHistory::getCurrency() const
{
    return m_Currency;
}


void StatsHistory::setCurrency(utility::string_t value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}
bool StatsHistory::currencyIsSet() const
{
    return m_CurrencyIsSet;
}

void StatsHistory::unsetCurrency()
{
    m_CurrencyIsSet = false;
}

int64_t StatsHistory::getVolume() const
{
    return m_Volume;
}


void StatsHistory::setVolume(int64_t value)
{
    m_Volume = value;
    m_VolumeIsSet = true;
}
bool StatsHistory::volumeIsSet() const
{
    return m_VolumeIsSet;
}

void StatsHistory::unsetVolume()
{
    m_VolumeIsSet = false;
}

int64_t StatsHistory::getTurnover() const
{
    return m_Turnover;
}


void StatsHistory::setTurnover(int64_t value)
{
    m_Turnover = value;
    m_TurnoverIsSet = true;
}
bool StatsHistory::turnoverIsSet() const
{
    return m_TurnoverIsSet;
}

void StatsHistory::unsetTurnover()
{
    m_TurnoverIsSet = false;
}

}
}
}
}

