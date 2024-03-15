#import "OAICatalogsProductGroupMultipleStringListCriteria.h"

@implementation OAICatalogsProductGroupMultipleStringListCriteria

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    self.negated = @(NO);
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"values": @"values", @"negated": @"negated" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"negated"];
  return [optionalProperties containsObject:propertyName];
}

@end
