//
//  OCSAssignment.h
//  Objective-C Sound
//
//  Created by Aurelius Prochazka on 6/12/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "OCSOpcode.h"

/// Simply a wrapper for the equal sign
@interface OCSAssignment : OCSOpcode 

/// @name Properties

/// The output can be audio, control or a constant.
@property (nonatomic, strong) OCSParameter *output;


/// @name Initialization

/// Initialization Statement
/// @param input The right side of the equal sign.
- (id)initWithInput:(OCSParameter *)input;

@end

