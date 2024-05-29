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



#include "AssetsConfig.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

AssetsConfig::AssetsConfig()
{
    m_Asset = utility::conversions::to_string_t("");
    m_Currency = utility::conversions::to_string_t("");
    m_CurrencyIsSet = false;
    m_MajorCurrency = utility::conversions::to_string_t("");
    m_MajorCurrencyIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_CurrencyType = utility::conversions::to_string_t("");
    m_CurrencyTypeIsSet = false;
    m_Scale = 0.0;
    m_ScaleIsSet = false;
    m_Enabled = false;
    m_EnabledIsSet = false;
    m_IsMarginCurrency = false;
    m_IsMarginCurrencyIsSet = false;
    m_MemoRequired = false;
    m_MemoRequiredIsSet = false;
    m_NetworksIsSet = false;
}

AssetsConfig::~AssetsConfig()
{
}

void AssetsConfig::validate()
{
    // TODO: implement validation
}

web::json::value AssetsConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("asset")] = ModelBase::toJson(m_Asset);
    if(m_CurrencyIsSet)
    {
        val[utility::conversions::to_string_t("currency")] = ModelBase::toJson(m_Currency);
    }
    if(m_MajorCurrencyIsSet)
    {
        val[utility::conversions::to_string_t("majorCurrency")] = ModelBase::toJson(m_MajorCurrency);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_CurrencyTypeIsSet)
    {
        val[utility::conversions::to_string_t("currencyType")] = ModelBase::toJson(m_CurrencyType);
    }
    if(m_ScaleIsSet)
    {
        val[utility::conversions::to_string_t("scale")] = ModelBase::toJson(m_Scale);
    }
    if(m_EnabledIsSet)
    {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(m_Enabled);
    }
    if(m_IsMarginCurrencyIsSet)
    {
        val[utility::conversions::to_string_t("isMarginCurrency")] = ModelBase::toJson(m_IsMarginCurrency);
    }
    if(m_MemoRequiredIsSet)
    {
        val[utility::conversions::to_string_t("memoRequired")] = ModelBase::toJson(m_MemoRequired);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Networks )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("networks")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void AssetsConfig::fromJson(web::json::value& val)
{
    setAsset(ModelBase::stringFromJson(val[utility::conversions::to_string_t("asset")]));
    if(val.has_field(utility::conversions::to_string_t("currency")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("currency")];
        if(!fieldValue.is_null())
        {
            setCurrency(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("majorCurrency")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("majorCurrency")];
        if(!fieldValue.is_null())
        {
            setMajorCurrency(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("name")];
        if(!fieldValue.is_null())
        {
            setName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("currencyType")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("currencyType")];
        if(!fieldValue.is_null())
        {
            setCurrencyType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scale")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("scale")];
        if(!fieldValue.is_null())
        {
            setScale(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("enabled")];
        if(!fieldValue.is_null())
        {
            setEnabled(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isMarginCurrency")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("isMarginCurrency")];
        if(!fieldValue.is_null())
        {
            setIsMarginCurrency(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memoRequired")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("memoRequired")];
        if(!fieldValue.is_null())
        {
            setMemoRequired(ModelBase::boolFromJson(fieldValue));
        }
    }
    {
        m_Networks.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("networks")))
        {
        for( auto& item : val[utility::conversions::to_string_t("networks")].as_array() )
        {
            if(item.is_null())
            {
                m_Networks.push_back( std::shared_ptr<AssetsConfigNetworkItem>(nullptr) );
            }
            else
            {
                std::shared_ptr<AssetsConfigNetworkItem> newItem(new AssetsConfigNetworkItem());
                newItem->fromJson(item);
                m_Networks.push_back( newItem );
            }
        }
        }
    }
}

void AssetsConfig::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("asset"), m_Asset));
    if(m_CurrencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currency"), m_Currency));
        
    }
    if(m_MajorCurrencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("majorCurrency"), m_MajorCurrency));
        
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
        
    }
    if(m_CurrencyTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currencyType"), m_CurrencyType));
        
    }
    if(m_ScaleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("scale"), m_Scale));
    }
    if(m_EnabledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enabled"), m_Enabled));
    }
    if(m_IsMarginCurrencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isMarginCurrency"), m_IsMarginCurrency));
    }
    if(m_MemoRequiredIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("memoRequired"), m_MemoRequired));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Networks )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("networks"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void AssetsConfig::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setAsset(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("asset"))));
    if(multipart->hasContent(utility::conversions::to_string_t("currency")))
    {
        setCurrency(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("currency"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("majorCurrency")))
    {
        setMajorCurrency(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("majorCurrency"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("currencyType")))
    {
        setCurrencyType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("currencyType"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("scale")))
    {
        setScale(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("scale"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enabled")))
    {
        setEnabled(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("enabled"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isMarginCurrency")))
    {
        setIsMarginCurrency(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("isMarginCurrency"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("memoRequired")))
    {
        setMemoRequired(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("memoRequired"))));
    }
    {
        m_Networks.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("networks")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("networks"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Networks.push_back( std::shared_ptr<AssetsConfigNetworkItem>(nullptr) );
            }
            else
            {
                std::shared_ptr<AssetsConfigNetworkItem> newItem(new AssetsConfigNetworkItem());
                newItem->fromJson(item);
                m_Networks.push_back( newItem );
            }
        }
        }
    }
}

utility::string_t AssetsConfig::getAsset() const
{
    return m_Asset;
}


void AssetsConfig::setAsset(utility::string_t value)
{
    m_Asset = value;
    
}
utility::string_t AssetsConfig::getCurrency() const
{
    return m_Currency;
}


void AssetsConfig::setCurrency(utility::string_t value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}
bool AssetsConfig::currencyIsSet() const
{
    return m_CurrencyIsSet;
}

void AssetsConfig::unsetCurrency()
{
    m_CurrencyIsSet = false;
}

utility::string_t AssetsConfig::getMajorCurrency() const
{
    return m_MajorCurrency;
}


void AssetsConfig::setMajorCurrency(utility::string_t value)
{
    m_MajorCurrency = value;
    m_MajorCurrencyIsSet = true;
}
bool AssetsConfig::majorCurrencyIsSet() const
{
    return m_MajorCurrencyIsSet;
}

void AssetsConfig::unsetMajorCurrency()
{
    m_MajorCurrencyIsSet = false;
}

utility::string_t AssetsConfig::getName() const
{
    return m_Name;
}


void AssetsConfig::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool AssetsConfig::nameIsSet() const
{
    return m_NameIsSet;
}

void AssetsConfig::unsetName()
{
    m_NameIsSet = false;
}

utility::string_t AssetsConfig::getCurrencyType() const
{
    return m_CurrencyType;
}


void AssetsConfig::setCurrencyType(utility::string_t value)
{
    m_CurrencyType = value;
    m_CurrencyTypeIsSet = true;
}
bool AssetsConfig::currencyTypeIsSet() const
{
    return m_CurrencyTypeIsSet;
}

void AssetsConfig::unsetCurrencyType()
{
    m_CurrencyTypeIsSet = false;
}

double AssetsConfig::getScale() const
{
    return m_Scale;
}


void AssetsConfig::setScale(double value)
{
    m_Scale = value;
    m_ScaleIsSet = true;
}
bool AssetsConfig::scaleIsSet() const
{
    return m_ScaleIsSet;
}

void AssetsConfig::unsetScale()
{
    m_ScaleIsSet = false;
}

bool AssetsConfig::isEnabled() const
{
    return m_Enabled;
}


void AssetsConfig::setEnabled(bool value)
{
    m_Enabled = value;
    m_EnabledIsSet = true;
}
bool AssetsConfig::enabledIsSet() const
{
    return m_EnabledIsSet;
}

void AssetsConfig::unsetEnabled()
{
    m_EnabledIsSet = false;
}

bool AssetsConfig::isIsMarginCurrency() const
{
    return m_IsMarginCurrency;
}


void AssetsConfig::setIsMarginCurrency(bool value)
{
    m_IsMarginCurrency = value;
    m_IsMarginCurrencyIsSet = true;
}
bool AssetsConfig::isMarginCurrencyIsSet() const
{
    return m_IsMarginCurrencyIsSet;
}

void AssetsConfig::unsetIsMarginCurrency()
{
    m_IsMarginCurrencyIsSet = false;
}

bool AssetsConfig::isMemoRequired() const
{
    return m_MemoRequired;
}


void AssetsConfig::setMemoRequired(bool value)
{
    m_MemoRequired = value;
    m_MemoRequiredIsSet = true;
}
bool AssetsConfig::memoRequiredIsSet() const
{
    return m_MemoRequiredIsSet;
}

void AssetsConfig::unsetMemoRequired()
{
    m_MemoRequiredIsSet = false;
}

std::vector<std::shared_ptr<AssetsConfigNetworkItem>>& AssetsConfig::getNetworks()
{
    return m_Networks;
}

void AssetsConfig::setNetworks(std::vector<std::shared_ptr<AssetsConfigNetworkItem>> value)
{
    m_Networks = value;
    m_NetworksIsSet = true;
}
bool AssetsConfig::networksIsSet() const
{
    return m_NetworksIsSet;
}

void AssetsConfig::unsetNetworks()
{
    m_NetworksIsSet = false;
}

}
}
}
}

