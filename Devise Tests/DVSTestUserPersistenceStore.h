//
//  DVSTestUserPersistenceManager.h
//  Devise
//
//  Created by Radoslaw Szeja on 05/03/15.
//  Copyright (c) 2015 Netguru Sp. z o.o. All rights reserved.
//

#import "DVSUserPersistenceStore.h"

@interface DVSTestUserPersistenceStore : DVSUserPersistenceStore

@property (strong, nonatomic) DVSConfiguration *configuration;

@end
