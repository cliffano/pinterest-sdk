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
    /// Filter operator for sync reporting
    /// </summary>
    /// <value>Filter operator for sync reporting</value>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum AdsAnalyticsFilterOperator
    {
        /// <summary>
        /// Enum LESSTHAN for value: LESS_THAN
        /// </summary>
        [EnumMember(Value = "LESS_THAN")]
        LESSTHAN = 1,

        /// <summary>
        /// Enum GREATERTHAN for value: GREATER_THAN
        /// </summary>
        [EnumMember(Value = "GREATER_THAN")]
        GREATERTHAN = 2

    }

}
