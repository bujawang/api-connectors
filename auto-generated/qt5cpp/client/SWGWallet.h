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

/*
 * SWGWallet.h
 *
 * Assets and Networks Data
 */

#ifndef SWGWallet_H_
#define SWGWallet_H_

#include <QJsonObject>


#include "SWGNumber.h"
#include <QDateTime>
#include <QString>

#include "SWGObject.h"

namespace Swagger {

class SWGWallet: public SWGObject {
public:
    SWGWallet();
    SWGWallet(QString json);
    ~SWGWallet();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    SWGWallet* fromJson(QString jsonString) override;

    SWGNumber* getAccount();
    void setAccount(SWGNumber* account);

    QString* getCurrency();
    void setCurrency(QString* currency);

    SWGNumber* getDeposited();
    void setDeposited(SWGNumber* deposited);

    SWGNumber* getWithdrawn();
    void setWithdrawn(SWGNumber* withdrawn);

    SWGNumber* getTransferIn();
    void setTransferIn(SWGNumber* transfer_in);

    SWGNumber* getTransferOut();
    void setTransferOut(SWGNumber* transfer_out);

    SWGNumber* getAmount();
    void setAmount(SWGNumber* amount);

    SWGNumber* getPendingCredit();
    void setPendingCredit(SWGNumber* pending_credit);

    SWGNumber* getPendingDebit();
    void setPendingDebit(SWGNumber* pending_debit);

    SWGNumber* getConfirmedDebit();
    void setConfirmedDebit(SWGNumber* confirmed_debit);

    QDateTime* getTimestamp();
    void setTimestamp(QDateTime* timestamp);


    virtual bool isSet() override;

private:
    SWGNumber* account;
    bool m_account_isSet;

    QString* currency;
    bool m_currency_isSet;

    SWGNumber* deposited;
    bool m_deposited_isSet;

    SWGNumber* withdrawn;
    bool m_withdrawn_isSet;

    SWGNumber* transfer_in;
    bool m_transfer_in_isSet;

    SWGNumber* transfer_out;
    bool m_transfer_out_isSet;

    SWGNumber* amount;
    bool m_amount_isSet;

    SWGNumber* pending_credit;
    bool m_pending_credit_isSet;

    SWGNumber* pending_debit;
    bool m_pending_debit_isSet;

    SWGNumber* confirmed_debit;
    bool m_confirmed_debit_isSet;

    QDateTime* timestamp;
    bool m_timestamp_isSet;

};

}

#endif /* SWGWallet_H_ */
