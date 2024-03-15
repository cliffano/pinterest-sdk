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
        /// Gets or Sets CatalogsLocale
        /// </summary>
        [TypeConverter(typeof(CustomEnumConverter<CatalogsLocale>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum CatalogsLocale
        {
            
            /// <summary>
            /// Enum AfZAEnum for af-ZA
            /// </summary>
            [EnumMember(Value = "af-ZA")]
            AfZAEnum = 1,
            
            /// <summary>
            /// Enum ArSAEnum for ar-SA
            /// </summary>
            [EnumMember(Value = "ar-SA")]
            ArSAEnum = 2,
            
            /// <summary>
            /// Enum BgBGEnum for bg-BG
            /// </summary>
            [EnumMember(Value = "bg-BG")]
            BgBGEnum = 3,
            
            /// <summary>
            /// Enum BnINEnum for bn-IN
            /// </summary>
            [EnumMember(Value = "bn-IN")]
            BnINEnum = 4,
            
            /// <summary>
            /// Enum CsCZEnum for cs-CZ
            /// </summary>
            [EnumMember(Value = "cs-CZ")]
            CsCZEnum = 5,
            
            /// <summary>
            /// Enum DaDKEnum for da-DK
            /// </summary>
            [EnumMember(Value = "da-DK")]
            DaDKEnum = 6,
            
            /// <summary>
            /// Enum DeEnum for de
            /// </summary>
            [EnumMember(Value = "de")]
            DeEnum = 7,
            
            /// <summary>
            /// Enum ElGREnum for el-GR
            /// </summary>
            [EnumMember(Value = "el-GR")]
            ElGREnum = 8,
            
            /// <summary>
            /// Enum EnAUEnum for en-AU
            /// </summary>
            [EnumMember(Value = "en-AU")]
            EnAUEnum = 9,
            
            /// <summary>
            /// Enum EnCAEnum for en-CA
            /// </summary>
            [EnumMember(Value = "en-CA")]
            EnCAEnum = 10,
            
            /// <summary>
            /// Enum EnGBEnum for en-GB
            /// </summary>
            [EnumMember(Value = "en-GB")]
            EnGBEnum = 11,
            
            /// <summary>
            /// Enum EnINEnum for en-IN
            /// </summary>
            [EnumMember(Value = "en-IN")]
            EnINEnum = 12,
            
            /// <summary>
            /// Enum EnUSEnum for en-US
            /// </summary>
            [EnumMember(Value = "en-US")]
            EnUSEnum = 13,
            
            /// <summary>
            /// Enum Es419Enum for es-419
            /// </summary>
            [EnumMember(Value = "es-419")]
            Es419Enum = 14,
            
            /// <summary>
            /// Enum EsAREnum for es-AR
            /// </summary>
            [EnumMember(Value = "es-AR")]
            EsAREnum = 15,
            
            /// <summary>
            /// Enum EsESEnum for es-ES
            /// </summary>
            [EnumMember(Value = "es-ES")]
            EsESEnum = 16,
            
            /// <summary>
            /// Enum EsMXEnum for es-MX
            /// </summary>
            [EnumMember(Value = "es-MX")]
            EsMXEnum = 17,
            
            /// <summary>
            /// Enum FiFIEnum for fi-FI
            /// </summary>
            [EnumMember(Value = "fi-FI")]
            FiFIEnum = 18,
            
            /// <summary>
            /// Enum FrEnum for fr
            /// </summary>
            [EnumMember(Value = "fr")]
            FrEnum = 19,
            
            /// <summary>
            /// Enum FrCAEnum for fr-CA
            /// </summary>
            [EnumMember(Value = "fr-CA")]
            FrCAEnum = 20,
            
            /// <summary>
            /// Enum HeILEnum for he-IL
            /// </summary>
            [EnumMember(Value = "he-IL")]
            HeILEnum = 21,
            
            /// <summary>
            /// Enum HiINEnum for hi-IN
            /// </summary>
            [EnumMember(Value = "hi-IN")]
            HiINEnum = 22,
            
            /// <summary>
            /// Enum HrHREnum for hr-HR
            /// </summary>
            [EnumMember(Value = "hr-HR")]
            HrHREnum = 23,
            
            /// <summary>
            /// Enum HuHUEnum for hu-HU
            /// </summary>
            [EnumMember(Value = "hu-HU")]
            HuHUEnum = 24,
            
            /// <summary>
            /// Enum IdIDEnum for id-ID
            /// </summary>
            [EnumMember(Value = "id-ID")]
            IdIDEnum = 25,
            
            /// <summary>
            /// Enum ItEnum for it
            /// </summary>
            [EnumMember(Value = "it")]
            ItEnum = 26,
            
            /// <summary>
            /// Enum JaEnum for ja
            /// </summary>
            [EnumMember(Value = "ja")]
            JaEnum = 27,
            
            /// <summary>
            /// Enum KoKREnum for ko-KR
            /// </summary>
            [EnumMember(Value = "ko-KR")]
            KoKREnum = 28,
            
            /// <summary>
            /// Enum MsMYEnum for ms-MY
            /// </summary>
            [EnumMember(Value = "ms-MY")]
            MsMYEnum = 29,
            
            /// <summary>
            /// Enum NbNOEnum for nb-NO
            /// </summary>
            [EnumMember(Value = "nb-NO")]
            NbNOEnum = 30,
            
            /// <summary>
            /// Enum NlEnum for nl
            /// </summary>
            [EnumMember(Value = "nl")]
            NlEnum = 31,
            
            /// <summary>
            /// Enum PlPLEnum for pl-PL
            /// </summary>
            [EnumMember(Value = "pl-PL")]
            PlPLEnum = 32,
            
            /// <summary>
            /// Enum PtBREnum for pt-BR
            /// </summary>
            [EnumMember(Value = "pt-BR")]
            PtBREnum = 33,
            
            /// <summary>
            /// Enum PtPTEnum for pt-PT
            /// </summary>
            [EnumMember(Value = "pt-PT")]
            PtPTEnum = 34,
            
            /// <summary>
            /// Enum RoROEnum for ro-RO
            /// </summary>
            [EnumMember(Value = "ro-RO")]
            RoROEnum = 35,
            
            /// <summary>
            /// Enum RuRUEnum for ru-RU
            /// </summary>
            [EnumMember(Value = "ru-RU")]
            RuRUEnum = 36,
            
            /// <summary>
            /// Enum SkSKEnum for sk-SK
            /// </summary>
            [EnumMember(Value = "sk-SK")]
            SkSKEnum = 37,
            
            /// <summary>
            /// Enum SvSEEnum for sv-SE
            /// </summary>
            [EnumMember(Value = "sv-SE")]
            SvSEEnum = 38,
            
            /// <summary>
            /// Enum TeINEnum for te-IN
            /// </summary>
            [EnumMember(Value = "te-IN")]
            TeINEnum = 39,
            
            /// <summary>
            /// Enum ThTHEnum for th-TH
            /// </summary>
            [EnumMember(Value = "th-TH")]
            ThTHEnum = 40,
            
            /// <summary>
            /// Enum TlPHEnum for tl-PH
            /// </summary>
            [EnumMember(Value = "tl-PH")]
            TlPHEnum = 41,
            
            /// <summary>
            /// Enum TrEnum for tr
            /// </summary>
            [EnumMember(Value = "tr")]
            TrEnum = 42,
            
            /// <summary>
            /// Enum UkUAEnum for uk-UA
            /// </summary>
            [EnumMember(Value = "uk-UA")]
            UkUAEnum = 43,
            
            /// <summary>
            /// Enum ViVNEnum for vi-VN
            /// </summary>
            [EnumMember(Value = "vi-VN")]
            ViVNEnum = 44,
            
            /// <summary>
            /// Enum ZhCNEnum for zh-CN
            /// </summary>
            [EnumMember(Value = "zh-CN")]
            ZhCNEnum = 45,
            
            /// <summary>
            /// Enum ZhTWEnum for zh-TW
            /// </summary>
            [EnumMember(Value = "zh-TW")]
            ZhTWEnum = 46
        }
}
