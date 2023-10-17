//
//  Crypto.h
//  crypto
//
//  Created by Juan Camilo Arboleda Matiz on 13/10/23.
//

#import <Foundation/Foundation.h>

@interface Crypto : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *symbol;
@property (nonatomic, strong) NSNumber *price;
@property (nonatomic, strong) NSString *id;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
