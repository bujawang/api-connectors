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



#include "CommunicationToken.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

CommunicationToken::CommunicationToken()
{
    m_Id = utility::conversions::to_string_t("");
    m_UserId = 0.0;
    m_DeviceToken = utility::conversions::to_string_t("");
    m_Channel = utility::conversions::to_string_t("");
}

CommunicationToken::~CommunicationToken()
{
}

void CommunicationToken::validate()
{
    // TODO: implement validation
}

web::json::value CommunicationToken::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    val[utility::conversions::to_string_t("deviceToken")] = ModelBase::toJson(m_DeviceToken);
    val[utility::conversions::to_string_t("channel")] = ModelBase::toJson(m_Channel);

    return val;
}

void CommunicationToken::fromJson(web::json::value& val)
{
    setId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("id")]));
    setUserId(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("userId")]));
    setDeviceToken(ModelBase::stringFromJson(val[utility::conversions::to_string_t("deviceToken")]));
    setChannel(ModelBase::stringFromJson(val[utility::conversions::to_string_t("channel")]));
}

void CommunicationToken::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deviceToken"), m_DeviceToken));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("channel"), m_Channel));
}

void CommunicationToken::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setUserId(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId"))));
    setDeviceToken(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("deviceToken"))));
    setChannel(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("channel"))));
}

utility::string_t CommunicationToken::getId() const
{
    return m_Id;
}


void CommunicationToken::setId(utility::string_t value)
{
    m_Id = value;
    
}
double CommunicationToken::getUserId() const
{
    return m_UserId;
}


void CommunicationToken::setUserId(double value)
{
    m_UserId = value;
    
}
utility::string_t CommunicationToken::getDeviceToken() const
{
    return m_DeviceToken;
}


void CommunicationToken::setDeviceToken(utility::string_t value)
{
    m_DeviceToken = value;
    
}
utility::string_t CommunicationToken::getChannel() const
{
    return m_Channel;
}


void CommunicationToken::setChannel(utility::string_t value)
{
    m_Channel = value;
    
}
}
}
}
}

