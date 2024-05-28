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
 * PinnedMessage.h
 *
 * Pinned Messages
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_PinnedMessage_H_
#define IO_SWAGGER_CLIENT_MODEL_PinnedMessage_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Pinned Messages
/// </summary>
class  PinnedMessage
    : public ModelBase
{
public:
    PinnedMessage();
    virtual ~PinnedMessage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PinnedMessage members

    /// <summary>
    /// 
    /// </summary>
    double getId() const;
        void setId(double value);
    /// <summary>
    /// 
    /// </summary>
    double getChannelID() const;
        void setChannelID(double value);
    /// <summary>
    /// 
    /// </summary>
    double getMessageId() const;
        void setMessageId(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreated() const;
    bool createdIsSet() const;
    void unsetCreated();
    void setCreated(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getEnded() const;
    bool endedIsSet() const;
    void unsetEnded();
    void setEnded(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    double getCreatedUserId() const;
    bool createdUserIdIsSet() const;
    void unsetCreatedUserId();
    void setCreatedUserId(double value);
    /// <summary>
    /// 
    /// </summary>
    double getEndedUserId() const;
    bool endedUserIdIsSet() const;
    void unsetEndedUserId();
    void setEndedUserId(double value);

protected:
    double m_Id;
        double m_ChannelID;
        double m_MessageId;
        utility::datetime m_Created;
    bool m_CreatedIsSet;
    utility::datetime m_Ended;
    bool m_EndedIsSet;
    double m_CreatedUserId;
    bool m_CreatedUserIdIsSet;
    double m_EndedUserId;
    bool m_EndedUserIdIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_PinnedMessage_H_ */
