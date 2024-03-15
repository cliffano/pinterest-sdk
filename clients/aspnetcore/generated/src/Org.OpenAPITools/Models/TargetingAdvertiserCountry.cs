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
        /// Advertiser's ISO two character country code.
        /// </summary>
        /// <value>Advertiser's ISO two character country code.</value>
        [TypeConverter(typeof(CustomEnumConverter<TargetingAdvertiserCountry>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum TargetingAdvertiserCountry
        {
            
            /// <summary>
            /// Enum USEnum for US
            /// </summary>
            [EnumMember(Value = "US")]
            USEnum = 1,
            
            /// <summary>
            /// Enum GBEnum for GB
            /// </summary>
            [EnumMember(Value = "GB")]
            GBEnum = 2,
            
            /// <summary>
            /// Enum CAEnum for CA
            /// </summary>
            [EnumMember(Value = "CA")]
            CAEnum = 3,
            
            /// <summary>
            /// Enum IEEnum for IE
            /// </summary>
            [EnumMember(Value = "IE")]
            IEEnum = 4,
            
            /// <summary>
            /// Enum AUEnum for AU
            /// </summary>
            [EnumMember(Value = "AU")]
            AUEnum = 5,
            
            /// <summary>
            /// Enum NZEnum for NZ
            /// </summary>
            [EnumMember(Value = "NZ")]
            NZEnum = 6,
            
            /// <summary>
            /// Enum FREnum for FR
            /// </summary>
            [EnumMember(Value = "FR")]
            FREnum = 7,
            
            /// <summary>
            /// Enum SEEnum for SE
            /// </summary>
            [EnumMember(Value = "SE")]
            SEEnum = 8,
            
            /// <summary>
            /// Enum ILEnum for IL
            /// </summary>
            [EnumMember(Value = "IL")]
            ILEnum = 9,
            
            /// <summary>
            /// Enum DEEnum for DE
            /// </summary>
            [EnumMember(Value = "DE")]
            DEEnum = 10,
            
            /// <summary>
            /// Enum ATEnum for AT
            /// </summary>
            [EnumMember(Value = "AT")]
            ATEnum = 11,
            
            /// <summary>
            /// Enum ITEnum for IT
            /// </summary>
            [EnumMember(Value = "IT")]
            ITEnum = 12,
            
            /// <summary>
            /// Enum ESEnum for ES
            /// </summary>
            [EnumMember(Value = "ES")]
            ESEnum = 13,
            
            /// <summary>
            /// Enum NLEnum for NL
            /// </summary>
            [EnumMember(Value = "NL")]
            NLEnum = 14,
            
            /// <summary>
            /// Enum BEEnum for BE
            /// </summary>
            [EnumMember(Value = "BE")]
            BEEnum = 15,
            
            /// <summary>
            /// Enum PTEnum for PT
            /// </summary>
            [EnumMember(Value = "PT")]
            PTEnum = 16,
            
            /// <summary>
            /// Enum CHEnum for CH
            /// </summary>
            [EnumMember(Value = "CH")]
            CHEnum = 17,
            
            /// <summary>
            /// Enum HKEnum for HK
            /// </summary>
            [EnumMember(Value = "HK")]
            HKEnum = 18,
            
            /// <summary>
            /// Enum JPEnum for JP
            /// </summary>
            [EnumMember(Value = "JP")]
            JPEnum = 19,
            
            /// <summary>
            /// Enum KREnum for KR
            /// </summary>
            [EnumMember(Value = "KR")]
            KREnum = 20,
            
            /// <summary>
            /// Enum SGEnum for SG
            /// </summary>
            [EnumMember(Value = "SG")]
            SGEnum = 21,
            
            /// <summary>
            /// Enum NOEnum for NO
            /// </summary>
            [EnumMember(Value = "NO")]
            NOEnum = 22,
            
            /// <summary>
            /// Enum DKEnum for DK
            /// </summary>
            [EnumMember(Value = "DK")]
            DKEnum = 23,
            
            /// <summary>
            /// Enum FIEnum for FI
            /// </summary>
            [EnumMember(Value = "FI")]
            FIEnum = 24,
            
            /// <summary>
            /// Enum CYEnum for CY
            /// </summary>
            [EnumMember(Value = "CY")]
            CYEnum = 25,
            
            /// <summary>
            /// Enum LUEnum for LU
            /// </summary>
            [EnumMember(Value = "LU")]
            LUEnum = 26,
            
            /// <summary>
            /// Enum MTEnum for MT
            /// </summary>
            [EnumMember(Value = "MT")]
            MTEnum = 27,
            
            /// <summary>
            /// Enum PLEnum for PL
            /// </summary>
            [EnumMember(Value = "PL")]
            PLEnum = 28,
            
            /// <summary>
            /// Enum ROEnum for RO
            /// </summary>
            [EnumMember(Value = "RO")]
            ROEnum = 29,
            
            /// <summary>
            /// Enum HUEnum for HU
            /// </summary>
            [EnumMember(Value = "HU")]
            HUEnum = 30,
            
            /// <summary>
            /// Enum CZEnum for CZ
            /// </summary>
            [EnumMember(Value = "CZ")]
            CZEnum = 31,
            
            /// <summary>
            /// Enum GREnum for GR
            /// </summary>
            [EnumMember(Value = "GR")]
            GREnum = 32,
            
            /// <summary>
            /// Enum SKEnum for SK
            /// </summary>
            [EnumMember(Value = "SK")]
            SKEnum = 33,
            
            /// <summary>
            /// Enum BREnum for BR
            /// </summary>
            [EnumMember(Value = "BR")]
            BREnum = 34,
            
            /// <summary>
            /// Enum MXEnum for MX
            /// </summary>
            [EnumMember(Value = "MX")]
            MXEnum = 35,
            
            /// <summary>
            /// Enum AREnum for AR
            /// </summary>
            [EnumMember(Value = "AR")]
            AREnum = 36,
            
            /// <summary>
            /// Enum CLEnum for CL
            /// </summary>
            [EnumMember(Value = "CL")]
            CLEnum = 37,
            
            /// <summary>
            /// Enum COEnum for CO
            /// </summary>
            [EnumMember(Value = "CO")]
            COEnum = 38
        }
}
