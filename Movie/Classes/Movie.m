//
//  Movie.m
//  Movie
//
//  Created by Tammer Saleh on 7/27/09.
//  Copyright 2009 Tammer Saleh Consulting, Inc.. All rights reserved.
//

#import "Movie.h"


@implementation Movie
@synthesize title;
@synthesize boxOfficeGross;
@synthesize summary;

-(id) initWithTitle:(NSString *)newTitle boxOfficeGross:(NSNumber *)newBoxOfficeGross summary:newSummary {
	self = [super init];
	if (nil != self) {
		self.title = newTitle;
		self.boxOfficeGross = newBoxOfficeGross;
		self.summary = newSummary;
	}
	return self;
}

- (void)dealloc {
	self.title = nil;
	self.boxOfficeGross = nil;
	self.summary = nil;
	[super dealloc];
}

@end
