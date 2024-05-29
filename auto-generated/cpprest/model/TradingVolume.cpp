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



#include "TradingVolume.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

TradingVolume::TradingVolume()
{
    m_AdvUsd = 0.0;
    m_AdvUsdSpot = 0.0;
    m_AdvUsdSpotIsSet = false;
    m_AdvUsdContract = 0.0;
    m_AdvUsdContractIsSet = false;
}

TradingVolume::~TradingVolume()
{
}

void TradingVolume::validate()
{
    // TODO: implement validation
}

web::json::value TradingVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("advUsd")] = ModelBase::toJson(m_AdvUsd);
    if(m_AdvUsdSpotIsSet)
    {
        val[utility::conversions::to_string_t("advUsdSpot")] = ModelBase::toJson(m_AdvUsdSpot);
    }
    if(m_AdvUsdContractIsSet)
    {
        val[utility::conversions::to_string_t("advUsdContract")] = ModelBase::toJson(m_AdvUsdContract);
    }

    return val;
}

void TradingVolume::fromJson(web::json::value& val)
{
    setAdvUsd(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("advUsd")]));
    if(val.has_field(utility::conversions::to_string_t("advUsdSpot")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("advUsdSpot")];
        if(!fieldValue.is_null())
        {
            setAdvUsdSpot(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("advUsdContract")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("advUsdContract")];
        if(!fieldValue.is_null())
        {
            setAdvUsdContract(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void TradingVolume::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("advUsd"), m_AdvUsd));
    if(m_AdvUsdSpotIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("advUsdSpot"), m_AdvUsdSpot));
    }
    if(m_AdvUsdContractIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("advUsdContract"), m_AdvUsdContract));
    }
}

void TradingVolume::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setAdvUsd(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("advUsd"))));
    if(multipart->hasContent(utility::conversions::to_string_t("advUsdSpot")))
    {
        setAdvUsdSpot(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("advUsdSpot"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("advUsdContract")))
    {
        setAdvUsdContract(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("advUsdContract"))));
    }
}

double TradingVolume::getAdvUsd() const
{
    return m_AdvUsd;
}


void TradingVolume::setAdvUsd(double value)
{
    m_AdvUsd = value;
    
}
double TradingVolume::getAdvUsdSpot() const
{
    return m_AdvUsdSpot;
}


void TradingVolume::setAdvUsdSpot(double value)
{
    m_AdvUsdSpot = value;
    m_AdvUsdSpotIsSet = true;
}
bool TradingVolume::advUsdSpotIsSet() const
{
    return m_AdvUsdSpotIsSet;
}

void TradingVolume::unsetAdvUsdSpot()
{
    m_AdvUsdSpotIsSet = false;
}

double TradingVolume::getAdvUsdContract() const
{
    return m_AdvUsdContract;
}


void TradingVolume::setAdvUsdContract(double value)
{
    m_AdvUsdContract = value;
    m_AdvUsdContractIsSet = true;
}
bool TradingVolume::advUsdContractIsSet() const
{
    return m_AdvUsdContractIsSet;
}

void TradingVolume::unsetAdvUsdContract()
{
    m_AdvUsdContractIsSet = false;
}

}
}
}
}

