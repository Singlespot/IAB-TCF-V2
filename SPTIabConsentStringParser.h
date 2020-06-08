//
//  SPTIabConsentStringParser.h
//  SPTProximityKit
//
//  Created by Quentin Beaudouin on 04/06/2020.
//  Copyright © 2020 Alexandre Fortoul. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPTIabTCFModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SPTIabConsentStringParser : NSObject

+ (SPTIabTCFModel *)parseConsentString:(NSString *)consentString;

@end

NS_ASSUME_NONNULL_END
