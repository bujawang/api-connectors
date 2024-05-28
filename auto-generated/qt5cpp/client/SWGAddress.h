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
 * SWGAddress.h
 *
 * 
 */

#ifndef SWGAddress_H_
#define SWGAddress_H_

#include <QJsonObject>


#include "SWGNumber.h"
#include <QDateTime>
#include <QString>

#include "SWGObject.h"

namespace Swagger {

class SWGAddress: public SWGObject {
public:
    SWGAddress();
    SWGAddress(QString json);
    ~SWGAddress();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    SWGAddress* fromJson(QString jsonString) override;

    SWGNumber* getId();
    void setId(SWGNumber* id);

    QString* getCurrency();
    void setCurrency(QString* currency);

    QDateTime* getCreated();
    void setCreated(QDateTime* created);

    double getUserId();
    void setUserId(double user_id);

    QString* getAddress();
    void setAddress(QString* address);

    QString* getName();
    void setName(QString* name);

    QString* getNote();
    void setNote(QString* note);

    bool isSkipConfirm();
    void setSkipConfirm(bool skip_confirm);

    bool isSkipConfirmVerified();
    void setSkipConfirmVerified(bool skip_confirm_verified);

    bool isSkip2Fa();
    void setSkip2Fa(bool skip2_fa);

    bool isSkip2FaVerified();
    void setSkip2FaVerified(bool skip2_fa_verified);

    QString* getNetwork();
    void setNetwork(QString* network);

    QString* getMemo();
    void setMemo(QString* memo);


    virtual bool isSet() override;

private:
    SWGNumber* id;
    bool m_id_isSet;

    QString* currency;
    bool m_currency_isSet;

    QDateTime* created;
    bool m_created_isSet;

    double user_id;
    bool m_user_id_isSet;

    QString* address;
    bool m_address_isSet;

    QString* name;
    bool m_name_isSet;

    QString* note;
    bool m_note_isSet;

    bool skip_confirm;
    bool m_skip_confirm_isSet;

    bool skip_confirm_verified;
    bool m_skip_confirm_verified_isSet;

    bool skip2_fa;
    bool m_skip2_fa_isSet;

    bool skip2_fa_verified;
    bool m_skip2_fa_verified_isSet;

    QString* network;
    bool m_network_isSet;

    QString* memo;
    bool m_memo_isSet;

};

}

#endif /* SWGAddress_H_ */
