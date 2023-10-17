//
//  CryptoServiceMock.h
//  cryptoTests
//
//  Created by Juan Camilo Arboleda Matiz on 13/10/23.
//

#import "CryptoService.h"
#import "CryptoServiceProtocol.h"

@interface CryptoServiceMock : NSObject <CryptoServiceProtocol>
@property (nonatomic, strong) NSArray<Crypto *> *fakeCryptoData;
@end
