/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
    /// 
    /// </summary>
    [DataContract]
    public partial class AdResponseAllOf1 : IEquatable<AdResponseAllOf1>
    {
        /// <summary>
        /// The ID of the advertiser that this ad belongs to.
        /// </summary>
        /// <value>The ID of the advertiser that this ad belongs to.</value>
        [RegularExpression("^\\d+$")]
        [DataMember(Name="ad_account_id", EmitDefaultValue=false)]
        public string AdAccountId { get; set; }

        /// <summary>
        /// ID of the ad campaign that contains this ad.
        /// </summary>
        /// <value>ID of the ad campaign that contains this ad.</value>
        [RegularExpression("^\\d+$")]
        [DataMember(Name="campaign_id", EmitDefaultValue=false)]
        public string CampaignId { get; set; }

        /// <summary>
        /// Destination URL template for all items within a collections drawer.
        /// </summary>
        /// <value>Destination URL template for all items within a collections drawer.</value>
        [DataMember(Name="collection_items_destination_url_template", EmitDefaultValue=true)]
        public string CollectionItemsDestinationUrlTemplate { get; set; }

        /// <summary>
        /// Pin creation time. Unix timestamp in seconds.
        /// </summary>
        /// <value>Pin creation time. Unix timestamp in seconds.</value>
        [DataMember(Name="created_time", EmitDefaultValue=false)]
        public int CreatedTime { get; set; }

        /// <summary>
        /// The ID of this ad.
        /// </summary>
        /// <value>The ID of this ad.</value>
        [RegularExpression("^\\d+$")]
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }


        /// <summary>
        /// ad disapproval reasons
        /// </summary>
        /// <value>ad disapproval reasons</value>
        [TypeConverter(typeof(CustomEnumConverter<RejectedReasonsEnum>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum RejectedReasonsEnum
        {
            
            /// <summary>
            /// Enum HASHTAGSEnum for HASHTAGS
            /// </summary>
            [EnumMember(Value = "HASHTAGS")]
            HASHTAGSEnum = 1,
            
            /// <summary>
            /// Enum PROMOTIONSANDPRICESEnum for PROMOTIONS_AND_PRICES
            /// </summary>
            [EnumMember(Value = "PROMOTIONS_AND_PRICES")]
            PROMOTIONSANDPRICESEnum = 2,
            
            /// <summary>
            /// Enum TARGETINGEnum for TARGETING
            /// </summary>
            [EnumMember(Value = "TARGETING")]
            TARGETINGEnum = 3,
            
            /// <summary>
            /// Enum LANDINGPAGEEnum for LANDING_PAGE
            /// </summary>
            [EnumMember(Value = "LANDING_PAGE")]
            LANDINGPAGEEnum = 4,
            
            /// <summary>
            /// Enum CAPSANDSYMBOLSEnum for CAPS_AND_SYMBOLS
            /// </summary>
            [EnumMember(Value = "CAPS_AND_SYMBOLS")]
            CAPSANDSYMBOLSEnum = 5,
            
            /// <summary>
            /// Enum SHOCKINGEnum for SHOCKING
            /// </summary>
            [EnumMember(Value = "SHOCKING")]
            SHOCKINGEnum = 6,
            
            /// <summary>
            /// Enum WEIGHTLOSSEnum for WEIGHT_LOSS
            /// </summary>
            [EnumMember(Value = "WEIGHT_LOSS")]
            WEIGHTLOSSEnum = 7,
            
            /// <summary>
            /// Enum PROHIBITEDPRODUCTEnum for PROHIBITED_PRODUCT
            /// </summary>
            [EnumMember(Value = "PROHIBITED_PRODUCT")]
            PROHIBITEDPRODUCTEnum = 8,
            
            /// <summary>
            /// Enum AUTHENTICITYEnum for AUTHENTICITY
            /// </summary>
            [EnumMember(Value = "AUTHENTICITY")]
            AUTHENTICITYEnum = 9,
            
            /// <summary>
            /// Enum NUDITYEnum for NUDITY
            /// </summary>
            [EnumMember(Value = "NUDITY")]
            NUDITYEnum = 10,
            
            /// <summary>
            /// Enum CONFUSINGDESIGNEnum for CONFUSING_DESIGN
            /// </summary>
            [EnumMember(Value = "CONFUSING_DESIGN")]
            CONFUSINGDESIGNEnum = 11,
            
            /// <summary>
            /// Enum URGENCYEnum for URGENCY
            /// </summary>
            [EnumMember(Value = "URGENCY")]
            URGENCYEnum = 12,
            
            /// <summary>
            /// Enum RATINGSEnum for RATINGS
            /// </summary>
            [EnumMember(Value = "RATINGS")]
            RATINGSEnum = 13,
            
            /// <summary>
            /// Enum APPEnum for APP
            /// </summary>
            [EnumMember(Value = "APP")]
            APPEnum = 14,
            
            /// <summary>
            /// Enum ALCOHOLEnum for ALCOHOL
            /// </summary>
            [EnumMember(Value = "ALCOHOL")]
            ALCOHOLEnum = 15,
            
            /// <summary>
            /// Enum CONTESTSEnum for CONTESTS
            /// </summary>
            [EnumMember(Value = "CONTESTS")]
            CONTESTSEnum = 16,
            
            /// <summary>
            /// Enum POLITICALEnum for POLITICAL
            /// </summary>
            [EnumMember(Value = "POLITICAL")]
            POLITICALEnum = 17,
            
            /// <summary>
            /// Enum OTHEREnum for OTHER
            /// </summary>
            [EnumMember(Value = "OTHER")]
            OTHEREnum = 18,
            
            /// <summary>
            /// Enum IMAGEEnum for IMAGE
            /// </summary>
            [EnumMember(Value = "IMAGE")]
            IMAGEEnum = 19,
            
            /// <summary>
            /// Enum NAREnum for NAR
            /// </summary>
            [EnumMember(Value = "NAR")]
            NAREnum = 20,
            
            /// <summary>
            /// Enum INCONSISTENTEnum for INCONSISTENT
            /// </summary>
            [EnumMember(Value = "INCONSISTENT")]
            INCONSISTENTEnum = 21,
            
            /// <summary>
            /// Enum CLICKBAITEnum for CLICKBAIT
            /// </summary>
            [EnumMember(Value = "CLICKBAIT")]
            CLICKBAITEnum = 22,
            
            /// <summary>
            /// Enum NODESCRIPTIONEnum for NO_DESCRIPTION
            /// </summary>
            [EnumMember(Value = "NO_DESCRIPTION")]
            NODESCRIPTIONEnum = 23,
            
            /// <summary>
            /// Enum LOWQUALITYEnum for LOW_QUALITY
            /// </summary>
            [EnumMember(Value = "LOW_QUALITY")]
            LOWQUALITYEnum = 24,
            
            /// <summary>
            /// Enum EXAGGERATEDCLAIMSEnum for EXAGGERATED_CLAIMS
            /// </summary>
            [EnumMember(Value = "EXAGGERATED_CLAIMS")]
            EXAGGERATEDCLAIMSEnum = 25,
            
            /// <summary>
            /// Enum PINTERESTBRANDEnum for PINTEREST_BRAND
            /// </summary>
            [EnumMember(Value = "PINTEREST_BRAND")]
            PINTERESTBRANDEnum = 26,
            
            /// <summary>
            /// Enum ALCOHOLNOSALEEnum for ALCOHOL_NO_SALE
            /// </summary>
            [EnumMember(Value = "ALCOHOL_NO_SALE")]
            ALCOHOLNOSALEEnum = 27,
            
            /// <summary>
            /// Enum LANDINGPAGESPEEDEnum for LANDING_PAGE_SPEED
            /// </summary>
            [EnumMember(Value = "LANDING_PAGE_SPEED")]
            LANDINGPAGESPEEDEnum = 28,
            
            /// <summary>
            /// Enum LANDINGPAGEHARDWALLEnum for LANDING_PAGE_HARDWALL
            /// </summary>
            [EnumMember(Value = "LANDING_PAGE_HARDWALL")]
            LANDINGPAGEHARDWALLEnum = 29,
            
            /// <summary>
            /// Enum LANDINGPAGEBROKENEnum for LANDING_PAGE_BROKEN
            /// </summary>
            [EnumMember(Value = "LANDING_PAGE_BROKEN")]
            LANDINGPAGEBROKENEnum = 30,
            
            /// <summary>
            /// Enum LANDINGPAGEQUALITYEnum for LANDING_PAGE_QUALITY
            /// </summary>
            [EnumMember(Value = "LANDING_PAGE_QUALITY")]
            LANDINGPAGEQUALITYEnum = 31,
            
            /// <summary>
            /// Enum OUTOFSTOCKEnum for OUT_OF_STOCK
            /// </summary>
            [EnumMember(Value = "OUT_OF_STOCK")]
            OUTOFSTOCKEnum = 32,
            
            /// <summary>
            /// Enum IMAGELOWQUALITYEnum for IMAGE_LOW_QUALITY
            /// </summary>
            [EnumMember(Value = "IMAGE_LOW_QUALITY")]
            IMAGELOWQUALITYEnum = 33,
            
            /// <summary>
            /// Enum IMAGEBUSYEnum for IMAGE_BUSY
            /// </summary>
            [EnumMember(Value = "IMAGE_BUSY")]
            IMAGEBUSYEnum = 34,
            
            /// <summary>
            /// Enum IMAGEPOORLYEDITEDEnum for IMAGE_POORLY_EDITED
            /// </summary>
            [EnumMember(Value = "IMAGE_POORLY_EDITED")]
            IMAGEPOORLYEDITEDEnum = 35,
            
            /// <summary>
            /// Enum IMAGEBEFOREAFTEREnum for IMAGE_BEFORE_AFTER
            /// </summary>
            [EnumMember(Value = "IMAGE_BEFORE_AFTER")]
            IMAGEBEFOREAFTEREnum = 36,
            
            /// <summary>
            /// Enum UGCEnum for UGC
            /// </summary>
            [EnumMember(Value = "UGC")]
            UGCEnum = 37,
            
            /// <summary>
            /// Enum FAKEBUTTONSEnum for FAKE_BUTTONS
            /// </summary>
            [EnumMember(Value = "FAKE_BUTTONS")]
            FAKEBUTTONSEnum = 38,
            
            /// <summary>
            /// Enum WEAPONSEnum for WEAPONS
            /// </summary>
            [EnumMember(Value = "WEAPONS")]
            WEAPONSEnum = 39,
            
            /// <summary>
            /// Enum SENSITIVEEnum for SENSITIVE
            /// </summary>
            [EnumMember(Value = "SENSITIVE")]
            SENSITIVEEnum = 40,
            
            /// <summary>
            /// Enum UNACCEPTABLEBUSINESSEnum for UNACCEPTABLE_BUSINESS
            /// </summary>
            [EnumMember(Value = "UNACCEPTABLE_BUSINESS")]
            UNACCEPTABLEBUSINESSEnum = 41,
            
            /// <summary>
            /// Enum SUSPICIOUSCLAIMSEnum for SUSPICIOUS_CLAIMS
            /// </summary>
            [EnumMember(Value = "SUSPICIOUS_CLAIMS")]
            SUSPICIOUSCLAIMSEnum = 42,
            
            /// <summary>
            /// Enum PHARMAEnum for PHARMA
            /// </summary>
            [EnumMember(Value = "PHARMA")]
            PHARMAEnum = 43,
            
            /// <summary>
            /// Enum SUSPICIOUSSUPPLEMENTSEnum for SUSPICIOUS_SUPPLEMENTS
            /// </summary>
            [EnumMember(Value = "SUSPICIOUS_SUPPLEMENTS")]
            SUSPICIOUSSUPPLEMENTSEnum = 44,
            
            /// <summary>
            /// Enum ILLEGALRECREATIONALDRUGEnum for ILLEGAL_RECREATIONAL_DRUG
            /// </summary>
            [EnumMember(Value = "ILLEGAL_RECREATIONAL_DRUG")]
            ILLEGALRECREATIONALDRUGEnum = 45,
            
            /// <summary>
            /// Enum LOWQUALITYLANDINGPAGEEnum for LOW_QUALITY_LANDING_PAGE
            /// </summary>
            [EnumMember(Value = "LOW_QUALITY_LANDING_PAGE")]
            LOWQUALITYLANDINGPAGEEnum = 46,
            
            /// <summary>
            /// Enum RESTRICTEDHEALTHCAREEnum for RESTRICTED_HEALTHCARE
            /// </summary>
            [EnumMember(Value = "RESTRICTED_HEALTHCARE")]
            RESTRICTEDHEALTHCAREEnum = 47,
            
            /// <summary>
            /// Enum INCONSISTENTLANGFREnum for INCONSISTENT_LANG_FR
            /// </summary>
            [EnumMember(Value = "INCONSISTENT_LANG_FR")]
            INCONSISTENTLANGFREnum = 48
        }


        /// <summary>
        /// Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
        /// </summary>
        /// <value>Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".</value>
        [TypeConverter(typeof(CustomEnumConverter<List&lt;RejectedReasonsEnum&gt;>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum List&lt;RejectedReasonsEnum&gt;
        {
            
            /// <summary>
            /// Enum HASHTAGSEnum for HASHTAGS
            /// </summary>
            [EnumMember(Value = "HASHTAGS")]
            HASHTAGSEnum = 1,
            
            /// <summary>
            /// Enum PROMOTIONSANDPRICESEnum for PROMOTIONS_AND_PRICES
            /// </summary>
            [EnumMember(Value = "PROMOTIONS_AND_PRICES")]
            PROMOTIONSANDPRICESEnum = 2,
            
            /// <summary>
            /// Enum TARGETINGEnum for TARGETING
            /// </summary>
            [EnumMember(Value = "TARGETING")]
            TARGETINGEnum = 3,
            
            /// <summary>
            /// Enum LANDINGPAGEEnum for LANDING_PAGE
            /// </summary>
            [EnumMember(Value = "LANDING_PAGE")]
            LANDINGPAGEEnum = 4,
            
            /// <summary>
            /// Enum CAPSANDSYMBOLSEnum for CAPS_AND_SYMBOLS
            /// </summary>
            [EnumMember(Value = "CAPS_AND_SYMBOLS")]
            CAPSANDSYMBOLSEnum = 5,
            
            /// <summary>
            /// Enum SHOCKINGEnum for SHOCKING
            /// </summary>
            [EnumMember(Value = "SHOCKING")]
            SHOCKINGEnum = 6,
            
            /// <summary>
            /// Enum WEIGHTLOSSEnum for WEIGHT_LOSS
            /// </summary>
            [EnumMember(Value = "WEIGHT_LOSS")]
            WEIGHTLOSSEnum = 7,
            
            /// <summary>
            /// Enum PROHIBITEDPRODUCTEnum for PROHIBITED_PRODUCT
            /// </summary>
            [EnumMember(Value = "PROHIBITED_PRODUCT")]
            PROHIBITEDPRODUCTEnum = 8,
            
            /// <summary>
            /// Enum AUTHENTICITYEnum for AUTHENTICITY
            /// </summary>
            [EnumMember(Value = "AUTHENTICITY")]
            AUTHENTICITYEnum = 9,
            
            /// <summary>
            /// Enum NUDITYEnum for NUDITY
            /// </summary>
            [EnumMember(Value = "NUDITY")]
            NUDITYEnum = 10,
            
            /// <summary>
            /// Enum CONFUSINGDESIGNEnum for CONFUSING_DESIGN
            /// </summary>
            [EnumMember(Value = "CONFUSING_DESIGN")]
            CONFUSINGDESIGNEnum = 11,
            
            /// <summary>
            /// Enum URGENCYEnum for URGENCY
            /// </summary>
            [EnumMember(Value = "URGENCY")]
            URGENCYEnum = 12,
            
            /// <summary>
            /// Enum RATINGSEnum for RATINGS
            /// </summary>
            [EnumMember(Value = "RATINGS")]
            RATINGSEnum = 13,
            
            /// <summary>
            /// Enum APPEnum for APP
            /// </summary>
            [EnumMember(Value = "APP")]
            APPEnum = 14,
            
            /// <summary>
            /// Enum ALCOHOLEnum for ALCOHOL
            /// </summary>
            [EnumMember(Value = "ALCOHOL")]
            ALCOHOLEnum = 15,
            
            /// <summary>
            /// Enum CONTESTSEnum for CONTESTS
            /// </summary>
            [EnumMember(Value = "CONTESTS")]
            CONTESTSEnum = 16,
            
            /// <summary>
            /// Enum POLITICALEnum for POLITICAL
            /// </summary>
            [EnumMember(Value = "POLITICAL")]
            POLITICALEnum = 17,
            
            /// <summary>
            /// Enum OTHEREnum for OTHER
            /// </summary>
            [EnumMember(Value = "OTHER")]
            OTHEREnum = 18,
            
            /// <summary>
            /// Enum IMAGEEnum for IMAGE
            /// </summary>
            [EnumMember(Value = "IMAGE")]
            IMAGEEnum = 19,
            
            /// <summary>
            /// Enum NAREnum for NAR
            /// </summary>
            [EnumMember(Value = "NAR")]
            NAREnum = 20,
            
            /// <summary>
            /// Enum INCONSISTENTEnum for INCONSISTENT
            /// </summary>
            [EnumMember(Value = "INCONSISTENT")]
            INCONSISTENTEnum = 21,
            
            /// <summary>
            /// Enum CLICKBAITEnum for CLICKBAIT
            /// </summary>
            [EnumMember(Value = "CLICKBAIT")]
            CLICKBAITEnum = 22,
            
            /// <summary>
            /// Enum NODESCRIPTIONEnum for NO_DESCRIPTION
            /// </summary>
            [EnumMember(Value = "NO_DESCRIPTION")]
            NODESCRIPTIONEnum = 23,
            
            /// <summary>
            /// Enum LOWQUALITYEnum for LOW_QUALITY
            /// </summary>
            [EnumMember(Value = "LOW_QUALITY")]
            LOWQUALITYEnum = 24,
            
            /// <summary>
            /// Enum EXAGGERATEDCLAIMSEnum for EXAGGERATED_CLAIMS
            /// </summary>
            [EnumMember(Value = "EXAGGERATED_CLAIMS")]
            EXAGGERATEDCLAIMSEnum = 25,
            
            /// <summary>
            /// Enum PINTERESTBRANDEnum for PINTEREST_BRAND
            /// </summary>
            [EnumMember(Value = "PINTEREST_BRAND")]
            PINTERESTBRANDEnum = 26,
            
            /// <summary>
            /// Enum ALCOHOLNOSALEEnum for ALCOHOL_NO_SALE
            /// </summary>
            [EnumMember(Value = "ALCOHOL_NO_SALE")]
            ALCOHOLNOSALEEnum = 27,
            
            /// <summary>
            /// Enum LANDINGPAGESPEEDEnum for LANDING_PAGE_SPEED
            /// </summary>
            [EnumMember(Value = "LANDING_PAGE_SPEED")]
            LANDINGPAGESPEEDEnum = 28,
            
            /// <summary>
            /// Enum LANDINGPAGEHARDWALLEnum for LANDING_PAGE_HARDWALL
            /// </summary>
            [EnumMember(Value = "LANDING_PAGE_HARDWALL")]
            LANDINGPAGEHARDWALLEnum = 29,
            
            /// <summary>
            /// Enum LANDINGPAGEBROKENEnum for LANDING_PAGE_BROKEN
            /// </summary>
            [EnumMember(Value = "LANDING_PAGE_BROKEN")]
            LANDINGPAGEBROKENEnum = 30,
            
            /// <summary>
            /// Enum LANDINGPAGEQUALITYEnum for LANDING_PAGE_QUALITY
            /// </summary>
            [EnumMember(Value = "LANDING_PAGE_QUALITY")]
            LANDINGPAGEQUALITYEnum = 31,
            
            /// <summary>
            /// Enum OUTOFSTOCKEnum for OUT_OF_STOCK
            /// </summary>
            [EnumMember(Value = "OUT_OF_STOCK")]
            OUTOFSTOCKEnum = 32,
            
            /// <summary>
            /// Enum IMAGELOWQUALITYEnum for IMAGE_LOW_QUALITY
            /// </summary>
            [EnumMember(Value = "IMAGE_LOW_QUALITY")]
            IMAGELOWQUALITYEnum = 33,
            
            /// <summary>
            /// Enum IMAGEBUSYEnum for IMAGE_BUSY
            /// </summary>
            [EnumMember(Value = "IMAGE_BUSY")]
            IMAGEBUSYEnum = 34,
            
            /// <summary>
            /// Enum IMAGEPOORLYEDITEDEnum for IMAGE_POORLY_EDITED
            /// </summary>
            [EnumMember(Value = "IMAGE_POORLY_EDITED")]
            IMAGEPOORLYEDITEDEnum = 35,
            
            /// <summary>
            /// Enum IMAGEBEFOREAFTEREnum for IMAGE_BEFORE_AFTER
            /// </summary>
            [EnumMember(Value = "IMAGE_BEFORE_AFTER")]
            IMAGEBEFOREAFTEREnum = 36,
            
            /// <summary>
            /// Enum UGCEnum for UGC
            /// </summary>
            [EnumMember(Value = "UGC")]
            UGCEnum = 37,
            
            /// <summary>
            /// Enum FAKEBUTTONSEnum for FAKE_BUTTONS
            /// </summary>
            [EnumMember(Value = "FAKE_BUTTONS")]
            FAKEBUTTONSEnum = 38,
            
            /// <summary>
            /// Enum WEAPONSEnum for WEAPONS
            /// </summary>
            [EnumMember(Value = "WEAPONS")]
            WEAPONSEnum = 39,
            
            /// <summary>
            /// Enum SENSITIVEEnum for SENSITIVE
            /// </summary>
            [EnumMember(Value = "SENSITIVE")]
            SENSITIVEEnum = 40,
            
            /// <summary>
            /// Enum UNACCEPTABLEBUSINESSEnum for UNACCEPTABLE_BUSINESS
            /// </summary>
            [EnumMember(Value = "UNACCEPTABLE_BUSINESS")]
            UNACCEPTABLEBUSINESSEnum = 41,
            
            /// <summary>
            /// Enum SUSPICIOUSCLAIMSEnum for SUSPICIOUS_CLAIMS
            /// </summary>
            [EnumMember(Value = "SUSPICIOUS_CLAIMS")]
            SUSPICIOUSCLAIMSEnum = 42,
            
            /// <summary>
            /// Enum PHARMAEnum for PHARMA
            /// </summary>
            [EnumMember(Value = "PHARMA")]
            PHARMAEnum = 43,
            
            /// <summary>
            /// Enum SUSPICIOUSSUPPLEMENTSEnum for SUSPICIOUS_SUPPLEMENTS
            /// </summary>
            [EnumMember(Value = "SUSPICIOUS_SUPPLEMENTS")]
            SUSPICIOUSSUPPLEMENTSEnum = 44,
            
            /// <summary>
            /// Enum ILLEGALRECREATIONALDRUGEnum for ILLEGAL_RECREATIONAL_DRUG
            /// </summary>
            [EnumMember(Value = "ILLEGAL_RECREATIONAL_DRUG")]
            ILLEGALRECREATIONALDRUGEnum = 45,
            
            /// <summary>
            /// Enum LOWQUALITYLANDINGPAGEEnum for LOW_QUALITY_LANDING_PAGE
            /// </summary>
            [EnumMember(Value = "LOW_QUALITY_LANDING_PAGE")]
            LOWQUALITYLANDINGPAGEEnum = 46,
            
            /// <summary>
            /// Enum RESTRICTEDHEALTHCAREEnum for RESTRICTED_HEALTHCARE
            /// </summary>
            [EnumMember(Value = "RESTRICTED_HEALTHCARE")]
            RESTRICTEDHEALTHCAREEnum = 47,
            
            /// <summary>
            /// Enum INCONSISTENTLANGFREnum for INCONSISTENT_LANG_FR
            /// </summary>
            [EnumMember(Value = "INCONSISTENT_LANG_FR")]
            INCONSISTENTLANGFREnum = 48
        }

        /// <summary>
        /// Enum reason why the pin was rejected. Returned if &lt;code&gt;review_status&lt;/code&gt; is \&quot;REJECTED\&quot;.
        /// </summary>
        /// <value>Enum reason why the pin was rejected. Returned if &lt;code&gt;review_status&lt;/code&gt; is \&quot;REJECTED\&quot;.</value>
        [DataMember(Name="rejected_reasons", EmitDefaultValue=false)]
        public List<RejectedReasonsEnum> RejectedReasons { get; set; }

        /// <summary>
        /// Text reason why the pin was rejected. Returned if &lt;code&gt;review_status&lt;/code&gt; is \&quot;REJECTED\&quot;.
        /// </summary>
        /// <value>Text reason why the pin was rejected. Returned if &lt;code&gt;review_status&lt;/code&gt; is \&quot;REJECTED\&quot;.</value>
        [DataMember(Name="rejection_labels", EmitDefaultValue=false)]
        public List<string> RejectionLabels { get; set; }


        /// <summary>
        /// Ad review status
        /// </summary>
        /// <value>Ad review status</value>
        [TypeConverter(typeof(CustomEnumConverter<ReviewStatusEnum>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum ReviewStatusEnum
        {
            
            /// <summary>
            /// Enum OTHEREnum for OTHER
            /// </summary>
            [EnumMember(Value = "OTHER")]
            OTHEREnum = 1,
            
            /// <summary>
            /// Enum PENDINGEnum for PENDING
            /// </summary>
            [EnumMember(Value = "PENDING")]
            PENDINGEnum = 2,
            
            /// <summary>
            /// Enum REJECTEDEnum for REJECTED
            /// </summary>
            [EnumMember(Value = "REJECTED")]
            REJECTEDEnum = 3,
            
            /// <summary>
            /// Enum APPROVEDEnum for APPROVED
            /// </summary>
            [EnumMember(Value = "APPROVED")]
            APPROVEDEnum = 4
        }

        /// <summary>
        /// Ad review status
        /// </summary>
        /// <value>Ad review status</value>
        [DataMember(Name="review_status", EmitDefaultValue=false)]
        public ReviewStatusEnum ReviewStatus { get; set; }

        /// <summary>
        /// Always \&quot;ad\&quot;.
        /// </summary>
        /// <value>Always \&quot;ad\&quot;.</value>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public string Type { get; set; }

        /// <summary>
        /// Last update time. Unix timestamp in seconds.
        /// </summary>
        /// <value>Last update time. Unix timestamp in seconds.</value>
        [DataMember(Name="updated_time", EmitDefaultValue=false)]
        public int UpdatedTime { get; set; }

        /// <summary>
        /// Ad summary status
        /// </summary>
        /// <value>Ad summary status</value>
        [DataMember(Name="summary_status", EmitDefaultValue=false)]
        public PinPromotionSummaryStatus SummaryStatus { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class AdResponseAllOf1 {\n");
            sb.Append("  AdAccountId: ").Append(AdAccountId).Append("\n");
            sb.Append("  CampaignId: ").Append(CampaignId).Append("\n");
            sb.Append("  CollectionItemsDestinationUrlTemplate: ").Append(CollectionItemsDestinationUrlTemplate).Append("\n");
            sb.Append("  CreatedTime: ").Append(CreatedTime).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  RejectedReasons: ").Append(RejectedReasons).Append("\n");
            sb.Append("  RejectionLabels: ").Append(RejectionLabels).Append("\n");
            sb.Append("  ReviewStatus: ").Append(ReviewStatus).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  UpdatedTime: ").Append(UpdatedTime).Append("\n");
            sb.Append("  SummaryStatus: ").Append(SummaryStatus).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((AdResponseAllOf1)obj);
        }

        /// <summary>
        /// Returns true if AdResponseAllOf1 instances are equal
        /// </summary>
        /// <param name="other">Instance of AdResponseAllOf1 to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AdResponseAllOf1 other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    AdAccountId == other.AdAccountId ||
                    AdAccountId != null &&
                    AdAccountId.Equals(other.AdAccountId)
                ) && 
                (
                    CampaignId == other.CampaignId ||
                    CampaignId != null &&
                    CampaignId.Equals(other.CampaignId)
                ) && 
                (
                    CollectionItemsDestinationUrlTemplate == other.CollectionItemsDestinationUrlTemplate ||
                    CollectionItemsDestinationUrlTemplate != null &&
                    CollectionItemsDestinationUrlTemplate.Equals(other.CollectionItemsDestinationUrlTemplate)
                ) && 
                (
                    CreatedTime == other.CreatedTime ||
                    
                    CreatedTime.Equals(other.CreatedTime)
                ) && 
                (
                    Id == other.Id ||
                    Id != null &&
                    Id.Equals(other.Id)
                ) && 
                (
                    RejectedReasons == other.RejectedReasons ||
                    RejectedReasons.SequenceEqual(other.RejectedReasons)
                ) && 
                (
                    RejectionLabels == other.RejectionLabels ||
                    RejectionLabels != null &&
                    other.RejectionLabels != null &&
                    RejectionLabels.SequenceEqual(other.RejectionLabels)
                ) && 
                (
                    ReviewStatus == other.ReviewStatus ||
                    
                    ReviewStatus.Equals(other.ReviewStatus)
                ) && 
                (
                    Type == other.Type ||
                    Type != null &&
                    Type.Equals(other.Type)
                ) && 
                (
                    UpdatedTime == other.UpdatedTime ||
                    
                    UpdatedTime.Equals(other.UpdatedTime)
                ) && 
                (
                    SummaryStatus == other.SummaryStatus ||
                    
                    SummaryStatus.Equals(other.SummaryStatus)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (AdAccountId != null)
                    hashCode = hashCode * 59 + AdAccountId.GetHashCode();
                    if (CampaignId != null)
                    hashCode = hashCode * 59 + CampaignId.GetHashCode();
                    if (CollectionItemsDestinationUrlTemplate != null)
                    hashCode = hashCode * 59 + CollectionItemsDestinationUrlTemplate.GetHashCode();
                    
                    hashCode = hashCode * 59 + CreatedTime.GetHashCode();
                    if (Id != null)
                    hashCode = hashCode * 59 + Id.GetHashCode();
                    
                    hashCode = hashCode * 59 + RejectedReasons.GetHashCode();
                    if (RejectionLabels != null)
                    hashCode = hashCode * 59 + RejectionLabels.GetHashCode();
                    
                    hashCode = hashCode * 59 + ReviewStatus.GetHashCode();
                    if (Type != null)
                    hashCode = hashCode * 59 + Type.GetHashCode();
                    
                    hashCode = hashCode * 59 + UpdatedTime.GetHashCode();
                    
                    hashCode = hashCode * 59 + SummaryStatus.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(AdResponseAllOf1 left, AdResponseAllOf1 right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(AdResponseAllOf1 left, AdResponseAllOf1 right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
