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
 * SWGUser.h
 *
 * Account Operations
 */

#ifndef SWGUser_H_
#define SWGUser_H_

#include <QJsonObject>


#include "SWGNumber.h"
#include "SWGUserPreferences.h"
#include <QDateTime>
#include <QString>

#include "SWGObject.h"

namespace Swagger {

class SWGUser: public SWGObject {
public:
    SWGUser();
    SWGUser(QString json);
    ~SWGUser();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    SWGUser* fromJson(QString jsonString) override;

    SWGNumber* getId();
    void setId(SWGNumber* id);

    QString* getFirstname();
    void setFirstname(QString* firstname);

    QString* getLastname();
    void setLastname(QString* lastname);

    QString* getUsername();
    void setUsername(QString* username);

    QString* getAccountName();
    void setAccountName(QString* account_name);

    bool isIsUser();
    void setIsUser(bool is_user);

    QString* getEmail();
    void setEmail(QString* email);

    QString* getDateOfBirth();
    void setDateOfBirth(QString* date_of_birth);

    QString* getPhone();
    void setPhone(QString* phone);

    QDateTime* getCreated();
    void setCreated(QDateTime* created);

    QDateTime* getLastUpdated();
    void setLastUpdated(QDateTime* last_updated);

    SWGUserPreferences* getPreferences();
    void setPreferences(SWGUserPreferences* preferences);

    QString* getTfaEnabled();
    void setTfaEnabled(QString* tfa_enabled);

    QString* getAffiliateId();
    void setAffiliateId(QString* affiliate_id);

    QString* getCountry();
    void setCountry(QString* country);

    QString* getGeoipCountry();
    void setGeoipCountry(QString* geoip_country);

    QString* getGeoipRegion();
    void setGeoipRegion(QString* geoip_region);

    QDateTime* getFirstTradeTimestamp();
    void setFirstTradeTimestamp(QDateTime* first_trade_timestamp);

    QString* getTyp();
    void setTyp(QString* typ);


    virtual bool isSet() override;

private:
    SWGNumber* id;
    bool m_id_isSet;

    QString* firstname;
    bool m_firstname_isSet;

    QString* lastname;
    bool m_lastname_isSet;

    QString* username;
    bool m_username_isSet;

    QString* account_name;
    bool m_account_name_isSet;

    bool is_user;
    bool m_is_user_isSet;

    QString* email;
    bool m_email_isSet;

    QString* date_of_birth;
    bool m_date_of_birth_isSet;

    QString* phone;
    bool m_phone_isSet;

    QDateTime* created;
    bool m_created_isSet;

    QDateTime* last_updated;
    bool m_last_updated_isSet;

    SWGUserPreferences* preferences;
    bool m_preferences_isSet;

    QString* tfa_enabled;
    bool m_tfa_enabled_isSet;

    QString* affiliate_id;
    bool m_affiliate_id_isSet;

    QString* country;
    bool m_country_isSet;

    QString* geoip_country;
    bool m_geoip_country_isSet;

    QString* geoip_region;
    bool m_geoip_region_isSet;

    QDateTime* first_trade_timestamp;
    bool m_first_trade_timestamp_isSet;

    QString* typ;
    bool m_typ_isSet;

};

}

#endif /* SWGUser_H_ */
