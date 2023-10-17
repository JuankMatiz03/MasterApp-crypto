//
//  CryptoServiceProtocol.h
//  crypto
//
//  Created by Juan Camilo Arboleda Matiz on 13/10/23.
//

@protocol CryptoServiceProtocol <NSObject>

- (void)fetchCryptoDataWithCompletion:(void (^)(NSArray<Crypto *> *cryptoList, NSError *error))completion;

@end
