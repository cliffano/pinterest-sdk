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
import { RelatedTermsRelatedTermsListInner } from './relatedTermsRelatedTermsListInner';


export interface RelatedTerms { 
    /**
     * First input term. For example, if you pass \"?terms=clothes,workout\", then id will be \"clothes\"
     */
    id?: string;
    /**
     * Total number of related terms returned
     */
    related_term_count?: number;
    /**
     * The id of the advertiser.
     */
    related_terms_list?: Array<RelatedTermsRelatedTermsListInner>;
}
