//
//  CryptoPresenterMock.m
//  cryptoTests
//
//  Created by Juan Camilo Arboleda Matiz on 13/10/23.
//

#import "CryptoPresenterMock.h"

@implementation CryptoPresenterMock

- (void)attachView:(id<CryptoViewProtocol>)view {
    self.view = view;
}

- (void)fetchCryptoData {
    self.fetchCryptoDataCalled = YES;
}

@end
