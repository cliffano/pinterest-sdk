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

namespace Org.OpenAPITools.Models
{
    /// <summary>
    /// Campaign objective type.
    /// </summary>
    /// <value>Campaign objective type.</value>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum ObjectiveType
    {
        /// <summary>
        /// Enum AWARENESS for value: AWARENESS
        /// </summary>
        [EnumMember(Value = "AWARENESS")]
        AWARENESS = 1,

        /// <summary>
        /// Enum CONSIDERATION for value: CONSIDERATION
        /// </summary>
        [EnumMember(Value = "CONSIDERATION")]
        CONSIDERATION = 2,

        /// <summary>
        /// Enum VIDEOVIEW for value: VIDEO_VIEW
        /// </summary>
        [EnumMember(Value = "VIDEO_VIEW")]
        VIDEOVIEW = 3,

        /// <summary>
        /// Enum WEBCONVERSION for value: WEB_CONVERSION
        /// </summary>
        [EnumMember(Value = "WEB_CONVERSION")]
        WEBCONVERSION = 4,

        /// <summary>
        /// Enum CATALOGSALES for value: CATALOG_SALES
        /// </summary>
        [EnumMember(Value = "CATALOG_SALES")]
        CATALOGSALES = 5,

        /// <summary>
        /// Enum WEBSESSIONS for value: WEB_SESSIONS
        /// </summary>
        [EnumMember(Value = "WEB_SESSIONS")]
        WEBSESSIONS = 6,

        /// <summary>
        /// Enum AWARENESSRESERVED for value: AWARENESS_RESERVED
        /// </summary>
        [EnumMember(Value = "AWARENESS_RESERVED")]
        AWARENESSRESERVED = 7,

        /// <summary>
        /// Enum ENGAGEMENT for value: ENGAGEMENT
        /// </summary>
        [EnumMember(Value = "ENGAGEMENT")]
        ENGAGEMENT = 8

    }

}
