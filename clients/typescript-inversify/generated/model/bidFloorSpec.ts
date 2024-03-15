/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
import { ActionType } from './actionType';
import { Country } from './country';
import { CreativeType } from './creativeType';
import { Currency } from './currency';
import { ObjectiveType } from './objectiveType';
import { OptimizationGoalMetadata } from './optimizationGoalMetadata';


export interface BidFloorSpec { 
    countries?: Array<Country>;
    currency: Currency;
    objective_type?: ObjectiveType;
    billable_event: ActionType;
    optimization_goal_metadata?: OptimizationGoalMetadata;
    creative_type?: CreativeType;
}
export namespace BidFloorSpec {
}
