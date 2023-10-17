//
//  CryptoViewSpy.m
//  cryptoTests
//
//  Created by Juan Camilo Arboleda Matiz on 13/10/23.
//

#import "CryptoViewSpy.h"

@implementation CryptoViewSpy

- (void)displayCryptoData:(NSArray<Crypto *> *)cryptoData {
    self.displayedCryptoData = cryptoData;
    self.displayCryptoDataCalled = YES;
}

- (void)displayError:(NSString *)errorMessage {
    self.displayedError = errorMessage;
    self.displayErrorCalled = YES;
}

@end
