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

package io.swagger.client;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonParseException;
import com.google.gson.reflect.TypeToken;
import java.lang.reflect.Type;
import java.util.List;
import java.util.Date;
import io.swagger.client.model.*;

public class JsonUtil {
  public static GsonBuilder gsonBuilder;

  static {
    gsonBuilder = new GsonBuilder();
    gsonBuilder.serializeNulls();
    gsonBuilder.setDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZ");
    gsonBuilder.registerTypeAdapter(Date.class, new JsonDeserializer<Date>() {
      public Date deserialize(JsonElement json, Type typeOfT, JsonDeserializationContext context) throws JsonParseException {
        return new Date(json.getAsJsonPrimitive().getAsLong());
      }
    });
  }

  public static Gson getGson() {
    return gsonBuilder.create();
  }

  public static String serialize(Object obj){
    return getGson().toJson(obj);
  }

  public static <T> T deserializeToList(String jsonString, Class cls){
    return getGson().fromJson(jsonString, getListTypeForDeserialization(cls));
  }

  public static <T> T deserializeToObject(String jsonString, Class cls){
    return getGson().fromJson(jsonString, getTypeForDeserialization(cls));
  }

  public static Type getListTypeForDeserialization(Class cls) {
    String className = cls.getSimpleName();
    
    if ("APIKey".equalsIgnoreCase(className)) {
      return new TypeToken<List<APIKey>>(){}.getType();
    }
    
    if ("AccessToken".equalsIgnoreCase(className)) {
      return new TypeToken<List<AccessToken>>(){}.getType();
    }
    
    if ("Address".equalsIgnoreCase(className)) {
      return new TypeToken<List<Address>>(){}.getType();
    }
    
    if ("Affiliate".equalsIgnoreCase(className)) {
      return new TypeToken<List<Affiliate>>(){}.getType();
    }
    
    if ("Announcement".equalsIgnoreCase(className)) {
      return new TypeToken<List<Announcement>>(){}.getType();
    }
    
    if ("AssetsConfig".equalsIgnoreCase(className)) {
      return new TypeToken<List<AssetsConfig>>(){}.getType();
    }
    
    if ("AssetsConfigNetworkItem".equalsIgnoreCase(className)) {
      return new TypeToken<List<AssetsConfigNetworkItem>>(){}.getType();
    }
    
    if ("Chat".equalsIgnoreCase(className)) {
      return new TypeToken<List<Chat>>(){}.getType();
    }
    
    if ("ChatChannel".equalsIgnoreCase(className)) {
      return new TypeToken<List<ChatChannel>>(){}.getType();
    }
    
    if ("CollateralSupportAgreement".equalsIgnoreCase(className)) {
      return new TypeToken<List<CollateralSupportAgreement>>(){}.getType();
    }
    
    if ("CommunicationToken".equalsIgnoreCase(className)) {
      return new TypeToken<List<CommunicationToken>>(){}.getType();
    }
    
    if ("ConnectedUsers".equalsIgnoreCase(className)) {
      return new TypeToken<List<ConnectedUsers>>(){}.getType();
    }
    
    if ("Error".equalsIgnoreCase(className)) {
      return new TypeToken<List<Error>>(){}.getType();
    }
    
    if ("ErrorError".equalsIgnoreCase(className)) {
      return new TypeToken<List<ErrorError>>(){}.getType();
    }
    
    if ("Execution".equalsIgnoreCase(className)) {
      return new TypeToken<List<Execution>>(){}.getType();
    }
    
    if ("Funding".equalsIgnoreCase(className)) {
      return new TypeToken<List<Funding>>(){}.getType();
    }
    
    if ("GlobalNotification".equalsIgnoreCase(className)) {
      return new TypeToken<List<GlobalNotification>>(){}.getType();
    }
    
    if ("Guild".equalsIgnoreCase(className)) {
      return new TypeToken<List<Guild>>(){}.getType();
    }
    
    if ("IndexComposite".equalsIgnoreCase(className)) {
      return new TypeToken<List<IndexComposite>>(){}.getType();
    }
    
    if ("InlineResponse200".equalsIgnoreCase(className)) {
      return new TypeToken<List<InlineResponse200>>(){}.getType();
    }
    
    if ("Instrument".equalsIgnoreCase(className)) {
      return new TypeToken<List<Instrument>>(){}.getType();
    }
    
    if ("InstrumentInterval".equalsIgnoreCase(className)) {
      return new TypeToken<List<InstrumentInterval>>(){}.getType();
    }
    
    if ("Insurance".equalsIgnoreCase(className)) {
      return new TypeToken<List<Insurance>>(){}.getType();
    }
    
    if ("Leaderboard".equalsIgnoreCase(className)) {
      return new TypeToken<List<Leaderboard>>(){}.getType();
    }
    
    if ("Liquidation".equalsIgnoreCase(className)) {
      return new TypeToken<List<Liquidation>>(){}.getType();
    }
    
    if ("Margin".equalsIgnoreCase(className)) {
      return new TypeToken<List<Margin>>(){}.getType();
    }
    
    if ("NetworksConfig".equalsIgnoreCase(className)) {
      return new TypeToken<List<NetworksConfig>>(){}.getType();
    }
    
    if ("Order".equalsIgnoreCase(className)) {
      return new TypeToken<List<Order>>(){}.getType();
    }
    
    if ("OrderBookL2".equalsIgnoreCase(className)) {
      return new TypeToken<List<OrderBookL2>>(){}.getType();
    }
    
    if ("PinnedMessage".equalsIgnoreCase(className)) {
      return new TypeToken<List<PinnedMessage>>(){}.getType();
    }
    
    if ("Porl".equalsIgnoreCase(className)) {
      return new TypeToken<List<Porl>>(){}.getType();
    }
    
    if ("Position".equalsIgnoreCase(className)) {
      return new TypeToken<List<Position>>(){}.getType();
    }
    
    if ("Quote".equalsIgnoreCase(className)) {
      return new TypeToken<List<Quote>>(){}.getType();
    }
    
    if ("QuoteFillRatio".equalsIgnoreCase(className)) {
      return new TypeToken<List<QuoteFillRatio>>(){}.getType();
    }
    
    if ("QuoteValueRatio".equalsIgnoreCase(className)) {
      return new TypeToken<List<QuoteValueRatio>>(){}.getType();
    }
    
    if ("Settlement".equalsIgnoreCase(className)) {
      return new TypeToken<List<Settlement>>(){}.getType();
    }
    
    if ("StakingRecord".equalsIgnoreCase(className)) {
      return new TypeToken<List<StakingRecord>>(){}.getType();
    }
    
    if ("Stats".equalsIgnoreCase(className)) {
      return new TypeToken<List<Stats>>(){}.getType();
    }
    
    if ("StatsHistory".equalsIgnoreCase(className)) {
      return new TypeToken<List<StatsHistory>>(){}.getType();
    }
    
    if ("StatsUSD".equalsIgnoreCase(className)) {
      return new TypeToken<List<StatsUSD>>(){}.getType();
    }
    
    if ("StatsUSDBySymbol".equalsIgnoreCase(className)) {
      return new TypeToken<List<StatsUSDBySymbol>>(){}.getType();
    }
    
    if ("Trade".equalsIgnoreCase(className)) {
      return new TypeToken<List<Trade>>(){}.getType();
    }
    
    if ("TradeBin".equalsIgnoreCase(className)) {
      return new TypeToken<List<TradeBin>>(){}.getType();
    }
    
    if ("TradingVolume".equalsIgnoreCase(className)) {
      return new TypeToken<List<TradingVolume>>(){}.getType();
    }
    
    if ("Transaction".equalsIgnoreCase(className)) {
      return new TypeToken<List<Transaction>>(){}.getType();
    }
    
    if ("User".equalsIgnoreCase(className)) {
      return new TypeToken<List<User>>(){}.getType();
    }
    
    if ("UserCommissionsBySymbol".equalsIgnoreCase(className)) {
      return new TypeToken<List<UserCommissionsBySymbol>>(){}.getType();
    }
    
    if ("UserEvent".equalsIgnoreCase(className)) {
      return new TypeToken<List<UserEvent>>(){}.getType();
    }
    
    if ("UserPreferences".equalsIgnoreCase(className)) {
      return new TypeToken<List<UserPreferences>>(){}.getType();
    }
    
    if ("Wallet".equalsIgnoreCase(className)) {
      return new TypeToken<List<Wallet>>(){}.getType();
    }
    
    if ("XAny".equalsIgnoreCase(className)) {
      return new TypeToken<List<XAny>>(){}.getType();
    }
    
    return new TypeToken<List<Object>>(){}.getType();
  }

  public static Type getTypeForDeserialization(Class cls) {
    String className = cls.getSimpleName();
    
    if ("APIKey".equalsIgnoreCase(className)) {
      return new TypeToken<APIKey>(){}.getType();
    }
    
    if ("AccessToken".equalsIgnoreCase(className)) {
      return new TypeToken<AccessToken>(){}.getType();
    }
    
    if ("Address".equalsIgnoreCase(className)) {
      return new TypeToken<Address>(){}.getType();
    }
    
    if ("Affiliate".equalsIgnoreCase(className)) {
      return new TypeToken<Affiliate>(){}.getType();
    }
    
    if ("Announcement".equalsIgnoreCase(className)) {
      return new TypeToken<Announcement>(){}.getType();
    }
    
    if ("AssetsConfig".equalsIgnoreCase(className)) {
      return new TypeToken<AssetsConfig>(){}.getType();
    }
    
    if ("AssetsConfigNetworkItem".equalsIgnoreCase(className)) {
      return new TypeToken<AssetsConfigNetworkItem>(){}.getType();
    }
    
    if ("Chat".equalsIgnoreCase(className)) {
      return new TypeToken<Chat>(){}.getType();
    }
    
    if ("ChatChannel".equalsIgnoreCase(className)) {
      return new TypeToken<ChatChannel>(){}.getType();
    }
    
    if ("CollateralSupportAgreement".equalsIgnoreCase(className)) {
      return new TypeToken<CollateralSupportAgreement>(){}.getType();
    }
    
    if ("CommunicationToken".equalsIgnoreCase(className)) {
      return new TypeToken<CommunicationToken>(){}.getType();
    }
    
    if ("ConnectedUsers".equalsIgnoreCase(className)) {
      return new TypeToken<ConnectedUsers>(){}.getType();
    }
    
    if ("Error".equalsIgnoreCase(className)) {
      return new TypeToken<Error>(){}.getType();
    }
    
    if ("ErrorError".equalsIgnoreCase(className)) {
      return new TypeToken<ErrorError>(){}.getType();
    }
    
    if ("Execution".equalsIgnoreCase(className)) {
      return new TypeToken<Execution>(){}.getType();
    }
    
    if ("Funding".equalsIgnoreCase(className)) {
      return new TypeToken<Funding>(){}.getType();
    }
    
    if ("GlobalNotification".equalsIgnoreCase(className)) {
      return new TypeToken<GlobalNotification>(){}.getType();
    }
    
    if ("Guild".equalsIgnoreCase(className)) {
      return new TypeToken<Guild>(){}.getType();
    }
    
    if ("IndexComposite".equalsIgnoreCase(className)) {
      return new TypeToken<IndexComposite>(){}.getType();
    }
    
    if ("InlineResponse200".equalsIgnoreCase(className)) {
      return new TypeToken<InlineResponse200>(){}.getType();
    }
    
    if ("Instrument".equalsIgnoreCase(className)) {
      return new TypeToken<Instrument>(){}.getType();
    }
    
    if ("InstrumentInterval".equalsIgnoreCase(className)) {
      return new TypeToken<InstrumentInterval>(){}.getType();
    }
    
    if ("Insurance".equalsIgnoreCase(className)) {
      return new TypeToken<Insurance>(){}.getType();
    }
    
    if ("Leaderboard".equalsIgnoreCase(className)) {
      return new TypeToken<Leaderboard>(){}.getType();
    }
    
    if ("Liquidation".equalsIgnoreCase(className)) {
      return new TypeToken<Liquidation>(){}.getType();
    }
    
    if ("Margin".equalsIgnoreCase(className)) {
      return new TypeToken<Margin>(){}.getType();
    }
    
    if ("NetworksConfig".equalsIgnoreCase(className)) {
      return new TypeToken<NetworksConfig>(){}.getType();
    }
    
    if ("Order".equalsIgnoreCase(className)) {
      return new TypeToken<Order>(){}.getType();
    }
    
    if ("OrderBookL2".equalsIgnoreCase(className)) {
      return new TypeToken<OrderBookL2>(){}.getType();
    }
    
    if ("PinnedMessage".equalsIgnoreCase(className)) {
      return new TypeToken<PinnedMessage>(){}.getType();
    }
    
    if ("Porl".equalsIgnoreCase(className)) {
      return new TypeToken<Porl>(){}.getType();
    }
    
    if ("Position".equalsIgnoreCase(className)) {
      return new TypeToken<Position>(){}.getType();
    }
    
    if ("Quote".equalsIgnoreCase(className)) {
      return new TypeToken<Quote>(){}.getType();
    }
    
    if ("QuoteFillRatio".equalsIgnoreCase(className)) {
      return new TypeToken<QuoteFillRatio>(){}.getType();
    }
    
    if ("QuoteValueRatio".equalsIgnoreCase(className)) {
      return new TypeToken<QuoteValueRatio>(){}.getType();
    }
    
    if ("Settlement".equalsIgnoreCase(className)) {
      return new TypeToken<Settlement>(){}.getType();
    }
    
    if ("StakingRecord".equalsIgnoreCase(className)) {
      return new TypeToken<StakingRecord>(){}.getType();
    }
    
    if ("Stats".equalsIgnoreCase(className)) {
      return new TypeToken<Stats>(){}.getType();
    }
    
    if ("StatsHistory".equalsIgnoreCase(className)) {
      return new TypeToken<StatsHistory>(){}.getType();
    }
    
    if ("StatsUSD".equalsIgnoreCase(className)) {
      return new TypeToken<StatsUSD>(){}.getType();
    }
    
    if ("StatsUSDBySymbol".equalsIgnoreCase(className)) {
      return new TypeToken<StatsUSDBySymbol>(){}.getType();
    }
    
    if ("Trade".equalsIgnoreCase(className)) {
      return new TypeToken<Trade>(){}.getType();
    }
    
    if ("TradeBin".equalsIgnoreCase(className)) {
      return new TypeToken<TradeBin>(){}.getType();
    }
    
    if ("TradingVolume".equalsIgnoreCase(className)) {
      return new TypeToken<TradingVolume>(){}.getType();
    }
    
    if ("Transaction".equalsIgnoreCase(className)) {
      return new TypeToken<Transaction>(){}.getType();
    }
    
    if ("User".equalsIgnoreCase(className)) {
      return new TypeToken<User>(){}.getType();
    }
    
    if ("UserCommissionsBySymbol".equalsIgnoreCase(className)) {
      return new TypeToken<UserCommissionsBySymbol>(){}.getType();
    }
    
    if ("UserEvent".equalsIgnoreCase(className)) {
      return new TypeToken<UserEvent>(){}.getType();
    }
    
    if ("UserPreferences".equalsIgnoreCase(className)) {
      return new TypeToken<UserPreferences>(){}.getType();
    }
    
    if ("Wallet".equalsIgnoreCase(className)) {
      return new TypeToken<Wallet>(){}.getType();
    }
    
    if ("XAny".equalsIgnoreCase(className)) {
      return new TypeToken<XAny>(){}.getType();
    }
    
    return new TypeToken<Object>(){}.getType();
  }

};
