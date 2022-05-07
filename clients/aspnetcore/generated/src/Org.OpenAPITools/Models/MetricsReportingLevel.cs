/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
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
        /// Level of the reporting request
        /// </summary>
        /// <value>Level of the reporting request</value>
        [TypeConverter(typeof(CustomEnumConverter<MetricsReportingLevel>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum MetricsReportingLevel
        {
            
            /// <summary>
            /// Enum ADVERTISEREnum for ADVERTISER
            /// </summary>
            [EnumMember(Value = "ADVERTISER")]
            ADVERTISEREnum = 1,
            
            /// <summary>
            /// Enum ADVERTISERTARGETINGEnum for ADVERTISER_TARGETING
            /// </summary>
            [EnumMember(Value = "ADVERTISER_TARGETING")]
            ADVERTISERTARGETINGEnum = 2,
            
            /// <summary>
            /// Enum CAMPAIGNEnum for CAMPAIGN
            /// </summary>
            [EnumMember(Value = "CAMPAIGN")]
            CAMPAIGNEnum = 3,
            
            /// <summary>
            /// Enum CAMPAIGNTARGETINGEnum for CAMPAIGN_TARGETING
            /// </summary>
            [EnumMember(Value = "CAMPAIGN_TARGETING")]
            CAMPAIGNTARGETINGEnum = 4,
            
            /// <summary>
            /// Enum ADGROUPEnum for AD_GROUP
            /// </summary>
            [EnumMember(Value = "AD_GROUP")]
            ADGROUPEnum = 5,
            
            /// <summary>
            /// Enum ADGROUPTARGETINGEnum for AD_GROUP_TARGETING
            /// </summary>
            [EnumMember(Value = "AD_GROUP_TARGETING")]
            ADGROUPTARGETINGEnum = 6,
            
            /// <summary>
            /// Enum PINPROMOTIONEnum for PIN_PROMOTION
            /// </summary>
            [EnumMember(Value = "PIN_PROMOTION")]
            PINPROMOTIONEnum = 7,
            
            /// <summary>
            /// Enum PINPROMOTIONTARGETINGEnum for PIN_PROMOTION_TARGETING
            /// </summary>
            [EnumMember(Value = "PIN_PROMOTION_TARGETING")]
            PINPROMOTIONTARGETINGEnum = 8,
            
            /// <summary>
            /// Enum KEYWORDEnum for KEYWORD
            /// </summary>
            [EnumMember(Value = "KEYWORD")]
            KEYWORDEnum = 9,
            
            /// <summary>
            /// Enum PRODUCTGROUPEnum for PRODUCT_GROUP
            /// </summary>
            [EnumMember(Value = "PRODUCT_GROUP")]
            PRODUCTGROUPEnum = 10,
            
            /// <summary>
            /// Enum PRODUCTGROUPTARGETINGEnum for PRODUCT_GROUP_TARGETING
            /// </summary>
            [EnumMember(Value = "PRODUCT_GROUP_TARGETING")]
            PRODUCTGROUPTARGETINGEnum = 11,
            
            /// <summary>
            /// Enum PRODUCTITEMEnum for PRODUCT_ITEM
            /// </summary>
            [EnumMember(Value = "PRODUCT_ITEM")]
            PRODUCTITEMEnum = 12
        }
}
