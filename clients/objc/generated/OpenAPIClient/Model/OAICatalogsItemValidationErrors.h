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


#import "OAICatalogsItemValidationDetails.h"
@protocol OAICatalogsItemValidationDetails;
@class OAICatalogsItemValidationDetails;



@protocol OAICatalogsItemValidationErrors
@end

@interface OAICatalogsItemValidationErrors : OAIObject


@property(nonatomic) OAICatalogsItemValidationDetails* aDULTINVALID;

@property(nonatomic) OAICatalogsItemValidationDetails* aDWORDSFORMATINVALID;

@property(nonatomic) OAICatalogsItemValidationDetails* aVAILABILITYINVALID;

@property(nonatomic) OAICatalogsItemValidationDetails* bLOCKLISTEDIMAGESIGNATURE;

@property(nonatomic) OAICatalogsItemValidationDetails* dESCRIPTIONMISSING;

@property(nonatomic) OAICatalogsItemValidationDetails* dUPLICATEPRODUCTS;

@property(nonatomic) OAICatalogsItemValidationDetails* iMAGELINKINVALID;

@property(nonatomic) OAICatalogsItemValidationDetails* iMAGELINKLENGTHTOOLONG;

@property(nonatomic) OAICatalogsItemValidationDetails* iMAGELINKMISSING;

@property(nonatomic) OAICatalogsItemValidationDetails* iNVALIDDOMAIN;

@property(nonatomic) OAICatalogsItemValidationDetails* iTEMIDMISSING;

@property(nonatomic) OAICatalogsItemValidationDetails* iTEMMAINIMAGEDOWNLOADFAILURE;

@property(nonatomic) OAICatalogsItemValidationDetails* lINKFORMATINVALID;

@property(nonatomic) OAICatalogsItemValidationDetails* lINKLENGTHTOOLONG;

@property(nonatomic) OAICatalogsItemValidationDetails* lISTPRICEINVALID;

@property(nonatomic) OAICatalogsItemValidationDetails* mAXITEMSPERITEMGROUPEXCEEDED;

@property(nonatomic) OAICatalogsItemValidationDetails* pARSELINEERROR;

@property(nonatomic) OAICatalogsItemValidationDetails* pINJOINCONTENTUNSAFE;

@property(nonatomic) OAICatalogsItemValidationDetails* pRICECANNOTBEDETERMINED;

@property(nonatomic) OAICatalogsItemValidationDetails* pRICEMISSING;

@property(nonatomic) OAICatalogsItemValidationDetails* pRODUCTLINKMISSING;

@property(nonatomic) OAICatalogsItemValidationDetails* pRODUCTPRICEINVALID;

@property(nonatomic) OAICatalogsItemValidationDetails* tITLEMISSING;

@end
