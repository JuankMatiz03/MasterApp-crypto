//
//  CryptoFakeFactory.m
//  cryptoTests
//
//  Created by Juan Camilo Arboleda Matiz on 13/10/23.
//

#import "CryptoFakeFactory.h"

@implementation CryptoFakeFactory

+ (Crypto *)value {
    Crypto *crypto = [[Crypto alloc] init];
    crypto.name = @"Bitcoin";
    crypto.symbol = @"BTC";
    crypto.price = @(50000);
    return crypto;
}

@end
