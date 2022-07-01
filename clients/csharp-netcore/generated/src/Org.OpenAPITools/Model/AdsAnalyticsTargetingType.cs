/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
    /// Reporting targeting type
    /// </summary>
    /// <value>Reporting targeting type</value>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum AdsAnalyticsTargetingType
    {
        /// <summary>
        /// Enum KEYWORD for value: KEYWORD
        /// </summary>
        [EnumMember(Value = "KEYWORD")]
        KEYWORD = 1,

        /// <summary>
        /// Enum APPTYPE for value: APPTYPE
        /// </summary>
        [EnumMember(Value = "APPTYPE")]
        APPTYPE = 2,

        /// <summary>
        /// Enum GENDER for value: GENDER
        /// </summary>
        [EnumMember(Value = "GENDER")]
        GENDER = 3,

        /// <summary>
        /// Enum LOCATION for value: LOCATION
        /// </summary>
        [EnumMember(Value = "LOCATION")]
        LOCATION = 4,

        /// <summary>
        /// Enum PLACEMENT for value: PLACEMENT
        /// </summary>
        [EnumMember(Value = "PLACEMENT")]
        PLACEMENT = 5,

        /// <summary>
        /// Enum COUNTRY for value: COUNTRY
        /// </summary>
        [EnumMember(Value = "COUNTRY")]
        COUNTRY = 6,

        /// <summary>
        /// Enum TARGETEDINTEREST for value: TARGETED_INTEREST
        /// </summary>
        [EnumMember(Value = "TARGETED_INTEREST")]
        TARGETEDINTEREST = 7,

        /// <summary>
        /// Enum PINNERINTEREST for value: PINNER_INTEREST
        /// </summary>
        [EnumMember(Value = "PINNER_INTEREST")]
        PINNERINTEREST = 8,

        /// <summary>
        /// Enum AUDIENCEINCLUDE for value: AUDIENCE_INCLUDE
        /// </summary>
        [EnumMember(Value = "AUDIENCE_INCLUDE")]
        AUDIENCEINCLUDE = 9,

        /// <summary>
        /// Enum AUDIENCEEXCLUDE for value: AUDIENCE_EXCLUDE
        /// </summary>
        [EnumMember(Value = "AUDIENCE_EXCLUDE")]
        AUDIENCEEXCLUDE = 10,

        /// <summary>
        /// Enum GEO for value: GEO
        /// </summary>
        [EnumMember(Value = "GEO")]
        GEO = 11,

        /// <summary>
        /// Enum AGEBUCKET for value: AGE_BUCKET
        /// </summary>
        [EnumMember(Value = "AGE_BUCKET")]
        AGEBUCKET = 12,

        /// <summary>
        /// Enum REGION for value: REGION
        /// </summary>
        [EnumMember(Value = "REGION")]
        REGION = 13

    }

}
