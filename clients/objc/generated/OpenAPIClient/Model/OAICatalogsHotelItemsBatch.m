#import "OAICatalogsHotelItemsBatch.h"

@implementation OAICatalogsHotelItemsBatch

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"batchId": @"batch_id", @"createdTime": @"created_time", @"completedTime": @"completed_time", @"status": @"status", @"catalogType": @"catalog_type", @"items": @"items" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"batchId", @"createdTime", @"completedTime", @"status", @"items"];
  return [optionalProperties containsObject:propertyName];
}

@end
