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


#include "SWGTradeBin.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGTradeBin::SWGTradeBin(QString json) {
    init();
    this->fromJson(json);
}

SWGTradeBin::SWGTradeBin() {
    init();
}

SWGTradeBin::~SWGTradeBin() {
    this->cleanup();
}

void
SWGTradeBin::init() {
    timestamp = NULL;
    m_timestamp_isSet = false;
    symbol = new QString("");
    m_symbol_isSet = false;
    open = 0.0;
    m_open_isSet = false;
    high = 0.0;
    m_high_isSet = false;
    low = 0.0;
    m_low_isSet = false;
    close = 0.0;
    m_close_isSet = false;
    trades = 0L;
    m_trades_isSet = false;
    volume = 0L;
    m_volume_isSet = false;
    vwap = 0.0;
    m_vwap_isSet = false;
    last_size = 0L;
    m_last_size_isSet = false;
    turnover = 0L;
    m_turnover_isSet = false;
    home_notional = 0.0;
    m_home_notional_isSet = false;
    foreign_notional = 0.0;
    m_foreign_notional_isSet = false;
}

void
SWGTradeBin::cleanup() {
    if(timestamp != nullptr) { 
        delete timestamp;
    }
    if(symbol != nullptr) { 
        delete symbol;
    }











}

SWGTradeBin*
SWGTradeBin::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGTradeBin::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&timestamp, pJson["timestamp"], "QDateTime", "QDateTime");
    
    ::Swagger::setValue(&symbol, pJson["symbol"], "QString", "QString");
    
    ::Swagger::setValue(&open, pJson["open"], "double", "");
    
    ::Swagger::setValue(&high, pJson["high"], "double", "");
    
    ::Swagger::setValue(&low, pJson["low"], "double", "");
    
    ::Swagger::setValue(&close, pJson["close"], "double", "");
    
    ::Swagger::setValue(&trades, pJson["trades"], "qint64", "");
    
    ::Swagger::setValue(&volume, pJson["volume"], "qint64", "");
    
    ::Swagger::setValue(&vwap, pJson["vwap"], "double", "");
    
    ::Swagger::setValue(&last_size, pJson["lastSize"], "qint64", "");
    
    ::Swagger::setValue(&turnover, pJson["turnover"], "qint64", "");
    
    ::Swagger::setValue(&home_notional, pJson["homeNotional"], "double", "");
    
    ::Swagger::setValue(&foreign_notional, pJson["foreignNotional"], "double", "");
    
}

QString
SWGTradeBin::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGTradeBin::asJsonObject() {
    QJsonObject obj;
    if(timestamp != nullptr) { 
        toJsonValue(QString("timestamp"), timestamp, obj, QString("QDateTime"));
    }
    if(symbol != nullptr && *symbol != QString("")){
        toJsonValue(QString("symbol"), symbol, obj, QString("QString"));
    }
    if(m_open_isSet){
        obj.insert("open", QJsonValue(open));
    }
    if(m_high_isSet){
        obj.insert("high", QJsonValue(high));
    }
    if(m_low_isSet){
        obj.insert("low", QJsonValue(low));
    }
    if(m_close_isSet){
        obj.insert("close", QJsonValue(close));
    }
    if(m_trades_isSet){
        obj.insert("trades", QJsonValue(trades));
    }
    if(m_volume_isSet){
        obj.insert("volume", QJsonValue(volume));
    }
    if(m_vwap_isSet){
        obj.insert("vwap", QJsonValue(vwap));
    }
    if(m_last_size_isSet){
        obj.insert("lastSize", QJsonValue(last_size));
    }
    if(m_turnover_isSet){
        obj.insert("turnover", QJsonValue(turnover));
    }
    if(m_home_notional_isSet){
        obj.insert("homeNotional", QJsonValue(home_notional));
    }
    if(m_foreign_notional_isSet){
        obj.insert("foreignNotional", QJsonValue(foreign_notional));
    }

    return obj;
}

QDateTime*
SWGTradeBin::getTimestamp() {
    return timestamp;
}
void
SWGTradeBin::setTimestamp(QDateTime* timestamp) {
    this->timestamp = timestamp;
    this->m_timestamp_isSet = true;
}

QString*
SWGTradeBin::getSymbol() {
    return symbol;
}
void
SWGTradeBin::setSymbol(QString* symbol) {
    this->symbol = symbol;
    this->m_symbol_isSet = true;
}

double
SWGTradeBin::getOpen() {
    return open;
}
void
SWGTradeBin::setOpen(double open) {
    this->open = open;
    this->m_open_isSet = true;
}

double
SWGTradeBin::getHigh() {
    return high;
}
void
SWGTradeBin::setHigh(double high) {
    this->high = high;
    this->m_high_isSet = true;
}

double
SWGTradeBin::getLow() {
    return low;
}
void
SWGTradeBin::setLow(double low) {
    this->low = low;
    this->m_low_isSet = true;
}

double
SWGTradeBin::getClose() {
    return close;
}
void
SWGTradeBin::setClose(double close) {
    this->close = close;
    this->m_close_isSet = true;
}

qint64
SWGTradeBin::getTrades() {
    return trades;
}
void
SWGTradeBin::setTrades(qint64 trades) {
    this->trades = trades;
    this->m_trades_isSet = true;
}

qint64
SWGTradeBin::getVolume() {
    return volume;
}
void
SWGTradeBin::setVolume(qint64 volume) {
    this->volume = volume;
    this->m_volume_isSet = true;
}

double
SWGTradeBin::getVwap() {
    return vwap;
}
void
SWGTradeBin::setVwap(double vwap) {
    this->vwap = vwap;
    this->m_vwap_isSet = true;
}

qint64
SWGTradeBin::getLastSize() {
    return last_size;
}
void
SWGTradeBin::setLastSize(qint64 last_size) {
    this->last_size = last_size;
    this->m_last_size_isSet = true;
}

qint64
SWGTradeBin::getTurnover() {
    return turnover;
}
void
SWGTradeBin::setTurnover(qint64 turnover) {
    this->turnover = turnover;
    this->m_turnover_isSet = true;
}

double
SWGTradeBin::getHomeNotional() {
    return home_notional;
}
void
SWGTradeBin::setHomeNotional(double home_notional) {
    this->home_notional = home_notional;
    this->m_home_notional_isSet = true;
}

double
SWGTradeBin::getForeignNotional() {
    return foreign_notional;
}
void
SWGTradeBin::setForeignNotional(double foreign_notional) {
    this->foreign_notional = foreign_notional;
    this->m_foreign_notional_isSet = true;
}


bool
SWGTradeBin::isSet(){
    bool isObjectUpdated = false;
    do{
        
        if(symbol != nullptr && *symbol != QString("")){ isObjectUpdated = true; break;}
        if(m_open_isSet){ isObjectUpdated = true; break;}
        if(m_high_isSet){ isObjectUpdated = true; break;}
        if(m_low_isSet){ isObjectUpdated = true; break;}
        if(m_close_isSet){ isObjectUpdated = true; break;}
        if(m_trades_isSet){ isObjectUpdated = true; break;}
        if(m_volume_isSet){ isObjectUpdated = true; break;}
        if(m_vwap_isSet){ isObjectUpdated = true; break;}
        if(m_last_size_isSet){ isObjectUpdated = true; break;}
        if(m_turnover_isSet){ isObjectUpdated = true; break;}
        if(m_home_notional_isSet){ isObjectUpdated = true; break;}
        if(m_foreign_notional_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

