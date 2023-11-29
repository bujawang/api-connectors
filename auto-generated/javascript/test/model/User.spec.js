/*
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  _If you are building automated tools, please subscribe to the_ _[BitMEX API RSS Feed](https://blog.bitmex.com/api_announcement/feed/) for changes. The feed will be updated_ _regularly and is the most reliable way to get downtime and update announcements._  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.4.38-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.BitMexApi);
  }
}(this, function(expect, BitMexApi) {
  'use strict';

  var instance;

  describe('(package)', function() {
    describe('User', function() {
      beforeEach(function() {
        instance = new BitMexApi.User();
      });

      it('should create an instance of User', function() {
        // TODO: update the code to test User
        expect(instance).to.be.a(BitMexApi.User);
      });

      it('should have the property id (base name: "id")', function() {
        // TODO: update the code to test the property id
        expect(instance).to.have.property('id');
        // expect(instance.id).to.be(expectedValueLiteral);
      });

      it('should have the property firstname (base name: "firstname")', function() {
        // TODO: update the code to test the property firstname
        expect(instance).to.have.property('firstname');
        // expect(instance.firstname).to.be(expectedValueLiteral);
      });

      it('should have the property lastname (base name: "lastname")', function() {
        // TODO: update the code to test the property lastname
        expect(instance).to.have.property('lastname');
        // expect(instance.lastname).to.be(expectedValueLiteral);
      });

      it('should have the property username (base name: "username")', function() {
        // TODO: update the code to test the property username
        expect(instance).to.have.property('username');
        // expect(instance.username).to.be(expectedValueLiteral);
      });

      it('should have the property accountName (base name: "accountName")', function() {
        // TODO: update the code to test the property accountName
        expect(instance).to.have.property('accountName');
        // expect(instance.accountName).to.be(expectedValueLiteral);
      });

      it('should have the property isUser (base name: "isUser")', function() {
        // TODO: update the code to test the property isUser
        expect(instance).to.have.property('isUser');
        // expect(instance.isUser).to.be(expectedValueLiteral);
      });

      it('should have the property email (base name: "email")', function() {
        // TODO: update the code to test the property email
        expect(instance).to.have.property('email');
        // expect(instance.email).to.be(expectedValueLiteral);
      });

      it('should have the property dateOfBirth (base name: "dateOfBirth")', function() {
        // TODO: update the code to test the property dateOfBirth
        expect(instance).to.have.property('dateOfBirth');
        // expect(instance.dateOfBirth).to.be(expectedValueLiteral);
      });

      it('should have the property phone (base name: "phone")', function() {
        // TODO: update the code to test the property phone
        expect(instance).to.have.property('phone');
        // expect(instance.phone).to.be(expectedValueLiteral);
      });

      it('should have the property created (base name: "created")', function() {
        // TODO: update the code to test the property created
        expect(instance).to.have.property('created');
        // expect(instance.created).to.be(expectedValueLiteral);
      });

      it('should have the property lastUpdated (base name: "lastUpdated")', function() {
        // TODO: update the code to test the property lastUpdated
        expect(instance).to.have.property('lastUpdated');
        // expect(instance.lastUpdated).to.be(expectedValueLiteral);
      });

      it('should have the property preferences (base name: "preferences")', function() {
        // TODO: update the code to test the property preferences
        expect(instance).to.have.property('preferences');
        // expect(instance.preferences).to.be(expectedValueLiteral);
      });

      it('should have the property tFAEnabled (base name: "TFAEnabled")', function() {
        // TODO: update the code to test the property tFAEnabled
        expect(instance).to.have.property('tFAEnabled');
        // expect(instance.tFAEnabled).to.be(expectedValueLiteral);
      });

      it('should have the property affiliateID (base name: "affiliateID")', function() {
        // TODO: update the code to test the property affiliateID
        expect(instance).to.have.property('affiliateID');
        // expect(instance.affiliateID).to.be(expectedValueLiteral);
      });

      it('should have the property country (base name: "country")', function() {
        // TODO: update the code to test the property country
        expect(instance).to.have.property('country');
        // expect(instance.country).to.be(expectedValueLiteral);
      });

      it('should have the property geoipCountry (base name: "geoipCountry")', function() {
        // TODO: update the code to test the property geoipCountry
        expect(instance).to.have.property('geoipCountry');
        // expect(instance.geoipCountry).to.be(expectedValueLiteral);
      });

      it('should have the property geoipRegion (base name: "geoipRegion")', function() {
        // TODO: update the code to test the property geoipRegion
        expect(instance).to.have.property('geoipRegion');
        // expect(instance.geoipRegion).to.be(expectedValueLiteral);
      });

      it('should have the property firstTradeTimestamp (base name: "firstTradeTimestamp")', function() {
        // TODO: update the code to test the property firstTradeTimestamp
        expect(instance).to.have.property('firstTradeTimestamp');
        // expect(instance.firstTradeTimestamp).to.be(expectedValueLiteral);
      });

      it('should have the property typ (base name: "typ")', function() {
        // TODO: update the code to test the property typ
        expect(instance).to.have.property('typ');
        // expect(instance.typ).to.be(expectedValueLiteral);
      });

    });
  });

}));
