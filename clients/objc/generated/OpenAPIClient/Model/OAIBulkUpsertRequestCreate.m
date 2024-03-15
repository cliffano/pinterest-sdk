#import "OAIBulkUpsertRequestCreate.h"

@implementation OAIBulkUpsertRequestCreate

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"campaigns": @"campaigns", @"adGroups": @"ad_groups", @"ads": @"ads", @"productGroups": @"product_groups", @"keywords": @"keywords" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"campaigns", @"adGroups", @"ads", @"productGroups", @"keywords"];
  return [optionalProperties containsObject:propertyName];
}

@end
