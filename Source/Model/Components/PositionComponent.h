//
//  PositionComponent.h
//  StervoxyTanks
//
//  Created by Per Borgman on 12/8/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "Component.h"
#import "Vector2.h"
#import "JSON.h"

@interface PositionComponent : Component {
	Vector2 *position;
}

@property (copy) Vector2 *position;

-(id)initWithDictionary:(NSDictionary*)props entityID:(uint64_t)eid_;
@end
