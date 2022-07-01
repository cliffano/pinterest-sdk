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
        /// Language code, which is among the offical ISO 639-1 language list.
        /// </summary>
        /// <value>Language code, which is among the offical ISO 639-1 language list.</value>
        [TypeConverter(typeof(CustomEnumConverter<Language>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum Language
        {
            
            /// <summary>
            /// Enum AMEnum for AM
            /// </summary>
            [EnumMember(Value = "AM")]
            AMEnum = 1,
            
            /// <summary>
            /// Enum AREnum for AR
            /// </summary>
            [EnumMember(Value = "AR")]
            AREnum = 2,
            
            /// <summary>
            /// Enum AZEnum for AZ
            /// </summary>
            [EnumMember(Value = "AZ")]
            AZEnum = 3,
            
            /// <summary>
            /// Enum BGEnum for BG
            /// </summary>
            [EnumMember(Value = "BG")]
            BGEnum = 4,
            
            /// <summary>
            /// Enum BNEnum for BN
            /// </summary>
            [EnumMember(Value = "BN")]
            BNEnum = 5,
            
            /// <summary>
            /// Enum BSEnum for BS
            /// </summary>
            [EnumMember(Value = "BS")]
            BSEnum = 6,
            
            /// <summary>
            /// Enum CAEnum for CA
            /// </summary>
            [EnumMember(Value = "CA")]
            CAEnum = 7,
            
            /// <summary>
            /// Enum CSEnum for CS
            /// </summary>
            [EnumMember(Value = "CS")]
            CSEnum = 8,
            
            /// <summary>
            /// Enum DAEnum for DA
            /// </summary>
            [EnumMember(Value = "DA")]
            DAEnum = 9,
            
            /// <summary>
            /// Enum DVEnum for DV
            /// </summary>
            [EnumMember(Value = "DV")]
            DVEnum = 10,
            
            /// <summary>
            /// Enum DZEnum for DZ
            /// </summary>
            [EnumMember(Value = "DZ")]
            DZEnum = 11,
            
            /// <summary>
            /// Enum DEEnum for DE
            /// </summary>
            [EnumMember(Value = "DE")]
            DEEnum = 12,
            
            /// <summary>
            /// Enum ELEnum for EL
            /// </summary>
            [EnumMember(Value = "EL")]
            ELEnum = 13,
            
            /// <summary>
            /// Enum ENEnum for EN
            /// </summary>
            [EnumMember(Value = "EN")]
            ENEnum = 14,
            
            /// <summary>
            /// Enum ESEnum for ES
            /// </summary>
            [EnumMember(Value = "ES")]
            ESEnum = 15,
            
            /// <summary>
            /// Enum ETEnum for ET
            /// </summary>
            [EnumMember(Value = "ET")]
            ETEnum = 16,
            
            /// <summary>
            /// Enum FAEnum for FA
            /// </summary>
            [EnumMember(Value = "FA")]
            FAEnum = 17,
            
            /// <summary>
            /// Enum FIEnum for FI
            /// </summary>
            [EnumMember(Value = "FI")]
            FIEnum = 18,
            
            /// <summary>
            /// Enum FREnum for FR
            /// </summary>
            [EnumMember(Value = "FR")]
            FREnum = 19,
            
            /// <summary>
            /// Enum HEEnum for HE
            /// </summary>
            [EnumMember(Value = "HE")]
            HEEnum = 20,
            
            /// <summary>
            /// Enum HIEnum for HI
            /// </summary>
            [EnumMember(Value = "HI")]
            HIEnum = 21,
            
            /// <summary>
            /// Enum HREnum for HR
            /// </summary>
            [EnumMember(Value = "HR")]
            HREnum = 22,
            
            /// <summary>
            /// Enum HUEnum for HU
            /// </summary>
            [EnumMember(Value = "HU")]
            HUEnum = 23,
            
            /// <summary>
            /// Enum HYEnum for HY
            /// </summary>
            [EnumMember(Value = "HY")]
            HYEnum = 24,
            
            /// <summary>
            /// Enum IDEnum for ID
            /// </summary>
            [EnumMember(Value = "ID")]
            IDEnum = 25,
            
            /// <summary>
            /// Enum INEnum for IN
            /// </summary>
            [EnumMember(Value = "IN")]
            INEnum = 26,
            
            /// <summary>
            /// Enum ISEnum for IS
            /// </summary>
            [EnumMember(Value = "IS")]
            ISEnum = 27,
            
            /// <summary>
            /// Enum ITEnum for IT
            /// </summary>
            [EnumMember(Value = "IT")]
            ITEnum = 28,
            
            /// <summary>
            /// Enum IWEnum for IW
            /// </summary>
            [EnumMember(Value = "IW")]
            IWEnum = 29,
            
            /// <summary>
            /// Enum JAEnum for JA
            /// </summary>
            [EnumMember(Value = "JA")]
            JAEnum = 30,
            
            /// <summary>
            /// Enum KAEnum for KA
            /// </summary>
            [EnumMember(Value = "KA")]
            KAEnum = 31,
            
            /// <summary>
            /// Enum KMEnum for KM
            /// </summary>
            [EnumMember(Value = "KM")]
            KMEnum = 32,
            
            /// <summary>
            /// Enum KOEnum for KO
            /// </summary>
            [EnumMember(Value = "KO")]
            KOEnum = 33,
            
            /// <summary>
            /// Enum LOEnum for LO
            /// </summary>
            [EnumMember(Value = "LO")]
            LOEnum = 34,
            
            /// <summary>
            /// Enum LTEnum for LT
            /// </summary>
            [EnumMember(Value = "LT")]
            LTEnum = 35,
            
            /// <summary>
            /// Enum LVEnum for LV
            /// </summary>
            [EnumMember(Value = "LV")]
            LVEnum = 36,
            
            /// <summary>
            /// Enum MKEnum for MK
            /// </summary>
            [EnumMember(Value = "MK")]
            MKEnum = 37,
            
            /// <summary>
            /// Enum MNEnum for MN
            /// </summary>
            [EnumMember(Value = "MN")]
            MNEnum = 38,
            
            /// <summary>
            /// Enum MSEnum for MS
            /// </summary>
            [EnumMember(Value = "MS")]
            MSEnum = 39,
            
            /// <summary>
            /// Enum MYEnum for MY
            /// </summary>
            [EnumMember(Value = "MY")]
            MYEnum = 40,
            
            /// <summary>
            /// Enum NBEnum for NB
            /// </summary>
            [EnumMember(Value = "NB")]
            NBEnum = 41,
            
            /// <summary>
            /// Enum NEEnum for NE
            /// </summary>
            [EnumMember(Value = "NE")]
            NEEnum = 42,
            
            /// <summary>
            /// Enum NLEnum for NL
            /// </summary>
            [EnumMember(Value = "NL")]
            NLEnum = 43,
            
            /// <summary>
            /// Enum NOEnum for NO
            /// </summary>
            [EnumMember(Value = "NO")]
            NOEnum = 44,
            
            /// <summary>
            /// Enum PLEnum for PL
            /// </summary>
            [EnumMember(Value = "PL")]
            PLEnum = 45,
            
            /// <summary>
            /// Enum PTEnum for PT
            /// </summary>
            [EnumMember(Value = "PT")]
            PTEnum = 46,
            
            /// <summary>
            /// Enum ROEnum for RO
            /// </summary>
            [EnumMember(Value = "RO")]
            ROEnum = 47,
            
            /// <summary>
            /// Enum RUEnum for RU
            /// </summary>
            [EnumMember(Value = "RU")]
            RUEnum = 48,
            
            /// <summary>
            /// Enum SKEnum for SK
            /// </summary>
            [EnumMember(Value = "SK")]
            SKEnum = 49,
            
            /// <summary>
            /// Enum SLEnum for SL
            /// </summary>
            [EnumMember(Value = "SL")]
            SLEnum = 50,
            
            /// <summary>
            /// Enum SQEnum for SQ
            /// </summary>
            [EnumMember(Value = "SQ")]
            SQEnum = 51,
            
            /// <summary>
            /// Enum SREnum for SR
            /// </summary>
            [EnumMember(Value = "SR")]
            SREnum = 52,
            
            /// <summary>
            /// Enum SVEnum for SV
            /// </summary>
            [EnumMember(Value = "SV")]
            SVEnum = 53,
            
            /// <summary>
            /// Enum TLEnum for TL
            /// </summary>
            [EnumMember(Value = "TL")]
            TLEnum = 54,
            
            /// <summary>
            /// Enum UKEnum for UK
            /// </summary>
            [EnumMember(Value = "UK")]
            UKEnum = 55,
            
            /// <summary>
            /// Enum VIEnum for VI
            /// </summary>
            [EnumMember(Value = "VI")]
            VIEnum = 56,
            
            /// <summary>
            /// Enum TEEnum for TE
            /// </summary>
            [EnumMember(Value = "TE")]
            TEEnum = 57,
            
            /// <summary>
            /// Enum THEnum for TH
            /// </summary>
            [EnumMember(Value = "TH")]
            THEnum = 58,
            
            /// <summary>
            /// Enum TREnum for TR
            /// </summary>
            [EnumMember(Value = "TR")]
            TREnum = 59,
            
            /// <summary>
            /// Enum XXEnum for XX
            /// </summary>
            [EnumMember(Value = "XX")]
            XXEnum = 60,
            
            /// <summary>
            /// Enum ZHEnum for ZH
            /// </summary>
            [EnumMember(Value = "ZH")]
            ZHEnum = 61
        }
}
