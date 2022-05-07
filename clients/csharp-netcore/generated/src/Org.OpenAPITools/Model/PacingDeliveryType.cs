/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
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
    /// Ad group pacing delivery type
    /// </summary>
    /// <value>Ad group pacing delivery type</value>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum PacingDeliveryType
    {
        /// <summary>
        /// Enum STANDARD for value: STANDARD
        /// </summary>
        [EnumMember(Value = "STANDARD")]
        STANDARD = 1,

        /// <summary>
        /// Enum ACCELERATED for value: ACCELERATED
        /// </summary>
        [EnumMember(Value = "ACCELERATED")]
        ACCELERATED = 2

    }

}
