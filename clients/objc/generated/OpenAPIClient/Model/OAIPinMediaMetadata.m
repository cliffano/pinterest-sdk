#import "OAIPinMediaMetadata.h"

@implementation OAIPinMediaMetadata

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"itemType": @"item_type", @"title": @"title", @"_description": @"description", @"link": @"link", @"images": @"images", @"coverImageUrl": @"cover_image_url", @"videoUrl": @"video_url", @"duration": @"duration", @"height": @"height", @"width": @"width" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"itemType", @"title", @"_description", @"link", @"images", @"coverImageUrl", @"videoUrl", @"duration", @"height", @"width"];
  return [optionalProperties containsObject:propertyName];
}

@end
