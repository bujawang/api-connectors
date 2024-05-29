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


#include "SWGWalletSummaryRecord.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGWalletSummaryRecord::SWGWalletSummaryRecord(QString json) {
    init();
    this->fromJson(json);
}

SWGWalletSummaryRecord::SWGWalletSummaryRecord() {
    init();
}

SWGWalletSummaryRecord::~SWGWalletSummaryRecord() {
    this->cleanup();
}

void
SWGWalletSummaryRecord::init() {
    account = 0.0;
    m_account_isSet = false;
    currency = new QString("");
    m_currency_isSet = false;
    transact_type = new QString("");
    m_transact_type_isSet = false;
    symbol = new QString("");
    m_symbol_isSet = false;
    amount = 0.0;
    m_amount_isSet = false;
    pending_debit = 0.0;
    m_pending_debit_isSet = false;
    realised_pnl = 0.0;
    m_realised_pnl_isSet = false;
    wallet_balance = 0.0;
    m_wallet_balance_isSet = false;
    unrealised_pnl = 0.0;
    m_unrealised_pnl_isSet = false;
    margin_balance = 0.0;
    m_margin_balance_isSet = false;
}

void
SWGWalletSummaryRecord::cleanup() {

    if(currency != nullptr) { 
        delete currency;
    }
    if(transact_type != nullptr) { 
        delete transact_type;
    }
    if(symbol != nullptr) { 
        delete symbol;
    }






}

SWGWalletSummaryRecord*
SWGWalletSummaryRecord::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGWalletSummaryRecord::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&account, pJson["account"], "double", "");
    
    ::Swagger::setValue(&currency, pJson["currency"], "QString", "QString");
    
    ::Swagger::setValue(&transact_type, pJson["transactType"], "QString", "QString");
    
    ::Swagger::setValue(&symbol, pJson["symbol"], "QString", "QString");
    
    ::Swagger::setValue(&amount, pJson["amount"], "double", "");
    
    ::Swagger::setValue(&pending_debit, pJson["pendingDebit"], "double", "");
    
    ::Swagger::setValue(&realised_pnl, pJson["realisedPnl"], "double", "");
    
    ::Swagger::setValue(&wallet_balance, pJson["walletBalance"], "double", "");
    
    ::Swagger::setValue(&unrealised_pnl, pJson["unrealisedPnl"], "double", "");
    
    ::Swagger::setValue(&margin_balance, pJson["marginBalance"], "double", "");
    
}

QString
SWGWalletSummaryRecord::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGWalletSummaryRecord::asJsonObject() {
    QJsonObject obj;
    if(m_account_isSet){
        obj.insert("account", QJsonValue(account));
    }
    if(currency != nullptr && *currency != QString("")){
        toJsonValue(QString("currency"), currency, obj, QString("QString"));
    }
    if(transact_type != nullptr && *transact_type != QString("")){
        toJsonValue(QString("transactType"), transact_type, obj, QString("QString"));
    }
    if(symbol != nullptr && *symbol != QString("")){
        toJsonValue(QString("symbol"), symbol, obj, QString("QString"));
    }
    if(m_amount_isSet){
        obj.insert("amount", QJsonValue(amount));
    }
    if(m_pending_debit_isSet){
        obj.insert("pendingDebit", QJsonValue(pending_debit));
    }
    if(m_realised_pnl_isSet){
        obj.insert("realisedPnl", QJsonValue(realised_pnl));
    }
    if(m_wallet_balance_isSet){
        obj.insert("walletBalance", QJsonValue(wallet_balance));
    }
    if(m_unrealised_pnl_isSet){
        obj.insert("unrealisedPnl", QJsonValue(unrealised_pnl));
    }
    if(m_margin_balance_isSet){
        obj.insert("marginBalance", QJsonValue(margin_balance));
    }

    return obj;
}

double
SWGWalletSummaryRecord::getAccount() {
    return account;
}
void
SWGWalletSummaryRecord::setAccount(double account) {
    this->account = account;
    this->m_account_isSet = true;
}

QString*
SWGWalletSummaryRecord::getCurrency() {
    return currency;
}
void
SWGWalletSummaryRecord::setCurrency(QString* currency) {
    this->currency = currency;
    this->m_currency_isSet = true;
}

QString*
SWGWalletSummaryRecord::getTransactType() {
    return transact_type;
}
void
SWGWalletSummaryRecord::setTransactType(QString* transact_type) {
    this->transact_type = transact_type;
    this->m_transact_type_isSet = true;
}

QString*
SWGWalletSummaryRecord::getSymbol() {
    return symbol;
}
void
SWGWalletSummaryRecord::setSymbol(QString* symbol) {
    this->symbol = symbol;
    this->m_symbol_isSet = true;
}

double
SWGWalletSummaryRecord::getAmount() {
    return amount;
}
void
SWGWalletSummaryRecord::setAmount(double amount) {
    this->amount = amount;
    this->m_amount_isSet = true;
}

double
SWGWalletSummaryRecord::getPendingDebit() {
    return pending_debit;
}
void
SWGWalletSummaryRecord::setPendingDebit(double pending_debit) {
    this->pending_debit = pending_debit;
    this->m_pending_debit_isSet = true;
}

double
SWGWalletSummaryRecord::getRealisedPnl() {
    return realised_pnl;
}
void
SWGWalletSummaryRecord::setRealisedPnl(double realised_pnl) {
    this->realised_pnl = realised_pnl;
    this->m_realised_pnl_isSet = true;
}

double
SWGWalletSummaryRecord::getWalletBalance() {
    return wallet_balance;
}
void
SWGWalletSummaryRecord::setWalletBalance(double wallet_balance) {
    this->wallet_balance = wallet_balance;
    this->m_wallet_balance_isSet = true;
}

double
SWGWalletSummaryRecord::getUnrealisedPnl() {
    return unrealised_pnl;
}
void
SWGWalletSummaryRecord::setUnrealisedPnl(double unrealised_pnl) {
    this->unrealised_pnl = unrealised_pnl;
    this->m_unrealised_pnl_isSet = true;
}

double
SWGWalletSummaryRecord::getMarginBalance() {
    return margin_balance;
}
void
SWGWalletSummaryRecord::setMarginBalance(double margin_balance) {
    this->margin_balance = margin_balance;
    this->m_margin_balance_isSet = true;
}


bool
SWGWalletSummaryRecord::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_account_isSet){ isObjectUpdated = true; break;}
        if(currency != nullptr && *currency != QString("")){ isObjectUpdated = true; break;}
        if(transact_type != nullptr && *transact_type != QString("")){ isObjectUpdated = true; break;}
        if(symbol != nullptr && *symbol != QString("")){ isObjectUpdated = true; break;}
        if(m_amount_isSet){ isObjectUpdated = true; break;}
        if(m_pending_debit_isSet){ isObjectUpdated = true; break;}
        if(m_realised_pnl_isSet){ isObjectUpdated = true; break;}
        if(m_wallet_balance_isSet){ isObjectUpdated = true; break;}
        if(m_unrealised_pnl_isSet){ isObjectUpdated = true; break;}
        if(m_margin_balance_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

