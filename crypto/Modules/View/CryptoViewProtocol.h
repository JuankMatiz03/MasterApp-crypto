//
//  CryptoViewProtocol.h
//  crypto
//
//  Created by Juan Camilo Arboleda Matiz on 13/10/23.
//

#import <Foundation/Foundation.h>
#import "Crypto.h"

@protocol CryptoViewProtocol <NSObject>

- (void)displayCryptoData:(NSArray<Crypto *> *)cryptoDataList;
- (void)displayError:(NSString *)errorMessage;

@end
