/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.IO;
using System.Runtime.Serialization;
using System.Text;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using Newtonsoft.Json.Linq;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// Defines CatalogsLocale
    /// </summary>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum CatalogsLocale
    {
        /// <summary>
        /// Enum AfZA for value: af-ZA
        /// </summary>
        [EnumMember(Value = "af-ZA")]
        AfZA = 1,

        /// <summary>
        /// Enum ArSA for value: ar-SA
        /// </summary>
        [EnumMember(Value = "ar-SA")]
        ArSA = 2,

        /// <summary>
        /// Enum BgBG for value: bg-BG
        /// </summary>
        [EnumMember(Value = "bg-BG")]
        BgBG = 3,

        /// <summary>
        /// Enum BnIN for value: bn-IN
        /// </summary>
        [EnumMember(Value = "bn-IN")]
        BnIN = 4,

        /// <summary>
        /// Enum CsCZ for value: cs-CZ
        /// </summary>
        [EnumMember(Value = "cs-CZ")]
        CsCZ = 5,

        /// <summary>
        /// Enum DaDK for value: da-DK
        /// </summary>
        [EnumMember(Value = "da-DK")]
        DaDK = 6,

        /// <summary>
        /// Enum De for value: de
        /// </summary>
        [EnumMember(Value = "de")]
        De = 7,

        /// <summary>
        /// Enum ElGR for value: el-GR
        /// </summary>
        [EnumMember(Value = "el-GR")]
        ElGR = 8,

        /// <summary>
        /// Enum EnAU for value: en-AU
        /// </summary>
        [EnumMember(Value = "en-AU")]
        EnAU = 9,

        /// <summary>
        /// Enum EnCA for value: en-CA
        /// </summary>
        [EnumMember(Value = "en-CA")]
        EnCA = 10,

        /// <summary>
        /// Enum EnGB for value: en-GB
        /// </summary>
        [EnumMember(Value = "en-GB")]
        EnGB = 11,

        /// <summary>
        /// Enum EnIN for value: en-IN
        /// </summary>
        [EnumMember(Value = "en-IN")]
        EnIN = 12,

        /// <summary>
        /// Enum EnUS for value: en-US
        /// </summary>
        [EnumMember(Value = "en-US")]
        EnUS = 13,

        /// <summary>
        /// Enum Es419 for value: es-419
        /// </summary>
        [EnumMember(Value = "es-419")]
        Es419 = 14,

        /// <summary>
        /// Enum EsAR for value: es-AR
        /// </summary>
        [EnumMember(Value = "es-AR")]
        EsAR = 15,

        /// <summary>
        /// Enum EsES for value: es-ES
        /// </summary>
        [EnumMember(Value = "es-ES")]
        EsES = 16,

        /// <summary>
        /// Enum EsMX for value: es-MX
        /// </summary>
        [EnumMember(Value = "es-MX")]
        EsMX = 17,

        /// <summary>
        /// Enum FiFI for value: fi-FI
        /// </summary>
        [EnumMember(Value = "fi-FI")]
        FiFI = 18,

        /// <summary>
        /// Enum Fr for value: fr
        /// </summary>
        [EnumMember(Value = "fr")]
        Fr = 19,

        /// <summary>
        /// Enum FrCA for value: fr-CA
        /// </summary>
        [EnumMember(Value = "fr-CA")]
        FrCA = 20,

        /// <summary>
        /// Enum HeIL for value: he-IL
        /// </summary>
        [EnumMember(Value = "he-IL")]
        HeIL = 21,

        /// <summary>
        /// Enum HiIN for value: hi-IN
        /// </summary>
        [EnumMember(Value = "hi-IN")]
        HiIN = 22,

        /// <summary>
        /// Enum HrHR for value: hr-HR
        /// </summary>
        [EnumMember(Value = "hr-HR")]
        HrHR = 23,

        /// <summary>
        /// Enum HuHU for value: hu-HU
        /// </summary>
        [EnumMember(Value = "hu-HU")]
        HuHU = 24,

        /// <summary>
        /// Enum IdID for value: id-ID
        /// </summary>
        [EnumMember(Value = "id-ID")]
        IdID = 25,

        /// <summary>
        /// Enum It for value: it
        /// </summary>
        [EnumMember(Value = "it")]
        It = 26,

        /// <summary>
        /// Enum Ja for value: ja
        /// </summary>
        [EnumMember(Value = "ja")]
        Ja = 27,

        /// <summary>
        /// Enum KoKR for value: ko-KR
        /// </summary>
        [EnumMember(Value = "ko-KR")]
        KoKR = 28,

        /// <summary>
        /// Enum MsMY for value: ms-MY
        /// </summary>
        [EnumMember(Value = "ms-MY")]
        MsMY = 29,

        /// <summary>
        /// Enum NbNO for value: nb-NO
        /// </summary>
        [EnumMember(Value = "nb-NO")]
        NbNO = 30,

        /// <summary>
        /// Enum Nl for value: nl
        /// </summary>
        [EnumMember(Value = "nl")]
        Nl = 31,

        /// <summary>
        /// Enum PlPL for value: pl-PL
        /// </summary>
        [EnumMember(Value = "pl-PL")]
        PlPL = 32,

        /// <summary>
        /// Enum PtBR for value: pt-BR
        /// </summary>
        [EnumMember(Value = "pt-BR")]
        PtBR = 33,

        /// <summary>
        /// Enum PtPT for value: pt-PT
        /// </summary>
        [EnumMember(Value = "pt-PT")]
        PtPT = 34,

        /// <summary>
        /// Enum RoRO for value: ro-RO
        /// </summary>
        [EnumMember(Value = "ro-RO")]
        RoRO = 35,

        /// <summary>
        /// Enum RuRU for value: ru-RU
        /// </summary>
        [EnumMember(Value = "ru-RU")]
        RuRU = 36,

        /// <summary>
        /// Enum SkSK for value: sk-SK
        /// </summary>
        [EnumMember(Value = "sk-SK")]
        SkSK = 37,

        /// <summary>
        /// Enum SvSE for value: sv-SE
        /// </summary>
        [EnumMember(Value = "sv-SE")]
        SvSE = 38,

        /// <summary>
        /// Enum TeIN for value: te-IN
        /// </summary>
        [EnumMember(Value = "te-IN")]
        TeIN = 39,

        /// <summary>
        /// Enum ThTH for value: th-TH
        /// </summary>
        [EnumMember(Value = "th-TH")]
        ThTH = 40,

        /// <summary>
        /// Enum TlPH for value: tl-PH
        /// </summary>
        [EnumMember(Value = "tl-PH")]
        TlPH = 41,

        /// <summary>
        /// Enum Tr for value: tr
        /// </summary>
        [EnumMember(Value = "tr")]
        Tr = 42,

        /// <summary>
        /// Enum UkUA for value: uk-UA
        /// </summary>
        [EnumMember(Value = "uk-UA")]
        UkUA = 43,

        /// <summary>
        /// Enum ViVN for value: vi-VN
        /// </summary>
        [EnumMember(Value = "vi-VN")]
        ViVN = 44,

        /// <summary>
        /// Enum ZhCN for value: zh-CN
        /// </summary>
        [EnumMember(Value = "zh-CN")]
        ZhCN = 45,

        /// <summary>
        /// Enum ZhTW for value: zh-TW
        /// </summary>
        [EnumMember(Value = "zh-TW")]
        ZhTW = 46
    }

}