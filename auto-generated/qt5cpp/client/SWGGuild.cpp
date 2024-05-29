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


#include "SWGGuild.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGGuild::SWGGuild(QString json) {
    init();
    this->fromJson(json);
}

SWGGuild::SWGGuild() {
    init();
}

SWGGuild::~SWGGuild() {
    this->cleanup();
}

void
SWGGuild::init() {
    id = 0;
    m_id_isSet = false;
    created = NULL;
    m_created_isSet = false;
    updated = NULL;
    m_updated_isSet = false;
    archived = false;
    m_archived_isSet = false;
    name = new QString("");
    m_name_isSet = false;
    img_url = new QString("");
    m_img_url_isSet = false;
    mobile_hero_img_url = new QString("");
    m_mobile_hero_img_url_isSet = false;
    emoji = new QString("");
    m_emoji_isSet = false;
    logo_url = new QString("");
    m_logo_url_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    chat_channel_id = 0.0;
    m_chat_channel_id_isSet = false;
    is_private = false;
    m_is_private_isSet = false;
    affiliate_id = new QString("");
    m_affiliate_id_isSet = false;
    pot_distribution_preferences = NULL;
    m_pot_distribution_preferences_isSet = false;
    socials = NULL;
    m_socials_isSet = false;
    deleted = false;
    m_deleted_isSet = false;
}

void
SWGGuild::cleanup() {

    if(created != nullptr) { 
        delete created;
    }
    if(updated != nullptr) { 
        delete updated;
    }

    if(name != nullptr) { 
        delete name;
    }
    if(img_url != nullptr) { 
        delete img_url;
    }
    if(mobile_hero_img_url != nullptr) { 
        delete mobile_hero_img_url;
    }
    if(emoji != nullptr) { 
        delete emoji;
    }
    if(logo_url != nullptr) { 
        delete logo_url;
    }
    if(description != nullptr) { 
        delete description;
    }


    if(affiliate_id != nullptr) { 
        delete affiliate_id;
    }
    if(pot_distribution_preferences != nullptr) { 
        delete pot_distribution_preferences;
    }
    if(socials != nullptr) { 
        delete socials;
    }

}

SWGGuild*
SWGGuild::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGGuild::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&id, pJson["id"], "qint32", "");
    
    ::Swagger::setValue(&created, pJson["created"], "QDateTime", "QDateTime");
    
    ::Swagger::setValue(&updated, pJson["updated"], "QDateTime", "QDateTime");
    
    ::Swagger::setValue(&archived, pJson["archived"], "bool", "");
    
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    
    ::Swagger::setValue(&img_url, pJson["imgUrl"], "QString", "QString");
    
    ::Swagger::setValue(&mobile_hero_img_url, pJson["mobileHeroImgUrl"], "QString", "QString");
    
    ::Swagger::setValue(&emoji, pJson["emoji"], "QString", "QString");
    
    ::Swagger::setValue(&logo_url, pJson["logoUrl"], "QString", "QString");
    
    ::Swagger::setValue(&description, pJson["description"], "QString", "QString");
    
    ::Swagger::setValue(&chat_channel_id, pJson["chatChannelId"], "double", "");
    
    ::Swagger::setValue(&is_private, pJson["isPrivate"], "bool", "");
    
    ::Swagger::setValue(&affiliate_id, pJson["affiliateId"], "QString", "QString");
    
    ::Swagger::setValue(&pot_distribution_preferences, pJson["potDistributionPreferences"], "SWGObject", "SWGObject");
    
    ::Swagger::setValue(&socials, pJson["socials"], "SWGObject", "SWGObject");
    
    ::Swagger::setValue(&deleted, pJson["deleted"], "bool", "");
    
}

QString
SWGGuild::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGGuild::asJsonObject() {
    QJsonObject obj;
    if(m_id_isSet){
        obj.insert("id", QJsonValue(id));
    }
    if(created != nullptr) { 
        toJsonValue(QString("created"), created, obj, QString("QDateTime"));
    }
    if(updated != nullptr) { 
        toJsonValue(QString("updated"), updated, obj, QString("QDateTime"));
    }
    if(m_archived_isSet){
        obj.insert("archived", QJsonValue(archived));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(img_url != nullptr && *img_url != QString("")){
        toJsonValue(QString("imgUrl"), img_url, obj, QString("QString"));
    }
    if(mobile_hero_img_url != nullptr && *mobile_hero_img_url != QString("")){
        toJsonValue(QString("mobileHeroImgUrl"), mobile_hero_img_url, obj, QString("QString"));
    }
    if(emoji != nullptr && *emoji != QString("")){
        toJsonValue(QString("emoji"), emoji, obj, QString("QString"));
    }
    if(logo_url != nullptr && *logo_url != QString("")){
        toJsonValue(QString("logoUrl"), logo_url, obj, QString("QString"));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }
    if(m_chat_channel_id_isSet){
        obj.insert("chatChannelId", QJsonValue(chat_channel_id));
    }
    if(m_is_private_isSet){
        obj.insert("isPrivate", QJsonValue(is_private));
    }
    if(affiliate_id != nullptr && *affiliate_id != QString("")){
        toJsonValue(QString("affiliateId"), affiliate_id, obj, QString("QString"));
    }
    if((pot_distribution_preferences != nullptr) && (pot_distribution_preferences->isSet())){
        toJsonValue(QString("potDistributionPreferences"), pot_distribution_preferences, obj, QString("SWGObject"));
    }
    if((socials != nullptr) && (socials->isSet())){
        toJsonValue(QString("socials"), socials, obj, QString("SWGObject"));
    }
    if(m_deleted_isSet){
        obj.insert("deleted", QJsonValue(deleted));
    }

    return obj;
}

qint32
SWGGuild::getId() {
    return id;
}
void
SWGGuild::setId(qint32 id) {
    this->id = id;
    this->m_id_isSet = true;
}

QDateTime*
SWGGuild::getCreated() {
    return created;
}
void
SWGGuild::setCreated(QDateTime* created) {
    this->created = created;
    this->m_created_isSet = true;
}

QDateTime*
SWGGuild::getUpdated() {
    return updated;
}
void
SWGGuild::setUpdated(QDateTime* updated) {
    this->updated = updated;
    this->m_updated_isSet = true;
}

bool
SWGGuild::isArchived() {
    return archived;
}
void
SWGGuild::setArchived(bool archived) {
    this->archived = archived;
    this->m_archived_isSet = true;
}

QString*
SWGGuild::getName() {
    return name;
}
void
SWGGuild::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

QString*
SWGGuild::getImgUrl() {
    return img_url;
}
void
SWGGuild::setImgUrl(QString* img_url) {
    this->img_url = img_url;
    this->m_img_url_isSet = true;
}

QString*
SWGGuild::getMobileHeroImgUrl() {
    return mobile_hero_img_url;
}
void
SWGGuild::setMobileHeroImgUrl(QString* mobile_hero_img_url) {
    this->mobile_hero_img_url = mobile_hero_img_url;
    this->m_mobile_hero_img_url_isSet = true;
}

QString*
SWGGuild::getEmoji() {
    return emoji;
}
void
SWGGuild::setEmoji(QString* emoji) {
    this->emoji = emoji;
    this->m_emoji_isSet = true;
}

QString*
SWGGuild::getLogoUrl() {
    return logo_url;
}
void
SWGGuild::setLogoUrl(QString* logo_url) {
    this->logo_url = logo_url;
    this->m_logo_url_isSet = true;
}

QString*
SWGGuild::getDescription() {
    return description;
}
void
SWGGuild::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

double
SWGGuild::getChatChannelId() {
    return chat_channel_id;
}
void
SWGGuild::setChatChannelId(double chat_channel_id) {
    this->chat_channel_id = chat_channel_id;
    this->m_chat_channel_id_isSet = true;
}

bool
SWGGuild::isIsPrivate() {
    return is_private;
}
void
SWGGuild::setIsPrivate(bool is_private) {
    this->is_private = is_private;
    this->m_is_private_isSet = true;
}

QString*
SWGGuild::getAffiliateId() {
    return affiliate_id;
}
void
SWGGuild::setAffiliateId(QString* affiliate_id) {
    this->affiliate_id = affiliate_id;
    this->m_affiliate_id_isSet = true;
}

SWGObject*
SWGGuild::getPotDistributionPreferences() {
    return pot_distribution_preferences;
}
void
SWGGuild::setPotDistributionPreferences(SWGObject* pot_distribution_preferences) {
    this->pot_distribution_preferences = pot_distribution_preferences;
    this->m_pot_distribution_preferences_isSet = true;
}

SWGObject*
SWGGuild::getSocials() {
    return socials;
}
void
SWGGuild::setSocials(SWGObject* socials) {
    this->socials = socials;
    this->m_socials_isSet = true;
}

bool
SWGGuild::isDeleted() {
    return deleted;
}
void
SWGGuild::setDeleted(bool deleted) {
    this->deleted = deleted;
    this->m_deleted_isSet = true;
}


bool
SWGGuild::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_id_isSet){ isObjectUpdated = true; break;}
        
        
        if(m_archived_isSet){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(img_url != nullptr && *img_url != QString("")){ isObjectUpdated = true; break;}
        if(mobile_hero_img_url != nullptr && *mobile_hero_img_url != QString("")){ isObjectUpdated = true; break;}
        if(emoji != nullptr && *emoji != QString("")){ isObjectUpdated = true; break;}
        if(logo_url != nullptr && *logo_url != QString("")){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
        if(m_chat_channel_id_isSet){ isObjectUpdated = true; break;}
        if(m_is_private_isSet){ isObjectUpdated = true; break;}
        if(affiliate_id != nullptr && *affiliate_id != QString("")){ isObjectUpdated = true; break;}
        if(pot_distribution_preferences != nullptr && pot_distribution_preferences->isSet()){ isObjectUpdated = true; break;}
        if(socials != nullptr && socials->isSet()){ isObjectUpdated = true; break;}
        if(m_deleted_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

