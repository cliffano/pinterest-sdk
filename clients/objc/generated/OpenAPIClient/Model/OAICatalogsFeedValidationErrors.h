#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/





@protocol OAICatalogsFeedValidationErrors
@end

@interface OAICatalogsFeedValidationErrors : OAIObject

/* Pinterest couldn't download your feed. [optional]
 */
@property(nonatomic) NSNumber* fETCHERROR;
/* Your feed wasn't ingested because it hasn’t changed in the previous 90 days. [optional]
 */
@property(nonatomic) NSNumber* fETCHINACTIVEFEEDERROR;
/* Your feed includes data with an unsupported encoding format. [optional]
 */
@property(nonatomic) NSNumber* eNCODINGERROR;
/* Your feed includes data with formatting errors. [optional]
 */
@property(nonatomic) NSNumber* dELIMITERERROR;
/* Your feed is missing some required column headers. [optional]
 */
@property(nonatomic) NSNumber* rEQUIREDCOLUMNSMISSING;
/* Some products are duplicated. [optional]
 */
@property(nonatomic) NSNumber* dUPLICATEPRODUCTS;
/* Some image links are formatted incorrectly. [optional]
 */
@property(nonatomic) NSNumber* iMAGELINKINVALID;
/* Some items are missing an item id in their product metadata, those items will not be published. [optional]
 */
@property(nonatomic) NSNumber* iTEMIDMISSING;
/* Some items are missing a title in their product metadata, those items will not be published. [optional]
 */
@property(nonatomic) NSNumber* tITLEMISSING;
/* Some items are missing a description in their product metadata, those items will not be published. [optional]
 */
@property(nonatomic) NSNumber* dESCRIPTIONMISSING;
/* Some items are missing a link URL in their product metadata, those items will not be published. [optional]
 */
@property(nonatomic) NSNumber* pRODUCTLINKMISSING;
/* Some items are missing an image link URL in their product metadata, those items will not be published. [optional]
 */
@property(nonatomic) NSNumber* iMAGELINKMISSING;
/* Some items are missing an availability value in their product metadata, those items will not be published. [optional]
 */
@property(nonatomic) NSNumber* aVAILABILITYINVALID;
/* Some items have price formatting errors in their product metadata, those items will not be published. [optional]
 */
@property(nonatomic) NSNumber* pRODUCTPRICEINVALID;
/* Some link values are formatted incorrectly. [optional]
 */
@property(nonatomic) NSNumber* lINKFORMATINVALID;
/* Your feed contains formatting errors for some items. [optional]
 */
@property(nonatomic) NSNumber* pARSELINEERROR;
/* Some adwords links contain too many characters. [optional]
 */
@property(nonatomic) NSNumber* aDWORDSFORMATINVALID;
/* We experienced a technical difficulty and were unable to ingest your feed. The next ingestion will happen in 24 hours. [optional]
 */
@property(nonatomic) NSNumber* iNTERNALSERVICEERROR;
/* Your merchant domain needs to be claimed. [optional]
 */
@property(nonatomic) NSNumber* nOVERIFIEDDOMAIN;
/* Some items have invalid adult values. [optional]
 */
@property(nonatomic) NSNumber* aDULTINVALID;
/* Some items have image_link URLs that contain too many characters, so those items will not be published. [optional]
 */
@property(nonatomic) NSNumber* iMAGELINKLENGTHTOOLONG;
/* Some of your product link values don't match the verified domain associated with this account. [optional]
 */
@property(nonatomic) NSNumber* iNVALIDDOMAIN;
/* Your feed contains too many items, some items will not be published. [optional]
 */
@property(nonatomic) NSNumber* fEEDLENGTHTOOLONG;
/* Some product links contain too many characters, those items will not be published. [optional]
 */
@property(nonatomic) NSNumber* lINKLENGTHTOOLONG;
/* Your feed couldn't be validated because the xml file is formatted incorrectly. [optional]
 */
@property(nonatomic) NSNumber* mALFORMEDXML;
/* Some products are missing a price, those items will not be published. [optional]
 */
@property(nonatomic) NSNumber* pRICEMISSING;
/* Your feed couldn't be validated because the file doesn't contain the minimum number of lines required. [optional]
 */
@property(nonatomic) NSNumber* fEEDTOOSMALL;
/* Some items exceed the maximum number of items per item group, those items will not be published. [optional]
 */
@property(nonatomic) NSNumber* mAXITEMSPERITEMGROUPEXCEEDED;
/* Some items' main images can't be found. [optional]
 */
@property(nonatomic) NSNumber* iTEMMAINIMAGEDOWNLOADFAILURE;
/* Some items were not published because they don't meet Pinterest's Merchant Guidelines. [optional]
 */
@property(nonatomic) NSNumber* pINJOINCONTENTUNSAFE;
/* Some items were not published because they don't meet Pinterest's Merchant Guidelines. [optional]
 */
@property(nonatomic) NSNumber* bLOCKLISTEDIMAGESIGNATURE;
/* Some items have list price formatting errors in their product metadata, those items will not be published. [optional]
 */
@property(nonatomic) NSNumber* lISTPRICEINVALID;
/* Some items were not published because price cannot be determined. The price, list price, and sale price are all different, so those items will not be published. [optional]
 */
@property(nonatomic) NSNumber* pRICECANNOTBEDETERMINED;

@end
