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



#include "Affiliate.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Affiliate::Affiliate()
{
    m_Account = 0.0;
    m_Currency = utility::conversions::to_string_t("");
    m_PrevPayout = 0.0;
    m_PrevPayoutIsSet = false;
    m_PrevTurnover = 0.0;
    m_PrevTurnoverIsSet = false;
    m_PrevComm = 0.0;
    m_PrevCommIsSet = false;
    m_PrevTimestamp = utility::datetime();
    m_PrevTimestampIsSet = false;
    m_ExecTurnover = 0.0;
    m_ExecTurnoverIsSet = false;
    m_ExecComm = 0.0;
    m_ExecCommIsSet = false;
    m_TotalReferrals = 0.0;
    m_TotalReferralsIsSet = false;
    m_TotalTurnover = 0.0;
    m_TotalTurnoverIsSet = false;
    m_TotalComm = 0.0;
    m_TotalCommIsSet = false;
    m_PayoutPcnt = 0.0;
    m_PayoutPcntIsSet = false;
    m_PendingPayout = 0.0;
    m_PendingPayoutIsSet = false;
    m_Timestamp = utility::datetime();
    m_TimestampIsSet = false;
    m_ReferrerAccount = 0.0;
    m_ReferrerAccountIsSet = false;
    m_ReferralDiscount = 0.0;
    m_ReferralDiscountIsSet = false;
    m_AffiliatePayout = 0.0;
    m_AffiliatePayoutIsSet = false;
}

Affiliate::~Affiliate()
{
}

void Affiliate::validate()
{
    // TODO: implement validation
}

web::json::value Affiliate::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("account")] = ModelBase::toJson(m_Account);
    val[utility::conversions::to_string_t("currency")] = ModelBase::toJson(m_Currency);
    if(m_PrevPayoutIsSet)
    {
        val[utility::conversions::to_string_t("prevPayout")] = ModelBase::toJson(m_PrevPayout);
    }
    if(m_PrevTurnoverIsSet)
    {
        val[utility::conversions::to_string_t("prevTurnover")] = ModelBase::toJson(m_PrevTurnover);
    }
    if(m_PrevCommIsSet)
    {
        val[utility::conversions::to_string_t("prevComm")] = ModelBase::toJson(m_PrevComm);
    }
    if(m_PrevTimestampIsSet)
    {
        val[utility::conversions::to_string_t("prevTimestamp")] = ModelBase::toJson(m_PrevTimestamp);
    }
    if(m_ExecTurnoverIsSet)
    {
        val[utility::conversions::to_string_t("execTurnover")] = ModelBase::toJson(m_ExecTurnover);
    }
    if(m_ExecCommIsSet)
    {
        val[utility::conversions::to_string_t("execComm")] = ModelBase::toJson(m_ExecComm);
    }
    if(m_TotalReferralsIsSet)
    {
        val[utility::conversions::to_string_t("totalReferrals")] = ModelBase::toJson(m_TotalReferrals);
    }
    if(m_TotalTurnoverIsSet)
    {
        val[utility::conversions::to_string_t("totalTurnover")] = ModelBase::toJson(m_TotalTurnover);
    }
    if(m_TotalCommIsSet)
    {
        val[utility::conversions::to_string_t("totalComm")] = ModelBase::toJson(m_TotalComm);
    }
    if(m_PayoutPcntIsSet)
    {
        val[utility::conversions::to_string_t("payoutPcnt")] = ModelBase::toJson(m_PayoutPcnt);
    }
    if(m_PendingPayoutIsSet)
    {
        val[utility::conversions::to_string_t("pendingPayout")] = ModelBase::toJson(m_PendingPayout);
    }
    if(m_TimestampIsSet)
    {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(m_Timestamp);
    }
    if(m_ReferrerAccountIsSet)
    {
        val[utility::conversions::to_string_t("referrerAccount")] = ModelBase::toJson(m_ReferrerAccount);
    }
    if(m_ReferralDiscountIsSet)
    {
        val[utility::conversions::to_string_t("referralDiscount")] = ModelBase::toJson(m_ReferralDiscount);
    }
    if(m_AffiliatePayoutIsSet)
    {
        val[utility::conversions::to_string_t("affiliatePayout")] = ModelBase::toJson(m_AffiliatePayout);
    }

    return val;
}

void Affiliate::fromJson(web::json::value& val)
{
    setAccount(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("account")]));
    setCurrency(ModelBase::stringFromJson(val[utility::conversions::to_string_t("currency")]));
    if(val.has_field(utility::conversions::to_string_t("prevPayout")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("prevPayout")];
        if(!fieldValue.is_null())
        {
            setPrevPayout(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prevTurnover")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("prevTurnover")];
        if(!fieldValue.is_null())
        {
            setPrevTurnover(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prevComm")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("prevComm")];
        if(!fieldValue.is_null())
        {
            setPrevComm(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prevTimestamp")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("prevTimestamp")];
        if(!fieldValue.is_null())
        {
            setPrevTimestamp(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execTurnover")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("execTurnover")];
        if(!fieldValue.is_null())
        {
            setExecTurnover(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execComm")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("execComm")];
        if(!fieldValue.is_null())
        {
            setExecComm(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalReferrals")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("totalReferrals")];
        if(!fieldValue.is_null())
        {
            setTotalReferrals(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalTurnover")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("totalTurnover")];
        if(!fieldValue.is_null())
        {
            setTotalTurnover(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalComm")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("totalComm")];
        if(!fieldValue.is_null())
        {
            setTotalComm(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("payoutPcnt")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("payoutPcnt")];
        if(!fieldValue.is_null())
        {
            setPayoutPcnt(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pendingPayout")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("pendingPayout")];
        if(!fieldValue.is_null())
        {
            setPendingPayout(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("timestamp")];
        if(!fieldValue.is_null())
        {
            setTimestamp(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("referrerAccount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("referrerAccount")];
        if(!fieldValue.is_null())
        {
            setReferrerAccount(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("referralDiscount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("referralDiscount")];
        if(!fieldValue.is_null())
        {
            setReferralDiscount(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affiliatePayout")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("affiliatePayout")];
        if(!fieldValue.is_null())
        {
            setAffiliatePayout(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void Affiliate::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("account"), m_Account));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currency"), m_Currency));
    if(m_PrevPayoutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("prevPayout"), m_PrevPayout));
    }
    if(m_PrevTurnoverIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("prevTurnover"), m_PrevTurnover));
    }
    if(m_PrevCommIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("prevComm"), m_PrevComm));
    }
    if(m_PrevTimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("prevTimestamp"), m_PrevTimestamp));
        
    }
    if(m_ExecTurnoverIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("execTurnover"), m_ExecTurnover));
    }
    if(m_ExecCommIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("execComm"), m_ExecComm));
    }
    if(m_TotalReferralsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("totalReferrals"), m_TotalReferrals));
    }
    if(m_TotalTurnoverIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("totalTurnover"), m_TotalTurnover));
    }
    if(m_TotalCommIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("totalComm"), m_TotalComm));
    }
    if(m_PayoutPcntIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("payoutPcnt"), m_PayoutPcnt));
    }
    if(m_PendingPayoutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pendingPayout"), m_PendingPayout));
    }
    if(m_TimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timestamp"), m_Timestamp));
        
    }
    if(m_ReferrerAccountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("referrerAccount"), m_ReferrerAccount));
    }
    if(m_ReferralDiscountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("referralDiscount"), m_ReferralDiscount));
    }
    if(m_AffiliatePayoutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("affiliatePayout"), m_AffiliatePayout));
    }
}

void Affiliate::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setAccount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("account"))));
    setCurrency(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("currency"))));
    if(multipart->hasContent(utility::conversions::to_string_t("prevPayout")))
    {
        setPrevPayout(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("prevPayout"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("prevTurnover")))
    {
        setPrevTurnover(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("prevTurnover"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("prevComm")))
    {
        setPrevComm(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("prevComm"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("prevTimestamp")))
    {
        setPrevTimestamp(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("prevTimestamp"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("execTurnover")))
    {
        setExecTurnover(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("execTurnover"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("execComm")))
    {
        setExecComm(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("execComm"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("totalReferrals")))
    {
        setTotalReferrals(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("totalReferrals"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("totalTurnover")))
    {
        setTotalTurnover(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("totalTurnover"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("totalComm")))
    {
        setTotalComm(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("totalComm"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("payoutPcnt")))
    {
        setPayoutPcnt(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("payoutPcnt"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pendingPayout")))
    {
        setPendingPayout(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("pendingPayout"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("timestamp")))
    {
        setTimestamp(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timestamp"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("referrerAccount")))
    {
        setReferrerAccount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("referrerAccount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("referralDiscount")))
    {
        setReferralDiscount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("referralDiscount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("affiliatePayout")))
    {
        setAffiliatePayout(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("affiliatePayout"))));
    }
}

double Affiliate::getAccount() const
{
    return m_Account;
}


void Affiliate::setAccount(double value)
{
    m_Account = value;
    
}
utility::string_t Affiliate::getCurrency() const
{
    return m_Currency;
}


void Affiliate::setCurrency(utility::string_t value)
{
    m_Currency = value;
    
}
double Affiliate::getPrevPayout() const
{
    return m_PrevPayout;
}


void Affiliate::setPrevPayout(double value)
{
    m_PrevPayout = value;
    m_PrevPayoutIsSet = true;
}
bool Affiliate::prevPayoutIsSet() const
{
    return m_PrevPayoutIsSet;
}

void Affiliate::unsetPrevPayout()
{
    m_PrevPayoutIsSet = false;
}

double Affiliate::getPrevTurnover() const
{
    return m_PrevTurnover;
}


void Affiliate::setPrevTurnover(double value)
{
    m_PrevTurnover = value;
    m_PrevTurnoverIsSet = true;
}
bool Affiliate::prevTurnoverIsSet() const
{
    return m_PrevTurnoverIsSet;
}

void Affiliate::unsetPrevTurnover()
{
    m_PrevTurnoverIsSet = false;
}

double Affiliate::getPrevComm() const
{
    return m_PrevComm;
}


void Affiliate::setPrevComm(double value)
{
    m_PrevComm = value;
    m_PrevCommIsSet = true;
}
bool Affiliate::prevCommIsSet() const
{
    return m_PrevCommIsSet;
}

void Affiliate::unsetPrevComm()
{
    m_PrevCommIsSet = false;
}

utility::datetime Affiliate::getPrevTimestamp() const
{
    return m_PrevTimestamp;
}


void Affiliate::setPrevTimestamp(utility::datetime value)
{
    m_PrevTimestamp = value;
    m_PrevTimestampIsSet = true;
}
bool Affiliate::prevTimestampIsSet() const
{
    return m_PrevTimestampIsSet;
}

void Affiliate::unsetPrevTimestamp()
{
    m_PrevTimestampIsSet = false;
}

double Affiliate::getExecTurnover() const
{
    return m_ExecTurnover;
}


void Affiliate::setExecTurnover(double value)
{
    m_ExecTurnover = value;
    m_ExecTurnoverIsSet = true;
}
bool Affiliate::execTurnoverIsSet() const
{
    return m_ExecTurnoverIsSet;
}

void Affiliate::unsetExecTurnover()
{
    m_ExecTurnoverIsSet = false;
}

double Affiliate::getExecComm() const
{
    return m_ExecComm;
}


void Affiliate::setExecComm(double value)
{
    m_ExecComm = value;
    m_ExecCommIsSet = true;
}
bool Affiliate::execCommIsSet() const
{
    return m_ExecCommIsSet;
}

void Affiliate::unsetExecComm()
{
    m_ExecCommIsSet = false;
}

double Affiliate::getTotalReferrals() const
{
    return m_TotalReferrals;
}


void Affiliate::setTotalReferrals(double value)
{
    m_TotalReferrals = value;
    m_TotalReferralsIsSet = true;
}
bool Affiliate::totalReferralsIsSet() const
{
    return m_TotalReferralsIsSet;
}

void Affiliate::unsetTotalReferrals()
{
    m_TotalReferralsIsSet = false;
}

double Affiliate::getTotalTurnover() const
{
    return m_TotalTurnover;
}


void Affiliate::setTotalTurnover(double value)
{
    m_TotalTurnover = value;
    m_TotalTurnoverIsSet = true;
}
bool Affiliate::totalTurnoverIsSet() const
{
    return m_TotalTurnoverIsSet;
}

void Affiliate::unsetTotalTurnover()
{
    m_TotalTurnoverIsSet = false;
}

double Affiliate::getTotalComm() const
{
    return m_TotalComm;
}


void Affiliate::setTotalComm(double value)
{
    m_TotalComm = value;
    m_TotalCommIsSet = true;
}
bool Affiliate::totalCommIsSet() const
{
    return m_TotalCommIsSet;
}

void Affiliate::unsetTotalComm()
{
    m_TotalCommIsSet = false;
}

double Affiliate::getPayoutPcnt() const
{
    return m_PayoutPcnt;
}


void Affiliate::setPayoutPcnt(double value)
{
    m_PayoutPcnt = value;
    m_PayoutPcntIsSet = true;
}
bool Affiliate::payoutPcntIsSet() const
{
    return m_PayoutPcntIsSet;
}

void Affiliate::unsetPayoutPcnt()
{
    m_PayoutPcntIsSet = false;
}

double Affiliate::getPendingPayout() const
{
    return m_PendingPayout;
}


void Affiliate::setPendingPayout(double value)
{
    m_PendingPayout = value;
    m_PendingPayoutIsSet = true;
}
bool Affiliate::pendingPayoutIsSet() const
{
    return m_PendingPayoutIsSet;
}

void Affiliate::unsetPendingPayout()
{
    m_PendingPayoutIsSet = false;
}

utility::datetime Affiliate::getTimestamp() const
{
    return m_Timestamp;
}


void Affiliate::setTimestamp(utility::datetime value)
{
    m_Timestamp = value;
    m_TimestampIsSet = true;
}
bool Affiliate::timestampIsSet() const
{
    return m_TimestampIsSet;
}

void Affiliate::unsetTimestamp()
{
    m_TimestampIsSet = false;
}

double Affiliate::getReferrerAccount() const
{
    return m_ReferrerAccount;
}


void Affiliate::setReferrerAccount(double value)
{
    m_ReferrerAccount = value;
    m_ReferrerAccountIsSet = true;
}
bool Affiliate::referrerAccountIsSet() const
{
    return m_ReferrerAccountIsSet;
}

void Affiliate::unsetReferrerAccount()
{
    m_ReferrerAccountIsSet = false;
}

double Affiliate::getReferralDiscount() const
{
    return m_ReferralDiscount;
}


void Affiliate::setReferralDiscount(double value)
{
    m_ReferralDiscount = value;
    m_ReferralDiscountIsSet = true;
}
bool Affiliate::referralDiscountIsSet() const
{
    return m_ReferralDiscountIsSet;
}

void Affiliate::unsetReferralDiscount()
{
    m_ReferralDiscountIsSet = false;
}

double Affiliate::getAffiliatePayout() const
{
    return m_AffiliatePayout;
}


void Affiliate::setAffiliatePayout(double value)
{
    m_AffiliatePayout = value;
    m_AffiliatePayoutIsSet = true;
}
bool Affiliate::affiliatePayoutIsSet() const
{
    return m_AffiliatePayoutIsSet;
}

void Affiliate::unsetAffiliatePayout()
{
    m_AffiliatePayoutIsSet = false;
}

}
}
}
}

