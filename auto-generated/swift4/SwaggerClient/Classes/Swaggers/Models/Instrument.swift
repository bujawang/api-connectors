//
// Instrument.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


/** Tradeable Contracts, Indices, and History */

public struct Instrument: Codable {

    public var symbol: String
    public var rootSymbol: String?
    public var state: String?
    public var typ: String?
    public var listing: Date?
    public var front: Date?
    public var expiry: Date?
    public var settle: Date?
    public var listedSettle: Date?
    public var positionCurrency: String?
    public var underlying: String?
    public var quoteCurrency: String?
    public var underlyingSymbol: String?
    public var reference: String?
    public var referenceSymbol: String?
    public var calcInterval: Date?
    public var publishInterval: Date?
    public var publishTime: Date?
    public var maxOrderQty: Int64?
    public var maxPrice: Double?
    public var lotSize: Int64?
    public var tickSize: Double?
    public var multiplier: Int64?
    public var settlCurrency: String?
    public var underlyingToPositionMultiplier: Int64?
    public var underlyingToSettleMultiplier: Int64?
    public var quoteToSettleMultiplier: Int64?
    public var isQuanto: Bool?
    public var isInverse: Bool?
    public var initMargin: Double?
    public var maintMargin: Double?
    public var riskLimit: Int64?
    public var riskStep: Int64?
    public var limit: Double?
    public var taxed: Bool?
    public var deleverage: Bool?
    public var makerFee: Double?
    public var takerFee: Double?
    public var settlementFee: Double?
    public var fundingBaseSymbol: String?
    public var fundingQuoteSymbol: String?
    public var fundingPremiumSymbol: String?
    public var fundingTimestamp: Date?
    public var fundingInterval: Date?
    public var fundingRate: Double?
    public var indicativeFundingRate: Double?
    public var rebalanceTimestamp: Date?
    public var rebalanceInterval: Date?
    public var prevClosePrice: Double?
    public var limitDownPrice: Double?
    public var limitUpPrice: Double?
    public var totalVolume: Int64?
    public var volume: Int64?
    public var volume24h: Int64?
    public var prevTotalTurnover: Int64?
    public var totalTurnover: Int64?
    public var turnover: Int64?
    public var turnover24h: Int64?
    public var homeNotional24h: Double?
    public var foreignNotional24h: Double?
    public var prevPrice24h: Double?
    public var vwap: Double?
    public var highPrice: Double?
    public var lowPrice: Double?
    public var lastPrice: Double?
    public var lastPriceProtected: Double?
    public var lastTickDirection: String?
    public var lastChangePcnt: Double?
    public var bidPrice: Double?
    public var midPrice: Double?
    public var askPrice: Double?
    public var impactBidPrice: Double?
    public var impactMidPrice: Double?
    public var impactAskPrice: Double?
    public var hasLiquidity: Bool?
    public var openInterest: Int64?
    public var openValue: Int64?
    public var fairMethod: String?
    public var fairBasisRate: Double?
    public var fairBasis: Double?
    public var fairPrice: Double?
    public var markMethod: String?
    public var markPrice: Double?
    public var indicativeSettlePrice: Double?
    public var settledPriceAdjustmentRate: Double?
    public var settledPrice: Double?
    public var instantPnl: Bool?
    public var minTick: Double?
    public var timestamp: Date?

    public init(symbol: String, rootSymbol: String?, state: String?, typ: String?, listing: Date?, front: Date?, expiry: Date?, settle: Date?, listedSettle: Date?, positionCurrency: String?, underlying: String?, quoteCurrency: String?, underlyingSymbol: String?, reference: String?, referenceSymbol: String?, calcInterval: Date?, publishInterval: Date?, publishTime: Date?, maxOrderQty: Int64?, maxPrice: Double?, lotSize: Int64?, tickSize: Double?, multiplier: Int64?, settlCurrency: String?, underlyingToPositionMultiplier: Int64?, underlyingToSettleMultiplier: Int64?, quoteToSettleMultiplier: Int64?, isQuanto: Bool?, isInverse: Bool?, initMargin: Double?, maintMargin: Double?, riskLimit: Int64?, riskStep: Int64?, limit: Double?, taxed: Bool?, deleverage: Bool?, makerFee: Double?, takerFee: Double?, settlementFee: Double?, fundingBaseSymbol: String?, fundingQuoteSymbol: String?, fundingPremiumSymbol: String?, fundingTimestamp: Date?, fundingInterval: Date?, fundingRate: Double?, indicativeFundingRate: Double?, rebalanceTimestamp: Date?, rebalanceInterval: Date?, prevClosePrice: Double?, limitDownPrice: Double?, limitUpPrice: Double?, totalVolume: Int64?, volume: Int64?, volume24h: Int64?, prevTotalTurnover: Int64?, totalTurnover: Int64?, turnover: Int64?, turnover24h: Int64?, homeNotional24h: Double?, foreignNotional24h: Double?, prevPrice24h: Double?, vwap: Double?, highPrice: Double?, lowPrice: Double?, lastPrice: Double?, lastPriceProtected: Double?, lastTickDirection: String?, lastChangePcnt: Double?, bidPrice: Double?, midPrice: Double?, askPrice: Double?, impactBidPrice: Double?, impactMidPrice: Double?, impactAskPrice: Double?, hasLiquidity: Bool?, openInterest: Int64?, openValue: Int64?, fairMethod: String?, fairBasisRate: Double?, fairBasis: Double?, fairPrice: Double?, markMethod: String?, markPrice: Double?, indicativeSettlePrice: Double?, settledPriceAdjustmentRate: Double?, settledPrice: Double?, instantPnl: Bool?, minTick: Double?, timestamp: Date?) {
        self.symbol = symbol
        self.rootSymbol = rootSymbol
        self.state = state
        self.typ = typ
        self.listing = listing
        self.front = front
        self.expiry = expiry
        self.settle = settle
        self.listedSettle = listedSettle
        self.positionCurrency = positionCurrency
        self.underlying = underlying
        self.quoteCurrency = quoteCurrency
        self.underlyingSymbol = underlyingSymbol
        self.reference = reference
        self.referenceSymbol = referenceSymbol
        self.calcInterval = calcInterval
        self.publishInterval = publishInterval
        self.publishTime = publishTime
        self.maxOrderQty = maxOrderQty
        self.maxPrice = maxPrice
        self.lotSize = lotSize
        self.tickSize = tickSize
        self.multiplier = multiplier
        self.settlCurrency = settlCurrency
        self.underlyingToPositionMultiplier = underlyingToPositionMultiplier
        self.underlyingToSettleMultiplier = underlyingToSettleMultiplier
        self.quoteToSettleMultiplier = quoteToSettleMultiplier
        self.isQuanto = isQuanto
        self.isInverse = isInverse
        self.initMargin = initMargin
        self.maintMargin = maintMargin
        self.riskLimit = riskLimit
        self.riskStep = riskStep
        self.limit = limit
        self.taxed = taxed
        self.deleverage = deleverage
        self.makerFee = makerFee
        self.takerFee = takerFee
        self.settlementFee = settlementFee
        self.fundingBaseSymbol = fundingBaseSymbol
        self.fundingQuoteSymbol = fundingQuoteSymbol
        self.fundingPremiumSymbol = fundingPremiumSymbol
        self.fundingTimestamp = fundingTimestamp
        self.fundingInterval = fundingInterval
        self.fundingRate = fundingRate
        self.indicativeFundingRate = indicativeFundingRate
        self.rebalanceTimestamp = rebalanceTimestamp
        self.rebalanceInterval = rebalanceInterval
        self.prevClosePrice = prevClosePrice
        self.limitDownPrice = limitDownPrice
        self.limitUpPrice = limitUpPrice
        self.totalVolume = totalVolume
        self.volume = volume
        self.volume24h = volume24h
        self.prevTotalTurnover = prevTotalTurnover
        self.totalTurnover = totalTurnover
        self.turnover = turnover
        self.turnover24h = turnover24h
        self.homeNotional24h = homeNotional24h
        self.foreignNotional24h = foreignNotional24h
        self.prevPrice24h = prevPrice24h
        self.vwap = vwap
        self.highPrice = highPrice
        self.lowPrice = lowPrice
        self.lastPrice = lastPrice
        self.lastPriceProtected = lastPriceProtected
        self.lastTickDirection = lastTickDirection
        self.lastChangePcnt = lastChangePcnt
        self.bidPrice = bidPrice
        self.midPrice = midPrice
        self.askPrice = askPrice
        self.impactBidPrice = impactBidPrice
        self.impactMidPrice = impactMidPrice
        self.impactAskPrice = impactAskPrice
        self.hasLiquidity = hasLiquidity
        self.openInterest = openInterest
        self.openValue = openValue
        self.fairMethod = fairMethod
        self.fairBasisRate = fairBasisRate
        self.fairBasis = fairBasis
        self.fairPrice = fairPrice
        self.markMethod = markMethod
        self.markPrice = markPrice
        self.indicativeSettlePrice = indicativeSettlePrice
        self.settledPriceAdjustmentRate = settledPriceAdjustmentRate
        self.settledPrice = settledPrice
        self.instantPnl = instantPnl
        self.minTick = minTick
        self.timestamp = timestamp
    }


}

