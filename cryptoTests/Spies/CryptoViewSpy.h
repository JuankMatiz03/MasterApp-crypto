//
//  CryptoViewSpy.h
//  cryptoTests
//
//  Created by Juan Camilo Arboleda Matiz on 13/10/23.
//

#import "CryptoViewProtocol.h"

@interface CryptoViewSpy : NSObject <CryptoViewProtocol>

@property (nonatomic, strong) NSArray<Crypto *> *displayedCryptoData;
@property (nonatomic, strong) NSString *displayedError;
@property (nonatomic, assign) BOOL displayCryptoDataCalled;
@property (nonatomic, assign) BOOL displayErrorCalled;

@end
