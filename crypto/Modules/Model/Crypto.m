//
//  Crypto.m
//  crypto
//
//  Created by Juan Camilo Arboleda Matiz on 13/10/23.
//

#import "Crypto.h"

@implementation Crypto

- (instancetype)initWithDictionary:(NSDictionary *)dictionary {
    self = [super init];
    if (self) {
        _name = dictionary[@"name"];
        _symbol = dictionary[@"symbol"];
        _price = dictionary[@"current_price"];
        _id = dictionary[@"id"];
    }
    return self;
}

@end
