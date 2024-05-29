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

/*
 * Guild.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Guild_H_
#define IO_SWAGGER_CLIENT_MODEL_Guild_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Guild
    : public ModelBase
{
public:
    Guild();
    virtual ~Guild();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Guild members

    /// <summary>
    /// 
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreated() const;
        void setCreated(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getUpdated() const;
        void setUpdated(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    bool isArchived() const;
    bool archivedIsSet() const;
    void unsetArchived();
    void setArchived(bool value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getImgUrl() const;
    bool imgUrlIsSet() const;
    void unsetImgUrl();
    void setImgUrl(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMobileHeroImgUrl() const;
    bool mobileHeroImgUrlIsSet() const;
    void unsetMobileHeroImgUrl();
    void setMobileHeroImgUrl(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEmoji() const;
    bool emojiIsSet() const;
    void unsetEmoji();
    void setEmoji(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLogoUrl() const;
    bool logoUrlIsSet() const;
    void unsetLogoUrl();
    void setLogoUrl(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();
    void setDescription(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getChatChannelId() const;
        void setChatChannelId(double value);
    /// <summary>
    /// 
    /// </summary>
    bool isIsPrivate() const;
        void setIsPrivate(bool value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAffiliateId() const;
    bool affiliateIdIsSet() const;
    void unsetAffiliateId();
    void setAffiliateId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getPotDistributionPreferences() const;
    bool potDistributionPreferencesIsSet() const;
    void unsetPotDistributionPreferences();
    void setPotDistributionPreferences(std::shared_ptr<Object> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getSocials() const;
    bool socialsIsSet() const;
    void unsetSocials();
    void setSocials(std::shared_ptr<Object> value);
    /// <summary>
    /// 
    /// </summary>
    bool isDeleted() const;
    bool deletedIsSet() const;
    void unsetDeleted();
    void setDeleted(bool value);

protected:
    int32_t m_Id;
    bool m_IdIsSet;
    utility::datetime m_Created;
        utility::datetime m_Updated;
        bool m_Archived;
    bool m_ArchivedIsSet;
    utility::string_t m_Name;
        utility::string_t m_ImgUrl;
    bool m_ImgUrlIsSet;
    utility::string_t m_MobileHeroImgUrl;
    bool m_MobileHeroImgUrlIsSet;
    utility::string_t m_Emoji;
    bool m_EmojiIsSet;
    utility::string_t m_LogoUrl;
    bool m_LogoUrlIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    double m_ChatChannelId;
        bool m_IsPrivate;
        utility::string_t m_AffiliateId;
    bool m_AffiliateIdIsSet;
    std::shared_ptr<Object> m_PotDistributionPreferences;
    bool m_PotDistributionPreferencesIsSet;
    std::shared_ptr<Object> m_Socials;
    bool m_SocialsIsSet;
    bool m_Deleted;
    bool m_DeletedIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Guild_H_ */
