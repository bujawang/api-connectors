//
// Wallet.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


/** Assets and Networks Data */

public struct Wallet: Codable {

    public var account: Double
    public var currency: String
    public var deposited: Double?
    public var withdrawn: Double?
    public var transferIn: Double?
    public var transferOut: Double?
    public var amount: Double?
    public var pendingCredit: Double?
    public var pendingDebit: Double?
    public var confirmedDebit: Double?
    public var timestamp: Date?

    public init(account: Double, currency: String, deposited: Double?, withdrawn: Double?, transferIn: Double?, transferOut: Double?, amount: Double?, pendingCredit: Double?, pendingDebit: Double?, confirmedDebit: Double?, timestamp: Date?) {
        self.account = account
        self.currency = currency
        self.deposited = deposited
        self.withdrawn = withdrawn
        self.transferIn = transferIn
        self.transferOut = transferOut
        self.amount = amount
        self.pendingCredit = pendingCredit
        self.pendingDebit = pendingDebit
        self.confirmedDebit = confirmedDebit
        self.timestamp = timestamp
    }


}

