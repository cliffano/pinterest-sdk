/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Org.OpenAPITools.Converters;

namespace Org.OpenAPITools.Models
{ 
        /// <summary>
        /// Product item fields
        /// </summary>
        /// <value>Product item fields</value>
        [TypeConverter(typeof(CustomEnumConverter<NullableCatalogsItemFieldType>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum NullableCatalogsItemFieldType
        {
            
            /// <summary>
            /// Enum ITEMIDEnum for ITEM_ID
            /// </summary>
            [EnumMember(Value = "ITEM_ID")]
            ITEMIDEnum = 1,
            
            /// <summary>
            /// Enum ITEMGROUPIDEnum for ITEM_GROUP_ID
            /// </summary>
            [EnumMember(Value = "ITEM_GROUP_ID")]
            ITEMGROUPIDEnum = 2,
            
            /// <summary>
            /// Enum TITLEEnum for TITLE
            /// </summary>
            [EnumMember(Value = "TITLE")]
            TITLEEnum = 3,
            
            /// <summary>
            /// Enum DESCRIPTIONEnum for DESCRIPTION
            /// </summary>
            [EnumMember(Value = "DESCRIPTION")]
            DESCRIPTIONEnum = 4,
            
            /// <summary>
            /// Enum ITEMLINKEnum for ITEM_LINK
            /// </summary>
            [EnumMember(Value = "ITEM_LINK")]
            ITEMLINKEnum = 5,
            
            /// <summary>
            /// Enum ORGANICLINKEnum for ORGANIC_LINK
            /// </summary>
            [EnumMember(Value = "ORGANIC_LINK")]
            ORGANICLINKEnum = 6,
            
            /// <summary>
            /// Enum IMAGELINKEnum for IMAGE_LINK
            /// </summary>
            [EnumMember(Value = "IMAGE_LINK")]
            IMAGELINKEnum = 7,
            
            /// <summary>
            /// Enum ADWORDSREDIRECTLINKEnum for ADWORDS_REDIRECT_LINK
            /// </summary>
            [EnumMember(Value = "ADWORDS_REDIRECT_LINK")]
            ADWORDSREDIRECTLINKEnum = 8,
            
            /// <summary>
            /// Enum ADLINKEnum for AD_LINK
            /// </summary>
            [EnumMember(Value = "AD_LINK")]
            ADLINKEnum = 9,
            
            /// <summary>
            /// Enum SIZEEnum for SIZE
            /// </summary>
            [EnumMember(Value = "SIZE")]
            SIZEEnum = 10,
            
            /// <summary>
            /// Enum GOOGLEPRODUCTCATEGORYEnum for GOOGLE_PRODUCT_CATEGORY
            /// </summary>
            [EnumMember(Value = "GOOGLE_PRODUCT_CATEGORY")]
            GOOGLEPRODUCTCATEGORYEnum = 11,
            
            /// <summary>
            /// Enum PRODUCTCATEGORYEnum for PRODUCT_CATEGORY
            /// </summary>
            [EnumMember(Value = "PRODUCT_CATEGORY")]
            PRODUCTCATEGORYEnum = 12,
            
            /// <summary>
            /// Enum CONDITIONEnum for CONDITION
            /// </summary>
            [EnumMember(Value = "CONDITION")]
            CONDITIONEnum = 13,
            
            /// <summary>
            /// Enum AVAILABILITYEnum for AVAILABILITY
            /// </summary>
            [EnumMember(Value = "AVAILABILITY")]
            AVAILABILITYEnum = 14,
            
            /// <summary>
            /// Enum GENDEREnum for GENDER
            /// </summary>
            [EnumMember(Value = "GENDER")]
            GENDEREnum = 15,
            
            /// <summary>
            /// Enum AGEGROUPEnum for AGE_GROUP
            /// </summary>
            [EnumMember(Value = "AGE_GROUP")]
            AGEGROUPEnum = 16,
            
            /// <summary>
            /// Enum SIZETYPEEnum for SIZE_TYPE
            /// </summary>
            [EnumMember(Value = "SIZE_TYPE")]
            SIZETYPEEnum = 17,
            
            /// <summary>
            /// Enum SIZESYSTEMEnum for SIZE_SYSTEM
            /// </summary>
            [EnumMember(Value = "SIZE_SYSTEM")]
            SIZESYSTEMEnum = 18,
            
            /// <summary>
            /// Enum ADULTEnum for ADULT
            /// </summary>
            [EnumMember(Value = "ADULT")]
            ADULTEnum = 19,
            
            /// <summary>
            /// Enum SHIPPINGEnum for SHIPPING
            /// </summary>
            [EnumMember(Value = "SHIPPING")]
            SHIPPINGEnum = 20,
            
            /// <summary>
            /// Enum SHIPPINGWEIGHTEnum for SHIPPING_WEIGHT
            /// </summary>
            [EnumMember(Value = "SHIPPING_WEIGHT")]
            SHIPPINGWEIGHTEnum = 21,
            
            /// <summary>
            /// Enum TAXEnum for TAX
            /// </summary>
            [EnumMember(Value = "TAX")]
            TAXEnum = 22,
            
            /// <summary>
            /// Enum MULTIPACKEnum for MULTIPACK
            /// </summary>
            [EnumMember(Value = "MULTIPACK")]
            MULTIPACKEnum = 23,
            
            /// <summary>
            /// Enum ADDITIONALIMAGELINKEnum for ADDITIONAL_IMAGE_LINK
            /// </summary>
            [EnumMember(Value = "ADDITIONAL_IMAGE_LINK")]
            ADDITIONALIMAGELINKEnum = 24,
            
            /// <summary>
            /// Enum PRICEEnum for PRICE
            /// </summary>
            [EnumMember(Value = "PRICE")]
            PRICEEnum = 25,
            
            /// <summary>
            /// Enum SALEPRICEEnum for SALE_PRICE
            /// </summary>
            [EnumMember(Value = "SALE_PRICE")]
            SALEPRICEEnum = 26,
            
            /// <summary>
            /// Enum ISBUNDLEEnum for IS_BUNDLE
            /// </summary>
            [EnumMember(Value = "IS_BUNDLE")]
            ISBUNDLEEnum = 27,
            
            /// <summary>
            /// Enum EXPIRATIONDATEEnum for EXPIRATION_DATE
            /// </summary>
            [EnumMember(Value = "EXPIRATION_DATE")]
            EXPIRATIONDATEEnum = 28,
            
            /// <summary>
            /// Enum SALEPRICEEFFECTIVEDATEEnum for SALE_PRICE_EFFECTIVE_DATE
            /// </summary>
            [EnumMember(Value = "SALE_PRICE_EFFECTIVE_DATE")]
            SALEPRICEEFFECTIVEDATEEnum = 29,
            
            /// <summary>
            /// Enum AVAILABILITYDATEEnum for AVAILABILITY_DATE
            /// </summary>
            [EnumMember(Value = "AVAILABILITY_DATE")]
            AVAILABILITYDATEEnum = 30,
            
            /// <summary>
            /// Enum WEIGHTUNITEnum for WEIGHT_UNIT
            /// </summary>
            [EnumMember(Value = "WEIGHT_UNIT")]
            WEIGHTUNITEnum = 31,
            
            /// <summary>
            /// Enum PRODUCTTYPEEnum for PRODUCT_TYPE
            /// </summary>
            [EnumMember(Value = "PRODUCT_TYPE")]
            PRODUCTTYPEEnum = 32,
            
            /// <summary>
            /// Enum CUSTOMLABEL0Enum for CUSTOM_LABEL_0
            /// </summary>
            [EnumMember(Value = "CUSTOM_LABEL_0")]
            CUSTOMLABEL0Enum = 33,
            
            /// <summary>
            /// Enum CUSTOMLABEL1Enum for CUSTOM_LABEL_1
            /// </summary>
            [EnumMember(Value = "CUSTOM_LABEL_1")]
            CUSTOMLABEL1Enum = 34,
            
            /// <summary>
            /// Enum CUSTOMLABEL2Enum for CUSTOM_LABEL_2
            /// </summary>
            [EnumMember(Value = "CUSTOM_LABEL_2")]
            CUSTOMLABEL2Enum = 35,
            
            /// <summary>
            /// Enum CUSTOMLABEL3Enum for CUSTOM_LABEL_3
            /// </summary>
            [EnumMember(Value = "CUSTOM_LABEL_3")]
            CUSTOMLABEL3Enum = 36,
            
            /// <summary>
            /// Enum CUSTOMLABEL4Enum for CUSTOM_LABEL_4
            /// </summary>
            [EnumMember(Value = "CUSTOM_LABEL_4")]
            CUSTOMLABEL4Enum = 37,
            
            /// <summary>
            /// Enum MATERIALEnum for MATERIAL
            /// </summary>
            [EnumMember(Value = "MATERIAL")]
            MATERIALEnum = 38,
            
            /// <summary>
            /// Enum PATTERNEnum for PATTERN
            /// </summary>
            [EnumMember(Value = "PATTERN")]
            PATTERNEnum = 39,
            
            /// <summary>
            /// Enum COLOREnum for COLOR
            /// </summary>
            [EnumMember(Value = "COLOR")]
            COLOREnum = 40,
            
            /// <summary>
            /// Enum BRANDEnum for BRAND
            /// </summary>
            [EnumMember(Value = "BRAND")]
            BRANDEnum = 41,
            
            /// <summary>
            /// Enum GTINEnum for GTIN
            /// </summary>
            [EnumMember(Value = "GTIN")]
            GTINEnum = 42,
            
            /// <summary>
            /// Enum MPNEnum for MPN
            /// </summary>
            [EnumMember(Value = "MPN")]
            MPNEnum = 43,
            
            /// <summary>
            /// Enum IOSDEEPLINKEnum for IOS_DEEP_LINK
            /// </summary>
            [EnumMember(Value = "IOS_DEEP_LINK")]
            IOSDEEPLINKEnum = 44,
            
            /// <summary>
            /// Enum ANDROIDDEEPLINKEnum for ANDROID_DEEP_LINK
            /// </summary>
            [EnumMember(Value = "ANDROID_DEEP_LINK")]
            ANDROIDDEEPLINKEnum = 45,
            
            /// <summary>
            /// Enum FREESHIPPINGLABELEnum for FREE_SHIPPING_LABEL
            /// </summary>
            [EnumMember(Value = "FREE_SHIPPING_LABEL")]
            FREESHIPPINGLABELEnum = 46,
            
            /// <summary>
            /// Enum FREESHIPPINGLIMITEnum for FREE_SHIPPING_LIMIT
            /// </summary>
            [EnumMember(Value = "FREE_SHIPPING_LIMIT")]
            FREESHIPPINGLIMITEnum = 47,
            
            /// <summary>
            /// Enum AVGREVIEWRATINGEnum for AVG_REVIEW_RATING
            /// </summary>
            [EnumMember(Value = "AVG_REVIEW_RATING")]
            AVGREVIEWRATINGEnum = 48,
            
            /// <summary>
            /// Enum NUMRATINGSEnum for NUM_RATINGS
            /// </summary>
            [EnumMember(Value = "NUM_RATINGS")]
            NUMRATINGSEnum = 49,
            
            /// <summary>
            /// Enum NUMREVIEWSEnum for NUM_REVIEWS
            /// </summary>
            [EnumMember(Value = "NUM_REVIEWS")]
            NUMREVIEWSEnum = 50,
            
            /// <summary>
            /// Enum ALTTEXTEnum for ALT_TEXT
            /// </summary>
            [EnumMember(Value = "ALT_TEXT")]
            ALTTEXTEnum = 51,
            
            /// <summary>
            /// Enum VARIANTNAMESEnum for VARIANT_NAMES
            /// </summary>
            [EnumMember(Value = "VARIANT_NAMES")]
            VARIANTNAMESEnum = 52,
            
            /// <summary>
            /// Enum VARIANTVALUESEnum for VARIANT_VALUES
            /// </summary>
            [EnumMember(Value = "VARIANT_VALUES")]
            VARIANTVALUESEnum = 53,
            
            /// <summary>
            /// Enum MINADPRICEEnum for MIN_AD_PRICE
            /// </summary>
            [EnumMember(Value = "MIN_AD_PRICE")]
            MINADPRICEEnum = 54,
            
            /// <summary>
            /// Enum SHIPPINGWIDTHEnum for SHIPPING_WIDTH
            /// </summary>
            [EnumMember(Value = "SHIPPING_WIDTH")]
            SHIPPINGWIDTHEnum = 55,
            
            /// <summary>
            /// Enum SHIPPINGHEIGHTEnum for SHIPPING_HEIGHT
            /// </summary>
            [EnumMember(Value = "SHIPPING_HEIGHT")]
            SHIPPINGHEIGHTEnum = 56,
            
            /// <summary>
            /// Enum NullEnum for null
            /// </summary>
            [EnumMember(Value = "null")]
            NullEnum = 57
        }
}