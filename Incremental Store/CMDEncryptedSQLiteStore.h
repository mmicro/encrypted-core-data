//
//  INCIncrementalStore.h
//  INCTest
//
//  Created by Caleb Davenport on 7/26/12.
//  Copyright (c) 2012 Caleb Davenport. All rights reserved.
//

#import <CoreData/CoreData.h>

extern NSString * const CMDEncryptedSQLiteStoreType;
extern NSString * const CMDEncryptedSQLiteStorePassphraseKey;
extern NSString * const CMDEncryptedSQLiteStoreErrorDomain;
extern NSString * const CMDEncryptedSQLiteStoreErrorMessageKey;

@interface CMDEncryptedSQLiteStore : NSIncrementalStore

@end
